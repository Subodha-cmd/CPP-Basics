#include <iostream>

int getDigit(const int Number);
int SumOfOddValues(const std::string card_number);
int SumOfevenValues(const std::string card_number);


int main(){
    std::string card_number;
    std::cout << "enter your card number: \n";
    std::cin >> card_number;
    int result = SumOfevenValues(card_number) + SumOfOddValues(card_number);
    if(result%10 ==0){
         std::cout << "your card number is valid";
    }
    else{
        std::cout << "your card number is not valid";
    }
    return 0;
}

int getDigit(const int Number){
    return Number%10 + Number/10;
}
int SumOfOddValues(const std::string card_number){
    int sum = 0;
    for(int i = card_number.size()-1; i >= 0 ; i -= 2){
      sum += card_number[i] - '0';
    }
    return sum;
}
int SumOfevenValues(const std::string card_number){
  int sum = 0;
    for(int i = card_number.size()-2; i >= 0 ; i -= 2){
      sum += getDigit((card_number[i] - '0')*2);
    }
    return sum;
}
