#pragma once

#include "BaseValidator.hpp"

namespace lib::utils::checker
{
class NotEmptyValidator : public BaseValidator
{
public:
    NotEmptyValidator();
    ~NotEmptyValidator();

    std::string validateHandler(const std::string& strToValidate);
};    
} // namespace lib::utils::checker
