#include<iostream>
using namespace std;
int binary(int arr[],int first, int last,int target){
    while(first<=last){
        int mid=(first+last)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            first=mid+1;
        }
        else{
            last=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50};
    int a=sizeof(arr)/sizeof(arr[0]);
    int c;
    cout<<"Enter a no to search: ";
    cin>>c;
    int result=binary(arr,0,a-1,c);
    if(result==-1){
        cout<<"Not found";
    }
    else{
        cout<<"At pos: "<<result;
    }
}
