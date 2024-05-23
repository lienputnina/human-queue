#ifndef Queue_h
#define Queue_h

// Declaring the class as a template class.
template <class Type> class Queue {

private:
  Type *queueArray;
  int queueSize;    // Maximum size of the queue.
  int elementCount; // Current number of elements in the queue.

public:
  Queue(int queueSize);
  ~Queue();

  void enqueue(Type x);

  // Method that removes and returns the first element of the queue.
  Type dequeue();

  void PrintQueue();
  bool isArrayFull() const; // Method for checking, if the array is full.
};

#endif
