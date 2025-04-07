#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter a no.";
    cin>>num;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==1){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}
