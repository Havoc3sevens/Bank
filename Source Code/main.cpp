/*
This program uses classes to make a bank account. Will add functionality
as program matures.
    Created by: Enrique Hurtado
    Date: 04 July 2021
    Purpose: Practice using classes
*/
#include <cstdio>
#include "my_char_lib.h"

class bankAccount {
    float balance;
    const char *accname;
    float lastdeposit;
    float lastwithdraw;
    
    public:
    void newAccount(const char *usrname) {
        balance = 0;
        accname = usrname;
        lastdeposit = 0;
        lastwithdraw = 0;

        printf("%s, welcome to your new account!\n\n", usrname);
    }

    double getAccountdeposit() {
        return lastdeposit;
    }

    double getAccountwithdraw() {
        return lastwithdraw;
    }

    double getBalance() {
        return balance;
    }

    const char * getAccountname() {
        return accname;
    }

    void showBalance() {
        printf("%s, your account balance is $%.2f.\n\n", accname, balance);
    }

    void getLastdeposit() {
        printf("%s, your last deposit was $%.2f.\n\n", accname, lastdeposit);
    }

    void getLastwithdraw() {
        printf("%s, your last withdraw was $%.2f.\n\n", accname, lastwithdraw);
    }

    void deposit(float usrdelta) {
        balance += usrdelta;
        lastdeposit = usrdelta;
        printf("%s, you deposited $%.2f.\n\n", accname, usrdelta);
    }

    void withdraw(float usrdelta) {
        balance -= usrdelta;
        lastwithdraw = usrdelta;
        printf("%s, you withdrew $%.2f.\n\n", accname, usrdelta);
    }
};

int main()
{
    char usrinput[256];
    float usrvalue;
    char nameinput[256];
    int exitVal = 1;
    char New[] = "new";
    char dpst[] = "deposit";
    char wthdrw[] = "withdraw";
    char show[] = "show";
    char ext[] = "exit";
    char yes[] = "yes";

    bankAccount newAcc;
    do {
        printf("What would you like to do?\n");
        scanf("%s", usrinput);
        if (comparechar(usrinput, New)) {
            printf("What is your name?\n");
            scanf("%s", nameinput);
            newAcc.newAccount(nameinput);
        } else if (comparechar(usrinput, dpst)) {
            printf("What is your deposit?\n");
            scanf("%f", &usrvalue);
            newAcc.deposit(usrvalue);
        } else if (comparechar(usrinput, wthdrw)) {
            printf("What is your withdraw?\n");
            scanf("%f", &usrvalue);
            newAcc.withdraw(usrvalue);
        } else if (comparechar(usrinput, show)) {
            newAcc.showBalance();
        } else if (comparechar(usrinput, ext)) {
            exitVal = 0;
        } else {
            printf("Not a valid input.\n");
            printf("Would you like to exit? (yes,no)\n");
            scanf("%s", usrinput);
            if (comparechar(usrinput, yes)) {
                exitVal = 0;
            } else {
                exitVal = 1;
            }
        }
    }
    while (exitVal);
    
  
    return 0;
}
