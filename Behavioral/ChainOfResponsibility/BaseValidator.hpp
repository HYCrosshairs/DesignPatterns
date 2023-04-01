#pragma once

#include "IValidator.hpp"

namespace lib::utils::checker
{
class BaseValidator : public IValidator
{
public:
    BaseValidator(/* args */);
    ~BaseValidator();

    virtual IValidator* nextHandler(IValidator* nextHandler) override;

    virtual std::string validateHandler(const std::string& strToValidate) override;

protected:
    IValidator* next = nullptr; 
};
} // namespace lib::utils::checker
