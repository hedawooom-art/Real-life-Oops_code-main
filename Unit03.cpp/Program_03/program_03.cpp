#include <iostream>
#include <string>
#include <cctype>
using namespace std;


class DataChecker {

public:

    // Check marks
    bool checkMarks(int marks) const {

        if (marks >= 0 && marks <= 100)
            return true;

        return false;
    }


    // Check amount
    bool checkAmount(double amount) const {

        if (amount > 0 && amount <= 1000000)
            return true;

        return false;
    }


    // Check name
    bool checkName(string name) const {

        if (name.empty())
            return false;


        // C++98 compatible loop
        for (int i = 0; i < name.length(); i++) {

            char ch = name[i];

            if (!isalpha(static_cast<unsigned char>(ch))
                && ch != ' ') {

                return false;
            }
        }


        return true;
    }
};


int main() {

    DataChecker checker;


    cout << boolalpha;

    cout << "===== DATA CHECKER =====" << endl;


    cout << "Marks 88: "
         << checker.checkMarks(88)
         << endl;


    cout << "Marks 125: "
         << checker.checkMarks(125)
         << endl;


    cout << "Amount Rs. 48000: "
         << checker.checkAmount(48000)
         << endl;


    cout << "Name Shubham Narsale: "
         << checker.checkName("Shubham Narsale")
         << endl;


    cout << "Name Shubham@123: "
         << checker.checkName("Shubham@123")
         << endl;


    return 0;
}
