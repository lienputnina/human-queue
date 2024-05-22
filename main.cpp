#include "Human.h"
#include "Queue.cpp"
#include "Queue.h"

#include <iostream>
using namespace std;

int main() {

  cout << "Testing Queue-Human" << endl;
  Queue<Human> HumanQueue(5);

  Human President1("Vaira", "Vīķe-Freiberga", 86);
  Human President2("Valdis", "Zatlers", 69);
  Human President3("Andris", "Bērziņš", 80);
  Human President4("Raimonds", "Vējonis", 58);
  Human President5("Egils", "Levits", 69);
  Human President6("Edgars", "Rinkēvičs", 51);

  cout << "Filling HumanQueue with presidents" << endl;
  HumanQueue.enqueue(President1);
  HumanQueue.enqueue(President2);
  HumanQueue.enqueue(President3);
  HumanQueue.enqueue(President4);
  HumanQueue.enqueue(President5);
  HumanQueue.enqueue(President6);

  cout << "The last five presidents of Latvia are: " << endl;
  HumanQueue.PrintQueue();

  cout << "Dequeuing Latvian presidents:" << endl;
  HumanQueue.dequeue();

  cout << "Remaining presidents: " << endl;
  HumanQueue.PrintQueue();

  return 0;
}