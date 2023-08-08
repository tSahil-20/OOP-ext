#include<iostream>
using namespace std;

class Complex{
    int r,img;
    public:
    Complex(){}
    Complex(int r, int img){
        this->r = r;
        this->img = img;
    }
    Complex operator+(Complex a){
        Complex temp;
        temp.r = a.r + r;
        temp.img = a.img + img;
        return temp;
    }
    void result(){
        cout<<r<<endl;
        cout<<img<<endl;
    }
};

int main(){
    Complex a, b, c;
    a = Complex(10,20);
    b = Complex(1,2);
    c = a + b;
    c.result();
    cout << '\n';
    return 0;
}