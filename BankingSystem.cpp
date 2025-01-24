#include <iostream>

void showBalance(double Balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "Enter your choice: " << std::endl;

        std::cout << "1.- Show balance\n2.-Deposit\n3.-Withdraw\n4.-Close" << std::endl;

        std::cin >> choice;

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
        
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            std::cout << "Closing . . ."<<std::endl;
        
            break;

        default:
        std::cout << "Invalid choice"<<std::endl;
            break;
        }
    } while (choice != 4 );

    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is: $" << balance<<std::endl;
}

double deposit(){

    double deposit;
    std::cout << "Insert ammount of money to deposit: $"<<std::endl;
    std::cin >> deposit;

    return deposit;
}

double withdraw(double balance){

    double withdraw;
    std::cout << "Insert ammount of money to withdraw: $";
    std::cin >> withdraw;

    if(balance - withdraw > 0){
        std::cout << "Withdraw complete. . ."<<std::endl; 
        return withdraw;
    }
    else{
        std::cout << "insufficiente funds, please make sure to have enough balance to proceed" <<std::endl;
        showBalance(balance);
        return 0;
    }

}