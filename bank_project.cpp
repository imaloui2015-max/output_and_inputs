#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance {0.00};
    int choice = 0;
    do{

        std::cout << "**********************" << std::endl;
        std::cout << "Enter Your Choice Here: " << std::endl;
        std::cout << "**********************" << std::endl;
        std::cout << std::endl;
        std::cout << "1.Show Balance.\n";
        std::cout << "2.Desposite Money.\n";
        std::cout << "3.Widthraw Money.\n";
        std::cout << "4.Exit.\n";

        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Thank You  and GoodBye" << std::endl;
                break;
            default:
                std::cout << "Invalid Choice" << std::endl;
                break;
        }   

    }while(choice != 4 );
    

    
    
    return 0;
}

void showBalance(double balance){
    std::cout << "Your Balance is : " << std::setprecision(2) << std::fixed << balance << "$" << std::endl;
}

double deposit(){

    double amount = 0;

    std::cout << "Enter The Amout That you want to add: " << std::endl;

    std::cin >> amount;

    if (amount > 0){
        return amount;
    }else {
        std::cout << "The Amout should be greater That 0" << std::endl;
        return 0;
    }
    
}

double withdraw(double balance){

    double amount {0};

    std::cout << "How much you want to withdraw: " << std::endl;

    std::cin >> amount;

    if (amount > balance){
        std::cout << "You Don't Have much many to withdraw" << std::endl;
        return 0;
    }

    else if (amount < 0){
        std::cout << "That's Not a valid amount" << std::endl;
        return 0;
    }



    return amount;
}