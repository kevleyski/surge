/*
** This file is rebuilt and substitited every time you run a build.
** Things which need to be per-build should be defined here, declared
** in the version.h header, and then used wherever you want
*/
#include "version.h"

// clang-format off
namespace Surge
{
   const char* Build::MajorVersionStr = "1";
   const int   Build::MajorVersionInt = 1;
   
   const char* Build::SubVersionStr = "4";
   const int   Build::SubVersionInt = 4;
   
   const char* Build::ReleaseNumberStr = "999";
   const char* Build::ReleaseStr = "main";

   const bool Build::IsRelease = 0;
   const bool Build::IsNightly = ! Build::IsRelease;

   const char* Build::BuildNumberStr = "66b101d9"; // Build number to be sure that each result could identified.
   
   const char* Build::FullVersionStr = "1.4.main.66b101d9";
   const char* Build::BuildHost = "kevs-m3.local";
   const char* Build::BuildArch = "arm64";
   const char *Build::BuildCompiler = "AppleClang-21.0.0.21000101";

   const char* Build::BuildLocation = "local";

   const char* Build::BuildDate = "2026-07-11";
   const char* Build::BuildTime = "18:50:32";
   const char* Build::BuildYear = "2026";

   const char* Build::GitHash = "66b101d9";
   const char* Build::GitBranch = "main";

   const char* Build::CMAKE_INSTALL_PREFIX = "/usr/local";
}
// clang-format on
