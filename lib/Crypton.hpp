#include "constants.hpp"

namespace CryptoTools {
std::string ceasarEncrypt(const std::string &text, int &shift,
                          const std::string &alphabet = Alphabets::ENGLISH);
}
