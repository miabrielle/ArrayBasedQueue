#include "Queue.h"

Queue::Queue(){
	front = -1;
	back =-1;
	count = 0;
}

Queue::~Queue() {}

void Queue::enqueue(int addNum){

	if(isEmpty())
		front = back = 0;
	else
		back = back + 1;

	numArray[(back % MAX_SIZE)] = addNum;

	if(count < 10)
		count++;
	else
		front++;

	cout << addNum << " added to queue\n";
}

int Queue::dequeue(){

	int value;

	if(isEmpty()) {
		cout << "ERROR: Cannot dequeue from empty queue\n";
		return 0;
	}
	else if(count == 1){
		value = numArray[front];
		front = back = -1;
	}
	else{
		value = numArray[front];
		numArray[front] = 0;
		front++;
	}

	count--;
	cout << value << " from index " << (front - 1) << " taken off queue\n";
	return value;
}

bool Queue::isEmpty(){
	return count == 0;
}

void Queue::printQueue()
{
	cout << "Printing Queue\n";

	for(int i = 0; i < back; i++)
	{
		cout << numArray[i] << " ";
	}
}
