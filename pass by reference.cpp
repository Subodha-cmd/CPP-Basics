#include <iostream>
void swap(std::string &a , std::string &b);
int main(){
     std::string a = "cat";
     std::string b = "dog";
     std::string temp; 

    swap(a,b);
     
     std::cout << "a: "<< a << "\n";
     std::cout << "b: "<< b << "\n ";

    return 0;
}

void swap(std::string &a , std::string &b){
    std::string temp = a;
     a = b;
     b = temp;

     std::cout << "a: "<< a << "\n";
     std::cout << "b: "<< b << "\n";
}