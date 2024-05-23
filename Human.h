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
  /*
  Default constructor to provide default-constructed Human object. This is
  needed for the 'dequeue''method of the Queue class which will try to return a
  default object of a specific type.
  */
  Human();
  Human(string name, string lastName, int age);

  string GetName();
  string GetLastName();
  int GetAge();
  void PrintHuman();
};

#endif