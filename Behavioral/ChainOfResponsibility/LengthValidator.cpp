#include "LengthValidator.hpp"

#include <iostream>
#include <stdexcept>

using namespace lib::utils::checker;

LengthValidator::LengthValidator(uint8_t min, uint8_t max) : minLength(min), maxLength(max)
{
}

LengthValidator::~LengthValidator()
{
}

std::string LengthValidator::validateHandler(const std::string& strToValidate)
{
    std::cout << "Checking string length ...\n";
    if (strToValidate.length() <= minLength)
    {
        throw std::runtime_error("String length must be at least greater then " + std::to_string(minLength));
    }
    else if (strToValidate.length() > maxLength)
    {
        throw std::runtime_error("String too large, must be smaller then " + std::to_string(maxLength));
    }
    else
    {
        std::cout << "String length validated\n";
        return BaseValidator::validateHandler(strToValidate);
    }

}