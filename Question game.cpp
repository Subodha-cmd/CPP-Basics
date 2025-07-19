#include <iostream>

double getTotal(double prices[], int size);
int searchArray(std::string names[] , int size , std::string name);
void bubblesort(int array[], int size);

int main(){ 
    //two dimentional arrays
    //code a quiz game 
    std::string quentions[] = {"What is squre of number 2","what is squreroot of number 16","what is 3 multiplied by 4","what is 40 devided by 8"};
    std::string answers[][3] = {{"A. 4","B. 5","C. 8"},
                                {"A. 8","B. 2","C. 4"},
                                {"A. 12","B. 16","C. 8"},
                                {"A. 10","B. 5","C. 6"}
    };
    char corect_answers[] = {'A','C','A','B'};

    int size = sizeof(quentions)/sizeof(quentions[0]);
    char guess;
    int score = 0;

 for(int i = 0 ; i < size ; i++){
    std::cout << "*******************************************\n";
    std::cout << quentions[i]<<"\n";
    std::cout << "*******************************************\n";
    for(int j = 0 ; j < 3; j++){
        std::cout << answers[i][j] << "\n";
    }
    std::cout << "Your answer: ";
    std::cin >> guess ;
    guess = toupper(guess);

    if(guess==corect_answers[i]){
        std::cout << "Your answer is correct\n";
        score ++;
    }
    else{
        std::cout << "Your answer is wrong\n";
    }
}

std::cout << "**************************************************************\n";
std::cout << "your score is "<< score << "\n";
std::cout << "correct percentage "<< (score/(double)size)*100 << "%\n";
std::cout << "**************************************************************\n";
     

}


void bubblesort(int array[], int size){
    int temp;
    for(int i = 0 ; i < size-1; i++){
        for(int j = 0 ; j < size-1-i; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int searchArray(std::string names[] , int size , std::string name){
    for (int i = 0 ; i < size ; i++){
        if (names[i] == name){
            return i;
        }
    }
    return -1;
}

double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0 ; i < size/sizeof(double); i ++){
        total = total + prices[i];
    }
    return total;
}