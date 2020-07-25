#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int show();
class add_student
{
    public:
    string name;
    int id;
    void show()
    {

        cout<<name<<"\t"<<id;

    }
};

class attendance
{
public:
    int x;
};

class class_test
{
public:
    int mark;
};

class quiz_test
{
public:
    int mark;
};



int main()                  /// Main starts from here
{
    add_student stu[100];
    attendance day[31];
    class_test ct[100];
    quiz_test qt[100];
    int a,b=0;
    up:
    cout<<"\n\n\tEnter Password : ";
        cin>>a;
        if(a==1234)
        {
            system("cls");
            cout<<"\n\nSuccess\n\n";
            goto level;
        }
        else
        {
            system("cls");
            cout<<"\n\n\tTry again\n";
            goto up;
        }
    int n;
    level:
        system("cls");
    cout<<"\n\tPress 1 for add student"<<endl;
    cout<<"\n\tPress 2 for show value"<<endl;
    cout<<"\n\tPress 3 for attendance"<<endl;
    cout<<"\n\tPress 4 Exams"<<endl;
    cout<<"\n\tPress 0 for exit"<<endl;
    cout<<"\n\n\tEnter your option : ";
    cin>>n;
    if(n==1)
      {
        system("cls");
        cout<<"\n\n\tEnter total student number : ";
        cin>>a;
         b=a;
        for(int i=1;i<=b;i++)
        {
            system("cls");
            cout<<"Enter name : ";
            cin>>stu[i].name;
            cout<<"Enter ID : ";
            cin>>stu[i].id;
        }
        system("cls");
        goto level;
      }


        if(n==2)
        {
            system("cls");
            cout<<"\n\n";
            cout<<"Name\tID\tCT\tQT"<<endl;
            for(int i=1;i<=b;i++)
                {
                stu[i].show();
                cout<<"\t"<<ct[i].mark<<"\t"<<qt[i].mark;
                cout<<endl;
                }
        }
        if(n==3)
        {
            int count=0;
            if(b==0)
            {
                system("cls");
                cout<<"\n\n\t\tCurrently no student is present"<<endl<<endl;
                system("pause");
                goto level;
            }
            system("cls");
            for(int j=1;j<=b;j++)
            {
                cout<<stu[j].id<<"\t";
                cin>>day[j].x;
            }
            count++;
            goto level;
        }

        if(n==4)
        {
            int temp_n;
            level_2:
            system("cls");
            cout<<"\n\tFor Class test press 1"<<endl;
            cout<<"\n\tFor Quiz test press 2"<<endl;
            cout<<"\n\tFor result press 3"<<endl;
            cout<<"\n\tPress 0 for go to main menu"<<endl;
            cout<<"\n\n\tEnter your option : ";
            cin>>temp_n;
            if(temp_n==1)
            {
                system("cls");
                for(int i=1;i<=b;i++)
                {
                    cout<<"\n\t"<<stu[i].id<<"\t";
                cin>>ct[i].mark;
                }
                system("cls");
                goto level_2;
            }
            if(temp_n==2)
            {
                system("cls");
                for(int i=1;i<=b;i++)
                {
                    cout<<"\n\t"<<stu[i].id<<"\t";
                cin>>qt[i].mark;
                }
                system("cls");
                goto level_2;
            }
            if(temp_n==3)
            {
                system("cls");
                cout<<"\n\tPress 1 for Class test result"<<endl;
                cout<<"\n\tPress 2 for Quiz test result"<<endl;
                cin>>temp_n;
                if(temp_n==1)
                {
                    system("cls");
                    for(int i=1;i<=b;i++)
                    {
                        cout<<"\n\t"<<stu[i].name;
                        cout<<"\t"<<ct[i].mark;
                        cout<<endl;
                    }
                    system("pause");
                    goto level_2;
                }
                if(temp_n==2)
                {
                    system("cls");
                    for(int i=1;i<=b;i++)
                    {
                        cout<<"\n\t"<<stu[i].name;
                        cout<<"\t"<<qt[i].mark;
                        cout<<endl;
                    }
                    cout<<endl<<endl;
                    system("pause");
                    goto level_2;
                }
            }

            if(temp_n==0)
                goto level;
        }











        if(n==0)
            exit(0);
}

