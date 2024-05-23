#include "Human.h"
#include "Queue.cpp"
#include "Queue.h"

#include <iostream>
using namespace std;

int main() {

  Queue<Human> HumanQueue(5);

  Human President1("Edgars", "Rinkēvičs", 51);
  Human President2("Egils", "Levits", 69);
  Human President3("Andris", "Bērziņš", 80);
  Human President4("Raimonds", "Vējonis", 58);
  Human President5("Valdis", "Zatlers", 69);
  Human President6("Vaira", "Vīķe-Freiberga", 86);

  cout << "Filling HumanQueue with presidents:" << endl;
  HumanQueue.enqueue(President1);
  HumanQueue.enqueue(President2);
  HumanQueue.enqueue(President3);
  HumanQueue.enqueue(President4);
  HumanQueue.enqueue(President5);
  HumanQueue.enqueue(President6); // Queue is full

  cout << "The last five presidents of Latvia are: " << endl;
  cout << "\n";
  HumanQueue.PrintQueue();

  cout << "Removing the current president from the queue." << endl;
  HumanQueue.dequeue();

  cout << "Remaining presidents: " << endl;
  cout << "\n";
  HumanQueue.PrintQueue();

  return 0;
}