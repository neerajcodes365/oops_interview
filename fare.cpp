#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class fare{
    protected:
    int distance;

    public:
    virtual int total()  =0;
};
class train:public fare{
    // private:
    // int moneyperkm;
   public:
    train(int distance){
        this->distance=distance;
    }
    int total(){
        return this->distance*5;
    }

};

class bus:public fare{
    // private:
    // int moneyperkm;
   public:
    bus(int distance){
        this->distance=distance;
    }
    int total(){
        return this->distance*10;
    }
};

int main(){
    bus b1(100);
   int a= b1.total();
   cout<<"bus total cost"<<a<<endl;
   train t1(500);
   int b=t1.total();
   cout<<"train total cost"<<b<<endl;

return 0;
}