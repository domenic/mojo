# This file is automatically processed to create .DEPS.git which is the file
# that gclient uses under git.
#
# See http://code.google.com/p/chromium/wiki/UsingGit
#
# To test manually, run:
#   python tools/deps2git/deps2git.py -o .DEPS.git -w <gclientdir>
# where <gcliendir> is the absolute path to the directory containing the
# .gclient file (the parent of 'src').
#
# Then commit .DEPS.git locally (gclient doesn't like dirty trees) and run
#   gclient sync
# Verify the thing happened you wanted. Then revert your .DEPS.git change
# DO NOT CHECK IN CHANGES TO .DEPS.git upstream. It will be automatically
# updated by a bot when you modify this one.
#
# When adding a new dependency, please update the top-level .gitignore file
# to list the dependency's destination directory.

vars = {
  'chromium_git': 'https://chromium.googlesource.com',
  'libcxx_revision': '48198f9110397fff47fe7c37cbfa296be7d44d3d',
  'libcxxabi_revision': '4ad1009ab3a59fa7a6896d74d5e4de5885697f95',
  'sfntly_revision': '1bdaae8fc788a5ac8936d68bf24f37d977a13dac',
  'skia_revision': 'a8f38238d6fccd0f05a15654518dbcd3f1152418',
  # Three lines of non-changing comments so that
  # the commit queue can handle CLs rolling Skia
  # and V8 without interference from each other.
  'v8_revision': '5aafcb15f979432736a03bc286177387b8cd03f1',
  # Three lines of non-changing comments so that
  # the commit queue can handle CLs rolling ANGLE
  # and whatever else without interference from each other.
  "angle_revision": "e1425d95ba0ab095c5d64536bbeb3f78adcbf79f",
  # Three lines of non-changing comments so that
  # the commit queue can handle CLs rolling build tools
  # and whatever else without interference from each other.
  'buildtools_revision': '6ea835db27479b9a5742e48b5e4466af7c2534ff',
  # Three lines of non-changing comments so that
  # the commit queue can handle CLs rolling PDFium
  # and whatever else without interference from each other.
  'pdfium_revision': '1dc4f4112d72c63e465d6f09695ebea1119d39a6',
  # Three lines of non-changing comments so that
  # the commit queue can handle CLs rolling BoringSSL
  # and whatever else without interference from each other.
  'boringssl_revision': '2f3ba910a2bdb9e7d19e712a827cdc80c8d8c777',
  # Three lines of non-changing comments so that
  # the commit queue can handle CLs rolling lss
  # and whatever else without interference from each other.
  'lss_revision': '952107fa7cea0daaabead28c0e92d579bee517eb',
  # Three lines of non-changing comments so that
  # the commit queue can handle CLs rolling nss
  # and whatever else without interference from each other.
  'nss_revision': '258342ecf9c65105189092ef6339dc4e7779a7ae',
}

# Only these hosts are allowed for dependencies in this DEPS file.
# If you need to add a new host, contact chrome infrastructure team.
allowed_hosts = [
  'chromium.googlesource.com',
  'boringssl.googlesource.com',
  'pdfium.googlesource.com',
]

deps = {
  'src/buildtools':
   Var('chromium_git') + '/chromium/buildtools.git' + '@' +  Var('buildtools_revision'),

  'src/sdch/open-vcdiff':
   Var('chromium_git') + '/external/open-vcdiff.git' + '@' + '438f2a5be6d809bc21611a94cd37bfc8c28ceb33', # from svn revision 41

  'src/testing/gtest':
   Var('chromium_git') + '/external/googletest.git' + '@' + '4650552ff637bb44ecf7784060091cbed3252211', # from svn revision 692

  'src/testing/gmock':
   Var('chromium_git') + '/external/googlemock.git' + '@' + '896ba0e03f520fb9b6ed582bde2bd00847e3c3f2', # from svn revision 485

  'src/third_party/angle':
   Var('chromium_git') + '/angle/angle.git' + '@' +  Var('angle_revision'),

  'src/third_party/icu':
   Var('chromium_git') + '/chromium/deps/icu52.git' + '@' + '6242e2fbb36f486f2c0addd1c3cef67fc4ed33fb', # from svn revision 292476

  'src/third_party/libc++/trunk':
   Var('chromium_git') + '/chromium/llvm-project/libcxx.git' + '@' +  Var('libcxx_revision'),

  'src/third_party/libc++abi/trunk':
   Var('chromium_git') + '/chromium/llvm-project/libcxxabi.git' + '@' +  Var('libcxxabi_revision'),

  'src/tools/grit':
    Var('chromium_git') + '/external/grit-i18n.git' + '@' + 'a24a0e647bb718b3540db89864cf586b12331e82', # from svn revision 182

  'src/v8':
    Var('chromium_git') + '/v8/v8.git' + '@' +  Var('v8_revision'),

  'src/third_party/sfntly/cpp/src':
    Var('chromium_git') + '/external/sfntly/cpp/src.git' + '@' +  Var('sfntly_revision'),

  'src/third_party/skia':
   Var('chromium_git') + '/skia.git' + '@' +  Var('skia_revision'),

  'src/third_party/ots':
    Var('chromium_git') + '/external/ots.git' + '@' + '98897009f3ea8a5fa3e20a4a74977da7aaa8e61a',

  'src/third_party/brotli/src':
   Var('chromium_git') + '/external/font-compression-reference.git' + '@' + '65cb3326e30ef8a67eb1d4411ec563e91be6e9ae',

  'src/third_party/yasm/source/patched-yasm':
   Var('chromium_git') + '/chromium/deps/yasm/patched-yasm.git' + '@' + 'c960eb11ccda80b10ed50be39df4f0663b371d1d',

  'src/third_party/libjpeg_turbo':
   Var('chromium_git') + '/chromium/deps/libjpeg_turbo.git' + '@' + '034e9a9747e0983bc19808ea70e469bc8342081f',

  'src/third_party/smhasher/src':
    Var('chromium_git') + '/external/smhasher.git' + '@' + 'e87738e57558e0ec472b2fc3a643b838e5b6e88f',

  'src/third_party/pywebsocket/src':
    Var('chromium_git') + '/external/pywebsocket/src.git' + '@' + 'cb349e87ddb30ff8d1fa1a89be39cec901f4a29c',

  'src/third_party/mesa/src':
   Var('chromium_git') + '/chromium/deps/mesa.git' + '@' + '9731cb962963bca8a05f3d0f6ea40c3a781f0537',

  'src/third_party/pdfium':
   'https://pdfium.googlesource.com/pdfium.git' + '@' +  Var('pdfium_revision'),

  'src/third_party/boringssl/src':
   'https://boringssl.googlesource.com/boringssl.git' + '@' +  Var('boringssl_revision'),

  'src/tools/gyp':
    Var('chromium_git') + '/external/gyp.git' + '@' + 'b13d8f243da15ded051e87e663c4f2c2fcc5804c', # from svn revision 1994
}


deps_os = {
  'unix': {
    # Linux, really.
    'src/third_party/lss':
      Var('chromium_git') + '/external/linux-syscall-support/lss.git' + '@' + Var('lss_revision'),

    # Note that this is different from Android's freetype repo.
    'src/third_party/freetype2/src':
     Var('chromium_git') + '/chromium/src/third_party/freetype2.git' + '@' + '495a23fce9cd125f715dc20643d14fed226d76ac',

    # Used for embedded builds. CrOS & Linux use the system version.
    'src/third_party/fontconfig/src':
     Var('chromium_git') + '/external/fontconfig.git' + '@' + 'f16c3118e25546c1b749f9823c51827a60aeb5c1',
  },
  'android': {
    'src/third_party/colorama/src':
     Var('chromium_git') + '/external/colorama.git' + '@' + '799604a1041e9b3bc5d2789ecbd7e8db2e18e6b8',

    'src/third_party/jsr-305/src':
        Var('chromium_git') + '/external/jsr-305.git' + '@' + '642c508235471f7220af6d5df2d3210e3bfc0919',

    'src/third_party/android_tools':
     Var('chromium_git') + '/android_tools.git' + '@' + 'ea50cccc11657404ce22cf928062ed1a3927eb39',

    'src/third_party/freetype':
       Var('chromium_git') + '/chromium/src/third_party/freetype.git' + '@' + 'a2b9955b49034a51dfbc8bf9f4e9d312149cecac',
  },
  'win': {
    'src/third_party/nss':
        Var('chromium_git') + '/chromium/deps/nss.git' + '@' + Var('nss_revision'),
    'src/third_party/bison':
        Var('chromium_git') + '/chromium/deps/bison.git' + '@' + '083c9a45e4affdd5464ee2b224c2df649c6e26c3',
    'src/third_party/gperf':
        Var('chromium_git') + '/chromium/deps/gperf.git' + '@' + 'd892d79f64f9449770443fb06da49b5a1e5d33c1',
  }
}


include_rules = [
  # Everybody can use some things.
  '+base',
  '+build',

  '+testing',
  '+third_party/icu/source/common/unicode',
  '+third_party/icu/source/i18n/unicode',
  '+url',
]


# checkdeps.py shouldn't check include paths for files in these dirs:
skip_child_includes = [
  'sdch',
  'skia',
  'testing',
  'third_party',
  'sky',
]


hooks = [
  {
    # This clobbers when necessary (based on get_landmines.py). It must be the
    # first hook so that other things that get/generate into the output
    # directory will not subsequently be clobbered.
    'name': 'landmines',
    'pattern': '.',
    'action': [
        'python',
        'src/build/landmines.py',
    ],
  },
  {
    # Downloads an ARM sysroot image to src/arm-sysroot. This image updates
    # at about the same rate that the chrome build deps change.
    # This script is a no-op except for linux users who have
    # target_arch=arm in their GYP_DEFINES.
    'name': 'sysroot',
    'pattern': '.',
    'action': ['python', 'src/build/linux/install-arm-sysroot.py',
               '--linux-only'],
  },
  {
    # Pull clang if needed or requested via GYP_DEFINES.
    'name': 'clang',
    'pattern': '.',
    'action': ['python', 'src/tools/clang/scripts/update.py', '--if-needed'],
  },
  {
    # Update the Windows toolchain if necessary.
    'name': 'win_toolchain',
    'pattern': '.',
    'action': ['python', 'src/build/vs_toolchain.py', 'update'],
  },
  {
    # Update LASTCHANGE. This is also run by export_tarball.py in
    # src/tools/export_tarball - please keep them in sync.
    'name': 'lastchange',
    'pattern': '.',
    'action': ['python', 'src/build/util/lastchange.py',
               '-o', 'src/build/util/LASTCHANGE'],
  },
  # Pull GN binaries. This needs to be before running GYP below.
  {
    'name': 'gn_linux32',
    'pattern': '.',
    'action': [ 'download_from_google_storage',
                '--no_resume',
                '--platform=linux*',
                '--no_auth',
                '--bucket', 'chromium-gn',
                '-s', 'src/buildtools/linux32/gn.sha1',
    ],
  },
  {
    'name': 'gn_linux64',
    'pattern': '.',
    'action': [ 'download_from_google_storage',
                '--no_resume',
                '--platform=linux*',
                '--no_auth',
                '--bucket', 'chromium-gn',
                '-s', 'src/buildtools/linux64/gn.sha1',
    ],
  },
  {
    'name': 'gn_win',
    'pattern': '.',
    'action': [ 'download_from_google_storage',
                '--no_resume',
                '--platform=win*',
                '--no_auth',
                '--bucket', 'chromium-gn',
                '-s', 'src/buildtools/win/gn.exe.sha1',
    ],
  },
  # Pull clang-format binaries using checked-in hashes.
  {
    'name': 'clang_format_linux',
    'pattern': '.',
    'action': [ 'download_from_google_storage',
                '--no_resume',
                '--platform=linux*',
                '--no_auth',
                '--bucket', 'chromium-clang-format',
                '-s', 'src/buildtools/linux64/clang-format.sha1',
    ],
  },
  # Pull binutils for linux, enabled debug fission for faster linking /
  # debugging when used with clang on Ubuntu Precise.
  # https://code.google.com/p/chromium/issues/detail?id=352046
  {
    'name': 'binutils',
    'pattern': 'src/third_party/binutils',
    'action': [
        'python',
        'src/third_party/binutils/download.py',
    ],
  },
  # Pull eu-strip binaries using checked-in hashes.
  {
    'name': 'eu-strip',
    'pattern': '.',
    'action': [ 'download_from_google_storage',
                '--no_resume',
                '--platform=linux*',
                '--no_auth',
                '--bucket', 'chromium-eu-strip',
                '-s', 'src/build/linux/bin/eu-strip.sha1',
    ],
  },
  {
    # Ensure that we don't accidentally reference any .pyc files whose
    # corresponding .py files have already been deleted.
    'name': 'remove_stale_pyc_files',
    'pattern': 'src/tools/.*\\.py',
    'action': [
        'python',
        'src/tools/remove_stale_pyc_files.py',
        'src/tools',
    ],
  },
]
