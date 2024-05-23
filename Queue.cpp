#include "Queue.h"
#include <iostream>
using namespace std;

template <class Type> Queue<Type>::Queue(int queueArraySize) {

  queueSize = queueArraySize;
  elementCount = 0;

  arraySize = queueArraySize;
  elementCount = 0;
  /*
  Allocating memory for Queue class object. This object will be an array with
  the size the user will provide.
  */
  queueArray = new Type[queueArraySize];

  // Checking, if the memory allocation was successful.
  if (queueArray == nullptr) {
    cout << "Not enough memory. Program is shutting down." << endl;
    exit(1); // Exiting the program, if memory allocation fails.
  };
};

// Destructor to deallocate memory and prevent memory leaks.
template <class Type> Queue<Type>::~Queue() { delete[] queueArray; };

// Checking, if the queue is full.
template <class Type> bool Queue<Type>::isQueueFull() const {
  return elementCount >= queueSize;
}

template <class Type> void Queue<Type>::enqueue(Type x) {
  // Checking, if the array is full to see whether a new element can be added.
  if (isArrayFull()) {
    cout << "Queue is full. Cannot add any more elements." << endl;
    cout << "\n";
  } else {
    /*
    Adding a new element at the curent position of elementCount. If the position
    is 0, the element will be the first, if 1 - second, etc.
    */
    queueArray[elementCount++] = x;
  };
};

template <class Type> Type Queue<Type>::dequeue() {
  if (elementCount == 0) {
    cout << "Queue is empty. Nothing to remove." << endl;
    cout << "\n";

    // Returning the default value of Type, if the queue is empty.
    return Type();
  } else {

    /*
    Returning Type() to provide a default value of 'Type'. This way the method
    will always return a value of the correct type.
    */
    return Type();
  }
  else {
    /*
    Storing the element to be removed to let the program now, which element is
    being removed.
    */
    Type removedElement = queueArray[0];

    /*
    Storing the element to be removed to let the program now, which element is
    being removed.
    */
    Type removedElement = queueArray[0];

    /*
    Shifting array elements to the left to "delete" the first element and fill
    the gap.
    */
    for (int i = 0; i < queueSize - 1; i++) {
      queueArray[i] = queueArray[i + 1];
    };

    elementCount--;

    return removedElement;
  };
};

template <class Type> void Queue<Type>::PrintQueue() {
  for (int i = 0; i < arraySize; i++) {
    /*
      Directly printing objects of the Human class. Modified loop body from
      'Uzdevums1'·
    */
    queueArray[i].PrintHuman();
  };
  cout << "\n";
};

/*
Explicitly instantiating the template class to avoid compilation errors.
*/
template class Queue<int>;
template class Queue<float>;
template class Queue<char>;
