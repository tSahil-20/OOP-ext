#include<iostream>
using namespace std;

class Example{
    int a;
    public:
    Example(){}
    Example(int a){
        this->a = a;
    }
    Example(Example &obj){
        cout<<"Copy constructor called"<<endl;
        a = obj.a;
    }
    void print(){
        cout<<a<<endl;
    }
};

int main(){
    Example x(10),y;
    y = Example(x);
    x.print();
    y.print();
    Example z = x;
    z.print();
    cout << '\n';
    return 0;
}