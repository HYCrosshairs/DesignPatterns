#include "BaseValidator.hpp"

using namespace lib::utils::checker;


BaseValidator::BaseValidator()
{
}

BaseValidator::~BaseValidator()
{
    delete next;
}

IValidator* BaseValidator::nextHandler(IValidator* nextHandler)
{
    next = nextHandler;
    return nextHandler;
}

std::string BaseValidator::validateHandler(const std::string& strToValidate)
{
    return next ? next->validateHandler(strToValidate) : "String is validated";
}
