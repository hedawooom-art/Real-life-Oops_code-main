#include <iostream>
#include <vector>
#include <string>
using namespace std;


// Base Class
class Payment {
protected:
    string id;
    float price;

public:

    // Constructor
    Payment(string i, float p) {
        id = i;
        price = p;
    }

    // Pure virtual function
    virtual void makePayment() const = 0;

    // Virtual destructor
    virtual ~Payment() {
    }
};


// Credit Card Class
class Card : public Payment {
    string cardNo;

public:

    Card(string i, float p, string c)
        : Payment(i, p), cardNo(c) {
    }

    virtual void makePayment() const {

        cout << "Payment through Credit Card" << endl;
        cout << "Transaction ID: " << id << endl;
        cout << "Amount: Rs. " << price << endl;
        cout << "Card Number: " << cardNo << endl;
        cout << "Status: Successful" << endl;
        cout << endl;
    }
};


// UPI Class
class UPI : public Payment {
    string userId;

public:

    UPI(string i, float p, string u)
        : Payment(i, p), userId(u) {
    }

    virtual void makePayment() const {

        cout << "Payment through UPI" << endl;
        cout << "Transaction ID: " << id << endl;
        cout << "Amount: Rs. " << price << endl;
        cout << "UPI ID: " << userId << endl;
        cout << "Status: Successful" << endl;
        cout << endl;
    }
};


// Net Banking Class
class NetBanking : public Payment {
    string bank;

public:

    NetBanking(string i, float p, string b)
        : Payment(i, p), bank(b) {
    }

    virtual void makePayment() const {

        cout << "Payment through Net Banking" << endl;
        cout << "Transaction ID: " << id << endl;
        cout << "Amount: Rs. " << price << endl;
        cout << "Bank Name: " << bank << endl;
        cout << "Status: Successful" << endl;
        cout << endl;
    }
};


int main() {

    // Create a vector of Payment pointers
    vector<Payment*> paymentList;


    // Add Credit Card payment
    paymentList.push_back(
        new Card("C501", 3500, "XXXX-5678")
    );


    // Add UPI payment
    paymentList.push_back(
        new UPI("U602", 1850, "soham@upi")
    );


    // Add Net Banking payment
    paymentList.push_back(
        new NetBanking("N703", 4200, "XYZ Bank")
    );


    cout << "===== PAYMENT SYSTEM =====" << endl;
    cout << endl;


    // Display all payments
    vector<Payment*>::iterator p;

    for (p = paymentList.begin();
         p != paymentList.end();
         ++p) {

        (*p)->makePayment();
    }


    // Delete objects from memory
    for (p = paymentList.begin();
         p != paymentList.end();
         ++p) {

        delete *p;
    }


    return 0;
}
