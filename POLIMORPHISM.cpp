/*
#include<iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"Class A Constructor..."<<endl;
    };

    virtual void get()
    {
        cout<<"Class A.."<<endl;
    }

    virtual ~A()
    {
        cout<<"Class A Destructor..."<<endl;
    };
};

class B: public A
{
public:
    B()
    {
        cout<<"Class B Constructor..."<<endl;
    };

    void get()
    {
        cout<<"Class B.."<<endl;
    }

    ~B()
    {
        cout<<"Class B Destructor..."<<endl;
    };
};

// Polymorphism means one name many forms............
int main()
{
    cout<<"Polymorphism......"<<endl;
    A *obj = new B();
    obj->get();
    //obj->get1();
    delete obj;

} */

// CODE WITH HARRY............................
// POLIMORPHISM CONCEPT......
/*
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<iomanip>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout<<"Variable of BaseClass is "<<var_base<<endl;
    }
};

class DerivedClass: public BaseClass // Polymorphism.................
{
public:
    int var_derived;
    void display()
    {
        cout<<"Variable of BaseClass is "<<var_base<<endl;
        cout<<"Variable of DerivedClass is "<<var_derived<<endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    // pointing base class pointer to derived class pointer..............
    base_class_pointer = &obj_derived;

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134; // will through an error.........
    base_class_pointer->display();
    // for changing................
    base_class_pointer->var_base = 3400;
    base_class_pointer->display();

    //Now for child class display and var_derived................
    DerivedClass *derive_class_pointer = &obj_derived;
    //Base Class variables can also be changed through derived class by using child...........
    derive_class_pointer->var_base = 198;
    derive_class_pointer->var_derived = 98;
    derive_class_pointer->display();

    return 0;
} */

// VIRTUAL BASE CLASS CONCEPT........
/*
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;

    // default behaviour to override.....................
    virtual void display()
    {
        cout<<"Variable of BaseClass is "<<var_base<<endl;
    }
};

class DerivedClass: public BaseClass // Polymorphism.................
{
public:
    int var_derived = 2;
    void display()
    {
        cout<<"Variable of BaseClass is "<<var_base<<endl;
        cout<<"Variable of DerivedClass is "<<var_derived<<endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    //int n; cin>>n;
    //base_class_pointer->var_base =  n;
    base_class_pointer->display();

} */


#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<iomanip>
using namespace std;

class BaseClass
{
public:
    int var_base;
    //Constructor..........
    BaseClass()
    {
        cout << "Me BaseClass...." << endl;
    }
    void display()
    {
        cout<<"Variable of BaseClass is "<<var_base<<endl;
    }
};

class DerivedClass: public BaseClass // Polymorphism.................
{
public:
    int var_derived;
    //Constructor.............
    DerivedClass()
    {
        cout << "Me DerivedClass........." << endl;
    }
    void display()
    {
        cout<<"Variable of BaseClass is "<<var_base<<endl;
        cout<<"Variable of DerivedClass is "<<var_derived<<endl;
    }
};

int main()
{
    DerivedClass obj1;
    cout << "Time:-" << endl;
    BaseClass *obj = &obj1;
}

















