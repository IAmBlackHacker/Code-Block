#include<iostream>
#include<windows.h>
#include<mmsystem.h>
#include<stdio.h>
#include<graphics.h>
using namespace std;
int main(){
    PlaySound(TEXT("sou.wav"),NULL,SND_ASYNC);
    cout<<"                     Shape Of You \n";
    int i=0;
    while(true){
        cout<<".";
        delay(200);
    }
}
