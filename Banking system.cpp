#include<iostream>
#include<string>
#include<iomanip>
#include<windows.h>
using namespace std;
int main()
{
    float dep,draw,transfer;
    string name;
    float balance=5000;
    int account,type,transaction=1;
    system("cls");
    cout<<"\n\t\t....................Welcome To My Software................\n";
    cout<<"\n\t\t.....                                                .....\n";
    cout<<"\n\t\t4444444444444444444444444444444444444444444444444444444444\n";
    cout<<"\n\t\t4444                                                  4444\n";
    cout<<"\n\t\t4444                   BANKING SYSTEM                 4444\n";
    cout<<"\n\t\t4444                                                  4444\n";
    cout<<"\n\t\t4444444444444444444444444444444444444444444444444444444444\n";
    cout<<"\n\n\n\t\t\t\t----USER'S INFORMATION----";
    cout<<"\n\n\t\tEnter Your Name:";
    cin>>name;
    cout<<"\n\t\tPlease Enter Your Account No:";
    cin>>type;
    system("cls");
    while(transaction==1)
    {
        int option;
        cout<<"\n\n\t\tChoose What U Want To Do....\n";
        cout<<"\n\t1.Balance Enquiry\n";
        cout<<"\n\t2.Deposit\n";
        cout<<"\n\t3.Withdraw\n";
        cout<<"\n\t4.Transfer\n";
        cout<<"\n\t5.Exit\n";
        cin>>option;
        system("cls");
        switch(option)
        {
            case 1:
            cout<<"\n\t\t-*BALANCE ENQUIRY*-\n\n";
            cout<<"\n\tYour current balance is:"<<setprecision(7)<<balance<<endl;
            break;
            case 2:
            cout<<"\n\t\t-*DEPOSIT AMOUNT*-\n\n";
            cout<<"\n\tHow much money do u want to deposit:";
            cin>>dep;
            if(dep>0 &&dep<=20000)
            {
                cout<<"\n\tYour "<<setprecision(7)<<" deposited in your account.\n";
                balance+=dep;
            }
            else if(dep>20000)
            cout<<"\n\tYou can't deposit that much amount in one time.\n";
            else
            cout<<"\n\tInvalid Deposit Amount\n";
            break;
            case 3:
            cout<<"\n\t\t-*WITHDRAW AMOUNT*-\n\n";
            cout<<"\n\tHow much money do u want to withdraw:";
            cin>>draw;
            if(draw<=balance && draw<=20000)
            {
                cout<<"\n\tYou just withdraw "<<setprecision(7)<<draw<<"Rs\n";
                balance-=draw;

            }
            else if(draw>20000)
            cout<<"\n\tYou can't withdraw that much amount in one time.\n";
            else
            cout<<"\n\tYou don't have enough money\n";
            break;
            case 4:
            cout<<"\n\t\t-*TRANSFER AMOUNT*-\n\n";
            cout<<"\n\tAccount u want to transfer:";
            cin>>account;
            cout<<"\n\t How much amount?:";
            cin>>transfer;
            if(balance>=transfer)
            {
                cout<<"\n\tYour "<<setprecision(7)<<transfer<<"Rs successfully transfered\n";
                balance-=transfer;
            }
            else
            cout<<"\n\t You don't have sufficient balance!\n";
            break;

            case 5:
           return 0;
            break;
            default:
            cout<<"\n\tInvalid Transaction!\n";
        }
        transaction=0;
        while(transaction!=1 && transaction!=2)
        {
            cout<<"\n\tDo u want to do another transaction?\n";
            cout<<"\n\t\t1-Yes   2-No\n";
            cin>>transaction;
            system("cls");
            if(transaction!=1 && transaction!=2)
            cout<<"\n\tInvalid No!\n";
        }
    }

    cout<<"\n\n\n\t\t...............SHAYMOL'S BANKING SYSTEM.................\n";
    cout<<"\n\t\t                      BANK'S NAME                            \n";
    cout<<"\n\t\t   Date:3/5/16                                 Time:10:20 AM  \n";
    cout<<"\n\t\tYour Name:"<<name;
    cout<<"\n\n\t\tYour Account No:"<<type;
    if(dep>0 && dep<=20000)
    {
        cout<<"\n\n\t\tYou've deposited "<<setprecision(7)<<dep<<"Rs\n";

    }
    else
    cout<<"\n\t\tYou've deposited 0Rs\n";
    if(draw>0 && draw<=20000 && draw<=balance)
    cout<<"\n\t\tYou've withdraw "<<setprecision(7)<<draw<<"Rs\n";
    else
    cout<<"\n\t\tYou've withdraw 0Rs\n";
    if(transfer>0 && transfer<=20000 && transfer<=balance)
    cout<<"\n\t\t You've transfered "<<setprecision(7)<<transfer<<"Rs On account:"<<account;
    else
    cout<<"\n\t\t You've transfered 0Rs\n";
    cout<<"\n\n\t\t--*Your Total Balance*--"<<balance;
    cout<<"\n\n\n\t\t\t---*THANK YOU*---\n";
    return 0;
}
