#include <iostream>
#include <cstring>
#include "Receptionist.h"
using namespace std;

Receptionist::Receptionist()
{
	strcpy(receptionistID, "");
}

Receptionist::Receptionist(const char pEmail[], const char pName[], const char pNIC[], const char pReceptionistID[])
{
	strcpy(email, pEmail);
	strcpy(name, pName);
	strcpy(NIC, pNIC);
	strcpy(receptionistID, pReceptionistID);
}

void Receptionist::displayDetails()
{
	cout << "Email : " << email << endl
		   << "Name : " << name << endl
		   << "NIC No : " << NIC << endl
		   << "Receptionist ID : " << receptionistID << endl << endl;
}
