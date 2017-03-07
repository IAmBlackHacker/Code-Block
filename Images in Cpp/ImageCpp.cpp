#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main(){
    initwindow(800,500,"We Are The Hackers !");
    readimagefile("hacker.jpg",0,0,getmaxx(),getmaxy());
    getch();
    closegraph();
}
