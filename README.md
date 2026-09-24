Real-Life OOPs in C++

A collection of Object-Oriented Programming (OOP) in C++ programs based on real-life examples and mini-projects. This repository is organized unit-wise and demonstrates important OOP concepts such as classes, objects, constructors, inheritance, abstraction, polymorphism, encapsulation, virtual functions, and dynamic memory allocation.

📌 About the Project

This project is created for learning and practicing Object-Oriented Programming with C++ through practical, real-world scenarios.

The programs model common systems such as:

Smart Home Management

Banking System

Employee Salary Management

Payment Processing

Vehicle Fleet Management

Product Management

Student Attendance

Farm Sensor Monitoring

Other unit-wise OOP examples and mini-projects

The goal is to understand how OOP concepts can be applied to solve real-world problems.

🎯 Objectives

Understand the fundamentals of OOP using C++.

Implement classes and objects using practical examples.

Practice constructors and destructors.

Understand inheritance and class hierarchies.

Implement abstraction using abstract classes and pure virtual functions.

Demonstrate runtime polymorphism using virtual functions.

Practice encapsulation and protected/private data members.

Use vectors and pointers with class objects.

Understand dynamic memory allocation and object destruction.

Build small real-life applications using OOP concepts.

🛠️ Technologies Used

Language: C++

Compiler: GCC / MinGW / any standard C++ compiler

Concepts: OOP, STL Vector, Pointers, Dynamic Memory, Inheritance, Abstraction, Polymorphism

📂 Project Structure

Real-life-Oops_code-main-main/
│
├── Unit_1.cpp/
│   ├── Program_01/
│   │   └── program01.cpp
│   ├── Program_02/
│   │   └── program02.cpp
│   ├── Program_03/
│   │   └── Program_03.cpp
│   └── mini_project/
│       └── mini_project.cpp
│
├── Unit_2/
│   ├── program_01/
│   │   └── Program_01.cpp
│   ├── program_02/
│   │   └── Program_02.cpp
│   ├── Program_03/
│   │   └── program_03.cpp
│   └── mini_project/
│       └── mini_project.cpp
│
└── Unit03.cpp/
    ├── program_01/
    │   └── program_01.cpp
    ├── Program_02/
    │   ├── program_01.cpp
    │   └── program_02.cpp
    ├── Program_03/
    │   └── program_03.cpp
    └── Mini_project/
        └── Mini_project.cpp

The repository also contains compiled .exe files and screenshots of program outputs.

📚 Unit-wise Programs

Unit 1

Unit 1 contains programs demonstrating basic OOP concepts and real-life object modeling.

1. Farm Sensor Monitoring

Demonstrates:

Class and objects

Constructor

Member functions

vector

Updating object data

The program stores sensor ID, moisture level, and recorded time.

2. Student Attendance System

Demonstrates:

Classes and objects

Constructor

Data members

Boolean values

Member functions

Percentage calculation

The program records attendance and calculates the attendance percentage of students.

3. Product Management

Demonstrates:

Static data members

Constructors and destructors

Getter functions

Object counting

Encapsulation

The program stores product information such as ID, name, price, and stock.

Mini Project: Smart Home Manager

Demonstrates:

Inheritance

Base and derived classes

Function overriding

Virtual functions

Polymorphism

Dynamic memory allocation

vector of base-class pointers

Device types include:

Smart Light

Thermostat

Security Camera

Door Lock

The system provides a menu to display the dashboard and change device status.

Unit 2

Unit 2 focuses on inheritance, abstraction, and runtime polymorphism.

1. Employee Salary System

Demonstrates:

Abstract base class

Pure virtual function

Inheritance

Function overriding

Polymorphism

Employee types include:

Full-Time Employee

Part-Time Employee

Intern

Salary is calculated according to the employee type.

2. Payment System

Demonstrates:

Abstract classes

Pure virtual functions

Runtime polymorphism

Base-class pointers

Dynamic memory allocation

Payment methods include:

Credit Card

UPI

Net Banking

3. Vehicle Fleet Management

Demonstrates:

Inheritance

Virtual functions

Base-class pointers

Dynamic memory allocation

Function overriding

Vehicle types include:

Truck

Delivery Van

Delivery Bike

The program displays vehicle information, fuel level, and vehicle-specific details.

Mini Project: Banking System

Demonstrates:

Abstract class

Pure virtual function

Inheritance

Function overriding

Virtual destructor

Dynamic memory allocation

Account types include:

Savings Account

Current Account

Fixed Deposit Account

The system supports account display, deposit, withdrawal, and interest calculation.

Unit 3

Unit 3 contains additional practical OOP programs and a mini-project.

The programs include examples related to:

Employee management

Payment processing

Farm sensor data

Smart device management

Classes and objects

Inheritance and polymorphism

The Unit 3 mini-project provides a practical example of managing smart devices using a base class and multiple derived classes.

🧠 OOP Concepts Covered

OOP Concept

Examples in Project

Class & Object

Student, Product, Vehicle, Account

Encapsulation

Private and protected data members

Constructor

All major classes

Destructor

Product, SmartDevice, Account, Payment

Inheritance

Employee, Vehicle, Account, SmartDevice

Abstraction

Employee, Payment, Account

Pure Virtual Function

calculateSalary(), makePayment(), calculateInterest()

Polymorphism

Virtual display(), makePayment(), displayInfo()

Function Overriding

Derived class implementations

Static Member

Product counter

Dynamic Memory

new and delete

STL Vector

Lists of objects/base-class pointers

▶️ How to Run

1. Clone the Repository

git clone <YOUR-GITHUB-REPOSITORY-URL>

2. Open the Project

Open the project folder in:

Visual Studio Code

Code::Blocks

Dev-C++

Visual Studio

Any C++ IDE

3. Compile a Program

Using GCC:

g++ program01.cpp -o program01

4. Run the Program

On Windows:

program01.exe

Or:

./program01

on Linux/macOS.

5. Compile the Mini Projects

For example:

g++ mini_project.cpp -o mini_project

Then run:

mini_project.exe

💻 Example

A simple class structure used throughout the project is:

class Student {
private:
    int roll;
    string name;

public:
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

This demonstrates the basic OOP relationship between a class, data members, constructor, and member function.

📸 Output

The repository includes screenshots showing the output of several programs. These can be used to verify the execution of the corresponding C++ programs.

🌱 Learning Outcomes

After completing these programs, students can:

Create classes and objects in C++.

Use constructors and destructors.

Implement different types of inheritance.

Create abstract classes.

Use pure virtual functions.

Implement runtime polymorphism.

Work with base-class pointers.

Manage dynamically allocated objects.

Apply OOP concepts to real-life systems.

👨‍💻 Author

Om Hedawoo

Second-Year Engineering Student — AI & Data Science

📄 License

This project is intended primarily for educational and academic purposes.

You are free to study, modify, and improve the programs for learning.
