

#pragma once

#include <bee/Converter.h>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace beecli {
struct CliArgs {
  std::u8string inputFile;
  std::u8string outFile;
  std::u8string fbmDir;
  std::optional<std::u8string> logFile;
  bee::ConvertOptions convertOptions;
};

std::optional<std::vector<std::string>>
getCommandLineArgsU8(int argc_, const char *argv_[]);

std::optional<CliArgs> readCliArgs(std::span<std::string_view> args_);
} // namespace beecli