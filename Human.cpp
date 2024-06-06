#include "Human.h"
#include <iostream>
#include <string>

/*
 Implementation of the default constructor.
 */
Human::Human() {
  name = "Janis";
  lastName = "Berzins";
  age = 31;
};

Human::Human(string humanName, string humanLastName, int humanAge) {
  name = humanName.empty() ? "Janis" : humanName;
  lastName = humanLastName.empty() ? "Berzins" : humanLastName;
  age = humanAge > 0 ? humanAge : 31;
};

// Implementing the copy constructor
Human::Human(const Human &other) {
  name = other.name;
  lastName = other.lastName;
  age = other.age;
};

// Implementing the assignment operator
Human &Human::operator=(const Human &other) {
  if (this != &other) {
    name = other.name;
    lastName = other.lastName;
    age = other.age;
  }
  return *this;
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
