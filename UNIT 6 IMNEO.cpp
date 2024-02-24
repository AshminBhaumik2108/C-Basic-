Problem Statement



Peter Joy is working on a program for a school management system that handles student records. Every student in the system has a unique ID, and the program can only accommodate a maximum of 30 student records.



In cases where a user attempts to add a new student with an existing ID or if the system reaches its maximum capacity, Peter Joy plans to implement exception handling.



He intends to throw custom exceptions named DuplicateIDException and FullDatabaseException, respectively, to address these situations. Help him write the code.

Input format :
The first line contains an integer, 'n', representing the number of students to be added to the school database.

The next 'n' lines contain two values each:

a. An integer representing the student ID.

b. A string representing the name of the student.

Output format :
The output will depend on the actions performed in the code.



If a student is added to the database, the output will display: "Student with ID [ID] added to the database."

If there is an exception due to a duplicate student ID, the output will display: "Exception caught. Error: Student ID already exists."

If there is an exception due to the database being full, the output will display: "Exception caught. Error: Student database is full."



Refer to the sample outputs for the formatting specifications.

Code constraints :
The maximum capacity of the student database is 30 (MAX_CAPACITY).

Each student ID must be a positive integer.

Sample test cases :
Input 1 :
3
16 Sam
87 Sabari
43 Dani
Output 1 :
Student with ID 16 added to the database.
Student with ID 87 added to the database.
Student with ID 43 added to the database.
Input 2 :
3
44 Udhesh
33 Sandy
44 Keerthi
Output 2 :
Student with ID 44 added to the database.
Student with ID 33 added to the database.
Exception caught. Error: Student ID already exists.
Input 3 :
32
32 zen
23 jazz
16 sam
87 santhiya
43 dominic
90 felicia
17 tera
85 wednesday
81 sayari
39 danny
55 udhesh
36 nani
21 cheenu
12 Sakshi
49 madhan
33 bons
41 Ambika
30 Sandy
47 Charu
59 Theju
34 Sabari
56 Udhesh
40 Babu
42 Sandeep
102 nancy
26 saxy
13 doll
11 craven
211 kanaga
94 veronic
47 jansi
33 yalini
Output 3 :
Student with ID 32 added to the database.
Student with ID 23 added to the database.
Student with ID 16 added to the database.
Student with ID 87 added to the database.
Student with ID 43 added to the database.
Student with ID 90 added to the database.
Student with ID 17 added to the database.
Student with ID 85 added to the database.
Student with ID 81 added to the database.
Student with ID 39 added to the database.
Student with ID 55 added to the database.
Student with ID 36 added to the database.
Student with ID 21 added to the database.
Student with ID 12 added to the database.
Student with ID 49 added to the database.
Student with ID 33 added to the database.
Student with ID 41 added to the database.
Student with ID 30 added to the database.
Student with ID 47 added to the database.
Student with ID 59 added to the database.
Student with ID 34 added to the database.
Student with ID 56 added to the database.
Student with ID 40 added to the database.
Student with ID 42 added to the database.
Student with ID 102 added to the database.
Student with ID 26 added to the database.
Student with ID 13 added to the database.
Student with ID 11 added to the database.
Student with ID 211 added to the database.
Student with ID 94 added to the database.
Exception caught. Error: Student database is full.

#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

const int MAX_CAPACITY = 30;

class DuplicateIDException : public exception {
public:
    const char* what() const throw () {
        return "Exception caught. Error: Student ID already exists.";
    }
};

class FullDatabaseException : public exception {
public:
    const char* what() const throw () {
        return "Exception caught. Error: Student database is full.";
    }
};

class SchoolDatabase {
private:
    unordered_set<int> studentIDs;

public:
    void addStudent(int studentID, const string& studentName) {
        if (studentIDs.size() >= MAX_CAPACITY) {
            throw FullDatabaseException();
        }

        auto result = studentIDs.insert(studentID);
        if (!result.second) {
            throw DuplicateIDException();
        }

        cout << "Student with ID " << studentID << " added to the database." << endl;
    }
};

int main() {
    int n;
    cin >> n;

    SchoolDatabase schoolDB;

    try {
        for (int i = 0; i < n; ++i) {
            int studentID;
            string studentName;
            cin >> studentID >> studentName;
            schoolDB.addStudent(studentID, studentName);
        }
    } catch (DuplicateIDException& e) {
        cout << e.what() << endl;
    } catch (FullDatabaseException& e) {
        cout << e.what() << endl;
    } catch (...) {
        cout << "Unknown error." << endl;
    }

    return 0;
}


Problem Statement



Dhivya is working on a program for a stock market application that handles stock prices. The program enables users to update the stock price of a specific company.



However, Dhivya plans to implement exception handling to handle situations where the user tries to update the price of a non-existing company or provides a negative stock price.



To address these scenarios, she intends to throw custom exceptions named CompanyNotFoundException and InvalidStockPriceException, respectively.



Note: This kind of question will be helpful in clearing TCS recruitment.

Input format :
The first line contains an integer, 'numCompanies', representing the number of companies to be added to the stock market.

The next 'numCompanies' lines contain two values each separated by a space:

a. A string representing the name of the company.

b. A floating-point number representing the initial stock price of the company.

The last line contains a string, 'updateCompany', representing the name of the company for which the stock price needs to be updated and also a floating-point number, 'newPrice', representing the new stock price for the specified company.

Output format :
If a company is added to the stock market, the output will display: "Company [company_name] added to the stock market with an initial price of [initial_price]".

If the stock price of a company is updated, the output will display: "Stock price of [company_name] updated to [new_price]".

If there is an exception due to an invalid stock price (negative value), the output will display: "Exception caught. Error: Invalid stock price."

If there is an exception due to the specified company not being found in the stock market, the output will display: "Exception caught. Error: Company not found."

If there is an exception due to the maximum number of companies (20) being reached, the output will display: "Exception caught. Error: Maximum number of companies reached."



Refer to the sample outputs for the formatting specifications.

Code constraints :
The maximum number of companies that can be added to the stock market is 20 (MAX_COMPANIES).

Each company name is a non-empty string that can contain any printable characters (letters, digits, symbols, spaces).

The stock price of each company must be a non-negative floating-point number.

Sample test cases :
Input 1 :
9
Company1 100.50
Company2 50.75
Company3 75.25
Company4 90.20
Company5 120.80
Company6 60.10
Company7 85.50
Company8 110.00
Company9 70.25
Company12 90
Output 1 :
Company Company1 added to the stock market with an initial price of 100.5
Company Company2 added to the stock market with an initial price of 50.75
Company Company3 added to the stock market with an initial price of 75.25
Company Company4 added to the stock market with an initial price of 90.2
Company Company5 added to the stock market with an initial price of 120.8
Company Company6 added to the stock market with an initial price of 60.1
Company Company7 added to the stock market with an initial price of 85.5
Company Company8 added to the stock market with an initial price of 110
Company Company9 added to the stock market with an initial price of 70.25
Exception caught. Error: Company not found.
Input 2 :
9
Company10 95.75
Company11 78.50
Company12 130.25
Company13 40.50
Company14 88.75
Company15 105.60
Company16 65.90
Company17 150.25
Company18 112.75
Company11 -200.3
Output 2 :
Company Company10 added to the stock market with an initial price of 95.75
Company Company11 added to the stock market with an initial price of 78.5
Company Company12 added to the stock market with an initial price of 130.25
Company Company13 added to the stock market with an initial price of 40.5
Company Company14 added to the stock market with an initial price of 88.75
Company Company15 added to the stock market with an initial price of 105.6
Company Company16 added to the stock market with an initial price of 65.9
Company Company17 added to the stock market with an initial price of 150.25
Company Company18 added to the stock market with an initial price of 112.75
Exception caught. Error: Invalid stock price.
Input 3 :
22
Company1 100.50
Company2 50.75
Company3 75.25
Company4 90.20
Company5 120.80
Company6 60.10
Company7 85.50
Company8 110.00
Company9 70.25
Company10 95.75
Company11 78.50
Company12 130.25
Company13 40.50
Company14 88.75
Company15 105.60
Company16 65.90
Company17 150.25
Company18 112.75
Company19 80.40
Company20 102.30
Company21 75.50
Company22 90.30
Company25 25.33
Output 3 :
Company Company1 added to the stock market with an initial price of 100.5
Company Company2 added to the stock market with an initial price of 50.75
Company Company3 added to the stock market with an initial price of 75.25
Company Company4 added to the stock market with an initial price of 90.2
Company Company5 added to the stock market with an initial price of 120.8
Company Company6 added to the stock market with an initial price of 60.1
Company Company7 added to the stock market with an initial price of 85.5
Company Company8 added to the stock market with an initial price of 110
Company Company9 added to the stock market with an initial price of 70.25
Company Company10 added to the stock market with an initial price of 95.75
Company Company11 added to the stock market with an initial price of 78.5
Company Company12 added to the stock market with an initial price of 130.25
Company Company13 added to the stock market with an initial price of 40.5
Company Company14 added to the stock market with an initial price of 88.75
Company Company15 added to the stock market with an initial price of 105.6
Company Company16 added to the stock market with an initial price of 65.9
Company Company17 added to the stock market with an initial price of 150.25
Company Company18 added to the stock market with an initial price of 112.75
Company Company19 added to the stock market with an initial price of 80.4
Company Company20 added to the stock market with an initial price of 102.3
Exception caught. Error: Maximum number of companies reached.

Whitelist
Set 1:
try
catch
throw

// You are using GCC
#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

const int MAX_COMPANIES = 20;

class CompanyNotFoundException : public exception {
public:
    const char* what() const throw () {
        return "Exception caught. Error: Company not found.";
    }
};

class InvalidStockPriceException : public exception {
public:
    const char* what() const throw () {
        return "Exception caught. Error: Invalid stock price.";
    }
};

class MaximumCompaniesReachedException : public exception {
public:
    const char* what() const throw () {
        return "Exception caught. Error: Maximum number of companies reached.";
    }
};

class StockMarket {
private:
    map<string, double> companies;

public:
    void addCompany(const string& companyName, double initialPrice) {
        if (companies.size() >= MAX_COMPANIES) {
            throw MaximumCompaniesReachedException();
        }

        companies[companyName] = initialPrice;
        cout << "Company " << companyName << " added to the stock market with an initial price of " << fixed << setprecision(2) << initialPrice << endl;
    }

    void updateStockPrice(const string& companyName, double newPrice) {
        auto it = companies.find(companyName);
        if (it != companies.end()) {
            if (newPrice < 0) {
                throw InvalidStockPriceException();
            }
            it->second = newPrice;
            cout << "Stock price of " << companyName << " updated to " << fixed << setprecision(2) << newPrice << endl;
        } else {
            throw CompanyNotFoundException();
        }
    }
};

int main() {
    int numCompanies;
    cin >> numCompanies;

    StockMarket stockMarket;

    try {
        for (int i = 0; i < numCompanies; ++i) {
            string companyName;
            double initialPrice;
            cin >> companyName >> initialPrice;
            stockMarket.addCompany(companyName, initialPrice);
        }

        string updateCompany;
        double newPrice;
        cin >> updateCompany >> newPrice;
        stockMarket.updateStockPrice(updateCompany, newPrice);

    } catch (MaximumCompaniesReachedException& e) {
        cout << e.what() << endl;
    } catch (InvalidStockPriceException& e) {
        cout << e.what() << endl;
    } catch (CompanyNotFoundException& e) {
        cout << e.what() << endl;
    } catch (...) {
        cout << "Unknown error." << endl;
    }

    return 0;
}

Problem Statement



You are tasked to write a program for age verification. The program will prompt the user to enter their age. If the entered age is 18 or older, the program will display a message saying "YES, you are old enough". However, if the user enters an age below 18, the program will throw an exception, and you need to handle the exceptional case gracefully.

Input format :
The input consists of the age of a user.

Output format :
If the entered age is 18 or older, the program will display a message saying "YES, you are old enough".

If the age is not valid, the output displays the error message.



Refer to the sample outputs for the formatting specifications.

Sample test cases :
Input 1 :
22
Output 1 :
YES, you are old enough.
Input 2 :
12
Output 2 :
No, You must be at least 18 years old
Current Age is : 12

// You are using GCC
#include <iostream>

using namespace std;

class AgeVerificationException : public exception {
public:
    const char* what() const throw () {
        return "No, You must be at least 18 years old";
    }
};

int main() {
    int age;

    // Input the age
    cin >> age;

    try {
        // Check if age is 18 or older
        if (age >= 18) {
            cout << "YES, you are old enough." << endl;
        } else {
            // If age is below 18, throw exception
            throw AgeVerificationException();
        }
    } catch (AgeVerificationException& e) {
        // Handle exception and display error message
        cout << e.what() << endl;
        cout << "Current Age is : " << age << endl;
    } catch (...) {
        // Catch any other exceptions
        cout << "Unknown error." << endl;
    }

    return 0;
}

Problem Statement



Ravi is working on a class that models a bank account. To ensure that the account balance remains a positive value, he plans to handle situations where the user attempts to deposit a negative amount by throwing a custom exception named NegativeDepositException. Ravi intends to implement this using exception handling.



Note: This kind of question will be helpful in clearing Mettyl recruitment.

Input format :
The input consists of the deposit amount(double).

Output format :
The output displays the deposit status and the balance present.

If the user enters a negative deposit amount, it will display an error message indicating that depositing a negative amount is not allowed.



Refer to the sample outputs for the formatting specifications.

Code constraints :
Deposit amount <= 105

Sample test cases :
Input 1 :
1050.50
Output 1 :
Deposit successful. Balance: 1050.5
Input 2 :
0
Output 2 :
Exception caught: Error: Cannot deposit a negative amount or zero.
Input 3 :
-100
Output 3 :
Exception caught: Error: Cannot deposit a negative amount

#include<iostream>
using namespace std;

class NegativeDepositException : public exception {
public:
    const char* what() const throw () {
        return "Error: Cannot deposit a negative amount or zero.";
    }
};

class BankAccount {
private:
    double balance;

public:
    BankAccount() : balance(0) {}

    void deposit(double amount) {
        if (amount <= 0) {
            throw NegativeDepositException();
        }

        balance += amount;
        cout << "Deposit successful. Balance: " << balance << endl;
    }
};

int main() {
    double depositAmount;

    // Input the deposit amount
    cin >> depositAmount;

    try {
        BankAccount account;
        account.deposit(depositAmount);
    } catch (NegativeDepositException& e) {
        cout << "Exception caught: " << e.what() << endl;
    } catch (...) {
        cout << "Unknown error." << endl;
    }

    return 0;
}


Problem Statement



Help Julie to write a program to handle array operations gracefully using exception handling. The program takes an integer as input, representing the size of an array, and prints the same in the output.



-If the input is a non-positive number, it should display "Exception caught. Array size should be a positive number." and terminate gracefully.

-If the input is zero, it should display "Exception caught. Array is empty." and terminate gracefully.

-If the input is positive, the program dynamically allocates memory for the array, takes integer elements as input, and prints them separated by spaces.

-If any runtime error occurs during array processing, it should catch and display the exception message as "Exception caught. <error_message>". Ensure proper memory deallocation to avoid memory leaks.



Note: This kind of question will be helpful in clearing CTS recruitment.

Input format :
The first line of input consists of the size of the array, n.

The second line of input consists of n space-separated elements.

Output format :
The output displays the array of elements separated by a space.

If the size is either zero or a negative integer, the output displays the appropriate error message.



Refer to the sample outputs for the formatting specifications.

Code constraints :
Array size <= 105

Sample test cases :
Input 1 :
7
3 -36 15 35 -6 42 8
Output 1 :
3 -36 15 35 -6 42 8
Input 2 :
0
Output 2 :
Exception caught. Array is empty.
Input 3 :
-5
Output 3 :
Exception caught. Array s

// You are using GCC
#include<iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cin >> n;

    if(n == 0) cout<<"Exception caught. Array is empty."<<endl;

    try {
        // Check for non-positive array size
        if (n < 0) {
            throw "Exception caught. Array size should be a positive number.";
        }

        // Dynamically allocate memory for the array
        int* arr = new int[n];

        // Input array elements
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        // Output array elements
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }

        // Deallocate memory for the array
        delete[] arr;
    } catch (const char* msg) {
        // Handle exceptions and display appropriate messages
        cout << msg << endl;
    } catch (...) {
        // Catch any other runtime errors
        cout << "Exception caught. Unknown error." << endl;
    }

    return 0;
}

TEMPLATES

#include <iostream>

template <typename T>
bool checkWeather(T weather) {
    if (weather >= 0 && weather <= 69) {
        std::cout << "Weather conditions are favorable for the launch." << std::endl;
        return true;
    } else {
        std::cout << "Weather conditions are not suitable for the launch. Launch postponed." << std::endl;
        return false;
    }
}

template <typename T>
bool runPreLaunchTests() {
    std::cout << "Pre-launch tests are successful." << std::endl;
    return true;
}

template <typename T>
void fuelRocket() {
    std::cout << "Rocket has been fueled up." << std::endl;
}

template <typename T>
bool performFinalChecks() {
    std::cout << "Final checks are complete." << std::endl;
    return true;
}

template <typename T>
void launchSatellite() {
    std::cout << "Satellite launch successful!" << std::endl;
}

int main() {
    // Input weather condition
    int weather;
    std::cin >> weather;

    // Check weather conditions
    if (checkWeather(weather)) {
        // Run pre-launch tests
        if (runPreLaunchTests<int>()) {
            // Fuel the rocket
            fuelRocket<int>();

            // Perform final checks
            if (performFinalChecks<int>()) {
                // Launch the satellite
                launchSatellite<int>();
            }
        }
    }

    return 0;
}// You are using GCC


#include <iostream>
#include <vector>

// Base class template for Employee
template <typename T>
class Employee {
protected:
    int id;
    std::string name;
    T salary;

public:
    Employee(int _id, const std::string& _name, T _salary)
        : id(_id), name(_name), salary(_salary) {}

    // Function to display employee details
    void displayDetails() const {
        std::cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << std::endl;
    }

    // Virtual getter function for salary
    virtual T getSalary() const {
        return salary;
    }
};

// Derived class template for FullTimeEmployee
template <typename T>
class FullTimeEmployee : public Employee<T> {
public:
    FullTimeEmployee(int _id, const std::string& _name, T _salary)
        : Employee<T>(_id, _name, _salary) {}

    // Override the getter function for salary
    T getSalary() const override {
        return this->salary;
    }
};

// Derived class template for PartTimeEmployee
template <typename T>
class PartTimeEmployee : public Employee<T> {
public:
    PartTimeEmployee(int _id, const std::string& _name, T _salary)
        : Employee<T>(_id, _name, _salary) {}

    // Override the getter function for salary
    T getSalary() const override {
        return this->salary;
    }
};

// Template class for managing employees
template <typename T>
class EmployeeManagementSystem {
private:
    std::vector<Employee<T>> fullTimeEmployees;
    std::vector<Employee<T>> partTimeEmployees;

public:
    // Function to add a full-time employee
    void addFullTimeEmployee(int id, const std::string& name, T salary) {
        fullTimeEmployees.emplace_back(id, name, salary);
    }

    // Function to add a part-time employee
    void addPartTimeEmployee(int id, const std::string& name, T salary) {
        partTimeEmployees.emplace_back(id, name, salary);
    }

    // Function to display details and total salary expenditure for full-time employees
    void displayFullTimeEmployeeDetails() const {
        std::cout << "Full-time Employee Details:" << std::endl;
        for (const auto& employee : fullTimeEmployees) {
            employee.displayDetails();
        }
        T totalSalary = calculateTotalSalary(fullTimeEmployees);
        std::cout << "Total Salary Expenditure for Full-time Employees: " << totalSalary << std::endl;
    }

    // Function to display details and total salary expenditure for part-time employees
    void displayPartTimeEmployeeDetails() const {
        std::cout << "Part-time Employee Details:" << std::endl;
        for (const auto& employee : partTimeEmployees) {
            employee.displayDetails();
        }
        T totalSalary = calculateTotalSalary(partTimeEmployees);
        std::cout << "Total Salary Expenditure for Part-time Employees: " << totalSalary << std::endl;
    }

private:
    // Function to calculate total salary expenditure for a vector of employees
    T calculateTotalSalary(const std::vector<Employee<T>>& employees) const {
        T totalSalary = 0;
        for (const auto& employee : employees) {
            totalSalary += employee.getSalary();
        }
        return totalSalary;
    }
};

int main() {
    EmployeeManagementSystem<int> empSys;

    int numFullTime, numPartTime;
    std::cin >> numFullTime;

    for (int i = 0; i < numFullTime; ++i) {
        int id;
        std::string name;
        int salary;
        std::cin >> id >> name >> salary;
        empSys.addFullTimeEmployee(id, name, salary);
    }

    std::cin >> numPartTime;

    for (int i = 0; i < numPartTime; ++i) {
        int id;
        std::string name;
        int salary;
        std::cin >> id >> name >> salary;
        empSys.addPartTimeEmployee(id, name, salary);
    }

    empSys.displayFullTimeEmployeeDetails();
    empSys.displayPartTimeEmployeeDetails();

    return 0;
}

Here's a C++ implementation for the described PairBase and PairDerived classes:

```cpp
#include <iostream>

// Template class representing the base class for managing pairs of float and double values
template <typename T1, typename T2>
class PairBase {
protected:
    T1 first;
    T2 second;

public:
    PairBase(T1 f, T2 s) : first(f), second(s) {}

    // Function to swap the values in the pair
    void swap() {
        T1 temp = first;
        first = second;
        second = temp;
    }

    // Function to display the details of the pair
    void display() const {
        std::cout << "Values before swap: " << std::endl;
        std::cout << "First: " << first << std::endl;
        std::cout << "Second: " << second << std::endl;
    }
};

// Derived class template for specific pairs of float and double values
template <typename T1, typename T2>
class PairDerived : public PairBase<T1, T2> {
public:
    PairDerived(T1 f, T2 s) : PairBase<T1, T2>(f, s) {}

    // Function to display the details of the pair after the swap
    void displayAfterSwap() const {
        std::cout << "Values after swap: " << std::endl;
        std::cout << "First: " << this->first << std::endl;
        std::cout << "Second: " << this->second << std::endl;
    }
};

int main() {
    // Input for the PairDerived instance
    float floatVal;
    double doubleVal;

    std::cin >> floatVal >> doubleVal;

    // Create an instance of PairDerived
    PairDerived<float, double> pairDerived(floatVal, doubleVal);

    // Display values before swap
    pairDerived.display();

    // Swap the values
    pairDerived.swap();

    // Display values after swap
    pairDerived.displayAfterSwap();

    return 0;
}
```

Here's a C++ program that calculates the compatibility score between two profiles:

```cpp
#include <iostream>

template <size_t N>
int calculateCompatibilityScore(const int profile1[N], const int profile2[N]) {
    int score = 0;

    for (size_t i = 0; i < N; ++i) {
        if (profile1[i] == profile2[i]) {
            score += 10;
        }
    }

    return score;
}

int main() {
    const size_t profileSize = 3;

    // Input for Profile 1
    int profile1[profileSize];
    for (size_t i = 0; i < profileSize; ++i) {
        std::cin >> profile1[i];
    }

    // Input for Profile 2
    int profile2[profileSize];
    for (size_t i = 0; i < profileSize; ++i) {
        std::cin >> profile2[i];
    }

    // Calculate compatibility score
    int compatibilityScore = calculateCompatibilityScore<profileSize>(profile1, profile2);

    // Output the compatibility score
    std::cout << "Compatibility Score: " << compatibilityScore << std::endl;

    return 0;
}
```

My apologies for the oversight. It seems there was a mistake in the code. The size of an array should be an integer, but `floatSize` was mistakenly used as the size, which is a float. I've corrected the code below:

```cpp
#include <iostream>

template <class T>
T arraySum(T arr[], int n) {
    T sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int intSize;
    int floatSize;  // Corrected to use int for array size

    // Input
    std::cin >> intSize;
    int intArr[intSize];
    for (int i = 0; i < intSize; ++i) {
        std::cin >> intArr[i];
    }

    std::cin >> floatSize;
    float floatArr[floatSize];
    for (int i = 0; i < floatSize; ++i) {
        std::cin >> floatArr[i];
    }

    // Calculate and display sum of integer array
    int intSum = arraySum(intArr, intSize);
    std::cout << "Sum of integer array: " << intSum << std::endl;

    // Calculate and display sum of floating-point array
    float floatSum = arraySum(floatArr, floatSize);
    std::cout << "Sum of floating-point array: " << floatSum << std::endl;

    return 0;
}
```

Now, the `floatSize` variable is of type `int`, addressing the issue. Please try running this corrected code.

Here's the C++ code for the given problem statement:

```cpp
#include <iostream>

template <typename T, typename U>
class Pair {
private:
    T first;
    U second;

public:
    Pair(T f, U s) : first(f), second(s) {}

    void swap() {
        T temp = first;
        first = second;
        second = temp;
    }

    void displayValuesBeforeSwap() const {
        std::cout << "Values before swap: " << std::endl;
        std::cout << "First: " << first << std::endl;
        std::cout << "Second: " << second << std::endl;
    }

    void displayValuesAfterSwap() const {
        std::cout << "Values after swap: " << std::endl;
        std::cout << "First: " << first << std::endl;
        std::cout << "Second: " << second << std::endl;
    }
};

int main() {
    float floatValue;
    double doubleValue;

    // Input
    std::cin >> floatValue >> doubleValue;

    // Create Pair object with float and double values
    Pair<float, double> pair(floatValue, doubleValue);

    // Display values before swap
    pair.displayValuesBeforeSwap();

    // Swap values
    pair.swap();

    // Display values after swap
    pair.displayValuesAfterSwap();

    return 0;
}
```

I apologize for the confusion. It seems there was an oversight in the provided code. The `concatenateStrings` function should only take string arguments. Here's the corrected version:

```cpp
#include <iostream>
#include <sstream>

template<typename T>
void concatenateArrays(T arr1[], T arr2[], T result[], int size) {
    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
}

template<typename T>
void concatenateStrings(const T& s1, const T& s2, const std::string& delimiter) {
    std::cout << "Concatenated array: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << s1[i] << " ";
    }
    std::cout << "\nConcatenated string: " << s1 << delimiter << s2 << std::endl;
}

int main() {
    int arr1[3], arr2[3], result[3];
    std::string s1, s2, delimiter;

    // Input
    for (int i = 0; i < 3; ++i) {
        std::cin >> arr1[i];
    }
    for (int i = 0; i < 3; ++i) {
        std::cin >> arr2[i];
    }
    std::cin >> s1 >> s2 >> delimiter;

    // Concatenate arrays
    concatenateArrays(arr1, arr2, result, 3);

    // Concatenate strings
    concatenateStrings(s1, s2, delimiter);

    return 0;
}
```

Now, the `concatenateStrings` function only accepts string arguments, and the code should work correctly.

