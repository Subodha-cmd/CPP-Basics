#include <iostream>
#include <ctime>

char myChoice();
char pcChoice();
void displayChoice(std::string player, char choice);
void displayWinner(char player , char computer);

int main(){
    do{
        char player ;
        char computer;
        std::cout <<"******************************************************\n";
        std::cout << "WELCOME TO ROCK - PAPER - SICCORS\n";
        player = myChoice();
        displayChoice("You",player);
        computer = pcChoice();
        displayChoice("Computer",computer);
        displayWinner(player,computer);
    }while (1);
    
    return 0;
}

char myChoice(){
    char choice;
    do{ 
        std::cout <<"Select one from below\n";
        std::cout <<"'r'-Rock\n'p'-Paper\n's'-siccors\n";
        std::cout << ":= ";
        std::cin >> choice;
    }while (choice != 'r' && choice != 'p' && choice != 's');
    return choice;
}
char pcChoice(){
    char choice;
    int num;
    srand(time(0));
    num = rand() % 3  + 1;
    switch (num)
    {
    case 1: choice = 'r';
        break;
    case 2: choice = 'p';
        break;
    case 3: choice = 's';
        break;
    }
    return choice;
}
void displayChoice(std::string player, char choice){
    std::string c;
    if(choice == 'r'){
        c = "Rock";
    }
    else if(choice == 'p'){
        c = "Paper";
    }
    else{
        c = "Siccors";
    }
    std::cout << player << " has selected " << c << "\n";
    
}
void displayWinner(char player, char computer){
    if(player == 'r'){
        if (computer == 'r'){std::cout << "Tie\n";}
        else if (computer == 's'){std::cout << "You Win\n";}
        else if (computer == 'p'){std::cout << "You Lose\n";}
    }
    else if (player == 's'){
        if (computer == 's'){std::cout << "Tie\n";}
        else if (computer == 'r'){std::cout << "You Lose\n";}
        else if (computer == 'p'){std::cout << "You Win\n";}
    }
    else{
        if (computer == 'p'){std::cout << "Tie\n";}
        else if (computer == 'r'){std::cout << "You Win\n";}
        else if (computer == 's'){std::cout << "You Lose\n";}
    }
}
