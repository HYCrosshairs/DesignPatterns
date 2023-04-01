#pragma once

#include "ISValidator.hpp"

namespace lib::utils::checker
{
class BaseStringValidator : public ISValidator
{
public:
    BaseStringValidator(/* args */);
    ~BaseStringValidator();

    virtual ISValidator* nextISValidatorHandler(ISValidator* nextISValidatorHandler) override;

    virtual std::string validateHandler(const std::string& strToValidate) override;

protected:
    ISValidator* next = nullptr; 
};
} // namespace lib::utils::checker
