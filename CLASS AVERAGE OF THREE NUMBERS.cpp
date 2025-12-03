//CLASS AVERAGE OF THREE NUMBERS

#include <iostream>
using namespace std;

class Average {
private:
    int a;
    int b;
    int c;

public:

    void input() 
	{
        cout << "Enter three integers: ";
        cin >> a >> b >> c;
    }

    float calcAverage() {
        return (a + b + c) / 3.0;   
    }
};

int main() {
    Average avg;

    avg.input();  

    cout << "Average = " << avg.calcAverage() << endl;

    return 0;
}

