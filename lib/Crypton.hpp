#include "../lib/constants.hpp"
#include <string>

namespace CryptoTools {
std::string ceasarEncrypt(const std::string &text, int &shift,
                          const std::string &alphabet = Alphabets::ENGLISH);
void ceasarDecryptBruteForce(const std::string &text,
                             const std::string &alphabet = Alphabets::ENGLISH);

} // namespace CryptoTools
