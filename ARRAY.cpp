/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements: "; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter element of arr["<<i+1<<"]: ";
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    int del, pos;
    int flag = 1;
    cout<<endl<<"Enter number to delete: "; cin>>del;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == del){ pos = i; flag = 0;}
    }
    if(flag == 1)
    {
        cout<<"Element not found!"<<endl; exit(0);
    }
    for(int i=pos; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    cout<<"After deletion: ";
    for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]<<" ";
    }

}*/

// SEARCHING:-
/*

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements: "; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter element of arr["<<i+1<<"]: ";
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    int del, pos;
    int flag = 1;
    cout<<endl<<"Enter number to SEARCH: "; cin>>del;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == del)
            {
                pos = i; flag = 0;
                if(flag == 1)
                {
                     cout<<"Element not found!"<<endl; exit(0);
                }
                cout<<endl<<"Element found at index "<<pos<<endl; exit(0);
            }
    }
}
*/
/*

#include<iostream>
#include<iomanip>
using namespace std;

class Box
{
private:
    double height, width, depth;
public:
    Box(): height(0), width(0), depth(0) {}

    Box(double h, double w, double d): height(h), width(w), depth(d) {}

    Box(double len): height(len), width(len), depth(len) {}

    double volume()
    {
        return height * width * depth;
    }

};

int main()
{
    double height, width, depth, len;
    Box obj0;
    Box obj1(21.67, 67.89, 89.76);
    Box obj2(21.67);
    cout<<"Box0: "<<fixed<<setprecision(2)<<obj0.volume()<<endl;
    cout<<"Box1: "<<fixed<<setprecision(2)<<obj1.volume()<<endl;
    cout<<"Box2: "<<fixed<<setprecision(2)<<obj2.volume()<<endl;
} */

/*
#include<iostream>
#include<iomanip>
using namespace std;

class Employee
{
private:
    double percentage, tot_val, Value;
public:
    void calculate(double p, double t)
    {
        percentage = p; tot_val = t;
        Value = (percentage * tot_val)/100.00;
    }

    void display()
    {
        cout<<"*: "<<fixed<<setprecision(2)<<Value<<endl;
    }
};

int main()
{
    int num;
    cout<<"No. of Values: ";
    cin>>num;
    Employee obj[num];
    for(int i=0; i<num; i++)
    {
        double percentage, tot_value;
        cout<<"*: "; cin>>percentage>>tot_value;
        obj[i].calculate(percentage, tot_value);
    }
    if(num >= 20) {cout<<"Exceeding Limit! "; exit(0);}
    cout<<endl<<"Display: "<<endl;
    for(int i=0; i<num; i++)
    {
        obj[i].display();
    }
} */

// CLASS AS A

#include<iostream>
using namespace std;

int time(const int **data, const int **time);

class Employee
{
private:
    int d, t;
    int *data = &d, *times = &t;
public:
    void display()
    {
        cout<<"Enter data and times: ";
        cin>>d; cout<<"*: "; cin>>t;
        cout<<"Ans: "<<*data * (*times)<<endl;
    }
};

void fun()
{
    cout<<"Multiplication by 0 gives 0.."<<endl;
    exit(0);
}

int main()
{
    int n=0, i=0;
    Employee *obj[100];
    while(1)
    {
        cin>>n;
        if(n==0) fun();
        obj[i] = new Employee;
        obj[i]->display();
        i++;
    }

}










