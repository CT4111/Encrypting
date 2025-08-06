#include "../lib/Crypton.hpp"
#include "../lib/constants.hpp"
#include <iostream>
#include <string>

void testCaesarEncrypt() {
  int a = 3;
  std::string b = "test";
  std::string c = Alphabets::ENGLISH;
  std::string output = CryptoTools::caesarEncrypt(b, a);
  std::cout << output << std::endl;
  std::cout << std::endl;
  CryptoTools::caesarDecryptBruteForce(output, c);
}

int main() {
  testCaesarEncrypt();
  return 0;
}
