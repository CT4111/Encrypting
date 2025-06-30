#include "../lib/Crypton.hpp"
#include "../lib/constants.hpp"
#include <iostream>
#include <string>

int main() {
  int a = 3;
  std::string b = "test";
  std::string c = Alphabets::ENGLISH;
  std::string output = CryptoTools::caesarEncrypt(b, a);
  std::cout << output << std::endl;
  std::cout << std::endl;
  CryptoTools::caesarDecryptBruteForce(output, c);
  return 0;
}
