#include "NotEmptyValidator.hpp"

#include <iostream>
#include <stdexcept>

using namespace lib::utils::checker;

NotEmptyValidator::NotEmptyValidator()
{
}

NotEmptyValidator::~NotEmptyValidator()
{
}

std::string NotEmptyValidator::validateHandler(const std::string& strToValidate)
{
    std::cout << "Checking if empty ...\n";
    if (strToValidate.empty())
    {
        throw std::runtime_error("String is empty");
    }
    else
    {
        std::cout << "String is not empty\n";
        return BaseValidator::validateHandler(strToValidate);
    }
}
