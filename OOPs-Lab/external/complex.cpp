#include<iostream>
using namespace std;

class Complex{
    private:
    int real,img;
    
    public:
    Complex(){}
    Complex(int r, int i){
        real = r;
        img = i;
    }

    void add(Complex x, Complex y){
        real = x.real + y.real;
        img = x.img + y.img;
        print();
    }

    void print(){
        cout << real <<" + "<< img <<"i"<<endl;
    }

};


int main(){
    Complex a(10.4,20.2), b(10.1,20.1);
    a.print();
    Complex c;
    c.add(a, b);
}