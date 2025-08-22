#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){


    char ch='a';
    cout<<"ch+10  "<<ch+10<<endl;
    ch=ch+10;
    cout<<"ch+10  "<<ch<<endl;

    string name="neeraj";
    for(int i=0;i<name.size();i++){
        char ch=name[i];
        cout<<" "<<ch+1<<endl;
        char a=ch+1;
        cout<<" "<<a<<endl;
    }

    char name='3';
    int no=name -'0';
    cout<<" "<<no<<" "<<endl;

    int number=9;
    char chnum=number+'0';
    string ans="2";
    ans.push_back(chnum);
    cout<<" "<<ans  <<endl;


    char nu=97+5;
    cout<<nu<<endl;

    string number="2003";
    int no=0;
    int i=number.length();
    int j=0;
    while(j<i){
        int num=number[j]-'0';
        no*=10;
        no+=num;
        j++;
    }
    cout<<no<<endl;

    int digit=1983;
    string ans="";
    while(digit>0){
        int num=digit%10;
        digit/=10;
        char chnum=num+'0';
        ans.push_back(chnum);
    }
    reverse(ans.begin(),ans.end());

    cout<<ans<<endl;






    return 1;

}