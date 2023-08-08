#include<iostream>
using namespace std;

class Car{
    int speed;
    public:
    Car(){
        cout<<"Default constructor"<<endl;
    }
    Car(int speed){
        cout<<"Parameterized Constructor"<<endl;
        this->speed = speed;
    }
    void getspeed(){
        cout<< this->speed;
    }
    Car(Car &p){
        cout<<"Copy Constructor called"<<endl;
    }
    
};

int main(){
    
    Car c(10);
    Car d = c; //Assignment
    Car d(c); //Copy Constructor


    cout << '\n';
    return 0;
}