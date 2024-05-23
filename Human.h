#ifndef HUMAN_H
#define HUMAN_H

#include <string>
using namespace std;

class Human {

private:
  string name;
  string lastName;
  int age;

public:
  Human();
  Human(string name, string lastName, int age);

  string GetName();
  string GetLastName();
  int GetAge();
  void PrintHuman();
};

#endif