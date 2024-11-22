#include<iostream>
using namespace std;

struct complexNumber1{
    int real;
    int imag;
};
struct complexNumber2{
    int real;
    int imag;
};

void Display(complexNumber1& c1){
    cout<<"First Complex number "<<endl;
    if(c1.imag>=0){
        cout<<"First Complex Number is: "<<c1.real<<" + "<<c1.imag<<"i"<<endl;
    }else{
        cout<<"First Complex Number is: "<<c1.real<<" - "<<-c1.imag<<"i"<<endl;
    }
}
void Display(complexNumber2& c2){
    cout<<"Second Complex number "<<endl;
    if(c2.imag>=0){
        cout<<"Second Complex Number is: "<<c2.real<<" + "<<c2.imag<<"i"<<endl;
    }else{
        cout<<"Second Complex Number is: "<<c2.real<<" - "<<-c2.imag<<"i"<<endl;
    }
}

void Addition(complexNumber1& num1 , complexNumber2& num2){
    int realSum=num1.real + num2.real;
    int imgSum=num1.imag + num2.imag;
    cout<<"Sum of Complex Number is "<<realSum<<" + "<<imgSum<<"i"<<endl; 
}
void Subtraction(complexNumber1& num1 , complexNumber2& num2){
    int realSub=num2.real-num1.real;
    int imgSub=num2.imag-num2.imag;
    cout<<"Subtraction of Complex Number is "<<realSub<<" + "<<imgSub<<"i"<<endl;
}

int main(){
    struct complexNumber1 number1;
    struct complexNumber2 number2;

    cout<<"Enter the Real Part of First Complex Number: ";
    cin>>number1.real;
    cout<<"Enter the Imaginary part of First complex number: ";
    cin>>number1.imag; 

    cout<<"Enter the Real Part of Second Complex Number: ";
    cin>>number2.real;
    cout<<"Enter the Imaginary part of Second complex number: ";
    cin>>number2.imag; 

    Display(number1);
    Display(number2);
    Addition(number1,number2);
    Subtraction(number1,number2);
}