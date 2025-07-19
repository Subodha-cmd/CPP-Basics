#include <iostream>
#include <ctime>

void func(char board[]);

int main(){
  char board[3] = {'w','e','f'};
  func(board);
  for(int i = 0 ; i <3; i ++){
    std::cout << board[i]<<"\n";}
    return 0;
}

void func(char board[]){
  board[0] = 'q';
  for(int i = 0 ; i <3; i ++){
    std::cout << board[i]<< "\n";
  }
}