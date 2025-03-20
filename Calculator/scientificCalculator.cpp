#include<iostream>
#include<math.h>
using namespace std;

double num1,num2,PI,percentage,value,T_value,average;
double p, r, t,amount,CI;
int num,fact=1; // for factorial

int c; // operation i.e. -,*,/ etc.


void display()
{
    
    cout<<"**************************************************Calculator**************************************************\n";
    cout<<"_______________________________________________________________________________________________________________\n";

    cout<<"operation\t"<<"\t Trigonometric function"<<"\t\tlograthmic function \t\t\n\n";
    cout<<"1:  Addtion\t\t"<<"   16: sin\t\t\t"<<"   22: log\t"<<endl;
    cout<<"2:  Subtraction\t\t"<<"   17: cos\t\t\t"<<"   23: log with base 10\t"<<endl;
    cout<<"3:  Multiplication\t"<<"   18: tan\t"<<endl;
    cout<<"4:  Division\t\t"<<"   19: sin inverse\t"<<endl;
    cout<<"5:  Remainder\t\t"<<"   20: cos inverse\t"<<endl;
    cout<<"6:  Exponent\t\t"<<"   21: tan inverse\t"<<endl;
    cout<<"7:  Square\t"<<endl;
    cout<<"8:  Cube\t"<<endl;
    cout<<"9:  Square root\t"<<endl;
    cout<<"10: Cube root\t"<<endl;
    cout<<"11: Percentage\t"<<endl;
    cout<<"12: Average\t"<<endl;
    cout<<"13: Simple Interest\t"<<endl;
    cout<<"14: Compound Interest\t"<<endl;
    cout<<"15: Factorial\t"<<endl;
}
void factorial()
{
    cout<<"Enter a number: ";
    cin>>num;
    if(num >=0)
    {

        for(int i=1; i<=num; i++)
        {
            fact = fact*i;
        }
        cout<<"Factorial of "<<num<<" is: "<<fact<<endl;
    }
    else
    {
        cout<<"please Enter a positive integer. we find factorial only positive integer";
    }
}
void calculation()
{
    while(true)
    {
        
        cout<<"Enter the function that you want to perform: ";
        cin>>c;
        PI = 3.14159265;

        switch(c)
        {
            case 1:
                cout<<"Enter Number1: ";
                cin>>num1;
                cout<<"Enter Number2: ";
                cin>>num2;
                cout<<"Sum = "<<num1+num2<<endl;
                break;
            case 2:
                cout<<"Enter Number1: ";
                cin>>num1;
                cout<<"Enter Number2: ";
                cin>>num2;
                cout<<"Subtraction = "<<num1-num2<<endl;
                break;
            case 3:
                cout<<"Enter Number1: ";
                cin>>num1;
                cout<<"Enter Number2: ";
                cin>>num2;
                cout<<"Multiplication = "<<num1*num2<<endl;
                break;
            case 4:
                cout<<"Enter Number1: ";
                cin>>num1;
                cout<<"Enter Number2: ";
                cin>>num2;
                cout<<"Division = "<<num1/num2<<endl;
                break;
            case 5:
                cout<<"Enter Number1: ";
                cin>>num1;
                cout<<"Enter Number2: ";
                cin>>num2;
                cout<<"Remainder = "<<(int)(num1) % (int)num2<<endl;
                break;
            case 6:
                cout<<"Enter Number: ";
                cin>>num1;
                cout<<"Enter Exponent: ";
                cin>>num2;
                cout<<"Exponent = "<<pow(num1,num2)<<endl;
                break;
            case 7:
                cout<<"Enter Number: ";
                cin>>num1;
                cout<<"Square = "<<num1*num1<<endl;
                break;
            case 8:
                cout<<"Enter Number: ";
                cin>>num1;
                cout<<"cube = "<<num1*num1*num1<<endl;
                break;
            case 9:
                cout<<"Enter Number: ";
                cin>>num1;
                cout<<"Square root = "<<sqrt(num1)<<endl;
                break;
            case 10:
                cout<<"Enter Number: ";
                cin>>num1;
                cout<<"cube root = "<<cbrt(num1)<<endl;
                break;
            case 11:
                cout<<"Enter value: "; // enter value = 500
                cin>>value;
                cout<<"Enter T_value: "; // enter total value = 600
                cin>>T_value;
                cout<<"percentage = "<<(value/T_value)*100<<endl; // result = 83.333
                break;
            case 12:
                cout<<"Enter sum of value: ";
                cin>>value;
                cout<<"Enter Number of value: ";
                cin>>T_value;
                cout<<"Average = "<<value/T_value<<endl;
                break;
            case 13:
                cout<<"Enter Rupees: ";
                cin>>p;
                cout<<"Enter Rate: ";
                cin>>r;
                cout<<"Enter Time in year: ";
                cin>>t;
                cout<<"SI = "<<(p*r*t)/100<<endl;
                break;
            case 14:
                cout << "Enter the principal amount: ";
                cin >> p;
                cout << "Enter the rate of interest: ";
                cin >> r;
                cout << "Enter the time period in years: ";
                cin >> t;
                // Calculating compound interest
                amount = p * (pow((1 + r/100), t));
                CI =amount - p;
                // Displaying output
                cout << "CI = " << CI << endl;
                break;
                case 15:
                    factorial();
                    break;
                case 16:
                    cout<<"Enter angle: ";
                    cin>>num1;
                    cout<<"Sin"<<num1<<" in degree = "<<sin(num1)<<endl;
                    break;
                case 17:
                    cout<<"Enter angle: ";
                    cin>>num1;
                    cout<<"Cos"<<num1<<" in degree = "<<cos(num1)<<endl;
                    break;
                case 18:
                    cout<<"Enter angle: ";
                    cin>>num1;
                    cout<<"Tan"<<num1<<" in degree = "<<tan(num1)<<endl;
                    break;
                case 19:
                    cout<<"Enter angle: ";
                    cin>>num1;
                    cout<<"Sin inverse "<<num1<<" = "<<asin(num1)*180.0/PI<<endl;
                    break;
                case 20:
                    cout<<"Enter angle: ";
                    cin>>num1;
                    cout<<"Cos inverse "<<num1<<" = "<<acos(num1)*180.0/PI<<endl;
                    break;
                case 21:
                    cout<<"Enter angle: ";
                    cin>>num1;
                    cout<<"tan inverse "<<num1<<" = "<<atan(num1)*180.0/PI<<endl;
                    break;
                case 22:
                    cout<<"Enter number: ";
                    cin>>num1;
                    cout<<"Log"<<num1<<" = "<<log(num1)<<endl;
                    break;
                case 23:
                    cout<<"Enter number: ";
                    cin>>num1;
                    cout<<"Log with base 10 = "<<log10(num1)<<endl;
                    break;
                default:
                    cout<<"Wrong Input!!"<<endl;
        }
    }
}
int main()
{
   
    display();
    calculation();
    return 0;
}
