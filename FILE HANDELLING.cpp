// FIRST FILE HANDELING:-

/*
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string name;
    cout<<"*:  ";
    getline(cin, name);

    ofstream textfile("sty.txt");

    if(textfile.is_open())
    {
        textfile << name;
        textfile.close();
        cout<<endl<<"Successful"<<endl;

    }

    ifstream tfile("sty.txt");
    if(tfile.is_open())
    {
        string word;
        while(tfile >> word)
        {
            cout<<word<<" ";
        }
        tfile.close();
    }


} */

// CALLING FILE FROM THE DISK:-
/*
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{

    string filename;
    cout<<"*-: "; cin>>filename;
    ifstream tfile(filename.txt);
    if(tfile.is_open())
    {
        cout<<"file opened....";
        string word;
        while(tfile >> word)
        {
            cout<<word<<" ";
        }
        tfile.close();
    }
} */

// IAMNEO:-

// You are using GCC

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
   //Write your code here
}

void addContact() {
    string name, number;
    cin >> name >> number;
    ofstream phoneBookFile(phoneBookFileName, ios::app);
    if (phoneBookFile.is_open()) {
    phoneBookFile << name << " " << number << endl;
    phoneBookFile.close();
    cout << "Contact added successfully." << endl;
    } else {
    cout << "Unable to add contact. Phone book not found." << endl;
    }
    //Write your code here
}

void deletePhoneBook() {
    if (remove(phoneBookFileName.c_str()) == 0) {
                cout << "Phone book deleted successfully." << endl;
    } else {
                cout << "Unable to delete phone book." << endl;
    }
    //Write your code here
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
    //Write your code here
}

int main() {
    int choice;
    do {

        std::cin >> choice;

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
                std::cout << "Exiting Phone Book Application.";
                break;
            default:
                std::cout << "Invalid choice. Please try again.";
        }
        std::cout << std::endl;
    } while (choice != 0);

    return 0;
}
// FILE HANDELING PRACTICE:-

/*
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    string name, address, file;
    cout<<"Name of File: ";
    cin>>file;
    cin.ignore();
    cout<<"Name: ";
    getline(cin, name);
    //cin.ignore();
    cout<<"Address: ";
    getline(cin, address);

    ofstream file1(file);

    if(file1.is_open())
    {
        file1<<"Name: "<<name<<"\nAddress: "<<address<<endl;
        //file1<<"Address: "<<address<<endl;
        file1.close();
    }

    ifstream file2(file);
    if(file2.is_open())
    {

        char codeline[100];
        cout<<endl<<"Details Present: "<<endl;
        file2.read(codeline, 100);
        cout<<codeline;
        file2.close();

        string codeline;
        cout<<endl<<"Detaile Present: "<<endl;
        while(getline(file2, codeline))
        {
            cout<<codeline<<" * "<<endl;
        }
    }

} */

// FILE HANDELING ALL CONCEPTS IN ONE SENTENCE:-

/
#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    string name, section, roll, file_name;
    cout<<"Enter the number of Student Record: "; cin>>n;
    cout<<"Enter the File-Name: "; cin>>file_name;

    // Making the file...

    for(int i=0; i<n; i++)
    {
        ofstream wfile(file_name, ios::app);
        cout<<"Name: "; cin>>name;
        cout<<"Sec. : "; cin>>section;
        cout<<"Roll: "; cin>>roll;
        if(wfile.is_open())
        {
            wfile<<"Name: "<<name<<endl;
            wfile<<"Sec. : "<<section<<endl;

            wfile<<"Roll. : "<<roll<<endl;
        }
        wfile.close();
    }

    // OUTPUT OF THE FILE STRINGS :-

    ifstream rfile(file_name, ios::nocreate);

    if(rfile.is_open())
    {
        string codeline;
        cout<<"Details Present: "<<endl;
        while(getline(rfile, codeline))
        {
            cout<<codeline<<endl;
        }
        rfile.close();
    }
} */



















