#include "validator.h"
Validator::Validator(std::string cardNumber){
    this->cardNumber = cardNumber;
}

Validator::Validator(){
    std::cout << "Input Card Number" << std::endl;
    std::cin >> this->cardNumber;
}

void Validator::timesTwo(){
    bool dos = false;
    int newNum;
    for(int x = cardNumber.length()-2; x >= 0; x--){
        dos = !dos;
        newNum = (int)cardNumber[x]-48;
        if(dos){
            newNum *= 2;
        }
        preCheckArray[x] = std::to_string(newNum);
    }
}

int Validator::indCheck(std::string num){
    //Take string and return sum of all numbers in string combined
    if(num.length() == 1) return (int)(num.c_str()[0])-48;

    int sum = 0;
    for(char x : num){
        sum += (int)x-48;
    }
    return sum;
}

bool Validator::eval(){
    this->timesTwo();
    for(std::string num : preCheckArray){
        postCheckSum += indCheck(num);
    }
    calculatedCheck = 10 - (postCheckSum%10);
    return (char)(calculatedCheck+48) == cardNumber[cardNumber.length()-1];
}