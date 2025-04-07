#include<iostream>
using namespace std;
int main(){
    int n,guess,attempts;
    cout<<"Enter a no";
    cin>>n;
    system("cls");


    while(true){
        cout<<"Guess the number (1-100): ";
        cin>>guess;
        attempts++;
        if(guess==n){
            cout<<"\nCongratulations! You guessed it right in "<<attempts<<" attempts.\n";
            break;
        }
        else if(guess>n){
            cout<<"Too high! Try again.";
        }
        else{
            cout<<"Too low! Try again.";
        }
    }
}
