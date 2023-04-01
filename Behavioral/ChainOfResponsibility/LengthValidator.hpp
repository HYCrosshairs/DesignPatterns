#pragma once

#include "BaseValidator.hpp"

namespace lib::utils::checker
{
class LengthValidator : public BaseValidator
{
public:
    LengthValidator(uint8_t min, uint8_t max);
    ~LengthValidator();

    std::string validateHandler(const std::string& strToValidate);
private:
    uint8_t minLength;
    uint8_t maxLength;
};    
} // namespace lib::utils::checker
