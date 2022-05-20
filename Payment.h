#pragma once
#include <iostream>
using namespace std;

class Payment
{
private:
    char paymentID[8];
    double amount;

public:
    Payment();
    Payment(const char pPaymentID[], double pAmount);
    void setPaymentID(char pPaymentID);
    void setAmount(double pAmount);
    char getPaymentID();
    double getAmount();
    void displayDetails();

};


