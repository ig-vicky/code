#include<iostream>
using namespace std;
int main(){
    char ch;
    do{
        cout<<"Do you want to continue? (Y/N): ";
        cin>>ch;
        if(ch=='Y'||ch=='y'){
            cout<<"continue\n";
        }
        else if(ch=='N'||ch=='n'){
            cout<<"you stoped\n";
        }
        else{
            cout<<"Invalid\n";
        }
    }while(ch!='Y'&&ch!='y'&&ch!='N'&&ch!='n');
}
