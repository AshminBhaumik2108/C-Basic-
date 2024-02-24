// C++ Program to demonstrate
// Use of template
/*
#include <iostream>
using namespace std;

// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded
template <typename T>
T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    // Call myMax for int
    cout << myMax<int>(3, 7) << endl;
    // call myMax for double
    cout << myMax<double>(3.0, 7.0) << endl;
    // call myMax for char
    cout << myMax<char>('g', 'e') << endl;

    return 0;
} */

// Bubble sort
// using template function
/*
#include <iostream>
using namespace std;
//Defined Template........
template <class T1, class T2>
//Full Define of template......
void bubbleSort(T1 *a, T2 n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}

int main()
{
    // calls template function for the first time.........
    int a[5] = { 10, 50, 30, 40, 20 };
    int n1 = sizeof(a) / sizeof(a[0]);
    bubbleSort<int, int>(a, n1);
    cout << "Sorted array 1: ";
    for (int i = 0; i < n1; i++)
        cout << a[i] << " ";
    cout << endl;

    // calls template function for the second time.........
    string b[5] = { "Ashmin", "Bhaumik", "Rahul", "Dhruva", "India"};
    int n2 = sizeof(b) / sizeof(b[0]);
    bubbleSort<string, int>(b, n2);
    cout << "Sorted array 1: ";
    for (int i = 0; i < n2; i++)
        cout << b[i] << " ";
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;

//Defined Template........
template <class T>
//Full Define of template......
class ABC
{
    T a, b;
public:
    void get()
    {
        cout<<"*: ";
        cin>> a >> b;
    }

    void show()
    {
        cout<<"Addition: "<<a+b<<endl;
    }
};

int main()
{
    ABC <int> obj1;
    ABC <float> obj2;
    obj1.get();
    obj1.show();
    obj2.get();
    obj2.show();

} */
/*
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//Defining Template.....................
template <typename T1, typename T2>
// Defining class name as Employee...
class Employee
{
public:
    T1 name = "Unknown";
    T2 Roll = -1, flag = -1;
    //Constructors...........
    Employee() {}
    Employee(T1 n, T2 r, T2 f): name(n), Roll(r) , flag(f) {}

    Employee print(Employee &v)
    {
        Employee temp;
        cout<<this->name<<" "<<v.name<<endl;
        cout<<this->Roll<<" "<<v.Roll<<endl;

        temp.flag = this->flag + v.flag;
        return temp;
    }

    Employee operator ++ ()
    {
        Employee temp;
        temp.flag = this->flag + this->flag;
        return temp;
    }

};

int main()
{
    Employee<string, int> v1("Ashmin", 21, 1);
    Employee<string, int> v2("Bhaumik", 32, 4);
    //Return type................
    Employee<string, int> v3 = v1.print(v2);
    cout << v3.flag << endl;
    cout<<"Operator overloading......"<<endl;
    Employee<string, int> v4 = ++v1;
    cout << v4.flag << endl;


    return 0;
} */
/*
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Employee
{
public:
    int Roll = -1;
    string name = "Unknown";

    virtual void display()
    {
        cout<<"I am from Employee..."<<endl;
    }
};

class child: public Employee
{
public:

    void display()
    {
        Roll = 23;
        cout<<Roll<<endl;
    }
};

int main()
{
    Employee *parent = new child;
    parent->display();


} */

// C++ program to demonstrate the use
// of struct using typedef
#include <bits/stdc++.h>
using namespace std;

// Declaration of typedef
struct GeekForGeeks {

    int G1;
    char G2;
    float G3;

};

// Driver Code
int main()
{
    GeekForGeeks Geek;
    Geek.G1 = 85;
    Geek.G2 = 'G';
    Geek.G3 = 989.45;

    cout << "The value is : " << Geek.G1 << endl;

    cout << "The value is : " << Geek.G2 << endl;

    cout << "The value is : " << Geek.G3 << endl;

    return 0;
}




























