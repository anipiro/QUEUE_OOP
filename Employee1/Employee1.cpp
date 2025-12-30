#include "Employee1.h"
// Employee klasis implementacia
Employee::Employee(string n, int id, string empClass, double salary, int exp) : name(n), employeeID(id), employeeClass(empClass), baseSalary(salary), experienceMonths(exp) {}
Employee::~Employee() {}
string Employee::getName() const { return name; }
int Employee::getID() const { return employeeID; }
string Employee::getEmployeeClass() const { return employeeClass; }
int Employee::getExperience() const { return experienceMonths; }

// CIO klasis implementacia
CIO::CIO(string n, int id, double salary, int exp) : Employee(n, id, "CIO", salary, exp) {}
CIO::~CIO() {}
double CIO::calculateSalary() {
    return baseSalary + (experienceMonths * 500);
}
void CIO::display() {
    cout << "Saxeli: " << name << " ID: " << employeeID << "  Gamocdileba: " << experienceMonths << " tve  Xelpasi: " << calculateSalary() << " lari" << endl;
}

// ProjectManager klasis implementacoa
ProjectManager::ProjectManager(string n, int id, double salary, int exp) : Employee(n, id, "PM", salary, exp) {}
ProjectManager::~ProjectManager() {}
double ProjectManager::calculateSalary() {
    return baseSalary + (experienceMonths * 400);
}

void ProjectManager::display() {
    cout << "Saxeli: " << name << "  ID: " << employeeID << "  Gamocdileba: " << experienceMonths << " tve  Xelpasi: " << calculateSalary() << " lari" << endl;
}

// Developer klasis implementacia
Developer::Developer(string n, int id, string empClass, double salary, int exp, string qual, string tech) : Employee(n, id, empClass, salary, exp), qualification(qual), technology(tech) {}
Developer::~Developer() {}
double Developer::getQualificationMultiplier() {
    if (qualification == "Senior") return 1.5;
    if (qualification == "Middle") return 1.2;
    return 1.0; // Junior
}

// BackendDeveloper klasis implementacia
BackendDeveloper::BackendDeveloper(string n, int id, double salary, int exp, string qual, string tech) : Developer(n, id, "BD", salary, exp, qual, tech) {}
BackendDeveloper::~BackendDeveloper() {}
double BackendDeveloper::calculateSalary() {
    return (baseSalary * getQualificationMultiplier()) + (experienceMonths * 300);
}
void BackendDeveloper::display() {
    cout << "Saxeli: " << name << "  ID: " << employeeID << "  Gamocdileba: " << experienceMonths << " tve  Xelpasi: " << calculateSalary() << " lari" << endl;
}

// FrontendDeveloper klasis implementacia
FrontendDeveloper::FrontendDeveloper(string n, int id, double salary, int exp,
    string qual, string tech) : Developer(n, id, "FD", salary, exp, qual, tech) {
}
FrontendDeveloper::~FrontendDeveloper() {}
double FrontendDeveloper::calculateSalary() {
    return (baseSalary * getQualificationMultiplier()) + (experienceMonths * 280);
}
void FrontendDeveloper::display() {
    cout << "Saxeli: " << name << "  ID: " << employeeID << "  Gamocdileba: " << experienceMonths << " tve  Xelpasi: " << calculateSalary() << " lari" << endl;
}

// Engineer klasis implementacia
Engineer::Engineer(string n, int id, string empClass, double salary, int exp, string qual) : Employee(n, id, empClass, salary, exp), qualification(qual) {}
Engineer::~Engineer() {}
double Engineer::getQualificationMultiplier() {
    if (qualification == "Senior") return 1.5;
    if (qualification == "Middle") return 1.2;
    return 1.0; // Junior
}

// DatabaseEngineer klasis implementacoa
DatabaseEngineer::DatabaseEngineer(string n, int id, double salary, int exp, string qual) : Engineer(n, id, "DB", salary, exp, qual) {}
DatabaseEngineer::~DatabaseEngineer() {}
double DatabaseEngineer::calculateSalary() {
    return (baseSalary * getQualificationMultiplier()) + (experienceMonths * 320);
}
void DatabaseEngineer::display() {
    cout << "Saxeli: " << name << "  ID: " << employeeID << "  Gamocdileba: " << experienceMonths << " tve  Xelpasi: " << calculateSalary() << " lari" << endl;
}

// DevOpsEngineer klasis implementacia
DevOpsEngineer::DevOpsEngineer(string n, int id, double salary, int exp, string qual) : Engineer(n, id, "DE", salary, exp, qual) {}
DevOpsEngineer::~DevOpsEngineer() {}
double DevOpsEngineer::calculateSalary() {
    return (baseSalary * getQualificationMultiplier()) + (experienceMonths * 350);
}

void DevOpsEngineer::display() {
    cout << "Saxeli: " << name << "  ID: " << employeeID << "  Gamocdileba: " << experienceMonths << " tve  Xelpasi: " << calculateSalary() << " lari" << endl;
}

// Tester klasis implementacia
Tester::Tester(string n, int id, double salary, int exp, string qual) : Employee(n, id, "TST", salary, exp), qualification(qual) {}
Tester::~Tester() {}
double Tester::getQualificationMultiplier() {
    if (qualification == "Senior") return 1.5;
    if (qualification == "Middle") return 1.2;
    return 1.0; // Junior
}

double Tester::calculateSalary() {
    return (baseSalary * getQualificationMultiplier()) + (experienceMonths * 250);
}
void Tester::display() {
    cout << "Saxeli: " << name << "  ID: " << employeeID << "  Gamocdileba: " << experienceMonths << " tve  Xelpasi: " << calculateSalary() << " lari" << endl;
}

// PriorityQueue Template klasis implementacia
template <typename T>
PriorityQueue<T>::PriorityQueue() {}
template <typename T>
PriorityQueue<T>::~PriorityQueue() {
    for (size_t i = 0; i < heap.size(); i++) {
        delete heap[i];
    }
    heap.clear();
}

template <typename T>
void PriorityQueue<T>::heapifyUp(int index) {
    while (index > 0) {
        int parent = (index - 1) / 2;
        if (heap[parent]->calculateSalary() < heap[index]->calculateSalary()) {
            swap(heap[parent], heap[index]);
            index = parent;
        }
        else {
            break;
        }
    }
}

template <typename T>
void PriorityQueue<T>::heapifyDown(int index) {
    int size = heap.size();
    while (index < size) {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int largest = index;
        //Vipovot udidesi mshobels, mcarxena an marjvena shvils shoris
        if (leftChild < size &&
            heap[leftChild]->calculateSalary() > heap[largest]->calculateSalary()) {
            largest = leftChild;
        }

        if (rightChild < size &&
            heap[rightChild]->calculateSalary() > heap[largest]->calculateSalary()) {
            largest = rightChild;
        }
        //daiswapos tu udidesi araa mshobeli
        if (largest != index) {
            swap(heap[index], heap[largest]);
            index = largest;
        }
        else {
            break;
        }
    }
}

template <typename T>
void PriorityQueue<T>::push(const T& employee) {
    heap.push_back(employee);
    heapifyUp(heap.size() - 1);
}

template <typename T>
void PriorityQueue<T>::pop() {
    if (heap.empty()) {
        cout << "Rigi carielia" << endl;
        return;
    }
    if (heap.size() > 1) {
        heap[0] = heap.back();  // rootshi bolo elementis washla
    }
    heap.pop_back();
    if (!heap.empty()) {
        heapifyDown(0);
    }
}


template <typename T>
T PriorityQueue<T>::top() const {
    if (heap.empty()) {
        cout << "Rigi carielia" << endl;
        return nullptr;
    }
    return heap[0];
}

template <typename T>
int PriorityQueue<T>::size() const {
    return heap.size();
}

template <typename T>
bool PriorityQueue<T>::empty() const {
    return heap.empty();
}

template <typename T>
void PriorityQueue<T>::print() {
    if (heap.empty()) {
        cout << "Rigi carielia" << endl;
        return;
    }
    // Droebit sheiqmnas asli 
    vector<T> tempHeap = heap;
    for (size_t i = 0; i < tempHeap.size(); i++) {
        for (size_t j = i + 1; j < tempHeap.size(); j++) {
            if (tempHeap[i]->calculateSalary() < tempHeap[j]->calculateSalary()) {
                swap(tempHeap[i], tempHeap[j]);
            }
        }
    }

    for (size_t i = 0; i < tempHeap.size(); i++) {
        tempHeap[i]->display();
    }
}

// Explicit instantiation for Employee* so template methods are emitted and resolve link errors.
template class PriorityQueue<Employee*>;
