#include<iostream>
#include<string.h>
using namespace std;
class Player
{
    private:
        int age;
        char name[40], team[40];
    public:
        Player(){
            cout<<"Enter Player Name: ";
            cin.getline(name,40);
            cout<<"Enter Player team: ";
            cin.getline(team,40);
            cout<<"Enter Player age: ";
            cin>>age;
        }
        void input()
        {
            cout<<"Enter player name:";
            cin>>name;
            cout<<"Enter player team:";
            cin>>team;
            cout<<"Enter player age:";
            cin>>age;
        }
        void display()
        {
            cout<<"Player name is: "<<name<<endl;
            cout<<"Team name is: "<<team<<endl;
            cout<<"Player age is: "<<age<<endl;
            system("pause");
        }
        void change(char n[0], char t[40], int a)
        {
            strcpy(name, n);
            strcpy(team,t);
            age =a;
        }
};
int main()
{
    Player p;
    int choice;
    do{
    	system("cls");
        cout<<"-------Main Menu-------"<<endl;
        cout<<"1:- Input Player Data"<<endl;
        cout<<"2:- Display Player Data"<<endl;
        cout<<"3:- Change Player Data"<<endl;
        cout<<"4:- Exit"<<endl;
        cout<<"Enetr any choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                p.input();
                break;
            case 2:
                p.display();
                break;
            case 3:
                p.change("Intiyaj","India",20);
                break;
            case 4:
                exit(1);
                break;
            default:
            	cout<<"You enter invalid number"<<endl;
        }
    }
    while(1);
    
    return 0;
}
