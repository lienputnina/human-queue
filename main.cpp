#include "Human.h"
#include <iostream>
using namespace std;

int main() {

  Human FirstHuman("Uldis", "Dumpis", 80);

  FirstHuman.PrintHuman();

  cout << "Printing human:" << endl;
  cout << "Name: " << FirstHuman.GetName() << endl;
  cout << "Last name: " << FirstHuman.GetLastName() << endl;
  cout << "Age: " << FirstHuman.GetAge() << endl;

  return 0;
}