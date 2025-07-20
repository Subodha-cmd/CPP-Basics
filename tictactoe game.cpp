#include <iostream>
#include <ctime>

void drawboard(char spaces[]);
void playerMove(char spaces[],char player, char computer);
void computerMove(char spaces[],char player , char computer);
bool cheakWinner(char spaces[],char player , char computer);
bool cheakTie(char spaces[],char player , char computer);

int main(){
    char player = 'X';
    char computer = 'O';
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    bool running = true;

    while (running)
    {
        drawboard(spaces);
        playerMove(spaces,player,computer);
        if(cheakWinner(spaces,player,computer)){
            running = false;
            break;
        }
        if(cheakTie(spaces,player,computer)){
            running = false;
            break;
        }
        computerMove(spaces,player,computer);
        if(cheakWinner(spaces,player,computer)){
            running = false;
            break;
        }
        if(cheakTie(spaces,player,computer)){
            running = false;
            break;
        }  
    }
    
   
    return 0;
}

void drawboard(char spaces[]){
    std::cout << "     |     |     \n";
    std::cout << "  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<"  \n";
    std::cout << "     |     |     \n";
}
void playerMove(char spaces[],char player, char computer){
    int number;
    while (true)
    {
        std::cout << "enter a number: ";
        std::cin >> number ;
        if(number > 0 && number < 10){
            if(spaces[number-1]==' '){
                spaces[number-1] = player;
                break;
            }
        }
    }
    
    
 
    
}
void computerMove(char spaces[],char player , char computer){
    int number ;
    srand(time(0));
    while (true)
    {
        number = rand()%9;
        if(spaces[number]==' '){
            spaces[number]= 'O';
            break;
        }
    }
    
}
bool cheakWinner(char spaces[], char player, char computer) // <- correct spelling
 {
    int wins[8][3] = {
        {0,1,2}, {3,4,5}, {6,7,8}, // Rows
        {0,3,6}, {1,4,7}, {2,5,8}, // Columns
        {0,4,8}, {2,4,6}           // Diagonals
    };

    for (auto& w : wins) {
        if (spaces[w[0]] == spaces[w[1]] && spaces[w[1]] == spaces[w[2]] && spaces[w[0]] != ' ') {
            if (spaces[w[0]] == player) {
                std::cout << "You win!\n";
            } else {
                std::cout << "You lose!\n";
            }
            return true;
        }
    }
    return false;
}

bool cheakTie(char spaces[],char player , char computer){
    for(int i = 0 ; i < 9 ; i++)
    {
        if(spaces[i]==' ')
        {
            return false;
        }
    }
    return true;
}