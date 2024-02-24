Single File Programming Question
Problem Statement



Once upon a time in a quaint village, there lived a brilliant young programmer named Alice. She was fascinated by the magical world of Programming and decided to create her very own class called CustomString.



This class had a special power - whenever the ++ operator was applied, it would transform the first letter of the input string into a majestic capital letter. One day, a curious traveler arrived in the village, and Alice eagerly demonstrated the power of her CustomString class.



The traveler was amazed by the enchanting customization and couldn't help but smile as the modified string was displayed, adding a touch of magic to their conversation.

Input format :
The input consists of a string consisting of alphanumeric characters (both uppercase and lowercase) and symbols.



Refer to the sample input for further formatting specifications.

Output format :
The program should display the original and modified strings on separate lines.



Refer to the sample output for further formatting specifications.

Code constraints :
The input string will contain at most 100 characters.

The input string may consist of spaces, special symbols, and alphanumeric characters.

The first character of the string may be uppercase or lowercase.

Sample test cases :
Input 1 :
hello World!
Output 1 :
Original string: hello World!
Modified string: Hello World!
Input 2 :
Apple
Output 2 :
Original string: Apple
Modified string: Apple
Input 3 :
$10000
Output 3 :
Original string: $10000
Modified string: $10000

Ans:

#include <bits/stdc++.h>
using namespace std;

class CustomString {
private:
    string str;

public:
    CustomString(string s) : str(s) {}

    void operator ++() {
        if (!str.empty()) {
            str[0] = toupper(str[0]);
        }
    }

    string getOriginalString()
    {
        return str;
    }
};

int main() {
    string input;
    getline(cin, input);

    CustomString customStr(input);

    cout << "Original string: " << customStr.getOriginalString() << endl;

    ++customStr;

    cout << "Modified string: " << customStr.getOriginalString() << endl;

    return 0;
}


2.

unit 4, lec 24

Single File Programming Question
Problem Statement



You are designing a weather monitoring system for a meteorological department. Create a class called WeatherData that represents temperature data in Celsius.



Overload the unary plus (+) operator to calculate and return the temperature value in Fahrenheit. Overload the unary minus (-) operator to calculate and return the temperature value in Fahrenheit.



Write a program that demonstrates the usage of these unary operators for temperature conversion and accessing the object's address.

Input format :
The input consists of a floating-point number representing the temperature in Celsius.

Output format :
The first line prints the temperature in Fahrenheit using the unary plus operator displayed with the suffix "°F" after the value.

The second line prints the temperature in Fahrenheit using the unary minus operator displayed with the suffix "°F" after the value.

Code constraints :
-100.0 <= Temperature in Celsius <= 100.0

Round off the temperature with one decimal places.

Sample test cases :
Input 1 :
25.5
Output 1 :
77.9°F
-108.2°F
Input 2 :
-25.5
Output 2 :
-13.9°F
57.0°F

Ans:

#include <iostream>
#include <iomanip>

class WeatherData {
private:
    double temperatureCelsius;

public:
    WeatherData(double tempCelsius) : temperatureCelsius(tempCelsius) {}

    double operator+() const {
        return (temperatureCelsius * 9.0 / 5.0) + 32.0;
    }

    double operator-() const {
        return (temperatureCelsius * 9.0 / 5.0) - 32.0;
    }
};

int main() {
    double temperatureCelsius;
    std::cin >> temperatureCelsius;

    WeatherData weatherData(temperatureCelsius);

    double temperatureFahrenheitPlus = +weatherData;
    double temperatureFahrenheitMinus = -weatherData;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << temperatureFahrenheitPlus << "°F" << std::endl;
    std::cout << temperatureFahrenheitMinus << "°F" << std::endl;

    return 0;
}

3.

Single File Programming Question
Problem Statement



In a distant realm where time was more than just numbers, a talented watchmaker named Edward crafted a unique Time class with the extraordinary ability to calculate time differences using the '-' operator.



One day, a curious young apprentice named Lily encountered Edward's creation and was fascinated by its time-manipulation powers. Eager to put it to the test, Lily entered two specific times into the console.



As the magical operator performed its calculations, the time difference was revealed, leaving Lily in awe of the operator overloading concept and its potential to unravel the mysteries of time in their timekeeping adventures.

Input format :
The first line of input consists of Time 1 in the format "hours minutes seconds," separated by spaces.

The second line of input consists of Time 2 in the format "hours minutes seconds," separated by spaces.

Each time component (hours, minutes, and seconds) should be entered as an integer.

Output format :
The first two lines of output display Time 1 and Time 2 in the format "hours h minutes m seconds s".

The next line of output displays the time difference between Time 1 and Time 2 in the same format.



Refer to the sample output for further formatting specifications.

Code constraints :
The hours, minutes, and seconds should be non-negative integers.
The hours should be in the range of [0, 23].
The minutes and seconds should be in the range of [0, 59].
Sample test cases :
Input 1 :
2 33 10
5 22 25
Output 1 :
Time 1: 2h 33m 10s
Time 2: 5h 22m 25s
Time difference: -3h 10m 45s
Input 2 :
20 20 10
13 20 50
Output 2 :
Time 1: 20h 20m 10s
Time 2: 13h 20m 50s
Time difference: 6h 59m

Ans:

#include <iostream>
#include <iomanip>

class Time {
private:
    int hours, minutes, seconds;

public:
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    Time operator - (Time other)
    {
        int totalSeconds1 = hours * 3600 + minutes * 60 + seconds;
        int totalSeconds2 = other.hours * 3600 + other.minutes * 60 + other.seconds;

        int diffSeconds = totalSeconds1 - totalSeconds2;

        int h = diffSeconds / 3600;
        int m = (diffSeconds - (h * 3600)) / 60;
        int s = diffSeconds - ((h * 3600) + (m * 60));

        return Time(h, m, s);
    }

    void display() const {
        std::cout << hours << "h " << minutes << "m " << seconds << "s" << std::endl;
    }
};

int main() {
    int h1, m1, s1, h2, m2, s2;
    std::cin >> h1 >> m1 >> s1;
    std::cin >> h2 >> m2 >> s2;

    Time time1(h1, m1, s1);
    Time time2(h2, m2, s2);

    std::cout << "Time 1: ";
    time1.display();

    std::cout << "Time 2: ";
    time2.display();

    Time timeDifference = time1 - time2;
    std::cout << "Time difference: ";
    timeDifference.display();

    return 0;
}

4.

Single File Programming Question
Problem Statement



In the kingdom of Geometria, there were two skilled architects, Lily and Max, known for their exceptional ability to design unique rectangles. They created a remarkable Rectangle class that could compare the size of rectangles using the overloaded '==' operator.



One day, the kingdom organized a grand architectural competition, and Lily and Max were invited to participate with their awe-inspiring rectangles. As the competition unfolded, they proudly presented their creations, each trying to prove the equality of their rectangles using the operator overloading concept.



The kingdom's people marveled at the elegant display of mathematical prowess, witnessing the magical operator determine whether the rectangles were equal in size or not.



Write a program to accomplish the above-given scenario.

Input format :
The first line of input represents the width and height of Rectangle 1, separated by a space.

The second line of input represents the width and height of Rectangle 2, separated by a space.

Output format :
The output consists of a single line with one of the following messages:

"Rectangle 1 and Rectangle 2 are equal in size." if Rectangle 1 and Rectangle 2 have the same width and height.

"Rectangle 1 and Rectangle 2 are not equal in size." if Rectangle 1 and Rectangle 2 have different widths or heights.



Refer to the sample output for further formatting specifications.

Code constraints :
The width and height of each rectangle are integers.
The width and height of both rectangles should be non-negative values.
The width and height of each rectangle should not exceed the range of the integer data type.
Sample test cases :
Input 1 :
10 20
10 20
Output 1 :
Rectangle 1 and Rectangle 2 are equal in size.
Input 2 :
10 20
30 40
Output 2 :
Rectangle 1 and Rectangle 2 are not equal in size.
Input 3 :
10 20
20 10
Output 3 :
Rectangle 1 and Rectangle 2 are not equal in size.

Ans:

#include <iostream>
class Rectangle {
public:
    int width, height;

    Rectangle(int w, int h) : width(w), height(h) {}

    bool operator == (Rectangle other)
    {
        //int len1 = width * height;
        //int len2 = other.width * other.height;
        return (width == other.width && height == other.height);
    }
};

int main() {
    int width1, height1, width2, height2;

    std::cin >> width1 >> height1;
    std::cin >> width2 >> height2;

    Rectangle rectangle1(width1, height1);
    Rectangle rectangle2(width2, height2);

    if (rectangle1 == rectangle2) {
        std::cout << "Rectangle 1 and Rectangle 2 are equal in size." << std::endl;
    } else {
        std::cout << "Rectangle 1 and Rectangle 2 are not equal in size." << std::endl;
    }

    return 0;
}

5.

Problem Statement



Rithik wants to write a program to compare the ages of individuals. Help him to implement a program that defines a Person class to represent individuals by their ages. The program should take user input for the ages of three people and determine if Person 1 is of the same age as Person 2 or not and if Person 1 is of the same age as Person 3 or not.

Input format :
The input consists of three integers representing the ages, separated by a space.

Output format :
The output consists of two lines, each containing a sentence describing the comparison result between Person 1 and the other individuals.



Refer to the sample output for further formatting specifications.

Code constraints :
1 <= age <= 100

Sample test cases :
Input 1 :
23 45 23
Output 1 :
Person 1 is not the same age as Person 2.
Person 1 is the same age as Person 3.
Input 2 :
67 39 39
Output 2 :
Person 1 is not the same age as Person 2.
Person 1 is not the same age as Person 3.
Input 3 :
50 50 50
Output 3 :
Person 1 is the same age as Person 2.
Person 1 is the same age as Person 3.
Input 4 :
31 31 51
Output 4 :
Person 1 is the same age as Person 2.
Person 1 is not the same age as Person 3.

Ans:

#include <iostream>

class Person {
private:
    int age;

public:
    Person(int a) : age(a) {}

    bool operator == (Person other)
    {
        return age == other.age;
    }
};

int main() {
    int age1, age2, age3;
    std::cin >> age1 >> age2 >> age3;

    Person person1(age1);
    Person person2(age2);
    Person person3(age3);

    if (person1 == person2)
    {
        std::cout << "Person 1 is the same age as Person 2." << std::endl;
    }
    else
    {
        std::cout << "Person 1 is not the same age as Person 2." << std::endl;
    }

    // next....................
    if (person1 == person3)
    {
        std::cout << "Person 1 is the same age as Person 3." << std::endl;
    }
    else
    {
        std::cout << "Person 1 is not the same age as Person 3." << std::endl;
    }

    return 0;
}

6.

Problem Statement



In the enchanting realm of Mathematica, a wise sorcerer named Merlin created a powerful Fraction class capable of performing magical fraction operations. One day, a young wizard apprentice named Arthur stumbled upon Merlin's creation and became intrigued by its potential.



Eager to test its abilities, Arthur devised a spellbinding program that allowed users to input two fractions as basic data types (numerator/denominator) and perform multiplication. Harnessing the magic of basic to class type conversion, the fractions were effortlessly transformed into Fraction class objects, and the multiplication result was beautifully displayed in its reduced form.



As Arthur witnessed the seamless transformation, he realized the incredible potential of the basic-to-class-type conversion in simplifying complex mathematical operations in their mystical adventures.

Input format :
The input consists of two fractions in the format "numerator denominator".

Each fraction should be provided on a separate line, where each line contains the numerator followed by space and the denominator.

Output format :
The output prints the result of multiplication in the format "numerator/denominator."



Refer to the sample output for further formatting specifications.

Code constraints :
The numerators and denominators of the fractions are integers.
The denominators should be non-zero.
Sample test cases :
Input 1 :
44 88
100 200
Output 1 :
The result of multiplication is: 1/4

Ans:

#include <iostream>

class Fraction {
private:
    int numerator, denominator;

public:
    Fraction(int num, int den) : numerator(num), denominator(den)
    {
        reduce();
    }

    void reduce() {
        int gcd = findGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    int findGCD(int a, int b) {
        if (b == 0) {
            return a;
        }
        return findGCD(b, a % b);
    }

    Fraction operator * (Fraction other)
    {
        return Fraction(numerator * other.numerator, denominator * other.denominator);
    }

    void display()
    {
        std::cout << "The result of multiplication is: " << numerator << "/" << denominator << std::endl;
    }
};

int main() {
    int num1, den1, num2, den2;
    std::cin >> num1 >> den1;
    std::cin >> num2 >> den2;

    Fraction fraction1(num1, den1);
    Fraction fraction2(num2, den2);

    Fraction result = fraction1 * fraction2;
    result.display();

    return 0;
}

6.
Problem Statement



Write a program that models an account balance withdrawal system, where the user inputs the initial balance and an amount to withdraw, and the program calculates and displays the updated balance after withdrawal, utilizing class type to basic type conversion.

Input format :
The input consists of two space-separated integers, representing the initial balance and the amount to withdraw, respectively.

Output format :
The output prints the updated balance amount after withdrawing the given amount.

Code constraints :
initial balance > amount to withdraw

Sample test cases :
Input 1 :
540 163
Output 1 :
377
Input 2 :
2850 1575
Output 2 :
1275

Ans:

#include <iostream>

class BankAccount {
private:
    int balance;

public:
    BankAccount(int initialBalance) : balance(initialBalance) {}

    int withdraw(int amount) {
        balance -= amount;
        return balance;
    }
};

int main() {
    int initialBalance, withdrawAmount;
    std::cin >> initialBalance >> withdrawAmount;

    BankAccount account(initialBalance);
    int updatedBalance = account.withdraw(withdrawAmount);

    std::cout << updatedBalance << std::endl;

    return 0;
}

7.

Problem Statement



Once upon a time, in the peaceful town of Willowbrook, there lived a wise old wizard named Merlin. He had a magical book that could convert the birth year of any person into their current age.



However, to use the book, he needed to ask for the name and birth year of the person. As he flipped through the ancient pages of the book, Merlin discovered a young traveler named Alice. Intrigued by her journey, Merlin asked Alice for her name, and she replied, "I am Alice." The wizard then requested her birth year, to which she responded, "I was born in 2001."



Finally, Merlin asked Alice for the current year, and she said, "It's 2023." With all the information gathered, Merlin chanted a spell, and the magical book converted Alice's birth year into her current age using a class type to basic type conversion. How old was Alice, and what year was she born?

Input format :
The first line of input consists of a string, which represents the name of the person.

The second line consists of an integer representing the birth year of the person.

The third line consists of an integer representing the current year.

Output format :
The output displays a single line in the following format:

"Age: [age] years"



Refer to the sample output for further formatting specifications.

Code constraints :
The name can be any non-empty string without spaces
The birth year and current year should be valid integers
birthYear <= currentYear
Sample test cases :
Input 1 :
Udhesh
2002
2023
Output 1 :
Age: 21 years

Ans:

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int birthYear;
    int currentYear;

public:
    Person(string n, int by, int cy) : name(n), birthYear(by), currentYear(cy) {}

    int calculateAge()
    {
        return currentYear - birthYear;
    }
};

int main() {
    string name;
    int birthYear, currentYear;

    cin >> name;
    cin >> birthYear;
    cin >> currentYear;

    Person person(name, birthYear, currentYear);
    int age = person.calculateAge();

    cout << "Age: " << age << " years" << endl;

    return 0;
}

8.

Problem Statement



Write a program to create a class Speed that allows users to input a speed value in kilometers per hour (km/h) and then convert and display it in meters per second (m/s). The program should use class type to basic type conversion to achieve this functionality.



Formula:

1km = 1000 meters

1hour = 3600 seconds

Input format :
The input consists of a floating-point number representing the speed in kilometers per hour (k/h).

Output format :
The output displays a float value after converting to meters per second (m/s), rounded off to three decimal places.



Refer to the sample output for the exact text.

Sample test cases :
Input 1 :
1.1
Output 1 :
0.306 m/s
Input 2 :
12.9
Output 2 :
3.583 m/s

Ans:

#include <iostream>
#include <iomanip>
using namespace std;

class Speed {
private:
    double kmPerHour;

public:
    Speed(double kmph) : kmPerHour(kmph) {}

    operator double()
    {
        return (kmPerHour * 1000.0) / 3600.0;
    }
};

int main() {
    double kmPerHour;
    cin >> kmPerHour;

    Speed speed(kmPerHour);
    double metersPerSecond = speed;

    cout << fixed << setprecision(3);
    cout << metersPerSecond << " m/s" << endl;

    return 0;
}

9.

Problem statement



Antony is tasked with developing a text processing application using inheritance. The application should have a base class named "Demo" with a private static member function called move(). The move() function should take a string as input and separate alphanumeric characters from non-alphanumeric characters.



The alphanumeric characters should remain in their original order, while the non-alphanumeric characters should be moved to the end of the string in their original order. Implement a derived class named "Main", which inherits from the Demo class.



The Main class should have a public static member function named run(), which prompts the user to enter a string, calls the move() function to process the input, and displays the modified string as the output. Write a program to accomplish this task.



Note: This kind of question will help in clearing Amcat recruitment.

Input format :
The input consists of the string S.

Output format :
The output displays the string after moving all the special characters to the end.



Refer to the sample output for the formatting specifications.

Code constraints :
length of string <=100

Sample test cases :
Input 1 :
tenn34***hikm##!m9
Output 1 :
tenn34hikmm9***##!

Ans:

#include <iostream>
#include <string>
#include <cctype>

class Demo {
private:
    static void move(std::string& str) {
        std::string alphanumeric;
        std::string nonAlphanumeric;

        for (char ch : str) {
            if (isalnum(ch)) {
                alphanumeric += ch;
            } else {
                nonAlphanumeric += ch;
            }
        }

        str = alphanumeric + nonAlphanumeric;
    }

public:
    static void processString(std::string& str) {
        move(str);
    }
};

class Main : public Demo {
public:
    static void run() {
        std::string input;
        std::getline(std::cin, input);

        processString(input);

        std::cout << input << std::endl;
    }
};

int main() {
    Main::run();
    return 0;
}


10.

Problem statement



Imagine you are developing a scientific calculator application for a math enthusiast. One of the functionalities you want to implement is to check whether a given number is prime or not, calculate its factorial, and then find the cross-sum of the factorial.



Users should be able to enter any positive integer, and your calculator should perform these operations in the background and display the results accordingly. This way, users can quickly determine if their input is a prime number, find the factorial of the number, and discover the cross-sum of the factorial, all within a single application.



Your task is to create a derived class called Calculator that inherits from the AdvCalculator class. The Calculator class should make use of the functions inherited from AdvCalculator.

Input format :
The input consists of an integer.

Output format :
The first line of output displays whether the given number is a prime number or not.

The second line of output displays the factorial value of the given number.

The last line of output displays the sum of the digits of the factorial result.



Refer to the sample output for the formatting specifications.

Code constraints :
1<=number<=99999

Sample test cases :
Input 1 :
5
Output 1 :
Prime number
120
3
Input 2 :
4
Output 2 :
Not prime number
24
6

Ans:

#include <iostream>
#include <cmath>

class AdvCalculator {
public:
    static bool isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        if (n <= 3) {
            return true;
        }
        if (n % 2 == 0 || n % 3 == 0) {
            return false;
        }
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }

    static int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return n * factorial(n - 1);
    }

    static int crossSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
};

class Calculator : public AdvCalculator {
public:
    static void performCalculations(int num) {
        if (isPrime(num)) {
            std::cout << "Prime number" << std::endl;
        } else {
            std::cout << "Not prime number" << std::endl;
        }

        int fact = factorial(num);
        std::cout << fact << std::endl;

        int sum = crossSum(fact);
        std::cout << sum << std::endl;
    }
};

int main() {
    int number;
    std::cin >> number;

    Calculator::performCalculations(number);

    return 0;
}

11.

Problem Statement



Swathi is working on a project that involves managing parent-child relationships. In this scenario, you need to create classes representing parents and children and define their behaviors.



The Parent class contains two private member functions, m1() and m2(int a), as well as two public member functions, m1Public() and m2Public(int a). The Child class inherits privately from the Parent class.



You are required to implement a simple program that utilizes the Parent and Child classes for specific tasks. The program should prompt the user to input two integers, 'a' and 'b'. The program should then demonstrate the behavior of the classes and their functions as follows:



Create an object of the Parent class and an object of the Child class.
Call the m1Public() and m2Public(a) functions of the Parent class using the object of the Parent class.
Call the m1Child() and m2Child(b) functions of the Child class using the object of the Child class.
Observe and print the output produced by each function call to the console.


Note: This kind of question will help in clearing Wipro recruitment.

Input format :
The input consists of the integer values a and b for both classes, separated by a space.

Output format :
The output displays the following lines:



"From parent m1()" indicates the call to the parent class's private member function m1().

The input integer value entered for a.

"From child m1()" indicates the call to the child class's member function m1Child().

The input integer value entered for b.



Refer to the sample outputs for the formatting specifications.

Code constraints :
The input values should be valid integer numbers.

Sample test cases :
Input 1 :
484 848
Output 1 :
From parent m1()
484
From child m1()
848
Input 2 :
100 7
Output 2 :
From parent m1()
100
From child m1()
7

Ans:

#include <iostream>

class Parent {
private:
    void m1() {
        std::cout << "From parent m1()" << std::endl;
    }

    void m2(int a) {
        std::cout << a << std::endl;
    }

public:
    void m1Public() {
        m1();
    }

    void m2Public(int a) {
        m2(a);
    }
};

class Child : private Parent {
public:
    void m1Child() {
        std::cout << "From child m1()" << std::endl;
    }

    void m2Child(int b) {
        std::cout << b << std::endl;
    }
};

int main() {
    int a, b;
    std::cin >> a >> b;

    Parent parentObj;
    Child childObj;

    parentObj.m1Public();
    parentObj.m2Public(a);

    childObj.m1Child();
    childObj.m2Child(b);

    return 0;
}

12.

Problem Statement



A furniture company produces chairs, tables, and bookshelves. They have a set of base classes for each type of furniture, but they want to add new features to certain classes without modifying the existing code. The company wants to implement a new set of classes that inherit from the base classes but have additional features, such as a reclining function for certain chairs or built-in lighting for certain bookshelves.



Write a program that demonstrates how multiple inheritance can be used to add new features to existing classes without modifying their code. Implement the following classes and their fields:



Furniture (Base Class):

Fields:

price (double): The price of the furniture.

material (string): The material used to make the furniture.



Methods:

Constructor: Initializes the price and material fields.

displayInfo(): Displays the price and material of the furniture.



RecliningChair (Derived Class: Inherits from Furniture):

Fields:

isElectric (bool): Indicates whether the reclining function is electric or manual.



Methods:

Constructor: Initializes the price, material, and isElectric fields.

displayInfo(): Calls the base class displayInfo() method and displays the type of reclining function (electric or manual).



LightedBookshelf (Derived Class - Inherits from Furniture):

Fields:

numLights (int): The number of lights built into the bookshelf.



Methods:

Constructor: Initializes the price, material, and numLights fields.

displayInfo(): Calls the base class displayInfo() method and displays the number of lights on the bookshelf.



Use the provided code template and implement the classes as described above. Your program should read user input to create objects of the derived classes (RecliningChair or LightedBookshelf) based on the type provided (C for chair, T for table, B for bookshelf) and display their information along with the base class (Furniture) information.



Note: Use multiple inheritance to implement the derived classes.

Input format :
The input consists of the following:

A floating-point number representing the price of the furniture.
A string that represents the material of the furniture.
A character representing the type of furniture:
'C' for reclining chair
'T' for a regular chair
'B' for bookshelf
Additional inputs are required based on the type of furniture:

For a reclining chair, a boolean value indicates whether the chair has an electric reclining function.

For the bookshelf, an integer value indicates the number of lights built into the shelf.



Refer to the sample input for the formatting specifications.

Output format :
The program outputs information about the furniture to the console. The output includes the following:



The price of the furniture is represented as a floating-point number with two decimal places and preceded by the text "Price: $".
The material of the furniture is represented as a string preceded by the text "Material: ".
Additional information about the furniture based on its type:
For a reclining chair, the type of reclining function (electric or manual) is preceded by the text "Reclining function: ".
For the bookshelf, the number of lights built into the bookshelf output is preceded by the text "Number of lights: ".


If the user inputs an invalid type, the program outputs the text "Invalid type!" to the console



Refer to the sample output for the formatting specifications.

Code constraints :
All input values will be within the valid range of their respective data types.
The material string for furniture will contain at most 100 characters.
The number of lights on the bookshelf will be a non-negative integer.
The price of the furniture will be a positive, non-zero double value.
The type of reclining function (isElectric) will be either true or false.
Sample test cases :
Input 1 :
250
Wood
C
Y
Output 1 :
Price: $250
Material: Wood
Chair Type: Standard
Input 2 :
120
Glass
T
Output 2 :
Price: $120
Material: Glass
Input 3 :
400
metal
B
3
Output 3 :
Price: $400
Material: metal
Number of Shelves: 3
Input 4 :
120
Wood
N
Output 4 :
Invalid type!

Ans:

#include <iostream>
#include <iomanip>
using namespace std;

class Furniture {
protected:
    double price;
    string material;

public:
    Furniture(double p, string m) : price(p), material(m) {}

    void displayInfo() {
        cout << fixed << setprecision(0);
        cout << "Price: $" << price << endl;
        cout << "Material: " << material << endl;
    }
};

class Chair : public Furniture {
public:
    Chair(double p, string m) : Furniture(p, m) {}

    virtual void displayInfo() {
        Furniture::displayInfo();
        cout << "Chair Type: Standard" << endl;
    }
};

class RecliningChair : public Chair {
private:
    bool isElectric;

public:
    RecliningChair(double p, string m, bool electric) : Chair(p, m), isElectric(electric) {}

    void displayInfo() override {
        Chair::displayInfo();
        //cout << "Reclining function: " << (isElectric ? "Electric" : "Manual") << endl;
    }
};

class Bookshelf : public Furniture {
protected:
    int numShelves;

public:
    Bookshelf(double p, string m, int shelves) : Furniture(p, m), numShelves(shelves) {}

    virtual void displayInfo() {
        Furniture::displayInfo();
        cout << "Number of Shelves: " << numShelves << endl;
    }
};

class LightedBookshelf : public Bookshelf {
public:
    LightedBookshelf(double p, string m, int shelves) : Bookshelf(p, m, shelves) {}

    void displayInfo() override {
        Bookshelf::displayInfo();
    }
};

int main() {
    double price;
    string material;
    char type;
    cin >> price;
    cin >> material;
    cin >> type;

    if (type == 'C') {
        bool isReclining;
        cin >> isReclining;
        RecliningChair chair(price, material, isReclining);
        chair.displayInfo();
    }
    else if (type == 'T') {
        Furniture furniture(price, material);
        furniture.displayInfo();
    }
    else if (type == 'B') {
        int numShelves;
        cin >> numShelves;
        LightedBookshelf bookshelf(price, material, numShelves);
        bookshelf.displayInfo();
    }
    else {
        cout << "Invalid type!";
    }

    return 0;
}


Problem Statement



Nandhini is the owner of a growing company with multiple departments and employees. To efficiently manage employee records and salaries, she wants to create an Employee Management System using multilevel inheritance.



Classes:

Person (Base Class):

Attributes: pname (string), address (string), phone_no (integer)

Visibility: Protected



Employee (Derived Class from Person):

Additional Attributes: eno (integer), ename (string)

Visibility: Public



Manager (Derived Class from Employee):

Additional Attributes: designation (string), deptname (string), basic_salary (float)

Additional Method: accept_details() to accept details of the manager

Visibility: Public



Write a menu-driven program to:

a. Accept all details of 'n' managers.

b. Display manager having the highest salary

Input format :
The first line of input contains an integer, cnt, representing the number of managers in Nandhini's company.

The next six lines contain the following details in order:

eno (integer): Employee number of the manager.

ename (string): Name of the manager

address (string): Address of the manager

phone_no (integer): Phone number of the manager

deptname (string): Department name to which the manager belongs.

basic_salary (float): Basic salary of the manager, for each manager's details separated by a line.



Refer to the sample input for the formatting specifications.

Output format :
The output displays the Highest Salary and the Name of the manager who has the highest salary.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ Length of pname, address, ename, designation, and deptname ≤ 50

1 ≤ phone_no ≤ 9999999999 (10-digit phone number)

1 ≤ eno ≤ 99999 (5-digit employee number)

1 ≤ basic_salary ≤ 100000 (maximum basic salary)

The input values will be valid, and there will be no empty lines or extra spaces in the input.

Sample test cases :
Input 1 :
2
121
Hiran
Delhi
984556544
Production
24000
232
Evea
London
980956754
Purchase
300000
Output 1 :
Manager with Highest Salary is : 300000
Manager Name is : Evea

Ans:


#include <iostream>
#include <vector>

class Person {
protected:
    std::string pname;
    std::string address;
    long long phone_no;
};

class Employee : public Person {
public:
    int eno;
    std::string ename;
};

class Manager : public Employee {
public:
    std::string designation;
    std::string deptname;
    float basic_salary;

    void accept_details() {
        std::cin >> eno >> ename >> address >> phone_no >> deptname >> basic_salary;
    }
};

int main() {
    int cnt;
    std::cin >> cnt;
    std::vector<Manager> managers(cnt);

    float max_salary = 0;
    Manager max_salary_manager;

    for (int i = 0; i < cnt; ++i) {
        managers[i].accept_details();
        if (managers[i].basic_salary > max_salary) {
            max_salary = managers[i].basic_salary;
            max_salary_manager = managers[i];
        }
    }

    std::cout << "Manager with Highest Salary is : " << max_salary << std::endl;
    std::cout << "Manager Name is : " << max_salary_manager.ename << std::endl;

    return 0;
}



Problem Statement:



Maran is tasked with implementing a program to model bicycles and mountain bikes. The program should have two classes:



Write a program by creating a class called Bicycle as a base class with the number of gears and speed of the bicycle as integer attributes and creating a class called MountainBike, a derived class that extends the Bicycle class with an attribute called seatHeight as an integer.



In the main method, obtain the inputs and display them.



Note: This kind of question will help in clearing Wipro recruitment.

Input format :
The input gets three integers from the user (Number of gears, Speed of bicycle, and Seat height).

Output format :
The first line of output displays the number of gears and the speed of the bicycle, separated by a space.

The second line of input displays the seatHeight.



Refer to the sample output for formatting specifications.

Code constraints :
The gear of the bicycle or mountain bike will be an integer between 1 and 10, inclusive.

The speed of the bicycle or mountain bike will be an integer between 0 and 100, inclusive.

The seat height of the mountain bike will be an integer between 1 and 100, inclusive.

Sample test cases :
Input 1 :
2 90 40
Output 1 :
2 90
40
Input 2 :
3 60 20
Output 2 :
3 60
20

Ans:


#include <iostream>

class Bicycle {
public:
    int gears;
    int speed;

    Bicycle(int _gears, int _speed) : gears(_gears), speed(_speed) {}
};

class MountainBike : public Bicycle {
public:
    int seatHeight;

    MountainBike(int _gears, int _speed, int _seatHeight) : Bicycle(_gears, _speed), seatHeight(_seatHeight) {}
};

int main() {
    int gears, speed, seatHeight;
    std::cin >> gears >> speed >> seatHeight;

    MountainBike mountainBike(gears, speed, seatHeight);

    std::cout << mountainBike.gears << " " << mountainBike.speed << std::endl;
    std::cout << mountainBike.seatHeight << std::endl;

    return 0;
}// You are using GCC


Problem Statement



Imagine a scenario where you are given a single integer input and are required to calculate the sum of all possible pairs of digits in that number. To accomplish this, you need to create a program using single inheritance.



Classes:

Parent (Base Class):

Attributes: num (integer)

Visibility: Public



Child (Derived Class from Parent):

Method: fun() to calculate the sum of all possible pairs of digits in num

Visibility: Public



Write a program to calculate the sum of all possible pairs of digits in a given number (excluding pairs with the same digit) and print the result.



For example, in the case of 1234, the individual digits are 4, 3, 2, 1, and the final sum → (4+3)+(4+2)+(4+1)+(3+2)+(3+1)+(2+1) = 30.

Input format :
The input consists of a single integer.

Output format :
The output displays a single integer number, which is the sum of all possible pairs of digits in num.

If the input number has only one digit, the program should output that digit itself.

Code constraints :
1<=number<=99999

Sample test cases :
Input 1 :
1234
Output 1 :
30
Input 2 :
4356
Output 2 :
54
Input 3 :
5
Output 3 :
5

#include <iostream>

class Parent {
public:
    int num;
    Parent(int _num) : num(_num) {}
};

class Child : public Parent {
public:
    Child(int _num) : Parent(_num) {}

    int fun() {
        int sum = 0;
        int temp = num;

        while (temp > 0) {
            int lastDigit = temp % 10;
            temp /= 10;

            int innerTemp = temp;  // Start from the next digit
            while (innerTemp > 0) {
                int innerLastDigit = innerTemp % 10;
                innerTemp /= 10;

                sum += (lastDigit + innerLastDigit);
            }
        }

        return sum;
    }
};

int main() {
    int number;
    std::cin >> number;

    Child child(number);
    int result = child.fun();

    std::cout << result << std::endl;

    return 0;
}




