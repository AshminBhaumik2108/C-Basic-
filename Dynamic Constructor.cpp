#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Employee
{
private:
    int *roll = new int[1];
    string *name = new string;
public:
    Employee(string &name1, int &roll1)
    {
        *name = name1;
        *roll = roll1;
    }

    void display()
    {
        cout<<"Name & Roll is: "<<*name <<" & "<<*roll<<" respectively."<<endl;
    }
};

int main()
{
    int roll; string name;
    cout<<"Name: "; getline(cin, name);
    cout<<"Roll: "; cin>>roll;
    Employee obj(name, roll);
    obj.display();
}
