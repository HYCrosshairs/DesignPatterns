#pragma once

#include<string>

namespace lib::utils::checker
{
class IValidator
{
public:
    IValidator() = default;
    virtual ~IValidator() = default;

    virtual IValidator* nextHandler(IValidator* validatorHandler) = 0;
    virtual std::string validateHandler(const std::string& strToValidate) = 0;
};    
} // namespace lib::utils::checker
