#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string s;
    cout<<"enter the sentence:";
    getline(cin,s);
    int count=0;
    istringstream iss(s);
    string word;
    while(iss>>word){
        count++;
    }
    cout<<count;
    return 0;
}
