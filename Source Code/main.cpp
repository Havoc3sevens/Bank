/*
This program uses classes to make a bank account. Will add functionality
as program matures.
    Created by: Enrique Hurtado
    Date: 04 July 2021
    Purpose: Practice using classes
*/
#include <cstdio>

class bankAccount {
    float balance;
    float delta;
    const char *accname;
    float lastdeposit;
    float lastwithdraw;
    
    public:
    void newAccount(const char *usrname) {
        balance = 0;
        delta = 0;
        accname = usrname;
        lastdeposit = 0;
        lastwithdraw = 0;

        printf("%s, welcome to your new account!\n\n", usrname);
    }

    double getAccountdelta() {
        return delta;
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
        printf("%s, your account balance is $%.2f.\n\n",
            getAccountname(), getBalance());
    }

    void getLastdeposit() {
        printf("%s, your last deposit was $%.2f.\n\n",
            getAccountname(), getAccountdeposit());
    }

    void getLastwithdraw() {
        printf("%s, your last withdraw was $%.2f.\n\n",
            getAccountname(), getAccountwithdraw());
    }

    void deposit(float usrdelta) {
        balance += usrdelta;
        delta = usrdelta;
        lastdeposit = usrdelta;
        printf("%s, you deposited $%.2f.\n\n",
            getAccountname(), usrdelta);
    }

    void withdraw(float usrdelta) {
        balance -= usrdelta;
        delta = usrdelta;
        lastwithdraw = usrdelta;
        printf("%s, you withdrew $%.2f.\n\n",
            getAccountname(), usrdelta);
    }
};



int main()
{
    bankAccount jonAcc;
    bankAccount bobAcc;
    
    jonAcc.newAccount("Jon");
    bobAcc.newAccount("Bob");

    jonAcc.showBalance();
    jonAcc.deposit(100);
    jonAcc.showBalance();
    jonAcc.withdraw(20);
    jonAcc.showBalance();
    jonAcc.getLastdeposit();
    jonAcc.getLastwithdraw();

    bobAcc.showBalance();
    bobAcc.getLastdeposit();
    bobAcc.getLastwithdraw();
    return 0;
}
