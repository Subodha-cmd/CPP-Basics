#include <iostream>

double Cheak_balance(double balance);
double Withdraw(double balance);
double deposit(double balance);
double exit(double balance);

int main(){
  int op;
  double balance = 344.55;
  do{
  std::cout << "........................ HELLO BANKING....................................";
  std::cout <<"\n1. cheak balancce \n2. withdraw \n3. deposit \n4. exit \nselect your oparation from above:=  ";
  std::cin >> op;

  if (std::cin.fail()) {
    std::cin.clear();
    std::cin.ignore(1000, '\n');
 
    }

  switch(op){
    case 1:
      balance = Cheak_balance(balance);
      std::cout<< "\nYour acc balance is "<< balance;
      break;
    case 2 :
      balance = Withdraw(balance);
      std::cout << "\nyour acc balance is "<< balance;
      break;
    case 3 :
      balance =  deposit(balance);
      std::cout << "\nyour acc balance is "<< balance;
      break;
    case 4:
      balance = exit(balance);
      std::cout << "\nyour acc balance is "<< balance;
      break;
    default:
      std::cout<<"your input is not vaild";
      std::cout << "\nyour acc balance is "<< balance;
  }
  std::cout <<"\n............................................................................\n";
  }while (op != 4);

return 0;
}

double Cheak_balance(double balance){
  return balance;
};
double Withdraw(double balance){
  std::cout << "enter the amount that you want to withdraw:= ";
  double amount;
  std::cin>> amount;
  if (amount > balance){
    std::cout<< "not suffocient funds in your acc";
    return balance; 
  }
  else if(amount < 0){
    std::cout<<"plase enter a posotive amount";
    return balance;
  }
  else if(amount < balance){
    balance -= amount;
    std::cout<< "withdraw done successfully";
    return balance;
  }
  else{
    std::cout<< "plase enter a valid input";
    return balance;
  }
};
double deposit(double balance){
  std::cout << "enter the amount that you want to deposit:= ";
  double amount;
  std::cin>> amount;
  if(amount < 0){
    std::cout<<"plase enter a posotive amount";
    return balance;
  }
  else if(amount>0){
    balance += amount;
    std::cout<< "deposit done successfully";
    return balance;
  }
  else{
    std::cout<< "plase enter a valid input";
    return balance;
  }
};
double exit(double balance){
  std::cout << "goode bye\n";
  return balance;
};