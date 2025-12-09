//EMPLOYEE SALARY PROCESSING USING VIRTUAL FUNCTION OVERRIDE

#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() = 0;
    virtual void display() = 0;            
    virtual ~Employee() {}                
};

class FullTimeEmployee : public Employee {
    double basicSalary;
    double hra, da;
public:
    FullTimeEmployee(double b, double h, double d)
        : basicSalary(b), hra(h), da(d) {}

    double calculateSalary() {
        return basicSalary + hra + da;
    }

    void display() {
        cout << "Full Time Employee Salary: " << calculateSalary() << endl;
    }
};

class PartTimeEmployee : public Employee {
    int hoursWorked;
    double hourlyRate;
public:
    PartTimeEmployee(int h, double r)
        : hoursWorked(h), hourlyRate(r) {}

    double calculateSalary() {
        return hoursWorked * hourlyRate;
    }

    void display() {
        cout << "Part Time Employee Salary: " << calculateSalary() << endl;
    }
};

class Intern : public Employee {
    double stipend;
public:
    Intern(double s) : stipend(s) {}

    double calculateSalary() {
        return stipend;   
    }

    void display() {
        cout << "Intern Stipend: " << calculateSalary() << endl;
    }
};


int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee* emp[50];

    for (int i = 0; i < n; i++) {
        int type;
        cout << "\nSelect Employee Type for Employee " << (i+1) << ":\n";
        cout << "1. Full Time\n2. Part Time\n3. Intern\n";
        cin >> type;

        switch(type) {
            case 1: {
                double basic, hra, da;
                cout << "Enter Basic Salary, HRA, DA: ";
                cin >> basic >> hra >> da;
                emp[i] = new FullTimeEmployee(basic, hra, da);
                break;
            }
            case 2: {
                int hours;
                double rate;
                cout << "Enter Hours Worked and Hourly Rate: ";
                cin >> hours >> rate;
                emp[i] = new PartTimeEmployee(hours, rate);
                break;
            }
            case 3: {
                double stipend;
                cout << "Enter Monthly Stipend: ";
                cin >> stipend;
                emp[i] = new Intern(stipend);
                break;
            }
            default:
                cout << "Invalid choice! Try again.\n";
                i--;  
        }
    }

    cout << "\n----- Salaries for All Employees -----\n";
    for (int i = 0; i < n; i++) {
        emp[i]->display();
        delete emp[i];   
    }

    return 0;
}

