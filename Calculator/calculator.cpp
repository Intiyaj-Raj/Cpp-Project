#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    char x;

    while(true)
    {
        cout<<"Enter number1: ";
        cin>>num1;
        cout<<"Enter number2: ";
        cin>>num2;

        cout<<"Press a for Addition"<<endl;
        cout<<"Press b for Subtraction"<<endl;
        cout<<"Press c for Multiplication"<<endl;
        cout<<"Press d for Division"<<endl;
        cout<<"Presse e for Remainder"<<endl;
        cin>>x;
    }

    if(x=='a')
    {
        cout<<"Sum = "<<num1 + num2<<endl;
    }

    else if(x=='b')
    {
        cout<<"Subtract = "<<num1 - num2<<endl;
    }
    else if(x=='c')
    {
        cout<<"Multiplication = "<<num1 * num2<<endl;
    }
    else if(x=='d')
    {
        cout<<"Division = "<<num1 / num2<<endl;
    }
    else if(x=='e')
    {
        cout<<"Remainder = "<<num1 % num2<<endl;
    }
    else
    {
        cout<<"Invalid Operation!!";
    }


    return 0;
}