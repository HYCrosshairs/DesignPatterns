#include "BaseStringValidator.hpp"

using namespace lib::utils::checker;


BaseStringValidator::BaseStringValidator()
{
}

BaseStringValidator::~BaseStringValidator()
{
    delete next;
}

ISValidator* BaseStringValidator::nextISValidatorHandler(ISValidator* nextISValidatorHandler)
{
    next = nextISValidatorHandler;
    return nextISValidatorHandler;
}

std::string BaseStringValidator::validateHandler(const std::string &strToValidate)
{
    return next ? next->validateHandler(strToValidate) : "Validated";
    
}
