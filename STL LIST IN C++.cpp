#include<bits/stdc++.h>
#include<iostream>
#include<list>
using namespace std;

void display(list<string> &list1)
{
    list<string> :: iterator i;
    cout << "Display: ";
    for(i = list1.begin(); i != list1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

}

int main()
{
    list<string> list1;

    //Entering elements......
    string n;
    while(1)
    {
        cout << "*: "; cin>>n;
        if(n == "null") break;
        list1.push_back(n);
    }
    display(list1);
    list1.sort();
    //display(list2);
    display(list1);

}





























