#include<iostream>
using namespace std;
int main()
{
    
   while(true)
   {
        
        int num1,num2;
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        char op;
        cout<<"Enter the operation: ";
        cin>>op;

        switch(op)
        {
            case '+':
                cout<<"Sum = "<<num1+num2<<endl;
                break;
            case '-':
                cout<<"Subtraction = "<<num1-num2<<endl;
                break;
            case '*':
                cout<<"Multiplication = "<<num1*num2<<endl;
                break;
            case '/':
                cout<<"Divison= "<<num1/num2<<endl;
                break;
            case '%':
                cout<<"Remainder = "<<num1%num2<<endl;
                break;
            default:
                cout<<"Invalid operation!!"<<endl;
        }
        
   }
    return 0;
}