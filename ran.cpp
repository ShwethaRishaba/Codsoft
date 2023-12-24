#include<bits//stdc++.h>
using namespace std;
int main(){
    srand(time(0));
    int n=1+(rand()%100);
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    while(n!=a){
        if(n>a){
            cout<<"The number you given is lesser than a guessing number"<<"\n";
            cout<<"Try again"<<"\n"<<"Enter the number: ";
            cin>>a;
        }
        else{
            cout<<"The number you given is greater than a guessing number"<<"\n";
            cout<<"Try again"<<"\n"<<"Enter the number: ";
            cin>>a;
        }
    }
    cout<<"Congratulations you found the number..!!";
}