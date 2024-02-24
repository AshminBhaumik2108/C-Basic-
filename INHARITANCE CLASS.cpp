// INHARITEANCE OF CLASS FUNCTION WITH DIFFERENT NAMES......
/*
#include<iostream>
using namespace std;

class A
{
public:
    void get()
    {
        cout<<"My name is Ashmin"<<endl;
    }
};

class B: public A
{
public:
    void get1()
    {
        cout<<"LOVELY UNIVERSITY"<<endl;
    }
};

int main()
{
    B obj;
    obj.get();
    obj.get1();
} */

// INHARITANCE OF FUNCTIONS WITH SAME FUNCTION NAMES..............
/*
#include<iostream>
using namespace std;

class A
{
public:
    void get()
    {
        cout<<"My name is Ashmin"<<endl;
    }
};

class B: public A
{
public:
    void get()
    {
        cout<<"LOVELY UNIVERSITY"<<endl;
    }
};

int main()
{
    B obj;
    obj.A::get();
    obj.B::get();
} */

// VARTUAL 'A' CLASS IN C++......
/*
 #include<iostream>
using namespace std;

class A
{
public:
    void get()
    {
        cout<<"ASHMIN"<<endl;
    }
};

class B1:virtual public A
{
public:
    void getB1()
    {
        cout<<"LOVELY UNIVERSITY IN B1"<<endl;
    }
};

class B2: virtual public A
{
public:
    void getB2()
    {
        cout<<"LOVELY UNIVERSITY IN B2"<<endl;
    }
};

class C: public B1, public B2
{
public:
    void getC()
    {
        cout<<"LOVELY PROFESSIONAL UNIVERSITY"<<endl;
    }
};

int main()
{
    C obj;
    obj.get();
} */
/*

#include<iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"I am the member of class A."<<endl;
    }

    ~A()
    {
        cout<<"I am the suspended member of class A."<<endl;
    }
};

class B: public A
{

}; */

// USING IN LEVEL :-
/*
#include<iostream>
using namespace std;

class A
{
public:
    void member()
    {
        cout<<"Member of class A."<<endl;
    }

    void get()
    {
        cout<<"Get of class A."<<endl;
    }
};


class B: public A
{
public:
    void member()
    {
        cout<<"Member of class B."<<endl;
    }

    void get()
    {
        cout<<"Get of class B."<<endl;
    }
};

int main()
{
    B obj;
    obj.A::member();
    obj.B::member();
    obj.A::get();
    obj.B::get();
} */

// VARTUAL 'A' CLASS IN C++......
/*
#include<iostream>
using namespace std;

class A
{
public:
    void get()
    {
        cout<<"ASHMIN"<<endl;
    }
};

class B1: virtual public A
{
public:
    void getB1()
    {
        cout<<"LOVELY UNIVERSITY IN B1"<<endl;
    }
};

class B2: virtual public A
{
public:
    void getB2()
    {
        cout<<"LOVELY UNIVERSITY IN B2"<<endl;
    }
};

class C: public B1, public B2
{
public:
    void getC()
    {
        cout<<"LOVELY PROFESSIONAL UNIVERSITY"<<endl;
    }
};

int main()
{
    C obj;
    obj.get();
    obj.getB1();
    obj.getB2();
    obj.getC();
} */



#include<iostream>
using namespace std;

class A
{
public:
    void get()
    {
        cout<<"ASHMIN"<<endl;
    }
};

class B1: protected A
{
public:
    void getB1()
    {
        A obj;
        obj.get();
        cout<<"LOVELY UNIVERSITY IN B1"<<endl;
    }
};

int main()
{
    B1 obj;
    obj.getB1();
}


















