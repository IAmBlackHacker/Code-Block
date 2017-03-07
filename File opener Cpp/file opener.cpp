#include<iostream>
#include<fstream>
#include<windows.h>
using namespace std;
char*  GetFileName( const string & prompt ) {
    const int BUFSIZE = 1024;
    char buffer[BUFSIZE] = {0};
    OPENFILENAME ofns = {0};
    ofns.lStructSize = sizeof( ofns );
    ofns.lpstrFile = buffer;
    ofns.nMaxFile = BUFSIZE;
    ofns.lpstrTitle = prompt.c_str();
    GetOpenFileName( & ofns );
    return buffer;
}
int main(){
            fstream file;
            char filename[200],name2[1000];
            sel_again:
            strcpy(filename,GetFileName("Select File"));
            file.open(filename,ios::in);
            if(!file.is_open()){
                goto sel_again;
            }
            file.read(name2,1000);
            file.close();
            cout<<"File Content ..\n\n"<<name2;
}
