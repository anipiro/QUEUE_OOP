---

# Employee Management System with Priority Queue (OOP)

## 📌 Project Overview

This project is an **Object-Oriented Programming (OOP)** implementation of an employee management system for a technology company.
The main goal is to model different employee roles using **inheritance and polymorphism**, calculate their salaries dynamically, and manage them inside a **custom array-based Priority Queue**, where priority is determined by employee salary.

The project was developed as part of a university programming assignment and follows all required specifications, while also including additional validation and testing utilities. Since it was essential for me to use Georgian language throughout the whole project, most of the words are in Georgian instead of English.

The project demonstrates core OOP principles alongside a manually implemented data structure.

---

## 🧩 Employee Hierarchy

All employees inherit from an abstract base class:

### 🔹 `Employee` (Abstract)

Common attributes:

* `name`
* `employeeId`
* `employeeClass` (CIO, PM, BD, FD, DB, DE, TST)
* `baseSalary`
* `experienceMonths` (months worked in the company)

---

### 🔹 Employee Types

#### Management

* **CIO** (Chief Information Officer)
* **Project Manager**

#### Developers *(Abstract)*

* **Backend Developer**
* **Frontend Developer**

Developer-specific:

* Qualification level: `Junior`, `Middle`, `Senior`
* Technology:

  * Backend: `.NET`, `Spring`, `Django`
  * Frontend: `Angular`, `React`, `Vue`

#### Engineers *(Abstract)*

* **Database Engineer**
* **DevOps Engineer**

Engineer-specific:

* Qualification level: `Junior`, `Middle`, `Senior`

#### Tester

* Qualification level: `Junior`, `Middle`, `Senior`

---

## 💰 Salary Calculation Logic

Each employee’s salary is calculated **individually**, based on:

1. **Position**
2. **Qualification level** (if applicable)
3. **Experience (months in the company)**

Salary calculation is implemented using **polymorphism**, allowing each employee type to override the salary computation method according to its own rules.

---

## 🗂️ Priority Queue Implementation

* Implemented **manually using an array** (no built-in priority queue)
* Priority is based on **calculated salary**
* Higher salary → higher priority

### Supported Operations:

* `insert()` – add an employee to the queue
* `remove()` – remove the highest-priority employee
* `peek()` – view the employee with the highest salary
* `printQueue()` – display all employees in priority order
* Additional helper methods as needed

---

## 🧪 Driver Program

A driver program is included to:

* Create **at least 10 objects for each concrete class**
* Insert employees into the Priority Queue step by step
* Print the queue after insertions
* Demonstrate **all implemented methods**
* Validate correct behavior of inheritance, polymorphism, and queue logic

---

## 🛠️ Technologies Used

* Programming Language: **Java / C++ / C#** *(adjust if needed)*
* Concepts:

  * Object-Oriented Programming (OOP)
  * Inheritance
  * Polymorphism
  * Abstract Classes
  * Custom Data Structures

---

## 🚀 How to Run

1. Clone the repository
2. Compile all source files
3. Run the `Main` (driver) class
4. Observe console output showing:

   * Employee insertion
   * Priority Queue state
   * Salary-based ordering

---

## 🎯 Learning Outcomes

* Practical use of **inheritance & polymorphism**
* Designing abstract class hierarchies
* Implementing a **custom Priority Queue**
* Applying OOP to real-world scenarios
* Writing clean, modular, and extensible code

---

