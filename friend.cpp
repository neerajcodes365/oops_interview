#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class a{
    private:
    int num;
    public:
    a(int num){
        this->num=num;
    }
    void prt(void){
        cout<<num<<endl;
    }
    friend class b;
};

class b{
    private :
    int bogi;
    int friendprivate;
    public:
    b(int num){
        bogi=num;
        // friendprivate=b.num;

    }
    void set(a& cls){
        friendprivate=cls.num;
    }
      void prt(void){
        cout<<bogi<<friendprivate<<endl;
    }
    
};

int main(){

    a aobj(100);
    b bobj(200);

    aobj.prt();
    bobj.set(aobj);
    bobj.prt();


    return 0;
}
