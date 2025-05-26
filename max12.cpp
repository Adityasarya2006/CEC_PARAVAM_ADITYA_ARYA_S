#include<iostream>
using namespace std;

class Payment {
public:
    virtual ~Payment() {}
    virtual void pay() = 0;
};

class CreditCardPayment : public Payment {
public:
    void pay() override {
        cout << "Processing credit card payment..." << endl;
    }
};

class PayPalPayment : public Payment {
public:
    void pay() override {
        cout << "Processing PayPal payment..." << endl;
    }
};

int main() {
    srand((0));
    for (int i = 1; i <= 10000; ++i) {
        Payment *PaymentMethod;

        int choice = rand() % 2 + 1;

        switch (choice) {
        case 1:
            PaymentMethod = new  CreditCardPayment();
            break;
        case 2:
            PaymentMethod = new PayPalPayment();
            break;
        }

        cout << "Payment #" << i << ": ";
        PaymentMethod->pay();
    }

    return 0;
}