#include<iostream>
using namespace std;
int main(){
    int num,rev=0;
    cout<<"Enter a number:";
    cin>>num;
    while(num!=0){
        rev*=10;
        rev+=num%10;
        num/=10;
    }
    cout<<"the rev no.:"<<rev;
}
