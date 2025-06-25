#include "../lib/constants.hpp"
#include <iostream>
#include <string>

std::string Encryption(std::string &word, int shift) { return word; }

int main() {
  std::string defaultAlpabet = Alphabets::ENGLISH;
  std::string word = "Hello World";
  std::cout << Encryption(word, 2);

  return 0;
}
