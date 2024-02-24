Problem Statement



Write a program to implement a specialized queue data structure capable of deleting the smallest element within its contents. The program should also handle standard enqueue and dequeue operations.

Input format :
The first line of input consists of an integer N, representing the number of elements in the queue.

The following N lines consist of N floating-point numbers, separated by space, representing the elements of the queue.

Output format :
If the queue is empty, N = 0, output "Queue is empty".

Otherwise, output the elements of the queue after deleting the smallest element.

Code constraints :
The queue should have a fixed maximum size of 100 elements.

Sample test cases :
Input 1 :
5
12.3
45.6
36.4
74.5
94.1
Output 1 :
45.6 36.4 74.5 94.1
Input 2 :
2
2.5
3.5
Output 2 :
3.5
Input 3 :
0
Output 3 :
Queue is empty

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    if (N == 0) {
    std::cout << "Queue is empty" << std::endl;
    return 0;
    }

    std::vector<double> queueElements(N);
    for (int i = 0; i < N; ++i) {
    std::cin >> queueElements[i];
    }

    double minElement = *std::min_element(queueElements.begin(), queueElements.end());
    queueElements.erase(std::remove(queueElements.begin(), queueElements.end(), minElement), queueElements.end());

    for (const double& element : queueElements) {
    std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}

Problem Statement



You are given a task by your teacher. The task is to develop a student registration system for a university. The system needs to maintain a priority queue of student registration requests based on their admission urgency.



Each student registration request is represented by a unique identifier (ID) and has an associated priority value. The priority is determined based on the urgency of admission, with higher priority given to students who are both highly motivated for admission and have exceptional academic achievements.



To implement the priority queue, you have decided to use a linked list data structure with a priority queue approach. Each student registration request will be stored in a node of the linked list, along with its priority value. The linked list will be organized in such a way that student requests with smaller priority values will be positioned first.

Input format :
The first line of input specifies the number of student registration requests to be processed.

The following input line each will contain two integers separated by space: the unique identifier (ID) of a student registration request and its priority value.

Output format :
The program should output the student registration requests in the priority queue after all the requests have been processed.

The student requests with smaller priority values will be positioned first.



Refer to the sample output for the exact text and format.

Code constraints :
The student registration system can handle up to 1000 registration requests.

The priority values range from 1 to 10.

Sample test cases :
Input 1 :
5
101 3
102 5
103 4
104 2
105 1
Output 1 :
Priority Queue: 105 104 101 103 102
Input 2 :
3
201 8
202 9
203 7
Output 2 :
Priority Queue: 203 201 202

#include <iostream>


struct StudentRegistration {
    int id;
    int priority;
    StudentRegistration* next;

    StudentRegistration(int _id, int _priority) : id(_id), priority(_priority), next(nullptr) {}
};

class PriorityQueue {
    private:
    StudentRegistration* front;

    public:
    PriorityQueue() : front(nullptr) {}

    void enqueue(int id, int priority) {
    StudentRegistration* newNode = new StudentRegistration(id, priority);

    if (front == nullptr || priority < front->priority) {
    newNode->next = front;
    front = newNode;
    } else {
    StudentRegistration* current = front;
    while (current->next != nullptr && current->next->priority <= priority) {
    current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
    }
    }

    void display() {
    std::cout << "Priority Queue: ";
    StudentRegistration* current = front;
    while (current != nullptr) {
    std::cout << current->id << " ";
    current = current->next;
    }
    std::cout << std::endl;
    }
};

int main() {
    int numRequests;
    std::cin >> numRequests;

    PriorityQueue priorityQueue;

    for (int i = 0; i < numRequests; ++i) {
    int id, priority;
    std::cin >> id >> priority;
    priorityQueue.enqueue(id, priority);
    }

    priorityQueue.display();

    return 0;
}

Problem Statement



Write a program to reverse a string using a Queue. The string can also be a series of strings.

Input format :
The input consists of a string or a series of strings.

Output format :
The output displays the reversed string of the given strings.



Refer to the sample output for the exact text and format.

Sample test cases :
Input 1 :
Today is a good day
Output 1 :
Reversed string: yad doog a si yadoT
Input 2 :
Hard work never fails
Output 2 :
Reversed string: sliaf reven krow draH

#include <iostream>
#include <string>
#include <queue>

int main() {
    std::string input;
    std::string reversedString;
    std::queue<char> charQueue;

    std::getline(std::cin, input);

    for (char c : input) {
    if (c != ' ') {
    charQueue.push(c);
    } else {
    while (!charQueue.empty()) {
    reversedString = charQueue.front() + reversedString;
    charQueue.pop();
    }
    reversedString = ' ' + reversedString;
    }
    }

    while (!charQueue.empty()) {
    reversedString = charQueue.front() + reversedString;
    charQueue.pop();
    }

    std::cout << "Reversed string: " << reversedString << std::endl;

    return 0;
}

Problem Statement



You are assigned the task of developing a package delivery system for a logistics company. The system should enable efficient management of packages for delivery, including prioritizing deliveries based on certain criteria.



The program utilizes a priority queue to manage packages for delivery. Each package is represented by its destination and delivery priority. The delivery priority is a value between 1 and 5, with lower values indicating higher priority for delivery. (1 has the highest priority, next 2, and so on)



The system offers the following options Add package, Deliver package, View next package for delivery, and Exit.

Input format :
The input consists of an integer representing the choice from the menu.

Choice 1: Add package

Choice 2: Deliver the package

Choice 3: View the next package for delivery

Choice 4: Exit



For Choice 1, the program expects the following inputs on separate lines:

Package destination (string with spaces allowed)
Delivery priority (integer between 1 and 5, inclusive)


For choice 2, choice 3, and for choice 4, no additional input is required.

Output format :
The program outputs messages based on the user's choices.

When adding a package to the delivery queue, the program outputs: "Package added to the delivery queue."

When delivering a package, the program outputs: "Delivered package to: [Package Destination]"

A lower delivery priority value indicates a higher priority.

When viewing the next package for delivery, the program outputs: "Next package for delivery: [Package Destination]"

When exiting the application, the program outputs: "Exiting the application."

For invalid choices, the program outputs: "Invalid choice."

When there are no packages in the delivery queue, the program outputs: "No packages in the delivery queue."



Refer to the sample output for the exact text and format.

Code constraints :
Queue size should be 5.

Sample test cases :
Input 1 :
1
Paris
3
1
San Francisco
2
2
4
Output 1 :
Package added to the delivery queue.
Package added to the delivery queue.
Delivered package to: San Francisco
Exiting the application.
Input 2 :
1
New York
2
2
4
Output 2 :
Package added to the delivery queue.
Delivered package to: New York
Exiting the application.
Input 3 :
1
London
4
3
4
Output 3 :
Package added to the delivery queue.
Next package for delivery: London
Exiting the application.

#include <iostream>
#include <queue>
#include <string>

struct Package {
    std::string destination;
    int priority;

    bool operator>(const Package& other) const {
    return priority > other.priority;
    }
};

int main() {
    std::priority_queue<Package, std::vector<Package>, std::greater<Package>> deliveryQueue;
    int choice;

    while (true) {
    std::cin >> choice;
    switch (choice) {
    case 1: {
    Package package;
    std::cin.ignore(); // Consume newline from previous input
    std::getline(std::cin, package.destination);
    std::cin >> package.priority;

    if (package.priority >= 1 && package.priority <= 5) {
    deliveryQueue.push(package);
    std::cout << "Package added to the delivery queue." << std::endl;
    } else {
    std::cout << "Invalid priority. Priority should be between 1 and 5." << std::endl;
    }
    break;
    }
    case 2: {
    if (!deliveryQueue.empty()) {
    Package delivered = deliveryQueue.top();
    deliveryQueue.pop();
    std::cout << "Delivered package to: " << delivered.destination << std::endl;
    } else {
    std::cout << "No packages in the delivery queue." << std::endl;
    }
    break;
    }
    case 3: {
    if (!deliveryQueue.empty()) {
    Package nextPackage = deliveryQueue.top();
    std::cout << "Next package for delivery: " << nextPackage.destination << std::endl;
    } else {
    std::cout << "No packages in the delivery queue." << std::endl;
    }
    break;
    }
    case 4:
    std::cout << "Exiting the application." << std::endl;
    return 0;
    default:
    std::cout << "Invalid choice." << std::endl;
    }
    }

    return 0;
}

Problem Statement



You are tasked with implementing a priority queue for a hospital's emergency room. The emergency room receives patients with different levels of severity, and it's crucial to treat patients based on their priority.



The program should allow the hospital staff to do the following:

Add patients to the priority queue: The staff should be able to enter the patient's age and severity level. The severity level is an integer value that indicates the urgency of the patient's condition, where a lower value represents a higher priority.
View the current queue: The staff should be able to view the list of patients in the queue, ordered by their priority.
Input format :
The first line of input consists of an integer N, representing the number of elements in the priority queue.

The following N lines consist of two space-separated integers: data and priority values.

Output format :
The output prints the elements of the priority queue in order of their priority.

If the priority queue is empty, it prints the message "Priority queue is empty"



Refer to the sample output for the exact text and format.

Code constraints :
The value of N, representing the number of elements in the priority queue, should be a non-negative integer.

The data and priority values entered should be integers.

The priority values should be non-negative integers.

Sample test cases :
Input 1 :
5
12 5
45 3
78 2
36 4
95 1
Output 1 :
Priority queue elements: 95 78 45 36 12
Input 2 :
3
12 2
45 3
78 1
Output 2 :
Priority queue elements: 78 12 45
Input 3 :
0
Output 3 :
Priority queue elements: Priority queue is empty

#include <iostream>
#include <queue>

// Define a structure for a patient
struct Patient {
    int data;
    int priority;

    Patient(int _data, int _priority) : data(_data), priority(_priority) {}

    // Define operator for comparison based on priority (lower value means higher priority)
    bool operator>(const Patient& other) const {
    return priority > other.priority;
                        }
};

int main() {
    int N;
    std::cin >> N;

    std::priority_queue<Patient, std::vector<Patient>, std::greater<Patient>> priorityQueue;

    for (int i = 0; i < N; ++i) {
    int data, priority;
    std::cin >> data >> priority;
    priorityQueue.push(Patient(data, priority));
    }

    std::cout << "Priority queue elements: ";
    if (!priorityQueue.empty()) {
    while (!priorityQueue.empty()) {
    std::cout << priorityQueue.top().data << " ";
    priorityQueue.pop();
    }
    } else {
    std::cout << "Priority queue is empty";
    }

    std::cout << std::endl;

    return 0;
}

Problem Statement



You are working on a text processing system for a search engine. As part of the system, you need to implement a pattern-matching algorithm using a sliding window approach.



Given a large text document and a pattern, you are required to find all occurrences of the pattern in the text document efficiently.



Your task is to write a program that performs the following operations:

Read the large text document and store it in memory.
Read the pattern from the user.
Implement a sliding window algorithm using a linked list-based deque to find all occurrences of the pattern in the text document.
Display the positions (starting indices) of all occurrences of the pattern in the text document.


Write a program to implement the above operations and display the positions of all occurrences of the pattern in the text document.



Your program should prompt the user to enter the required inputs and then output the positions of all occurrences of the pattern.



Note: This is a sample question asked in TCS recruitment.

Input format :
The first line of input consists of a sequence of strings.

The second line consists of the pattern to be found in the given string.

Output format :
If the pattern is found in the string, print the index or indexes where the pattern occurs. (index starts from 0)

If the pattern is not found, print "Pattern not found".

If the pattern is longer than the string, print "Pattern is longer than the string".



Refer to the sample output for the exact text and format.

Code constraints :
The strings are case-sensitive.

Sample test cases :
Input 1 :
abcdabcdeabcdabcdeabcdabcde
abcd
Output 1 :
Pattern found at index 0
Pattern found at index 4
Pattern found at index 9
Pattern found at index 13
Pattern found at index 18
Pattern found at index 22
Input 2 :
abcdefghij
abcdefghijkl
Output 2 :
Pattern is longer than the string
Input 3 :
Harry Potter
harry
Output 3 :
Pattern not found

#include <iostream>
#include <string>
#include <deque>

void findPattern(const std::string& text, const std::string& pattern) {
    int textLength = text.length();
    int patternLength = pattern.length();

    if (patternLength > textLength) {
    std::cout << "Pattern is longer than the string" << std::endl;
    return;
    }

    std::deque<int> positions;

    for (int i = 0; i <= textLength - patternLength; ++i) {
    int j;

    for (j = 0; j < patternLength; ++j) {
    if (text[i + j] != pattern[j]) {
    break;
    }
    }

    if (j == patternLength) {
    positions.push_back(i);
    }
    }

    if (positions.empty()) {
    std::cout << "Pattern not found" << std::endl;
    }
    else {
    for (int pos : positions) {
    std::cout << "Pattern found at index " << pos << std::endl;
    }
    }
}

int main() {
        std::string text, pattern;
            std::getline(std::cin, text); // Read the text
                std::cin >> pattern; // Read the pattern

                    findPattern(text, pattern);

                        return 0;
}

Problem Statement



You are tasked with implementing a double-ended queue data structure using a linked list. A deque is a linear data structure that supports operations for adding and removing elements at both ends.



Your program should provide the following functionality:

Initialize an empty deque.
Check if the deque is empty.
Insert elements in the deque.
Display the odd and even elements separately.
Input format :
The input consists of the elements that should be inserted in the deque.

The input is terminated by entering -1.

Output format :
The output prints the even and odd elements in the given deque.



Refer to the sample output for the exact text and format.

Sample test cases :
Input 1 :
1
2
3
4
-1
Output 1 :
Even elements: 2 4
Odd elements: 1 3
Input 2 :
1
2
-1
Output 2 :
Even elements: 2
Odd elements: 1


#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class Deque {
    private:
    Node* front;
    Node* rear;

    public:
    Deque() {
    front = NULL;
    rear = NULL;
    }

    bool isEmpty() {
    return front == NULL;
    }

    void insertFront(int data) {
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = front;
    front = new_node;

    if (rear == NULL) {
    rear = new_node;
    }
    }

    void insertRear(int data) {
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;

    if (rear == NULL) {
    front = new_node;
    rear = new_node;
    } else {
    rear->next = new_node;
    rear = new_node;
    }
    }

    int deleteFront() {
    if (front == NULL) {
    return -1;
    }

    int data = front->data;
    Node* temp = front;
    front = front->next;

    if (front == NULL) {
    rear = NULL;
    }

    delete temp;

return data;
}

int deleteRear() {
    if (rear == NULL) {
    return -1;
    }

    int data = rear->data;
    Node* temp = rear;
    rear = rear->next;

    if (rear == NULL) {
    front = NULL;
    }

    delete temp;

    return data;
    }

    void displayOddEvenElements() {
    Node* current = front;

    cout << "Even elements: ";
    while (current != NULL) {
    if (current->data % 2 == 0) {
    cout << current->data << " ";
    }

    current = current->next;
    }

    cout << endl;

    cout << "Odd elements: ";
    current = front;
    while (current != NULL) {
    if (current->data % 2 != 0) {
    cout << current->data << " ";
    }

    current = current->next;
    }

    cout << endl;
    }
};

int main() {
    Deque deque;

    int data;
    cin >> data;

    while (data != -1) {
    deque.insertRear(data);
    cin >> data;
    }

    cout << endl;

    deque.displayOddEvenElements();

    return 0;
}

Problem Statement



Ethan is working on a data analysis project that involves analyzing sales data from different regions. As part of his task, he needs to identify and display the data that has been sold the most using a double-ended queue (deque).



Write a program that Ethan can use to find and print the product ID that has been sold the most.

Input format :
The input consists of the elements of the dequeue.

The input is terminated by entering -1.

Output format :
The output prints the most repeated element in the given dequeue, along with the count.



Refer to the sample output for the exact text and format.

Sample test cases :
Input 1 :
1
2
2
3
3
3
4
-1
Output 1 :
Most Repeated Element is 3 with Count 3
Input 2 :
11
15
15
22
-1
Output 2 :
Most Repeated Element is 15 with Count 2

#include <iostream>
#include <deque>
#include <unordered_map>

int main() {
    std::deque<int> myDeque;
    int num;

    while (true) {
    std::cin >> num;

    if (num == -1) {
    break;
    }

    myDeque.push_back(num);
    }

    std::unordered_map<int, int> frequencyMap; // Map to store frequency of elements

    for (int num : myDeque) {
    frequencyMap[num]++;
    }

    int maxCount = 0;
    int mostRepeatedElement = -1;

    for (const auto& pair : frequencyMap) {
    if (pair.second > maxCount) {
    maxCount = pair.second;
    mostRepeatedElement = pair.first;
    }
    }

    if (mostRepeatedElement != -1) {
    std::cout << "Most Repeated Element is " << mostRepeatedElement << " with Count " << maxCount << std::endl;
    } else {
    std::cout << "No elements in the deque." << std::endl;
    }

    return 0;
}

Problem Statement



Bob is a software developer working on a project that involves processing data using a double-ended queue.  As part of his task, he needs to count the number of elements in the deque and display the result to the user.



Write a program that Bob can use to count the number of elements in the deque and print the result.

Input format :
The input consists of the elements of the dequeue.

The input is terminated by entering -1.

Output format :
The output prints the count of the elements in the deque.



Refer to the sample output for the exact text and format.

Sample test cases :
Input 1 :
1
2
3
4
-1
Output 1 :
Number of elements in the deque: 4
Input 2 :
17
29
36
-1
Output 2 :
Number of elements in the deque: 3

#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque;
    int num;

    while (true) {
    std::cin >> num;

    if (num == -1) {
    break;
    }

    myDeque.push_back(num);
    }

    int count = myDeque.size();

    std::cout << "Number of elements in the deque: " << count << std::endl;

    return 0;
}

Problem Statement



Stefan is given a task by his teacher. The task is, he needs to display the alternate elements of a double-ended queue.



Write a program that Stefan can use to print the alternate elements from the deque.

Input format :
The first line of input consists of an integer N, representing the number of elements.

The second line consists of N space-separated elements.

Output format :
The output prints the space-separated alternative elements.

Code constraints :
N > 0

Sample test cases :
Input 1 :
5
14 25 63 95 78
Output 1 :
14 63 78
Input 2 :
8
1 7 8 5 3 6 9 2
Output 2 :
1 8 3 9

#include <iostream>
#include <deque>

int main() {
    int N;
    std::cin >> N;
    std::deque<int> myDeque;

    for (int i = 0; i < N; ++i) {
    int element;
    std::cin >> element;
    myDeque.push_back(element);
    }

    int count = 0;

    for (int element : myDeque) {
    if (count % 2 == 0) {
    std::cout << element << " ";
    }
    count++;
    }

    std::cout << std::endl;

    return 0;
}


