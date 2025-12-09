//TRANNSPORT FAIR CALCULATION USING PURE VIRTUAL FUNCTIONS

#include <iostream>
using namespace std;

class Transport {
public:
    virtual double fare(int distance) = 0;  
    virtual ~Transport() {}
};

class Bus : public Transport {
public:
    double fare(int distance) override {
        return distance * 2.0; 
    }
};

class Train : public Transport {
public:
    double fare(int distance) override {
        return 50 + distance * 1.2;  
    }
};

class Flight : public Transport {
public:
    double fare(int distance) override {
        return 2000 + distance * 5.0; 
    }
};

int main() {
    Transport* t;        
    int choice, distance;

    cout << "Enter distance (in km): ";
    cin >> distance;

    cout << "\nChoose Transport Type:\n";
    cout << "1. Bus\n";
    cout << "2. Train\n";
    cout << "3. Flight\n";
    cout << "Enter choice: ";
    cin >> choice;

    Bus b;
    Train tr;
    Flight f;

    switch(choice) {
        case 1:
            t = &b;
            break;
        case 2:
            t = &tr;
            break;
        case 3:
            t = &f;
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }

    cout << "\nFare for " << distance << " km = "
         << t->fare(distance) << endl;

    return 0;
}

