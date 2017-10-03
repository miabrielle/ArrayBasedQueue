#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>
using namespace std;
const int MAX_SIZE = 10; //global constant

class Queue
{
private:
	int count;					//counts # elements in queue
	int front, back;				//holds location of front and back
								//in array
	int numArray[MAX_SIZE];		//array holding the queue
public:
	Queue();
	~Queue();
	void enqueue(int addNum);	//adds number to queue
	int dequeue();				//takes number off queue
	bool isEmpty();				//checks if array of queue is empty
	void printQueue();
};

#endif /* QUEUE_H_ */
