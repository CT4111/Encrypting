#pragma once
#include "../lib/constants.hpp"
#include <string>

namespace CryptoTools {
std::string caesarEncrypt(const std::string &text, int shift,
                          const std::string &alphabet = Alphabets::ENGLISH);

void caesarDecryptBruteForce(const std::string &text,
                             const std::string &alphabet = Alphabets::ENGLISH);
} // namespace CryptoTools
