#include <iostream>

int main(){
     std::string name = "Hello";
     int num = 23;
     bool me = true;

    std::cout << &name << "\n";
    std::cout << &num << "\n";
    std::cout << &me << "\n";


    return 0;
}