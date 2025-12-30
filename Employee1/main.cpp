#include "Employee1.h"
int main() {
    // Priority Queues sheqmna
    PriorityQueue<Employee*> employeeQueue;
    // CIOs sheqmna da damateba
    cout << "Vamatebt CIO-s";
    employeeQueue.push(new CIO("Barbare Rurua", 1001, 15040, 60));
    // Project Managerebis sheqmna da damateba
    cout << "Project Managerebis damateba";
    employeeQueue.push(new ProjectManager("Giorgi Dvalishvili", 2001, 10320, 48));
    employeeQueue.push(new ProjectManager("Eka Amiranashvili", 2002, 9540, 36));
    // Backend Developerebis sheqmna da damateba
    cout << "Backend Developerebis sheqmna da damateba";
    employeeQueue.push(new BackendDeveloper("Tamar Bokuchava", 3001, 7040, 40, "Senior", ".Net"));
    employeeQueue.push(new BackendDeveloper("Zviad Dvalidze", 3002, 6050, 30, "Middle", "Spring"));
    employeeQueue.push(new BackendDeveloper("Vaxtang Mazmishvili", 3003, 5500, 20, "Junior", "Django"));
    // Frontend Developerebis sheqmna da damateba
    cout << "Frontend Developersebis sheqmna da damateba";
    employeeQueue.push(new FrontendDeveloper("Liza Tatrishvili", 4001, 6800, 38, "Senior", "React"));
    employeeQueue.push(new FrontendDeveloper("Amiran Amaghlobeli", 4002, 5800, 28, "Middle", "Angular"));
    employeeQueue.push(new FrontendDeveloper("Nika Shermanidze", 4003, 4800, 18, "Junior", "Vue"));
    // Database Engineerebis sheqmna da damateba
    cout << "Database Engineers sheqmna da damateba";
    employeeQueue.push(new DatabaseEngineer("Luka Kurtanidze", 5001, 7200, 42, "Senior"));
    employeeQueue.push(new DatabaseEngineer("Mariam Todua", 5002, 6200, 32, "Middle"));
    // DevOps Engineerebis sheqmna da damateba
    cout << "Adding DevOps Engineers sheqmna da damateba";
    employeeQueue.push(new DevOpsEngineer("Qristine Laluashvili", 6001, 7500, 45, "Senior"));
    employeeQueue.push(new DevOpsEngineer("Ani Kapanadze", 6002, 6500, 35, "Middle"));
    // Testerebis sheqmna da damateba
    cout << "Adding Testers sheqmna da damateba";
    employeeQueue.push(new Tester("Eka Jugheli", 7001, 6000, 36, "Senior"));
    employeeQueue.push(new Tester("Nika Shanshiashvili", 7002, 5200, 26, "Middle"));
    employeeQueue.push(new Tester("Mate Bliadze", 7003, 4500, 16, "Junior"));
    cout << "Tanamshromelta raodenoba: " << employeeQueue.size() << endl;
    // Mteli queues bechdva
    employeeQueue.print();
    // Umaghlesi prioritetis mqone elementis naxva
    Employee* topEmployee = employeeQueue.top();
    if (topEmployee) {
        topEmployee->display();
    }
    // Wavshalot elementebi  
    employeeQueue.pop();
    employeeQueue.print();
    // Kidev ertxel top(yvelaze kargi tanamshromelis) naxva
    topEmployee = employeeQueue.top();
    if (topEmployee) {
        topEmployee->display();
    }
    // Ramdenime elementis washla (chven shemtxvevashi iyos sami)
    employeeQueue.pop();
    employeeQueue.pop();
    employeeQueue.pop();
    cout << "Darchenili tanamshromelta odenoba: " << employeeQueue.size() << endl;
    employeeQueue.print();
    while (!employeeQueue.empty()) {
        Employee* emp = employeeQueue.top();
        emp->display();  // Washlamde vachvenot
        employeeQueue.pop();  // Moshoreba pointeris rigidan
    }
}