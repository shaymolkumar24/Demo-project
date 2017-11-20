#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;
class calculator
{
    int a,b,c;
    public:
    void add()
    {
        c=a+b;
        cout<<"\n\t\tSum is:"<<c;
    }
    void sub()
    {
        c=a-b;
        cout<<"\n\t\tSubtraction is:"<<c;
    }
    void mul()
    {
        c=a*b;
        cout<<"\n\t\tMultiplication is:"<<c;
    }
    void div()
    {
        c=a/b;
        cout<<"\n\t\tDivision is:"<<c;
    }
    void get_data();
    void show_data();
    void swit(int);
    void lab();


};//End of class
    void calculator:: get_data()
    {
        cout<<"\n\t\tEnter two numbers:";
        cin>>a>>b;
    }


    void calculator::show_data()
    {
        cout<<"\n\t\t1.Addition\n";
        cout<<"\n\t\t2.Subtraction\n";
        cout<<"\n\t\t3.Multiplication\n";
        cout<<"\n\t\t4.Division\n";
        cout<<"\n\t\t5.Exit\n";
    }



void calculator::swit(int num)
{

        switch(num)
    {
        case 1:
        get_data();
        add();
        break;
        case 2:
        get_data();
        sub();
        break;
        case 3:
        get_data();
        mul();
        break;
        case 4:
        get_data();
        div();
        break;
        case 5:
        system("cls");
        exit(0);
        break;
        default:
        cout<<"\n\t\tYou entered invalid choice\n";
    }
    cout<<"\n\t.............................................................\n";
    cout<<"\n\t\tWELCOME TO SHAYMOL'S PROGRAM.........................\n";
    cout<<"\n\t.............................................................\n";

}

void calculator::lab()
{
    int num;
    cout<<"\n\t\tWhat operation do u want to do........\n";
    show_data();
    cout<<"\n\n\t\tEnter ur choice:";
    cin>>num;
    cout<<"\n\t\t.........OUTPUT............\n";
    swit(num);
}



int main()
{
    calculator c1;
    int num;
    char input;
    //textcolor(10);
    //textbackground(4);
    system("cls");
    cout<<"\n\t\tWELCOME TO SHAYMOL'S PROGRAM.........................\n";
    label:
    {
        cout<<"\n\t\tWhat operation do u want to do........\n";
        c1.show_data();
        cout<<"\n\n\t\tEnter ur choice::::";
        cin>>num;
        system("cls");
        cout<<"\n\t\t.........OUTPUT............\n";
        c1.swit(num);
        cout<<"\n\t\tDo u want to run this program again(y/n)?:";
        cin>>input;
        system("cls");
        cout<<"\n\t................................INPUT.............................\n";
    }
    if(input=='y')
    {
     goto label;

    }
    if(input=='n')
    {
        system("cls");
        //return 0;
    }

    return 0;

}
