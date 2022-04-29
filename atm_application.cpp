#include <iostream>
using namespace std;

//Selection of options available to the user
void showMenu(){
    cout <<"********MENU********" << endl;
    cout <<"1. Check balance" << endl;
    cout <<"2. Deposit" << endl;
    cout <<"3. withdraw" << endl;
    cout <<"4. exit" << endl;
    cout <<"********************" << endl;
}

//display balance on screen
void showBalance(double& balance){
    cout << "balance is:" <<balance<< " $" << endl;
}

//add amount to balance
void deposit(double& balance){
    cout << "deposit amount:";
    double depositAmount;
    cin >> depositAmount;
    balance += depositAmount;
}

//remove amount from balance
void withdraw(double& balance){
    cout << "withdraw amount:";
    double withdrawAmount;
    cin >> withdrawAmount;
    if(withdrawAmount<=balance)
        balance -= withdrawAmount;
    else
        cout << "not enough money" << endl;
}

int main(){
    int option;
    double balance = 500;
    
    do{
    showMenu();
    cout << "please select an option " << endl;
    cin >> option;
    system("clear");
    switch(option){
        case 1: showBalance(balance); break;
        case 2: deposit(balance); break;
        case 3: withdraw(balance); break;
        default: cout << "illegal value, please chose from menu" << endl;
    }
    }while(option!=4);

    return 0;
}