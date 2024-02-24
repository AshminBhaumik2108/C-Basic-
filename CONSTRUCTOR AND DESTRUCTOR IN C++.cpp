// CONSTRUCTOR WITH PARAMETER:-
/*
#include<iostream>
#include<string>
using namespace std;

class fraction
{
    private:
        int num1, num2, num3;
    public:
        // CONSTRUCTOR PARAMATRIZED:-
        fraction(int n1, int n2): num1(n1), num2(n2)
        {
            cout<<num1<<" * "<<num2<<endl;
        }

        // CONSTRUCTOR OVERLOADING:-
        fraction(int n1 = 0, int n2 = 0, int n3 = 0): num1(n1), num2(n2), num3(n3) // THE DEFAULT PARAMETERS ARE 0
        {
            cout<<num1<<" * "<<num2<<" * "<<num3<<endl;
        }

        // DECONSTRUCTOR (ALWAYS PRINTS AT THE LAST)
        ~fraction()
        {
            num1 = 34;
            cout<<num1<<" * "<<num2<<endl;
        }

        void mul()
        {
            cout<<"Multiplication1: "<<num1*num2<<endl;
        }

};

int main()
{
    fraction obj(21, 45, 67); // fraction obj; (DEFAULTS ARE 0)
    obj.mul();
    return 0;
}*/
/*
#include<iostream>
using namespace std;

class Ashmin
{
private:
    string Name, College;
    int Roll;
public:
    Ashmin(): Name("Ashmin"), Roll(32), College("LOVELY PROFESSIONAL UNIVERSITY..."){}

    //CONSTRUCTOR FOR User defined values....
    Ashmin(string name, int roll, string college): Name(name), Roll(roll), College(college){}

    //Destructor for the Last output........
    ~Ashmin()
    {
        cout<<"This is my name: "<<Name<<endl;
    }

    //Displaying the function.....
    void Display()
    {
        cout<<"Name: "<<Name<<endl;
        cout<<"Roll: "<<Roll<<endl;
        cout<<"College: "<<College<<endl;
    }

};

int main()
{
    Ashmin obj;
    obj.Display();
    cout<<endl;
    Ashmin obj1("Bhaumik", 45, "ULLU UNIVERSITY.....");
    obj1.Display();
    cout<<endl;

    return 0;
}
 */

 // COPY CONSTRUCTORS....

#include<iostream>
using namespace std;

class Ashmin
{
private:
    string Name;
public:
    Ashmin(string name): Name(name) {}

    Ashmin(Ashmin &obj)
    {
        Name = obj.Name + " Bhaumik";
    }

    void show()
    {
        cout<<Name<<endl;
    }
};

int main()
{
    Ashmin obj("Ashmin");
    obj.show();
    Ashmin obj1(obj);
    obj1.show();
}





























































