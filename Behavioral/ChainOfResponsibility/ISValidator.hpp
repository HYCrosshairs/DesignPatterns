#pragma once

#include<string>

namespace lib::utils::checker
{
class ISValidator
{
public:
    ISValidator() = default;
    virtual ~ISValidator() = default;

    virtual ISValidator* nextISValidatorHandler(ISValidator* validatorHandler) = 0;
    virtual std::string validateHandler(const std::string& strToValidate) = 0;
};    
} // namespace lib::utils::checker
