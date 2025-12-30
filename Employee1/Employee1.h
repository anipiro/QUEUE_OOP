#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//Abstraqtuli Employee klasis yvela tanamshromlis sabazo klasi
class Employee {
protected:
    string name;
    int employeeID;
    string employeeClass;
    double baseSalary;
    int experienceMonths;
public:
    Employee(string n, int id, string empClass, double salary, int exp);
    virtual ~Employee();
    //xeplasis gamosatvlelad virtual metodi
    virtual double calculateSalary() = 0;
    //inpormaciis sabechdad virtual metodi
    virtual void display() = 0;
    // Getter metodebi
    string getName() const;
    int getID() const;
    string getEmployeeClass() const;
    int getExperience() const;
};

// CIO klasi
class CIO : public Employee {
public:
    CIO(string n, int id, double salary, int exp);
    ~CIO();
    double calculateSalary() override;
    void display() override;
};

// Project manager klasi
class ProjectManager : public Employee {
public:
    ProjectManager(string n, int id, double salary, int exp);
    ~ProjectManager();
    double calculateSalary() override;
    void display() override;
};

// Abstraqtuli developer klasi
class Developer : public Employee {
protected:
    string qualification;  // Junior, Middle, Senior
    string technology;
    double getQualificationMultiplier();

public:
    Developer(string n, int id, string empClass, double salary, int exp, string qual, string tech);
    virtual ~Developer();
};

// Backend developer klasi
class BackendDeveloper : public Developer {
public:
    BackendDeveloper(string n, int id, double salary, int exp, string qual, string tech);
    ~BackendDeveloper();
    double calculateSalary() override;
    void display() override;
};

// Frontend developer klasi
class FrontendDeveloper : public Developer {
public:
    FrontendDeveloper(string n, int id, double salary, int exp, string qual, string tech);
    ~FrontendDeveloper();
    double calculateSalary() override;
    void display() override;
};

// Abstraqtuli engineer klasi
class Engineer : public Employee {
protected:
    string qualification;  // Junior, Middle, Senior
    double getQualificationMultiplier();

public:
    Engineer(string n, int id, string empClass, double salary, int exp, string qual);
    virtual ~Engineer();
};

// Database engineer klasi
class DatabaseEngineer : public Engineer {
public:
    DatabaseEngineer(string n, int id, double salary, int exp, string qual);
    ~DatabaseEngineer();
    double calculateSalary() override;
    void display() override;
};

// DevOps engineer klasi
class DevOpsEngineer : public Engineer {
public:
    DevOpsEngineer(string n, int id, double salary, int exp, string qual);
    ~DevOpsEngineer();
    double calculateSalary() override;
    void display() override;
};

// Tester klasi
class Tester : public Employee {
private:
    string qualification;  // Junior, Middle, Senior
    double getQualificationMultiplier();

public:
    Tester(string n, int id, double salary, int exp, string qual);
    ~Tester();
    double calculateSalary() override;
    void display() override;
};

// Masivze based priority queue klasi
template <typename T>
class PriorityQueue {
private:
    vector<T> heap;  // Dinamiuri masivi priority queues shesanaxad
    //elementebis dalageba xelpasis mixedvit(klebadobit)
    void heapifyUp(int index);
    // Max-Heapis aghdgena zemodan qvemot
    void heapifyDown(int index);
public:
    PriorityQueue();
    ~PriorityQueue();
    PriorityQueue(const PriorityQueue&) = delete;
    PriorityQueue& operator=(const PriorityQueue&) = delete;
    //elementis damateba priority queueshi
    void push(const T& employee);
    //maghali xelpasis elementis washla
    void pop();
    //umaghlesi prioritetis mqone elementis naxva
    T top() const;
    // Priority Queues zoma  
    int size() const;
    // Davadginot carielia tu ara
    bool empty() const;
    //Rigis bechdva
    void print();
};

#endif
