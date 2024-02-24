/*
#include<iostream>
using namespace std; // COUT and CIN will not work...
int main()
{
    int num1;
    cout<<"\nEnter my Name:\n"; //To Display - Insertion
    cin>>num1; // To take Input - Extraction
    cout<<"My Name is: "<<num1;
} */


// OBJECTS AND CLASSES IN C++.....

/*
#include<iostream>
#include<string>
using namespace std;

class Phone
{
    string name_1, name_2;
    public:
    Phone(string name, string name1){
        name_1 = name;
        name_2 = name1;
    }
    void NameCall()
    {
        cout<<"My name is: "<<name_1<<endl;
    };
    void FriendCall()
    {
        cout<<"My Friend name is: "<<name_2<<endl;
    };
};

int main()
{
    string a,b,inp1,inp2;
    cout<<"Enter inp1: ";
    cin>>inp1;
    cout<<"Enter inp2: ";
    cin>>inp2;
    Phone makeup(inp1, inp2);
    makeup.NameCall();
    makeup.FriendCall();
}*/


// Structures......
/*
#include<iostream>
#include<string>
using namespace std;

struct employee
{
    int emp_Id;
    string emp_Name;
};

int main()
{
    struct employee Ashmin;
    Ashmin.emp_Id = 1;
    Ashmin.emp_Name = "Ashmin Bhaumik";
    cout<<"\nEmployee Id is: "<<Ashmin.emp_Id;
    cout<<"\nEmployee Name is: "<<Ashmin.emp_Name;

}*/

// Structures using Typedef.....
/*
#include<iostream>
#include<string>
using namespace std;

typedef struct employee
{
    int emp_Id;
    string emp_Name;
} Emp;

int main()
{
    Emp Ashmin;
    Ashmin.emp_Id = 1;
    Ashmin.emp_Name = "Ashmin Bhaumik";
    cout<<"\nEmployee Id is: "<<Ashmin.emp_Id;
    cout<<"\nEmployee Name is: "<<Ashmin.emp_Name;

}*/

// UNIONS.......
/*
#include<iostream>
#include<string>
using namespace std;

typedef struct employee
{
    int emp_Id;
    string emp_Name;
} Emp;
union Money
{
    int rice;
    int cars;
    int rupee;
};
int main()
{
    Emp Ashmin;
    Ashmin.emp_Id = 1;
    Ashmin.emp_Name = "Ashmin Bhaumik";
    union Money m1;
    m1.rupee = 120000;
    cout<<"\nEmployee Id is: "<<Ashmin.emp_Id;
    cout<<"\nEmployee Name is: "<<Ashmin.emp_Name;
    cout<<"\nEmployee Moneys is: "<<m1.rupee;

}*/

// ENUMERATIONS......
/*
#include<iostream>
#include<string>
using namespace std;

typedef struct employee
{
    int emp_Id;
    string emp_Name;
} Emp;
union Money
{
    int rice;
    int cars;
    int rupee;
};
int main()
{
    enum Meal{Breakfast, Lunch, Dinner};
    Meal m = Breakfast;
    Emp Ashmin;
    Ashmin.emp_Id = 1;
    Ashmin.emp_Name = "Ashmin Bhaumik";
    union Money m1;
    m1.rupee = 120000;
    cout<<"\nEmployee Id is: "<<Ashmin.emp_Id;
    cout<<"\nEmployee Name is: "<<Ashmin.emp_Name;
    cout<<"\nEmployee Moneys is: "<<m1.rupee;
    cout<<"\nEmployee Food is: "<<m;

}
*/


// CONVERTING TO OTHER SCALES OF TEMPERATURE..............

/*
#include<iostream>
#include<iomanip>
using namespace std;

class TemperatureConverter
{
    private:
      double celsius;
    public:
      void setCelsius(double temp)
      {
          celsius = temp;
      }

      double getCelsius();
      double getFahrenheit();
      double getKelvin();
};

double TemperatureConverter::getCelsius()
{
    return celsius;
}

double TemperatureConverter::getFahrenheit()
{
    return celsius * 9/5 + 32;  // Corrected the formula
}

double TemperatureConverter::getKelvin()
{
    return celsius + 273.15;
}

int main()
{
    TemperatureConverter c;
    double celsius;

    cin >> celsius;
    c.setCelsius(celsius);
    double a = c.getFahrenheit();
    double b = c.getKelvin();

    cout << "Temperature in Fahrenheit: " << fixed << setprecision(2) << a << endl;
    cout << "Temperature in Kelvin: " << fixed << setprecision(2) << b << endl;
}
*/

// Armstrong Number...............

/*

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

inline bool isArmstrong(int number)
{
    int originalNum = number;
    int sum=0;
    string num = to_string(number);

    int numDigits = num.length();

    while(number>0)
    {
    int digit = number%10;
    sum+= pow(digit, numDigits);
    number /= 10;
    }
    return sum==originalNum;
}

 inline void printFactors(int number)
{
    //cout<<"he";
    for(int i=1; i<=number; i++)
    {
        if(number%i == 0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
  //  printFactors(5);
    if(isArmstrong(n))
    {
    cout<<n<<" is an Armstrong number."<<endl;
    printFactors(n);
    }
    else
    {
    cout<<n<<" is not an Armstrong number."<<endl;
    }


} */

// Function Overloading..........
/*
#include<iostream>
using namespace std;

class load
{
public:
    int sum(int, int);
    int sum(int, int, int);
};

int load::sum(int a, int b, int c)
{
    return a+b+c;
}

int load::sum(int a, int b)
{
    return a+b;
}

int main()
{
    load ob;
    int a, b, c;
    cin>>a>>b>>c;
    int sums = ob.sum(a,b,c);
    cout<<sums<<endl;
} */

// FRIEND FUNCTION IN C++................
/*
#include<iostream>
#include<iomanip>
using namespace std;

class Car
{
private:
    int pwd = 1298;
public:
    friend double data(Car);
};

double data(Car ob)
{
    ob.pwd = 1299;
    return ob.pwd;
}

int main()
{
    Car c;
    double out = data(c);
    cout<<fixed<<setprecision(2)<<out<<endl;
} */
/*
#include<iostream>
using namespace std;

class A
{
private:
    int sum = 20;
public:
    friend class B;
};

class B
{
public:
    int s(A obj)
    {
        obj.sum = obj.sum + 20;
        cout<<obj.sum<<endl;
    }
};

int main()
{
    A o1;
    B o2;
    o2.s(o1);
}
*/
//Friend Class in C++

/*
#include<iostream>
using namespace std;
class A
{double accno;
public:
A ( ) // constructor of class A
{accno= 12345;}
friend class B; //B is another class and is friend of a class
}; //closing class A
class B
{public:
void show (A ob) //ob is object created for class A
{ cout<<"private details of class A: ";
cout<<ob.accno; }
void show1 (A ob) //ob is object created for class A
{ cout<<"\n\n private details of class A: ";
ob.accno = ob.accno+10;
cout<<ob.accno; }
};
int main ()
{A ob1;
B ob2;
ob2.show (ob1); //ob2 (object of class B) will print private details of class A
ob2.show1 (ob1);
return 0;} */

// HOW TO SET DEFAULT CONSTRUCTOR IN C++....
/*
#include<iostream>
using namespace std;

class Complex {
public:
    float real;
    float imag;

    Complex() : real(0), imag(0) {}

    ~Complex(){

    }

   void setvalue() {
        cin >> real;
        cin >> imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    void sum(Complex c1, Complex c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.setvalue();

    c2.setvalue();

    cout << "Sum of two complex numbers is ";
    c3.sum(c1, c2);
    c3.display();

    return 0;
} */
/*
#include<iostream>
#include<iomanip>
using namespace std;

class Height
{
    private:
      int feet;
      double inches;
    public:
      Height(): feet(0), inches(0.0) {};

      void setHeight(int f)
      {
          feet = f;
          inches = 0.0;
      }

      void setHeight(int f,double in)
      {
          feet = f;
          inches = in;
      }

    //   void setHeight(double f)
    //   {
    //       feet = static_cast<int>(f);
    //       inches = f-feet;
    //   }

      void display() const
      {
          cout<<"Feet="<<feet<<" "<<"inches="<<inches<<endl;
      }
};

int main()
{
    Height h1, h2, h3;
    int f;
    double i, i1;
    cin>>f;
    h1.setHeight(f);
    cin>>i;
    int HI = static_cast<int>(i);
    i1 = (i-HI)*12;
    h2.setHeight(HI, i1);
    cin>>f>>i;
    h3.setHeight(f, i);
    h1.display();
    h2.display();
    h3.display();
}*/

//DEFINE TWO CONSTRUCTORS AND A COPY CONSTRUCTOR TOGETHER:-
/*
#include <iostream>
#include <iomanip>
using namespace std;

class Student {
    public:
        int rollNumber;
        double fee;
    Student() {
        rollNumber = 0;
        fee = 0.0;
        }

    Student(int roll, double f) {
        rollNumber = roll;
        fee = f;
        }

    Student(const Student &other) {
        rollNumber = other.rollNumber;
        fee = other.fee;
    }
};

int main() {
    int roll;
    double fee;
    cin >> roll >> fee;
    Student student1(roll, fee);
    cout << "Student Details:" << endl;
    cout << student1.rollNumber << " " << fixed << setprecision(2) << student1.fee << endl;
    Student student2 = student1;
    cout << "Copied Student Details:" << endl;
    cout << student2.rollNumber << " " << fixed << setprecision(2) << student2.fee << endl;
    return 0;
}
*/
// Problem Statement
/*
Ravi is creating a program for sales calculation that takes a tax rate (TAX_RATE) and an item cost (cost) as inputs.
The program should calculate and display the sales tax and total cost in two scenarios: one with a default tax rate of 0.05 and
another with a custom tax rate entered by the user.

The program defines a Sale class with member functions for calculations and a destructor that sets the tax rate to 0.5.
However, the custom tax rate provided by the user remains unaffected.
The output should clearly present the calculated sales tax and total cost for both scenarios.

Formula:

Sales Tax Amount = Item cost * Tax rate

Total Amount = Item cost + Sales tax amount

Input format :
The first line consists of a tax rate as a double value.

The second line consists of the cost of the item as a double value.

Output format :
The sales tax amount is displayed as a double value.

The total value of the sale is displayed as a double value.

Refer to the sample output for the formatting specifications.

Code constraints :
The sales tax amount and total value will be displayed with precision according to the input values.

Sample test cases :
Input 1 :
0.65
1000
Output 1 :
The amount of sales tax is 50
The total of the sale is 1050
The amount of sales tax with custom TAX RATE is 650
The total of the sale is 1650
The amount of sales tax with default tax rate is 500
The total of the sale is 1500 */

// ANS:-
/*
#include <iostream>
#include <iomanip>

class Sale {
private:
    double taxRate;
    double itemCost;

public:
    // Constructor
    Sale(double rate, double cost) {
        taxRate = rate;
        itemCost = cost;
    }

    // Destructor
    ~Sale() {
        taxRate = 0.05; // Set the default tax rate
    }

    // Calculate and display sales tax and total cost
    void calculateAndDisplay() {
        double salesTax = itemCost * taxRate;
        double totalCost = itemCost + salesTax;

        // Display sales tax and total cost
        std::cout << "The amount of sales tax is " << std::fixed << std::setprecision(2) << salesTax << std::endl;
        std::cout << "The total of the sale is " << std::fixed << std::setprecision(2) << totalCost << std::endl;
    }
};

int main() {
    double customTaxRate, itemCost;

    // Input custom tax rate and item cost
    std::cin >> customTaxRate >> itemCost;

    // Create a Sale object with custom tax rate
    Sale saleWithCustomTax(customTaxRate, itemCost);

    // Calculate and display sales tax and total cost with custom tax rate
    saleWithCustomTax.calculateAndDisplay();

    // Create a Sale object with default tax rate
    Sale saleWithDefaultTax(0.05, itemCost);

    // Calculate and display sales tax and total cost with default tax rate
    saleWithDefaultTax.calculateAndDisplay();

    return 0;
} */


// CALCULATING SALES TAX USING CONSTRUCTOR AND DESTRUCTOR:-
/*
#include <iostream>
#include <iomanip>

class Sale {
private:
    double taxRate;
    double itemCost;

public:
    // Constructor
    Sale(double rate, double cost) {
        taxRate = rate;
        itemCost = cost;
    }

    // Destructor
    ~Sale() {
        taxRate = 0.05; // Set the default tax rate
    }

    // Calculate sales tax
    double calculateSalesTax() {
        return itemCost * taxRate;
    }

    // Calculate total cost
    double calculateTotalCost() {
        return itemCost + calculateSalesTax();
    }
};

int main() {
    double customTaxRate, itemCost;

    // Input custom tax rate and item cost
    std::cin >> customTaxRate >> itemCost;

    // Create a Sale object with custom tax rate
    Sale saleWithCustomTax(customTaxRate, itemCost);
    double customSalesTax = saleWithCustomTax.calculateSalesTax();
    double customTotalCost = saleWithCustomTax.calculateTotalCost();

    // Create a Sale object with default tax rate
    Sale saleWithDefaultTax(0.05, itemCost);
    double defaultSalesTax = saleWithDefaultTax.calculateSalesTax();
    double defaultTotalCost = saleWithDefaultTax.calculateTotalCost();

    // Output custom tax calculations
    std::cout << "The amount of sales tax is " << std::fixed << std::setprecision(0) << customSalesTax << std::endl;
    std::cout << "The total of the sale is " << std::fixed << std::setprecision(0) << customTotalCost << std::endl;

    // Output default tax calculations
    std::cout << "The amount of sales tax with custom TAX RATE is " << std::fixed << std::setprecision(0) << customSalesTax << std::endl;
    std::cout << "The total of the sale is " << std::fixed << std::setprecision(0) << defaultTotalCost << std::endl;

    // Output default tax calculations
    std::cout << "The amount of sales tax with default tax rate is " << std::fixed << std::setprecision(0) << defaultSalesTax << std::endl;
    std::cout << "The total of the sale is " << std::fixed << std::setprecision(0) << defaultTotalCost << std::endl;

    return 0;
}*/

// FILE HANDELING USING C++:-
/*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        sum += num;
    }

    // Open a file named "sample.txt" for writing
    ofstream outFile("sample.txt");

    if (outFile.is_open()) {
        // Write the sum to the file
        outFile << sum << endl;

        // Close the file
        outFile.close();
    } else {
        cout << "Error opening the file." << endl;
    }

    // Output the sum to the console
    cout << sum << endl;

    return 0;
}
*/



#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string userInput;

    getline(cin, userInput);

    ofstream outFile("sample.txt", ios::app);

    if (outFile.is_open()) {
    outFile << "Time is a Great Teacher BUT \
    Unfortunately It Kills All Its Pupils " <<userInput;
    outFile.close();
    cout << "Data appended successfully" << endl;
    }

    ifstream inFile("sample.txt");

    if (inFile.is_open()) {
    string word;
    while (inFile >> word) {
    cout << word << " ";
    }
    inFile.close();
    } else {
    cout << "Error reading the file." << endl;
    }

    return 0;
}

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename;

    // Prompt the user to enter the file name
    cout << "Enter the name of the file: ";
    cin >> filename;

    // Open the file
    ifstream inFile(filename);

    if (inFile.is_open()) {
        cout << "File '" << filename << "' opened successfully." << endl;

        // You can perform any operations you need with the open file here.
        // For example, you can read the contents of the file or process it.

        // Close the file when you're done with it
        inFile.close();
    } else {
        cout << "Error opening the file '" << filename << "'." << endl;
    }

    // Display that the file is closed successfully
    cout << "File '" << filename << "' closed successfully." << endl;

    return 0;
}

Problem Statement



Sara is developing a program for a mathematics teacher who wants to generate practice exercises for their students. The teacher wants a program that can generate a file with a specified number of practice questions. Each question should contain a unique positive integer from 1 to the given count.



Write a program that takes an integer, representing the count of practice questions, as input. The program should generate a file named "numbers.txt" and populate it with the practice questions. Each question should be written on a separate line and should consist of a unique positive integer from 1 to the given count. After successfully setting up the file, the program should print "Success" to indicate the completion of the task.



Note: This is a sample question asked in an HCL interview.

Input format :
The input contains an integer representing the count of practice questions (numberCount).

Output format :
If the setup of the practice questions and file is successful, the program will print "Success" to the console.



Refer to the sample output for the formatting specifications.

Code constraints :
The input value for numberCount should be within the range of integer values.

The program assumes that the file "numbers.txt" is writable in the current directory.

Sample test cases :
Input 1 :
10
Output 1 :
Success
Input 2 :
-25
Output 2 :
Success

Write a code in C++ according to Online compiler

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int numberCount;

    // Input the count of practice questions
    cin >> numberCount;

    // Open the file "numbers.txt" for writing
    ofstream outFile("numbers.txt");

    if (outFile.is_open()) {
        // Generate and write the practice questions to the file
        for (int i = 1; i <= numberCount; i++) {
            outFile << i << endl;
        }

        // Close the file
        outFile.close();

        // Print "Success" to indicate completion
        cout << "Success" << endl;
    } else {
        cout << "Unable to setup." << endl;
    }

    return 0;
}


#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n1, n2;

    // Input two numbers
    cin >> n1 >> n2;

    // Calculate the sum
    int sum = n1 + n2;

    // Open the file "sum.txt" for writing
    ofstream outFile("sum.txt");

    if (outFile.is_open()) {
        // Write the result to the file
        outFile << "Sum successfully written to the file 'sum.txt'." << endl;
        outFile << "Sum: " << sum << endl;

        // Close the file
        outFile.close();

        cout << "Sum successfully written to the file 'sum.txt'." << endl;
        cout << "Sum: " << sum << endl;
    } else {
        cout << "Error opening the file 'sum.txt'." << endl;
    }

    return 0;
}

Problem Statement



Rajesh is tasked with developing a program to process a list of integers from user input. The program should read the number of integers n, followed by the values. It should then categorize these integers into two separate files: even numbers in one file ("even.txt") and odd numbers in another file ("odd.txt"). Finally, the program should display the contents of both files, one after the other.



Note: This is a sample question asked in a Capgemini interview.

Input format :
The first line of input consists of the number of inputs 'n'.

The next line consists of 'n' inputs separated by space.

Output format :
The output displays the even and odd numbers on a separate line.



Refer to the sample output for format specifications.

Code constraints :
1 <= n <= 100

Sample test cases :
Input 1 :
10
1 2 3 4 5 6 7 8 9 10
Output 1 :
2 4 6 8 10
1 3 5 7 9
Input 2 :
8
34 6 93 45 43 11 63 12
Output 2 :
34 6 12
93 45 43 11 63

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    // Open files for even and odd numbers
    ofstream evenFile("even.txt");
    ofstream oddFile("odd.txt");

    if (!evenFile.is_open() || !oddFile.is_open()) {
        cout << "Error opening files." << endl;
        return 1; // Exit with an error code
    }

    // Process numbers and write them to appropriate files
    for (int num : numbers) {
        if (num % 2 == 0) {
            evenFile << num << " ";
        } else {
            oddFile << num << " ";
        }
    }

    // Close files
    evenFile.close();
    oddFile.close();

    // Open and display even numbers
    ifstream evenInFile("even.txt");
    if (evenInFile.is_open()) {
        string evenLine;
        getline(evenInFile, evenLine);
        evenInFile.close();
        cout << evenLine << endl;
    } else {
        cout << "Error opening even file." << endl;
    }

    // Open and display odd numbers
    ifstream oddInFile("odd.txt");
    if (oddInFile.is_open()) {
        string oddLine;
        getline(oddInFile, oddLine);
        oddInFile.close();
        cout << oddLine << endl;
    } else {
        cout << "Error opening odd file." << endl;
    }

    return 0;
}


Problem Statement



You are tasked with developing a Phone Book application that allows users to manage their contacts. The application should provide the following functionality:



Create a phone book: This operation creates a new phone book file to store contacts.

Add a contact: This operation allows users to add a new contact to the phone book.

Delete the phone book: This operation deletes the phone book file, removing all contacts.

Read the phone book: This operation reads and displays the contacts stored in the phone book.



Note: This is a sample question asked in a Wipro interview.

Input format :
The user will input their choice from the provided menu options:

1: Create Phone Book

2: Add Contact

3: Delete Phone Book

4: Read Phone Book

0: Exit the application

For the "Add Contact" option, the user will be prompted to enter the contact's name and number.

Output format :
The output displays feedback messages based on the chosen operation:



Phone book creation status: "Phone book created successfully" or "Unable to create a phone book."

Contact addition status: "Contact added successfully" or "Unable to add contact. Phone book not found."

Phone book deletion status: "Phone book deleted successfully" or "Unable to delete phone book."

Phone book reading output: The contacts stored in the phone book will be displayed.



Refer to the sample output for formatting specifications.

Code constraints :
The phone book file name is fixed as "phonebook.txt".

The contact names and numbers can contain any character.

The program should handle any errors that may occur during file operations, such as file not found or permission issues.

Sample test cases :
Input 1 :
1
2
John Doe 9876543210
Jane Smith 8976543210
4
3
0
Output 1 :
Phone book created successfully.
Contact added successfully.
Phone Book:
John Doe 9876543210,Jane Smith 8976543210
Phone book deleted successfully.
Exiting Phone Book Application.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const string phoneBookFileName = "phonebook.txt";

void createPhoneBook() {
    ofstream phoneBookFile(phoneBookFileName);
    if (phoneBookFile.is_open()) {
        phoneBookFile.close();
        cout << "Phone book created successfully." << endl;
    } else {
        cout << "Unable to create a phone book." << endl;
    }
}

void addContact() {
    string name, number;
    cout << "Enter contact name and number: ";
    cin >> name >> number;

    ofstream phoneBookFile(phoneBookFileName, ios::app);
    if (phoneBookFile.is_open()) {
        phoneBookFile << name << " " << number << endl;
        phoneBookFile.close();
        cout << "Contact added successfully." << endl;
    } else {
        cout << "Unable to add contact. Phone book not found." << endl;
    }
}

void deletePhoneBook() {
    if (remove(phoneBookFileName.c_str()) == 0) {
        cout << "Phone book deleted successfully." << endl;
    } else {
        cout << "Unable to delete phone book." << endl;
    }
}

void readPhoneBook() {
    ifstream phoneBookFile(phoneBookFileName);
    if (phoneBookFile.is_open()) {
        string line;
        cout << "Phone Book:" << endl;
        while (getline(phoneBookFile, line)) {
            cout << line << ",";
        }
        phoneBookFile.close();
        cout << endl;
    } else {
        cout << "Unable to read phone book." << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "Choose an option:" << endl;
        cout << "1: Create Phone Book" << endl;
        cout << "2: Add Contact" << endl;
        cout << "3: Delete Phone Book" << endl;
        cout << "4: Read Phone Book" << endl;
        cout << "0: Exit" << endl;

        cin >> choice;

        switch (choice) {
            case 1:
                createPhoneBook();
                break;
            case 2:
                addContact();
                break;
            case 3:
                deletePhoneBook();
                break;
            case 4:
                readPhoneBook();
                break;
            case 0:
                cout << "Exiting Phone Book Application." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl;
    } while (choice != 0);

    return 0;
}

Problem Statement



Imagine you are developing a program to calculate actual values from given percentages and total values. To facilitate this, create a text file named "percentages.txt",  where each line represents a percentage and a total value separated by spaces. Your program should read this file, calculate the actual values, and display the calculated results. Please note that the program can handle a maximum of 20 entries.



Formula: Value = (Percentage * Total Value) / 100.0



Note: The percentage values are written with one precision within the file, and then those values are read and the results are calculated.

Input format :
The first line consists of an integer n, representing the number of entries.

For each of the 'n' entries, the input consists of the following in each line, space-separated:

A floating-point number: percentage (p)
An integer: total value (t)
Output format :
If n is greater than 20, the output prints "Exceeding limit!".

Otherwise, for each entry, the output prints a floating-point value representing the actual value rounded to two decimal places in each line.



Refer to the sample outputs for the exact format.

Code constraints :
1 <= n <= 20

1 <= p <= 100

1 <= t < 104

Sample test cases :
Input 1 :
4
25.5 200
10.0 500
15.7 3000
12.3 250
Output 1 :
51.00
50.00
471.00
30.75
Input 2 :
21
5.5 220
15.1 350
10.43 800
8.9 1000
20.3 600
12.7 750
30.5 500
10.83 2200
15.3 450
9.8 350
20.0 1200
7.2 300
22.5 990
16.5 550
25.9 1500
5.5 220
15.1 350
10.4 800
8.9 1000
20.3 600
12.7 750
Output 2 :
Exceeding limit!
//
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 20) {
    cout << "Exceeding limit!" << endl;
    return 0;
    }

    // Create and write to the "percentages.txt" file
    ofstream outFile("percentages.txt");
    if (!outFile.is_open()) {
    cout << "Error creating the file." << endl;
    return 1;
    }

    for (int i = 0; i < n; i++) {
    double percentage;
    int totalValue;
    cin >> percentage >> totalValue;
    outFile << fixed << setprecision(1) << percentage << " " << totalValue << endl;
    }

    outFile.close();

    // Read from the "percentages.txt" file and calculate actual values
    ifstream inFile("percentages.txt");
    if (!inFile.is_open()) {
    cout << "Error opening the file." << endl;
    return 1;
    }

    cout << fixed << setprecision(2);

    for (int i = 0; i < n; i++) {
    double percentage, totalValue;
    inFile >> percentage >> totalValue;

    double actualValue = (percentage * totalValue) / 100.0;
    cout << actualValue << endl;
    }

    inFile.close();

    return 0;
}

Problem Statement



﻿You are developing a student attendance system for a school. As part of the system, you need to implement a functionality that counts the number of occurrences of a specific student's ID in the attendance queue. The attendance queue is implemented using an array-based queue.



The attendance system should adhere to the following requirements:

Initialize Queue: The system should initialize the attendance queue to an empty state.
Enqueue Student ID: As students enter the classroom, their ID (represented by integers) should be enqueued into the attendance queue.
Count Occurrences: Given a specific student ID, the system should count the number of times the ID appears in the attendance queue.
Input format :
The first line of input consists of an integer N, representing the number of students' IDs to enqueue.

The second line consists of N space-separated integers, each representing a student's ID to enqueue.

The third line consists of an integer representing the student ID for which the occurrences need to be counted.

Output format :
The output prints the count of occurrences of the given ID in the attendance queue.



Refer to the sample output for the exact text and format.

Code constraints :
The student ID is a positive integer.

The maximum number of students is limited by the MAX_SIZE constant, which is set to 100.

Sample test cases :
Input 1 :
6
1 2 2 3 2 4
2
Output 1 :
Occurrences of 2 in the queue: 3
Input 2 :
5
10 10 10 10 10
5
Output 2 :
Occurrences of 5 in the queue: 0

#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum queue size

class Queue {
private:
    int front, rear;
    int arr[MAX_SIZE];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int studentID) {
        if (rear == MAX_SIZE - 1) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }
        arr[++rear] = studentID;
    }

    int countOccurrences(int studentID) {
        int count = 0;
        for (int i = 0; i <= rear; i++) {
            if (arr[i] == studentID) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Queue attendanceQueue;
    int N, studentID, queryID;

    cout << "Enter the number of students: ";
    cin >> N;

    cout << "Enter the student IDs: ";
    for (int i = 0; i < N; i++) {
        cin >> studentID;
        attendanceQueue.enqueue(studentID);
    }

    cout << "Enter the student ID to count occurrences: ";
    cin >> queryID;

    int count = attendanceQueue.countOccurrences(queryID);

    cout << "Occurrences of " << queryID << " in the queue: " << count << endl;

    return 0;
}

#include <iostream>

struct Node {
    int pages;
    Node* next;
};

struct Queue {
    Node* front;
    Node* rear;
};

void initializeQueue(Queue* q) {
    q->front = nullptr;
    q->rear = nullptr;
}

bool isEmpty(Queue* q) {
    return q->front == nullptr;
}

void enqueue(Queue* q, int pages) {
    Node* newNode = new Node;
    newNode->pages = pages;
    newNode->next = nullptr;

    if (isEmpty(q)) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

bool dequeue(Queue* q, int& pages) {
    if (isEmpty(q)) {
        return false;
    }

    Node* temp = q->front;
    pages = temp->pages;
    q->front = q->front->next;

    if (q->front == nullptr) {
        q->rear = nullptr;
    }

    delete temp;
    return true;
}

void display(Queue* q) {
    if (isEmpty(q)) {
        std::cout << "Queue is empty." << std::endl;
    } else {
        Node* current = q->front;
        std::cout << "Print jobs in the queue: ";
        while (current != nullptr) {
            std::cout << current->pages << " pages ";
            current = current->next;
        }
        std::cout << std::endl;
    }
}

int main() {
    Queue q;
    int option;
    int pages;

    initializeQueue(&q);

    while (true) {

        if (!(std::cin >> option)) {
            break;
        }

        switch (option) {
            case 1:
                if (!(std::cin >> pages)) {
                    break;
                }
                enqueue(&q, pages);
                std::cout << "Print job with " << pages << " pages is enqueued." << std::endl;
                break;

            case 2:
                if (dequeue(&q, pages)) {
                    std::cout << "Processing print job: " << pages << " pages" << std::endl;
                } else {
                    std::cout << "Queue is empty." << std::endl;
                }
                break;

            case 3:
                display(&q);
                break;

            default:
                std::cout << "Invalid option." << std::endl;
                break;
        }
    }

    return 0;
}




































