#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter no. of rows";
    cin>>row;
    cout<<"Enter no. of columns";
    cin>>col;
    int mat1[row][col],mat2[row][col],sum[row][col];
    cout<<"Enter the value for the first matrix"<<endl;
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
           cin>>mat1[i][j];
        }
    }
    cout<<"Enter the value for the second matrix"<<endl;
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
           cin>>mat2[i][j];
        }
    }
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
           sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    cout<<"Sum of matrix are:"<<endl;
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
           cout << sum[i][j] << "  ";
            if(j == col - 1){
                cout << endl;
            }
        }
    }
}
