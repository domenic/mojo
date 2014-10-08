// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_EDK_SYSTEM_CHANNEL_ENDPOINT_ID_H_
#define MOJO_EDK_SYSTEM_CHANNEL_ENDPOINT_ID_H_

#include <stddef.h>
#include <stdint.h>

#include <ostream>

#include "base/containers/hash_tables.h"
#include "base/macros.h"
#include "build/build_config.h"

namespace mojo {
namespace system {

// ChannelEndpointId -----------------------------------------------------------

class LocalChannelEndpointIdGenerator;

// Represents an ID for an endpoint (i.e., one side of a message pipe) on a
// |Channel|. This class must be POD.
class ChannelEndpointId {
 public:
  ChannelEndpointId() : value_(0) {}
  ChannelEndpointId(const ChannelEndpointId& other) : value_(other.value_) {}

  // Returns the local ID to use for the first message pipe endpoint on a
  // channel.
  static ChannelEndpointId GetBootstrap() {
    ChannelEndpointId rv;
    rv.value_ = 1;
    return rv;
  }

  bool operator==(const ChannelEndpointId& other) const {
    return value_ == other.value_;
  }
  bool operator!=(const ChannelEndpointId& other) const {
    return !operator==(other);
  }
  // So that we can be used in |std::map|, etc.
  bool operator<(const ChannelEndpointId& other) const {
    return value_ < other.value_;
  }

  bool is_valid() const { return !!value_; }
  uint32_t value() const { return value_; }

 private:
  friend class LocalChannelEndpointIdGenerator;

  uint32_t value_;

  // Copying and assignment allowed.
};
// This wrapper should add no overhead.
// TODO(vtl): Rewrite |sizeof(uint32_t)| as |sizeof(ChannelEndpointId::value)|
// once we have sufficient C++11 support.
static_assert(sizeof(ChannelEndpointId) == sizeof(uint32_t),
              "ChannelEndpointId has incorrect size");

// So logging macros and |DCHECK_EQ()|, etc. work.
inline std::ostream& operator<<(std::ostream& out,
                                const ChannelEndpointId& channel_endpoint_id) {
  return out << channel_endpoint_id.value();
}

// LocalChannelEndpointIdGenerator ---------------------------------------------

// A simple generator for "new" local |ChannelEndpointId|s. It does not track
// used/existing IDs; that must be done separately. (This class is not
// thread-safe.)
class LocalChannelEndpointIdGenerator {
 public:
  LocalChannelEndpointIdGenerator()
      : next_channel_endpoint_id_(ChannelEndpointId::GetBootstrap()) {}

  ChannelEndpointId GetNext() {
    ChannelEndpointId rv = next_channel_endpoint_id_;
    next_channel_endpoint_id_.value_++;
    // Skip over the invalid value, in case we wrap.
    if (!next_channel_endpoint_id_.is_valid())
      next_channel_endpoint_id_.value_++;
    return rv;
  }

 private:
  ChannelEndpointId next_channel_endpoint_id_;

  DISALLOW_COPY_AND_ASSIGN(LocalChannelEndpointIdGenerator);
};

}  // namespace system
}  // namespace mojo

// Define "hash" functions for |ChannelEndpointId|s, so they can be used in hash
// tables.
// TODO(vtl): Once we can use |std::unordered_{map,set}|, update this (and
// remove the base/containers/hash_tables.h and build/build_config.h includes).
namespace BASE_HASH_NAMESPACE {

#if defined(COMPILER_GCC)

template <>
struct hash<mojo::system::ChannelEndpointId> {
  size_t operator()(mojo::system::ChannelEndpointId channel_endpoint_id) const {
    return static_cast<size_t>(channel_endpoint_id.value());
  }
};

#elif defined(COMPILER_MSVC)

inline size_t hash_value(mojo::system::ChannelEndpointId channel_endpoint_id) {
  return static_cast<size_t>(channel_endpoint_id.value());
}
#endif

}  // namespace BASE_HASH_NAMESPACE

#endif  // MOJO_EDK_SYSTEM_CHANNEL_ENDPOINT_ID_H_