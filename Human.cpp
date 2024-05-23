#include "Human.h"
#include <iostream>
#include <string>

/*
 Implementation of the default constructor.
 */
Human::Human() {
  name = "Jānis";
  lastName = "Bērziņš";
  age = 31;
};

Human::Human(string humanName, string humanLastName, int humanAge) {
  name = humanName.empty() ? "Janis" : humanName;
  lastName = humanLastName.empty() ? "Berzins" : humanLastName;
  age = humanAge > 0 ? humanAge : 31;
};

string Human::GetName() { return name; };
string Human::GetLastName() { return lastName; };
int Human::GetAge() { return age; };

void Human::PrintHuman() {
  cout << "Personal data: " << endl;
  cout << "Name: " << GetName() << endl;
  cout << "Last name: " << GetLastName() << endl;
  cout << "Age: " << GetAge() << endl;
  cout << "\n";
}
