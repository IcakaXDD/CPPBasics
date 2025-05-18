// C++Basics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "C++Basics.h"
using namespace std;




void ReadAndWriteFunction(/*int& retFlag*/)
{
    //retFlag = 1;
    //how to write and receive a number from the console
    int number;
    std::cout << "Enter an integer";
    std::cin >> number;
    std::cout << "You entered: " << number << '\n';
    //{ retFlag = 2; return; };
}
void ForLoopPlusIf() {
    //for loop it is the same as C#
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Iteration: " << i << '\n';
        // if statemnts are the same as in C#
        if (i > 3) {
            cout << "The number " << i << " is greater than 3\n";
        }
    }
}
void While() {
    int n = 0;
    while (n < 5) {
        std::cout << "Iteration: " << n << '\n';
        n++;
    }

    // you can also do it in do-while
   /* do {
        std::cout << "Iteration: " << n << '\n';
        n++;
    } while (n < 5);*/
}

void Lambda() {
    auto printHello = []() {
        std::cout << "Hello, World!\n";
        };
    printHello(); // Output: Hello, World!
}

void ReferencesAndPointers() {
    int num = 10;
    int* ptr = &num;
    int value = *ptr;

    int num = 10;
    int& ref = num;
}
int main()
{
    //creating a class
    class Person {
    public:
        std::string name;
        int age;
        float height;
    };
    //creating a struct
    struct Person{
    public:
        std::string name;
        int age;
        float height;
    };
    //creating a union
    union Data {
        int num;
        char letter;
        float decimal;
    };

    while (true) {
        std::cout << "    \n";
        std::cout << "Table of contests \n";
        std::cout << "1. How to write something on the console and how to get a number from the console \n";
        std::cout << "2. For loop + if statement showcase \n";
        std::cout << "3.While loop\n";
        std::cout << "4. Lamda expressions\n";
        std::cout << "5. References and pointers\n";
        int number;
        std::cout << "Enter an number from the table: \n";
        std::cin >> number;
        switch (number)
        {
        case 1:
            //int retFlag;
            ReadAndWriteFunction();
            /*if (retFlag == 2)*/ break;
        case 2:
            ForLoopPlusIf();
            break;
        case 3:
            While();
            break;
        case 4:
            Lambda();
            break;
        case 5:
            ReferencesAndPointers();
            break;
        }
    }

        
    int x = 10; //this a stack memory


    int* p = new int; // dynamically allocated int in heap memory
    *p = 10;
    delete p; // deallocate memory

        //all opearations are the same +,-,*,/,%,&&,||,++,--

        

        //return 0;
        //std::cout << "Hello World!\n";
}   

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
