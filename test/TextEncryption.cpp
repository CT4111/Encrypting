#include "../lib/Crypton.hpp"
#include "../lib/constants.hpp"
#include <iostream>
#include <string>

namespace CryptoTools {
std::string caesarEncrypt(const std::string &text, int shift,
                          const std::string &alphabet) {
  std::string encrypted(text);
  for (int i = 0; i < encrypted.size(); i++) {
    int pos = alphabet.find(encrypted[i]);
    pos += shift;
    pos = pos % alphabet.size();
    encrypted[i] = alphabet[pos];
  }
  return encrypted;
}
void ceasarDecryptBruteForce(const std::string &text,
                             const std::string &alphabet) {
  for (int i = 1; i < alphabet.size(); i++) {
    std::cout << CryptoTools::caesarEncrypt(text, i, alphabet) << std::endl;
  }
}
} // namespace CryptoTools

int main() {
  int a = 3;
  std::string b = "test";
  std::string c = Alphabets::ENGLISH;
  std::string output = CryptoTools::caesarEncrypt(b, a, c);
  std::cout << output << std::endl;
  CryptoTools::ceasarDecryptBruteForce(output, c);
  return 0;
}
