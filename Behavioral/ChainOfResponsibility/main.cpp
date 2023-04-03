#include <iostream>

#include "NotEmptyValidator.hpp"
#include "LengthValidator.hpp"
#include "CharactersValidator.hpp"

using namespace lib::utils::checker;

int main(/*int argc, char const *argv[]*/)
{
    std::string pwd{"kjhsq@54aZekjYhadz"};

    IValidator* chainValidator = new BaseValidator;
    chainValidator
        ->nextHandler(new NotEmptyValidator)
        ->nextHandler(new LengthValidator(8, 32))
        ->nextHandler(new CharactersValidator("^(?=.*[A-Z])(?=.*[a-z])(?=.*[0-9])(?=.*[^A-Za-z0-9]).*$"));

    chainValidator->validateHandler(pwd);

    delete chainValidator;
    
    return 0;
}
