//BANKING INTEREST CALCULATION USING VIRTUAL FUNCTIONS

#include <iostream>
using namespace std;

class BankAccount {
public:
    virtual double interest() = 0;
    virtual void display() = 0;     
    virtual ~BankAccount() {}
};

class SavingsAccount : public BankAccount {
    double principal, rate, time;
public:
    SavingsAccount(double p, double r, double t)
        : principal(p), rate(r), time(t) {}

    double interest() {
        return (principal * rate * time) / 100;   
    }

    void display() {
        cout << "Savings Account Interest: " << interest() << endl;
    }
};

class FixedDeposit : public BankAccount {
    double principal, rate;
    int years;
public:
    FixedDeposit(double p, double r, int y)
        : principal(p), rate(r), years(y) {}

    double interest() {
        
        double amount = principal;
        for(int i = 0; i < years; i++)
            amount = amount * (1 + rate / 100);

        return amount - principal;
    }

    void display() {
        cout << "Fixed Deposit Interest: " << interest() << endl;
    }
};

class RecurringDeposit : public BankAccount {
    double monthlyDeposit, rate;
    int months;
public:
    RecurringDeposit(double m, double r, int mo)
        : monthlyDeposit(m), rate(r), months(mo) {}

    double interest() {
       
        return (monthlyDeposit * months * (months + 1) / 2.0) * (rate / (12 * 100));
    }

    void display() {
        cout << "Recurring Deposit Interest: " << interest() << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of accounts: ";
    cin >> n;

    BankAccount* acc[50];   

    for(int i = 0; i < n; i++) {
        int type;
        cout << "\nSelect Account Type for Account " << (i+1) << ":\n";
        cout << "1. Savings Account\n2. Fixed Deposit\n3. Recurring Deposit\n";
        cin >> type;

        switch(type) {
            case 1: {
                double p, r, t;
                cout << "Enter Principal, Rate, Time: ";
                cin >> p >> r >> t;
                acc[i] = new SavingsAccount(p, r, t);
                break;
            }

            case 2: {
                double p, r;
                int y;
                cout << "Enter Principal, Rate, Years: ";
                cin >> p >> r >> y;
                acc[i] = new FixedDeposit(p, r, y);
                break;
            }

            case 3: {
                double m, r;
                int mo;
                cout << "Enter Monthly Deposit, Rate, Months: ";
                cin >> m >> r >> mo;
                acc[i] = new RecurringDeposit(m, r, mo);
                break;
            }

            default:
                cout << "Invalid choice. Try again.\n";
                i--;   
        }
    }

    cout << "\n----- INTEREST CALCULATION FOR ALL ACCOUNTS -----\n";
    for(int i = 0; i < n; i++) {
        acc[i]->display();
        delete acc[i];     
    }

    return 0;
}

