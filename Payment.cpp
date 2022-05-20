#include <iostream>
#include "Payment.h"
#include <cstring>
using namespace std;

Payment::Payment()
{
	strcpy(paymentID, "");
	amount = 0;
}

Payment::Payment(const char pPaymentID[], double pAmount)
{
	strcpy(paymentID, pPaymentID);
  amount = pAmount;
}

void Payment::displayDetails()
{
	cout << "Payment ID : " << paymentID << endl
		   << "Payment Amount : " << amount << endl;
}
