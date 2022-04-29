#include <iostream>
using namespace std;


void showMenu(){
    cout <<"********MENU********" << endl;
    cout <<"1. Check balance" << endl;
    cout <<"2. Deposit" << endl;
    cout <<"3. withdraw" << endl;
    cout <<"4. exit" << endl;
    cout <<"********************" << endl;
}





int main(){
    //check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;

    
    do{
    showMenu();
    cout << "please select an option " << endl;
    cin >> option;
    system("clear");
    switch(option){
        case 1: cout << "balance is:" <<balance<< " $" << endl; break;
        case 2: cout << "deposit amount:";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3: cout << "withdraw amount:";
            double withdrawAmount;
            cin >> withdrawAmount;
            if(withdrawAmount<=balance)
                balance -= withdrawAmount;
            else
                cout << "not enough money";
            break;
    }
    }while(option!=4);

    // system("pause>0");
}