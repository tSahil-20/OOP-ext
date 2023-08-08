#include<iostream>
using namespace std;

class Fl;
class In{
    private:
    int a;

    public:
    In(){}
    In(int a){ this->a = a; }
    int getdata(){return a;}

    friend Fl add_int_float(In x, Fl y);
};

class Fl{
    float b;

    public:
    Fl(){}
    Fl(float b){ this->b = b;}
    float getdata(){return b;}

    friend Fl add_int_float(In x, Fl y);
};

Fl add_int_float(In x, Fl y){
    float tot = y.b + x.a;
    Fl c(tot);
    return c;
}

int main(){
    In a(10);
    Fl b(3.5);
    Fl c = add_int_float(a, b);
    cout<< c.getdata()<<endl;


    cout << '\n';
    return 0;
}