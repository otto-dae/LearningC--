#include <iostream>

char GetUserChoice();
char GetComputerChoice();
void showChoice(char choice);
void ChooseWinner(char player, char computer);


int main(){

    char playerChoice;
    char comouterChoice;

    playerChoice = GetUserChoice();
    showChoice(playerChoice);

    return 0;
}

char GetUserChoice(){

    char playerChoice;
   
    do
    {
        std::cout << "Choose between 'r' Rock, 's' Scissors, 'p' Paper"<< std::endl;
        std::cin >> playerChoice;
    } while (playerChoice != 'r' || playerChoice != 's' || playerChoice != 'p');
    
    return playerChoice;
}
char GetComputerChoice(){

    char computerChoice;
   

}

void showChoice(char choice){

    if(choice == 'r'){
        std::cout << "You chose: Rock";
    }
    else if (choice == 'p')
    {
        std::cout << "You chose: Paper";
    }
        else if (choice == 's')
    {
        std::cout << "You chose: Scissors";
    }
    
}