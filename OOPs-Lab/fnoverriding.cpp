#include<iostream>
using namespace std;

class A{
    public:
    A(){}
    void fn(){
    cout<<"A function in base class"<<endl;
    }
};

class B:public A{
    public:
    B(){}
    void fn(){
    cout<<"A function in Child class"<<endl;
    }
};

int main(){
    
    A a;
    B b;
    b.fn();

    cout << '\n';
    return 0;
}