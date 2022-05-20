#include <iostream>
#include "System_User.h"
using namespace std;

class Receptionist : public System_User
{
protected:
    char receptionistID[6];
    char specialization[30];
    char qualification[20];

public:
    Receptionist();
    Receptionist(const char pEmail[], const char pName[], const char pNIC[], const char pReceptionistID[]);
    void setReceptionistID(char pReceptionistID);
    char getReceptionistID();
    void displayDetails();

};


