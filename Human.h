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
   Default constructor to create a default-constructed Human object.
   Needed for the 'dequeue' method of the Queue class which returns
   a default object of a specific type when the queue is empty.
  */
  Human();
  Human(string name, string lastName, int age);

  string GetName();
  string GetLastName();
  int GetAge();
  void PrintHuman();
};

#endif
