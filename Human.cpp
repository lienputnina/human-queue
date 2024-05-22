#include "Human.h"
#include <iostream>
#include <string>

Human::Human(string humanName, string humanLastName, int humanAge) {
  name = humanName.empty() ? "Jānis" : humanName;
  lastName = humanLastName.empty() ? "Bērziņš" : humanLastName;
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
  cout << "\n";
}
