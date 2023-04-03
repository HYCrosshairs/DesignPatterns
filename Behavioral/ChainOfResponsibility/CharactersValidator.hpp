#pragma once

#include "BaseValidator.hpp"

#include <string>
#include <regex>

namespace lib::utils::checker
{
class CharactersValidator : public BaseValidator
{
public:
    CharactersValidator(const std::string& pattern);
    ~CharactersValidator();

    std::string validateHandler(const std::string& strToValidate);

private:
    std::regex pattern;
};
} // namespace lib::utils::checker
