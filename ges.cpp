#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n=rand()%100+1,guess,attempts=0;

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
            cout<<"Too high! Try again.\n";
        }
        else{
            cout<<"Too low! Try again.\n";
        }
    }
}
