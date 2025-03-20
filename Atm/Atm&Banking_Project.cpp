#include<iostream>
using namespace std;
class Bank{
    private:
        char name[40], actype[40];
        int balance , acNo;
    public:
        Bank (){
            cout<<"Enter Account Name: ";
            cin.getline(name,40);
            cout<<"Enter acount Type: ";
            cin.getline(actype,40);
            cout<<"Enter account no: ";
            cin>>acNo;
            cout<<"Enter Openning Balance: ";
            cin>>balance; 
        }

        void deposit(int amt)
        {
            balance = balance + amt;
            cout<<"Balance after deposite: "<<balance<<endl;
            system("pause");
        }


        void withdraw(int amt)
        {
            if(amt > balance)
                cout<<"Sorry your balance is less than amount..."<<endl;
            else
            {
                balance = balance - amt;
                    cout<<"Balance after withraw: "<<balance<<endl;
                    system("pause");
            }
        }
        void display()
        {
            cout<<"----------Acount Detail----------"<<endl;
            cout<<"Account Name: "<<name<<endl;
            cout<<"Account Type: "<<actype<<endl;
            cout<<"Account No: "<<acNo<<endl;
            cout<<"Current Balance: "<<balance<<endl;
            system("pause");
        }
};

int main()
{
    Bank objBank;
    int amount, choice;
    do{
        system("cls");
        cout<<"------Main Menu-----------"<<endl;
        cout<<"1:- Deposite Money"<<endl;
        cout<<"2:- Withraw Money"<<endl;
        cout<<"3:- Display Account Detail"<<endl;
        cout<<"4:- Quit"<<endl;
        cout<<"Enter any choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter amount to deposite:";
                cin>>amount;
                objBank.deposit(amount);
                break;
            case 2:
                cout<<"Enter amount to withdraw:";
                cin>>amount;
                objBank.withdraw(amount);
                break;
            case 3:
                objBank.display();
                break;
            case 4:
                exit(0);
                break;
        }
    }
    while(1); // Here 1 means True

    return 0;
}
