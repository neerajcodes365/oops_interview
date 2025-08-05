//.diffefrt tyepes of bank acnt
// some things are common
// some certain things are specific ,validate 
// 

// common 
//  current money

//  deposit

//  withdraw condition


//  so make abstract class with all  make virtual function as withdraw 

//two types of acnt saving ,debt
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

 class baseacnt {
protected:
    int crtmoney;

public:
    void deposit(int num) {
        this->crtmoney += num;
        cout << "Deposited: " << num << ", Current Balance: " << crtmoney << endl;
    }

    void withdraw(int num) {
        if (possible(num)) {
            this->crtmoney -= num;
            cout << "Withdrawn: " << num << ", Current Balance: " << crtmoney << endl;
        } else {
            cout << "Withdraw failed!" << endl;
        }
    }

    int getBalance() {
        return crtmoney;
    }

    virtual bool possible(int num) = 0; // Pure virtual
};

class savingacnt : public baseacnt {
public:
    savingacnt(int num) {
        this->crtmoney = num; // Set directly
    }

    bool possible(int num) override {
        return num <= this->crtmoney;
    }
};

class debtacnt : public baseacnt {
public:
    debtacnt(int num) {
        this->crtmoney = num;
    }

    bool possible(int num) override {
        return num <= (this->crtmoney + 5000);
    }
};

