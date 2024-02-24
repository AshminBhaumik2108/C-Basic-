/*
#include<iostream>
using namespace std;
int main()
{
    int roll_no = 30;  l
    long long int phone_no = 123456789012;
    char mahi = 'Rahul';
    string nahi = "Rahul";
    cout<<"The Roll No.: "<<roll_no;
    cout<<"\nThe Phone No.: "<<phone_no;
    cout<<"\nThe Name with char: "<<mahi;
    cout<<"\nThe Name with String: "<<nahi;
}

#include<iostream>
using namespace std;
int main()
{
    int a=10, b=20, c=30;
    if (a>b && a>c) {cout<<"A is greater";}
    else if (b>a && b>c) {cout<<"B is greater";}
    else if(c>a && c>b) cout<<"C is greater";
    else cout<<"All are Equal";
}


#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter n1 numbers: ";
    cin>>a;
    cout<<"Enter n2 numbers: ";
    cin>>b;
    cout<<a<<"+"<<b<<" = "<<a+b<<endl;
    cout<<a<<"-"<<b<<" = "<<a-b<<endl;
    cout<<a<<"*"<<b<<" = "<<a*b<<endl;
    cout<<a<<"/"<<b<<" = "<<a/b<<endl;
    cout<<a<<"%"<<b<<" = "<<a%b<<endl;
}


#include<iostream>
using namespace std;

class Arthematic
{
private:
    int num1, num2, a,b ;
public:
    Arthematic(int num1, int num2)
    {
        a = num1; b = num2;
    }
void Areth()
{
    cout<<a<<"+"<<b<<" = "<<a+b<<endl;
    cout<<a<<"-"<<b<<" = "<<a-b<<endl;
    cout<<a<<"*"<<b<<" = "<<a*b<<endl;
    cout<<a<<"/"<<b<<" = "<<a/b<<endl;
    cout<<a<<"%"<<b<<" = "<<a%b<<endl;
}
};

int main()
{
    int a, b;
    cout<<"Enter n1 numbers: ";
    cin>>a;
    cout<<"Enter n2 numbers: ";
    cin>>b;
    Arthematic eth(a, b);
    eth.Areth();
}

#include<iostream>
using namespace std;

class Arthematic
{
private:
    int a,b;

public:
void Areth(int a1, int b1)
{a=a1;
b=b1;
    cout<<a<<"+"<<b<<" = "<<a+b<<endl;
    cout<<a<<"-"<<b<<" = "<<a-b<<endl;
    cout<<a<<"*"<<b<<" = "<<a*b<<endl;
    cout<<a<<"/"<<b<<" = "<<a/b<<endl;
    cout<<a<<"%"<<b<<" = "<<a%b<<endl;
}
};

int main()
{
    int c, d;
    cout<<"Enter n1 numbers: ";
    cin>>c;
    cout<<"Enter n2 numbers: ";
    cin>>d;
    Arthematic eth;
    eth.Areth(c, d);
} */

// ENter the name and ID of number of employees:-
/*
#include<iostream>
using namespace std;
class emp
{
int id; char name[40];
public:
void getdata()
{
    cout<<"\n Enter the id of employee: ";
    cin>>id;
    cout<<"Enter Name: ";
    cin.ignore();
    cin.getline(name, 40); // Not working- string name;  getline(cin, name);
}
void putdata()
{
    cout<<"\n Entered ID is :"<<id;
    cout<<"\n Entered NAME is :"<<name;
}
};
int main()
{
    int cou;
    cout<<"Enter number of employees : ";
    cin>>cou;
    emp obj[cou];
    for(int i=0;i<cou;i++)
    {
        cout<<"\n Enter details of employee "<<i+1;
        obj[i].getdata();
    }
    for(int i=0;i<cou;i++)
    {
        cout<<"\nDetails of the employee number "<<i+1;
        obj[i].putdata();
    }
 */

 // FLOAT NUMBERS:-
/*
 #include<iostream>
 #include<iomanip>
 using namespace std;

 struct Ashmin
 {
     string name;
     int Roll_No;
     int a[5];
     int result=0;
 } A;

 int na() {cout<<"Name: "<<A.name;}

 int main()
{
    cout<<"Enter Name: "; cin>>A.name;
    cout<<"Enter Roll_No: "; cin>>A.Roll_No;
    cout<<"Enter Name: "; cin>>A.name;
    //cout<<"Enter Roll_No: "; cin>>A.Roll_No;
    //cout<<"Enter Numbers: "; for(int i=0; i<5; i++) {cin>>A.a[i];}
    //for(int i=0; i<5; i++) {A.result += A.a[i];}
    //cout<<"Result: "<<A.result;
    na();
    return 0;
} */

// ENUM......
/*
#include<iostream>
using namespace std;

enum weeks
{
    January=1, February, March, April, May, June,
    July, August, September, October, November, December
};

int main()
{

    weeks w;
    //string Mon;
    //cin>>w;
    cout<<w;
} */
/*
#include<iostream>
using namespace std;


int main()
{
    void f1();
    f1();
    f1();
    f1();
}
void f1()
{
    int static c=0;
    cout<<c++<<" ";
}

#include<iostream>
using namespace std;

class A
{
private:
    int num = 0;
public:
    int setnum();
    int getnum();
};

int A::setnum() {cout<<"Enter Number: "; cin>>num; }
int A::getnum() {cout<<"Entered number is: "<<num; }

int main()
{
    A a;
    a.setnum();
    a.getnum();
    return 0;
}

#include<iostream>
using namespace std;

//void table(int x, int y);
int c = 0;
int main()
{
    int num;
    cout<<"Enter the table num: "; cin>>num;
    void table(int); //void table(int x);
    table(num);
    cout<<"\nHello World!";
}

void table(int x)
{
    for(int i=1; i<=10; i++) {cout<<x<<" x "<<i<<" = "<<x*i<<endl;}
}


#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    string name;
    int age;
    char gender[10];

public:
    void initialize() {
        cin >> name;
        cin >> age;
        cin >> gender;
    }

    void display() {

        cout << "Age: " << age << endl;
        cout << "Gender: " << uppercase << gender << endl;
    }
};

int main() {
    Person person;
    person.initialize();
    person.display();
    return 0;
}*/


// Converting lower to higher case or higher to lowercase.....
/*
#include<iostream>
#include<cstring>
using namespace std;

class Person
{
    private:
        string name;
        int age;
        string gender;
    public:
        void get()
        {
            getline(cin, name);
            cin>>age;
            cin.ignore();
            getline(cin, gender);
        }
        void upper()
         {
            for(int i=0;i<name.length();i++)
            {
                name[i]=toupper(name[i]);
            }
            for(int i=0;i<gender.length();i++)
            {
                gender[i]=toupper(gender[i]);
            }
        }
        void display()
        {
            cout<<name;
            cout<<" "<<age;
            cout<<" "<<gender;
        }

};
int main()
{
	Person details;
    details.get();
    details.upper();
    details.display();
} */

// pointors:-
/*
#include<iostream>
using namespace std;

int main()
{
    int x = 4;
    void *ptr;
    ptr = &x;
    cout<<*(int *)ptr;
}*/

// POINTER TO A DATA MEMBER:-
/*
#include<iostream>

using namespace std;

class A
{
public:
    int x,y;
    void print();
};

void A::print()
{
    cout<<x<<" "<<y;
}

int main()
{
//Pointer to member variable x of class A
int A::* p1 = &A :: x;
//Pointer to member variable y of class A
int A::* p2 = &A :: y;
//Creating an object of class A
A ob;
ob.*p1 = 10;
ob.*p2 = 10;
cout<<"The value of x is : " << ob.*p1 << "\n";
cout<<"The value ot y is : " << ob.*p2 << "\n";
cout<<"Print: ";
ob.print();
} */

//OBJECT AS A POINTER and DATA MEMBERS AS POINTORS:-
/*
#include<iostream>
using namespace std;

class A
{
public:
    int x,y;
    void print();
};

void A::print()
{
    cout<<x<<" "<<y;
}

int main()
{
    int A::* p1 = &A :: x;
    int A::* p2 = &A :: y;
    A *ob;
    ob->*p1 = 10;
    ob->*p2 = 10;
    cout<<"The value of x is : " << ob->*p1 << "\n";
    cout<<"The value ot y is : " << ob->*p2 << "\n";
    cout<<"Print: ";
    ob->print();
}
*/

//OBJECTS AS A POINTER:-
/*
#include<iostream>
using namespace std;

class A
{
public:
    int x, y;
    void get()
    {
        cout<<"*: ";
        cin>>x>>y;

    }
    void print()
    {
        cout<<x<<"*"<<y;
    }
};

int main()
{
    A *ptr;
    ptr = new A;
    ptr->get();
    ptr->print();
} */

//OBJECT AS POINTERS OF CLASS AS WELL AS DIRECT CLASS VALUES:-
/*
#include<iostream>
using namespace std;

class A
{
public:
    int x, y;

    A(int n, int p)
    {
        x = n;
        y = p;
    }
    void print()
    {
        cout<<x<<" * "<<y;
    }
};

int main()
{
    A box(5, 6);
    A *obj = &box;
    //obj = new A;
    obj->print();

}
*/
//POINTER TO A MEMBER FUNCTION:-
/*
#include<iostream>
using namespace std;

class A
{
public:
    int x,y;
    void print();
};

void A::print()
{
    cout<<x<<" "<<y;
}

int main()
{
    int A::*p1 = &A::x;
    int A::*p2 = &A::y;
    A *ob;
    ob = (A*)malloc(sizeof(A));
    ob->*p1 = 10;
    ob->*p2 = 10;
    cout<<"The value of x is : " << ob->*p1 << "\n";
    cout<<"The value ot y is : " << ob->*p2 << "\n";
    cout<<"Print: ";
    ob->print();
}
*/

// INSERTING THROUGH INSERT FUNCTION:-

/*
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string n, b;
    cout<<"*: ";
    cin>>n;
    cout<<"*: ";
    cin>>b;
    //n.insert(2, b, 0, 6);
    //cout<<n;

    //n.erase(4, 5); //Ashmumik
    //cout<<n;

    n.append(b);
    cout<<n;

    n.append(b, 1,2);
    cout<<endl<<"With range: "<<n;

}*/

// FIND() OR RFIND() OR FIND_LAST_OF() :-
/*
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s1 = "zRam";

    cout<<"FUNCTION -> find_last_of(): "<<s1.find_first_of("maR")<<endl; //
}


// abcdef   afa
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a(10);
    for(int i=0; i<10; i++)
    {
        cout<<"*: "; cin>>a[i];
    }
    for(auto i : a)
    {
        cout<<i<<" ";
    }
    int p, po;
    cout<<endl<<"Enter position: "; cin>>p;
    cout<<"Enter element: "; cin>>po;
    a.insert(a.begin() + (p-1), po);
    for(auto i=a.begin(); i!=a.end(); i++)
    {
        cout<<*i<<" ";
    }
}
































