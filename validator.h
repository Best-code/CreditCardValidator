#include <string>
#include <iostream>

class Validator {
public:
    Validator(std::string cardNumber);
    Validator();

    std::string cardNumber;
    std::string preCheckArray[15];
    int postCheckSum = 0;
    int calculatedCheck;

    void timesTwo();
    int indCheck(std::string num);
    bool eval();
};