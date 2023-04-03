#include "CharactersValidator.hpp"

#include <iostream>

using namespace lib::utils::checker;

CharactersValidator::CharactersValidator(const std::string& pattern) : pattern(pattern)
{
}

CharactersValidator::~CharactersValidator()
{
}

std::string CharactersValidator::validateHandler(const std::string& strToValidate)
{
    if (std::regex_match(strToValidate, pattern))
    {
        std::cout << "String accepted\n";
        return BaseValidator::validateHandler(strToValidate);
    }
    {
        throw std::runtime_error("The input string doesn't match the regex pattern");
    }
}