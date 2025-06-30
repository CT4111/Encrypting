#include "../lib/Crypton.hpp"
#include <iostream>
#include <string>

namespace CryptoTools {

std::string caesarEncrypt(const std::string &text, int shift,
                          const std::string &alphabet) {
  std::string encrypted = text;
  for (size_t i = 0; i < encrypted.size(); i++) {
    size_t pos = alphabet.find(encrypted[i]);
    if (pos != std::string::npos) {
      pos = (pos + shift) % alphabet.size();
      encrypted[i] = alphabet[pos];
    }
  }
  return encrypted;
}

void caesarDecryptBruteForce(const std::string &text,
                             const std::string &alphabet) {
  for (int i = 1; i < static_cast<int>(alphabet.size()); i++) {
    std::cout << caesarEncrypt(text, i, alphabet) << std::endl;
  }
}
} // namespace CryptoTools
