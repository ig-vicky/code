#include<iostream>
using namespace std;
class Example{
public:
    int publicvar;
private:
    int privatevar;
protected:
    int protectedvar;
public:
    void showvalue(){
        cout<<"Public: "<<publicvar<<endl;
        cout<<"Private: "<<privatevar<<endl;
        cout<<"Protected: "<<protectedvar<<endl;
    }
};
int main(){
    Example obj;
    obj.publicvar=10;
    //obj.privatevar=20;
    //obj.protectedvar=30;
    obj.showvalue();
}
