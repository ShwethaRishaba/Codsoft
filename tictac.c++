#include<bits/stdc++.h>
using namespace std;
int main(){
    char arr[3][3];
    char c='1';
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            arr[i][j]=c;
            c++;
        }
    }
    cout<<"Tic-Tac-Toe game starts!"<<"\n";
    cout<<"X is given for Player 1 and O is given for Player 2"<<"\n"<<"Your instructed to give the number of the respective place where you need to place the letter X or O";
    cout<<"\n";
    cout<<"After the play of every player the box will be shown and according the box you need to give the number.\n If your desired place is filled with X or O. Please don't try to enter there."<<"\n";
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<"\n";
    }
    int n=1;
    int a1=0,b1=0;
    while(n==1){
        for(int i=0 ; i<9 ; ){
            int a;
            cout<<"Player 1: ";
            cin>>a;
            i++;
            if(a==1){ 
                arr[0][0]='X';
            }
            else if(a==2){
                arr[0][1]='X';
            }
            else if(a==3){
                arr[0][2]='X';
            }
            else if(a==4){
                arr[1][0]='X';
            }
            else if(a==5){
                arr[1][1]='X';
            }
            else if(a==6){
                arr[1][2]='X';
            }
            else if(a==7){
                arr[2][0]='X';
            }
            else if(a==8){
                arr[2][1]='X';
            }
            else if(a==9){
                arr[2][2]='X';
            }
            for(int i=0 ; i<3 ; i++){
                for(int j=0 ; j<3 ; j++){
                    cout<<arr[i][j]<<"  ";
                }
                cout<<"\n";
            }
            if(arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2]){
                if(arr[0][0] == 'X'){
                    a1++;
                    cout<<"Congrats..!!,Player 1 Won the game!!\n";
                    break;
                }
                else if(arr[0][0] == 'O'){
                    b1++;
                    cout<<"Congrats..!!,Player 2 Won the game!!\n";
                    break;
                }
            }
            if(arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2]){
                if(arr[1][0] == 'X'){
                    a1++;
                    cout<<"Congrats..!!,Player 1 Won the game!!\n";
                    break;
                }
                else if(arr[1][0] == 'O'){
                    b1++;
                    cout<<"Congrats..!!,Player 2 Won the game!!\n";
                    break;
                }
            }
            if(arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2]){
                if(arr[2][0] == 'X'){
                    a1++;
                    cout<<"Congrats..!!,Player 1 Won the game!!\n";
                    break;
                }
                else if(arr[2][0] == 'O'){
                    b1++;
                    cout<<"Congrats..!!,Player 2 Won the game!!\n";
                    break;
                }
            }
            if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]){
                if(arr[0][0] == 'X'){
                    a1++;
                    cout<<"Congrats..!!,Player 1 Won the game!!\n";
                    break;
                }
                else if(arr[0][0] == 'O'){
                    b1++;
                    cout<<"Congrats..!!,Player 2 Won the game!!\n";
                    break;
                }
            }
            if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]){
                if(arr[0][0] == 'X'){
                    a1++;
                    cout<<"Congrats..!!,Player 1 Won the game!!\n";
                    break;
                }
                else if(arr[0][0] == 'O'){
                    b1++;
                    cout<<"Congrats..!!,Player 2 Won the game!!\n";
                    break;
                }
            }
            if(i>=9){
                break;
            }
            int b;
            cout<<"Player 2: ";
            cin>>b;
            i++;
            if(b==1){
                arr[0][0]='O';
            }
            else if(b==2){
                arr[0][1]='O';
            }
            else if(b==3){
                arr[0][2]='O';
            }
            else if(b==4){
                arr[1][0]='O';
            }
            else if(b==5){
                arr[1][1]='O';
            }
            else if(b==6){
                arr[1][2]='O';
            }
            else if(b==7){
                arr[2][0]='O';
            }
            else if(b==8){
                arr[2][1]='O';
            }
            else if(b==9){
                arr[2][2]='O';
            }
            for(int i=0 ; i<3 ; i++){
                for(int j=0 ; j<3 ; j++){
                    cout<<arr[i][j]<<"  ";
                }
                cout<<"\n";
            }
            if(arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2]){
                if(arr[0][0] == 'X'){
                    a1++;
                     cout<<"Congrats..!!,Player 1 Won the game!!\n";
                    break;
                }
                else if(arr[0][0] == 'O'){
                    b1++;
                    cout<<"Congrats..!!,Player 2 Won the game!!\n";
                    break;
                }
            }
            if(arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2]){
                if(arr[1][0] == 'X'){
                    a1++;
                     cout<<"Congrats..!!,Player 1 Won the game!!\n";
                    break;
                }
                else if(arr[1][0] == 'O'){
                    b1++;
                    cout<<"Congrats..!!,Player 2 Won the game!!\n";
                    break;
                }
            }
            if(arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2]){
                if(arr[2][0] == 'X'){
                    a1++;
                     cout<<"Congrats..!!,Player 1 Won the game!!\n";
                    break;
                }
                else if(arr[2][0] == 'O'){
                    b1++;
                    cout<<"Congrats..!!,Player 2 Won the game!!\n";
                    break;
                }
            }
            if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]){
                if(arr[0][0] == 'X'){
                    a1++;
                     cout<<"Congrats..!!,Player 1 Won the game!!\n";
                    break;
                }
                else if(arr[0][0] == 'O'){
                    b1++;
                    cout<<"Congrats..!!,Player 2 Won the game!!\n";
                    break;
                }
            }
            if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]){
                if(arr[0][0] == 'X'){
                    a1++;
                    cout<<"Congrats..!!,Player 1 Won the game!!\n";
                    break;
                }
                else if(arr[0][0] == 'O'){
                    b1++;
                    cout<<"Congrats..!!,Player 2 Won the game!!\n";
                    break;
                }
            }
        }
       
        if(a1==0 && b1==0){
            cout<<"The points are equal so the match has been drawn."<<"\n";
        }
        cout<<"If you need to restart the game enter 1 or If you need to exit the game enter 0";
        cout<<"\n";
        cin>>n;
    }
    
}

