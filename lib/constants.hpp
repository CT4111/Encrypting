// include/alphabets.hpp
#pragma once
#include <string>

namespace Alphabets {
// Basis-Alphabete
constexpr auto ENGLISH = "abcdefghijklmnopqrstuvwxyz";
constexpr auto ENGLISH_CAPS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

// Deutsch (inkl. Umlaute)
constexpr auto GERMAN = "abcdefghijklmnopqrstuvwxyzäöüß";
constexpr auto GERMAN_CAPS = "ABCDEFGHIJKLMNOPQRSTUVWXYZÄÖÜẞ";

// Französisch
constexpr auto FRENCH = "abcdefghijklmnopqrstuvwxyzàâæçéèêëîïôœùûüÿ";

// Spanisch
constexpr auto SPANISH = "abcdefghijklmnopqrstuvwxyzñ";
constexpr auto SPANISH_CAPS = "ABCDEFGHIJKLMNOPQRSTUVWXYZÑ";

// Italienisch (traditionell ohne J,K,W,X,Y)
constexpr auto ITALIAN = "abcdefghilmnopqrstuvz";

// Sonderzeichen-Sets
constexpr auto ALPHANUMERIC = "abcdefghijklmnopqrstuvwxyz0123456789";
constexpr auto ASCII_PRINTABLE = " !\"#$%&'()*+,-./0123456789:;<=>?@"
                                 "ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`"
                                 "abcdefghijklmnopqrstuvwxyz{|}~";

// Ziffern
constexpr auto NUMERIC = "0123456789";

// Hexadezimal
constexpr auto HEXADECIMAL = "0123456789abcdef";
} // namespace Alphabets
