//OPERATOR OVERLOADING:-
/*
#include<iostream>
using namespace std;

class Employee
{
private:
    int value;
public:
    Employee(int v) : value(v)
    {
        cout<<"Welcome to Operator overloading....."<<endl;
    }

    void operator ++ ()
    {
        ++value;
    }

    void show()
    {
        cout<<endl<<"Value: "<<value<<endl;
    }


};

int main()
{
    int v;
    cout<<"*: "; cin>>v;
    Employee obj(v);
    ++obj;
    obj.show();
} */

// FROM INTERNET (OPERATOR OVERLOADING):-
/*
#include<iostream>
using namespace std;

class Complex
{
private:
    int real, imag;
public:
    Complex() : real(0), imag(0) {}

    Complex(int r, int i): real(r), imag(i) {}

    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
        //cout<<real<<" + "<<imag<<"i "<<endl;
    }

    int print() {cout<<real<<" + "<<imag<<"i "<<endl;}
};

int main()
{
    Complex a1(2, 3), a2(5, 6);
    Complex a3 = a1+a2; // a1.add(a2).......
    Complex a4 = a3;
    a4.print();
    //a1+a2;
}
*/

// OPERAND OVERLOADING USING FRIEND FUNCTION IN C++:-
/*
#include<iostream>
using namespace std;

class Complex
{
private:
    int real, imag;
public:
    Complex() : real(0), imag(0) {}

    Complex(int r, int i): real(r), imag(i) {}

    int print() {cout<<real<<" + "<<imag<<"i "<<endl;}

    friend Complex operator +(Complex c1, Complex c2);
};

Complex operator +(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real - c2.real;
    temp.imag = c1.imag - c2.imag;
    return temp;
}

int main()
{
    Complex a1(5, 6), a2(2, 3);
    Complex a3 = a1+a2; // a1.add(a2).......
    Complex a4 = a3;
    a4.print();
    //a1+a2;
}*/

// FRIEND CLASS IN C++:-
/*
#include<iostream>
using namespace std;

class Employee
{
private:
    string name, Address;
public:
    Employee(): name("Empty"), Address("Empty") {}

    // USING FRIEND CLASS:-
    friend class gang;

};

class gang
{

public:
    void getdata(Employee &obj)
    {
        cout<<"Name: "; cin>>obj.name;
        cout<<"Address: "; cin>>obj.Address;
    }
    void display(Employee &obj)
    {
        cout<<"Name: "<<obj.name<<endl;
        cout<<"Address: "<<obj.Address<<endl;
    }

};

int main()
{
    Employee obj;
    gang obj1;
    obj1.getdata(obj);
    obj1.display(obj);
} */

// OPERAND OVERLOADING WITHOUT USING FRIEND FUNCTION IN C++:-
/*
#include<iostream>
using namespace std;

class Complex
{
private:
    int real, imag;
public:
    Complex() : real(0), imag(0) {}

    Complex(int r, int i): real(r), imag(i) {}

    int print() {cout<<real<<" + "<<imag<<"i "<<endl;}

    Complex operator +(Complex c2)
    {
        Complex temp;
        temp.real = real - c2.real;
        temp.imag = imag - c2.imag;
        return temp;
    }
};

int main()
{
    Complex a1(5, 6), a2(2, 3);
    Complex a3 = a1+a2; // a1.add(a2).......
    Complex a4 = a3;
    a4.print();
    //a1+a2;
} */

// USING OBJECTS FOR ADDING TWO NUMBERS USING OBJECTS:-
/*
#include<iostream>
using namespace std;

class load
{
private:
    int data;
public:
    load(): data(0) {}

    load(int n) : data(n) {}

    load operator +(load c)
    {
        load temp;
        temp.data = data + c.data;
        return temp;
    }

    void print()
    {
        cout<<"The sum of two number is: "<<data<<endl;
    }
};

int main()
{
    load o1(30), o2(40);
    load o3 = o1+o2; // a1.add(a2).......
    o3.print();
    //a1+a2;
} */

// STATIC CAST IN C++:-
/*
#include <iostream>
using namespace std;
int main()
{
    float f = 5.5;
    int i ;
    i = f;
    //cout<<"i = "<<i<<endl;
    //i = static_cast<int> (f);
    cout<<"i = "<<i<<endl;
    return 0;
} */
// int to obj:-
/*
#include<iostream>
using namespace std;

class add
{
private:
    int data;
public:
    add(int n) : data(n) {}

    int show()
    {
        cout<< data;
    }

};

// obj to int:-

int main()
{
    add obj(20);
    int x = 300;
    obj = x;
    obj.show();

}*/
/*
#include<iostream>
using namespace std;

class add
{
private:
    int data;
public:
    add() : data(0) {}

    add(int n) : data(n) {}

    ~add()
    {
        cout<<data;
    }


};

int main()
{
    add obj(20);
    //cout<<x;

} */

// OPERATOR OVERLOADING WITH datatype:-
/*
#include<iostream>
using namespace std;

class load
{
private:
    int data;
public:
    operator int ()
    {
        data = 89;
        return data;
    }

};

int main()
{
    int x;
    load obj;
    x = obj;
    cout<<x;
} */

//

#include<iostream>
using namespace std;

int main()
{

}

















