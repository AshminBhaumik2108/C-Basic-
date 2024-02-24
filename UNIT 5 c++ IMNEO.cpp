
Problem Statement



Suji is developing a program for a data analysis tool that requires reversing an array of integers and displaying both the original and reversed arrays.



The program should dynamically allocate memory for the reversed array using the new operator. Write a program to accomplish this task.



Note: This kind of question will help in clearing Capgemini recruitment.

Input format :
The first line of the input represents the size of the array.

The second line represents the array elements, separated by a space

Output format :
The first line of the output displays the original array elements, separated by space.

The second line displays the reversed array elements, separated by space.

If n is less than 0, then the output displays the appropriate error message.



Refer to the sample output for formatting specifications.

Code constraints :
1 <= size <= 100

Sample test cases :
Input 1 :
5
1 2 3 4 5
Output 1 :
Original Array: 1 2 3 4 5
Reversed Array: 5 4 3 2 1
Input 2 :
-4
Output 2 :
Size of the array should be positive!

Ans:

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Size of the array should be positive!" << endl;
        return 0;
    }

    int* originalArray = new int[n];
    int* reversedArray = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> originalArray[i];
        reversedArray[n - 1 - i] = originalArray[i];
    }

    cout << "Original Array:";
    for (int i = 0; i < n; i++) {
        cout << " " << originalArray[i];
    }
    cout << endl;

    cout << "Reversed Array:";
    for (int i = 0; i < n; i++) {
        cout << " " << reversedArray[i];
    }
    cout << endl;

    delete[] originalArray;
    delete[] reversedArray;

    return 0;
}


Problem Statement



Mithun is developing a program for a data collection tool that allows the user to input a series of positive integers until they enter a negative value.



The program should dynamically allocate memory for an integer array to store these numbers using the new operator. The program should then calculate and display the sum and average of the entered integers. Write a program to accomplish this task.



Note: This kind of question will help in clearing HCL recruitment.

Input format :
The input consists of positive integers separated by a space. It continues until a negative value is entered.



Output format :
The first line of the output displays the entered numbers.

The second line displays the sum of the numbers.

The third line displays the average of the entered numbers.



Refer to the sample output for formatting specifications.

Code constraints :
numbers > 0

Maximum number <=100

Sample test cases :
Input 1 :
1 2 3 4 5 6 -1
Output 1 :
Numbers entered: 1 2 3 4 5 6
Sum of entered numbers: 21
Average of entered numbers: 3.50
Input 2 :
10 20 30 40 50 60 70 80 90 100 -4
Output 2 :
Numbers entered: 10 20 30 40 50 60 70 80 90 100
Sum of entered numbers: 550
Average of entered numbers: 55.00

Ans:

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int* numbers = nullptr;
    int capacity = 10; // Initial capacity of the dynamic array
    int size = 0; // Current number of elements in the array
    int input;

    numbers = new int[capacity];

    while (true) {
        cin >> input;

        if (input < 0) {
            break; // Break the loop when a negative value is entered
        }

        if (size == capacity) {
            // If the array is full, double its capacity
            capacity *= 2;
            int* newNumbers = new int[capacity];

            for (int i = 0; i < size; i++) {
                newNumbers[i] = numbers[i];
            }

            delete[] numbers;
            numbers = newNumbers;
        }

        numbers[size] = input;
        size++;
    }

    cout << "Numbers entered: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    double average = static_cast<double>(sum) / size;

    cout << "Sum of entered numbers: " << sum << endl;
    cout << "Average of entered numbers: " << fixed << setprecision(2) << average << endl;

    delete[] numbers;

    return 0;
}

Problem Statement



Ajay is developing a program for a data analysis tool that requires processing a list of N integers provided by the user.



His program should dynamically allocate memory for three dynamic arrays using the new operator: one for storing the user-input integers, one for storing odd numbers from the list, and the other for storing even numbers from the list. The program should then display separate lists of odd and even integers. Write a program to accomplish this task.



Note: This kind of question will help in clearing Cocubes recruitment.

Input format :
The first line of the input represents the size of the array.

The second line represents the array elements, separated by a space

Output format :
The first line of the output displays the even integers, separated by space.

The second line displays the odd integers, separated by space.

If n is less than 0, then the output displays the appropriate error message.



Refer to the sample output for formatting specifications.

Code constraints :
1 <= size <= 100

Sample test cases :
Input 1 :
6
1 2 3 4 5 6
Output 1 :
List of Odd Integers: 1 3 5
List of Even Integers: 2 4 6
Input 2 :
-4
Output 2 :
Number of integers should be positive!

Ans:

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Number of integers should be positive!" << endl;
        return 0;
    }

    int* inputArray = new int[n];
    int* evenArray = new int[n];
    int* oddArray = new int[n];

    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++) {
        cin >> inputArray[i];

        if (inputArray[i] % 2 == 0) {
            evenArray[evenCount] = inputArray[i];
            evenCount++;
        } else {
            oddArray[oddCount] = inputArray[i];
            oddCount++;
        }
    }

    cout << "List of Odd Integers: ";
    for (int i = 0; i < oddCount; i++) {
        cout << oddArray[i] << " ";
    }
    cout << endl;

    cout << "List of Even Integers: ";
    for (int i = 0; i < evenCount; i++) {
        cout << evenArray[i] << " ";
    }
    cout << endl;

    delete[] inputArray;
    delete[] evenArray;
    delete[] oddArray;

    return 0;
}

Problem Statement



Sheela is tasked with developing a program that takes a list of integers as input and categorizes them into two groups: prime numbers and non-prime numbers. The program should determine whether each integer in the list is a prime number or not and then display the prime and non-prime numbers separately.



Your task is to implement the isPrime function and the main function as provided in the given code to fulfill the requirements of the number classification program. The program should prompt the user to enter the number of integers (N) and then N integers. After processing the input, the program should display the prime and non-prime numbers in separate groups.



The program should use dynamic arrays to store prime and non-prime numbers separately to accommodate different input sizes. It should handle positive integers as well as zero.



Ensure that the program handles user inputs correctly, identifies prime numbers accurately, and properly manages dynamic memory allocation and deallocation to avoid memory leaks.

Input format :
The first line of input contains an integer N, representing the number of integers they want to classify.

The next line of input contains N integers, each separated by spaces.

Output format :
The output displays the prime and non-prime numbers in separate groups.

The prime numbers are displayed first, followed by the non-prime numbers.

The prime and non-prime numbers are separated by spaces.

If there are no prime numbers in the array, it displays appropriate message.



Refer to the sample output for formatting specifications.

Code constraints :
1 <= n <= 100

Sample test cases :
Input 1 :
7
12 15 19 23 32 41 47
Output 1 :
Prime numbers: 19 23 41 47
Non-prime numbers: 12 15 32
Input 2 :
8
1 4 6 8 9 10 12 15
Output 2 :
No prime numbers found.
Non-prime numbers: 1 4 6 8 9 10 12 15

Ans:

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    int* numbers = new int[n];
    int* primeNumbers = new int[n];
    int* nonPrimeNumbers = new int[n];

    int primeCount = 0;
    int nonPrimeCount = 0;

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        if (isPrime(numbers[i])) {
            primeNumbers[primeCount] = numbers[i];
            primeCount++;
        } else {
            nonPrimeNumbers[nonPrimeCount] = numbers[i];
            nonPrimeCount++;
        }
    }

    cout << "Prime numbers: ";
    if (primeCount > 0) {
        for (int i = 0; i < primeCount; i++) {
            cout << primeNumbers[i] << " ";
        }
    } else {
        cout << "No prime numbers found.";
    }
    cout << endl;

    cout << "Non-prime numbers: ";
    for (int i = 0; i < nonPrimeCount; i++) {
        cout << nonPrimeNumbers[i] << " ";
    }
    cout << endl;

    delete[] numbers;
    delete[] primeNumbers;
    delete[] nonPrimeNumbers;

    return 0;
}



