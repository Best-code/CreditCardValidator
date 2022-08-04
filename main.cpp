#include "validator.h"
#include <iostream>
int main(){
    Validator validate("79927398713");
    Validator newValidate;
    std::cout << validate.eval() << " for " << validate.cardNumber << std::endl;
    std::cout << newValidate.eval() << " for "  << newValidate.cardNumber << std::endl;
    return -1;
}