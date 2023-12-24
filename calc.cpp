#include<bits//stdc++.h>
using namespace std;
int main(){
    int a,b;
    char c;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"\n"<<"Enter another number: ";
    cin>>b;
    cout<<"\n"<<"Enter the operation symbol: ";
    cin>>c;
    if(c=='+'){
        cout<<"The addition of two numbers is: "<<a+b;
    }
    else if(c=='-'){
        cout<<"The subtraction of two numbers is: "<<a-b;
    }
    else if(c=='x'){
        cout<<"The multiplication of two numbers is: "<<a*b;
    }
    else if(c=='/'){
        cout<<"The division of two numbers is: "<<a/b;
    }
    else{
        cout<<"The symbol you gave is undefined";
    }
}
