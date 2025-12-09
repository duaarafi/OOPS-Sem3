//STUDENT RESULT EVALUATION USING VIRTUAL FUNCTIONS

#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int marks;

public:
    Student(string n, int m) : name(n), marks(m) {}

    virtual void CalculateResult() = 0;

    virtual ~Student() {}
};

class UnderGraduate : public Student {
public:
    UnderGraduate(string n, int m) : Student(n, m) {}

    void CalculateResult() override {
        cout << "\nUnderGraduate Student: " << name << endl;
        cout << "Marks: " << marks << endl;
        if(marks >= 50)
            cout << "Result: PASS\n";
        else
            cout << "Result: FAIL\n";
    }
};

class PostGraduate : public Student {
public:
    PostGraduate(string n, int m) : Student(n, m) {}

    void CalculateResult() override {
        cout << "\nPostGraduate Student: " << name << endl;
        cout << "Marks: " << marks << endl;
        if(marks >= 60)
            cout << "Result: PASS\n";
        else
            cout << "Result: FAIL\n";
    }
};

int main() {

    string name;
    int marks, choice;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "\nSelect Student Type:\n";
    cout << "1. UnderGraduate\n";
    cout << "2. PostGraduate\n";
    cout << "Enter choice: ";
    cin >> choice;

    Student* s = NULL;

    if(choice == 1) {
        s = new UnderGraduate(name, marks);
    }
    else if(choice == 2) {
        s = new PostGraduate(name, marks);
    }
    else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    s->CalculateResult();

    delete s;
    return 0;
}

