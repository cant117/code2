#include<bits/stdc++.h>
using namespace std;


int main(){
    char isbm[14];
    int sum=0, check, t=1;
    cout<<"請輸入ISBN:";
    cin.getline(isbm,14);
    for(int i=0;i<11;i++){
        if(isbm[i] != '-') {
            sum=sum + (isbm[i]-48)*t;
            t++;
        }
    }
    check = (sum%11);
    if(sum%11 == 10){
        if(isbm[12]==check+48){
            cout<<"正確";
        }
        else{
            cout<<"錯誤"<<"正確為:";
            for(int i=0;i<11;i++){
            cout<<isbm[i];
            }
            cout<<"-X";
        }
    }
    if(isbm[12]==check+48){
        cout<<"正確";
    }
    else{
        cout<<"錯誤"<<endl<<"正確為:";
        for(int i=0;i<11;i++){
        cout<<isbm[i];
        }
        cout<<"-"<<check;
    }
    return 0;
}

