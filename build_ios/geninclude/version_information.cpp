/*
 * sst-plugininfra - an open source library of plugin infrastructure
 * built by Surge Synth Team.
 *
 * Copyright 2018-2025, various authors, as described in the GitHub
 * transaction log.
 *
 * sst-plugininfra is released under the MIT License. It has subordinate
 * libraries with licenses as described in libs/
 *
 * All source in sst-plugininfra available at
 * https://github.com/surge-synthesizer/sst-plugininfra
 */

#include <sst/plugininfra/version_information.h>

static_assert(""[0] != '\0',
              "GIT_COMMIT_HASH not defined. Run cmake/git-version-functions.cmake commands to use "
              "this library");
namespace sst::plugininfra
{
// clang-format off
const char *VersionInformation::git_commit_hash{""};
const char *VersionInformation::git_branch{""};
const char *VersionInformation::git_tag{""};
const char *VersionInformation::git_implied_display_version{""};

const char *VersionInformation::project_version_major{"1"};
const char *VersionInformation::project_version_minor{"4"};
const char *VersionInformation::project_version_patch{"0"};
const char *VersionInformation::project_version_tweak{""};
const char *VersionInformation::project_version{
    "1.4.0"};
const char *VersionInformation::project_version_and_hash{
    "1.4.0."};

const char *VersionInformation::project_version_full{
    "1.4.0."};

const char *VersionInformation::cmake_source_dir{"/Users/klambert/workspace_KJSL/github_kevleyski/surge"};
const char *VersionInformation::cmake_binary_dir{"/Users/klambert/workspace_KJSL/github_kevleyski/surge/build_ios"};
const char *VersionInformation::cmake_install_prefix{"/usr/local"};
const char *VersionInformation::cmake_compiler_id{"AppleClang"};
const char *VersionInformation::cmake_compiler_version{"21.0.0.21000101"};
const char *VersionInformation::cmake_compiler{
    "AppleClang-21.0.0.21000101"};
const char *VersionInformation::cmake_system_name{"iOS"};

const char *VersionInformation::build_date{"2026-07-11"};
const char *VersionInformation::build_year{"2026"};
const char *VersionInformation::build_time{"08:21:50"};
const char *VersionInformation::build_host{""};
// clang-format on
} // namespace sst::plugininfra
