/* NAME: Mia Saint Clair
 * CLASS: Data Structures
 * ASSIGNMENT: Lab 9 Array Based Queue
 * DESCRIPTION:
 */

#include "Queue.h"

int main()
{
	Queue myQueue;

	//populates queue with 11 numbers, writing over the first one
	//considering the max size is 10
	myQueue.enqueue(1);
	myQueue.enqueue(1);
	myQueue.enqueue(2);
	myQueue.enqueue(3);
	myQueue.enqueue(5);
	myQueue.enqueue(8);
	myQueue.enqueue(13);
	myQueue.enqueue(21);
	myQueue.enqueue(34);
	myQueue.enqueue(55);
	myQueue.enqueue(89);

	cout << endl << endl;

	//Prints out numbers in queue
	myQueue.printQueue();

	cout << endl << endl;

	//Takes 3 values off the queue
	myQueue.dequeue();
	myQueue.dequeue();
	myQueue.dequeue();
	cout << endl << endl;

	//Prints out numbers in queue again
	myQueue.printQueue();

}


/*OUTPUT
 *
 *
1 added to queue
1 added to queue
2 added to queue
3 added to queue
5 added to queue
8 added to queue
13 added to queue
21 added to queue
34 added to queue
55 added to queue
89 added to queue


Printing Queue
89 1 2 3 5 8 13 21 34 55

1 from index 1 taken off queue
2 from index 2 taken off queue
3 from index 3 taken off queue


Printing Queue
89 0 0 0 5 8 13 21 34 55
 */
