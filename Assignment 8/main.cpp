/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #8 : Templates
 * CLASS 		 : CS1c
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 03/25/2020
 *****************************************************************************/
#include "myheader.h"
#include "Queue.h"
/**********************************************************************************
 * Templates
 * --------------------------------------------------------------------------------
 * This program uses to STL library container Queue to create a queue. This
 * program adds elements to a queue, deletes elements from a queue, returns
 * the front element of a queue, checks if a queue is empty or full. The
 * program can also print all the elements in the queue. This programs has
 * a copy constructor and it can copy all the elements of the queue in another
 * queue.
 * --------------------------------------------------------------------------------
 *********************************************************************************/
int main()
{
	// Outputs Heading
	cout << PrinterHeader("Templates", 8 , 'A');

	// Output description of the program
	cout << "\nThis program will create and test a class template for a\n"
			"queue class.It will define several queues of different data\n"
			"types (char, int, bool) and insert and remove data from\n"
			"them. Then it will print the queues. to verify the enqueues\n"
			"and dequeues.This programs also has a copy constructor and\n"
			"it can copy all the elements of the queue in another queue.\n";
	char   charVal[] = { 'a', 'b', 'c', 'd',
			'e', 'f', 'g', 'h', 'i', 'j' };

	int    intVal[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	double doubleVal[] = { 1.1, 2.1, 3.3, 4.4, 5.5,
			6.6, 7.7, 8.8 };

	/****************************************************************************
	 * Part One - Character Queue:
	 *            Insert (Enqueue(object)): a b c d e f
	 *            Dequeue(): three times
	 *            Insert (Enqueue(object)): g h i j
	 *            Dequeue(): eight times
	 *
	 *            Then Test the following:
	 *            1. The isEmpty() and IsFull() methods for both the pass
	 *            and fail conditions
	 *            2. The Front() method
	 *            3. The copy constructor
	 ****************************************************************************/
	Queue<char>charQueue;					//IN- Object of queueType
	cout << "\n+++++++++++++++++++++\n";
	cout << "  Character Enqueue    ";
	cout << "\n+++++++++++++++++++++\n";
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "Enqueue  ";
	//PROCESSING- adding elements to the Queue
	charQueue.Enqueue('a');
	charQueue.Enqueue('b');
	charQueue.Enqueue('c');
	charQueue.Enqueue('d');
	charQueue.Enqueue('e');
	charQueue.Enqueue('f');
	charQueue.PrintQueue(charQueue);

	cout << "\nDequeue  ";
	//PROCESSING- removing elements from the Queue
	charQueue.Dequeue();
	charQueue.Dequeue();
	charQueue.Dequeue();
	charQueue.PrintQueue(charQueue);

	cout << "\nEnqueue  ";
	//PROCESSING- adding elements to the Queue
	charQueue.Enqueue('g');
	charQueue.Enqueue('h');
	charQueue.Enqueue('i');
	charQueue.Enqueue('j');
	charQueue.PrintQueue(charQueue);

	cout << "\nDequeue  ";
	//PROCESSING- removing elements from the Queue
	charQueue.Dequeue();
	charQueue.Dequeue();
	charQueue.Dequeue();
	charQueue.Dequeue();
	charQueue.Dequeue();
	charQueue.Dequeue();
	charQueue.Dequeue();
	charQueue.Dequeue();
	charQueue.PrintQueue(charQueue);

	cout << "\nIs Empty?  ";
	//PROCESSING- checking if queue is empty
	charQueue.isEmpty();

	cout << "\nIs Full?  ";
	//PROCESSING- checking if queue is full
	charQueue.isFull();

	cout << "\nFront of the Queue?  ";
	//PROCESSING- checking what is in the Front of the queue
	charQueue.Front();

	Queue<char>copyCharQueue(charQueue);
	charQueue.PrintQueue(charQueue);
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	/***********************************************************************
	 * Part Two - Integer Queue:
	 *            Insert (Enqueue(object)): 1 2 3 4 5 6
	 *            Dequeue(): twice
	 *            Insert (Enqueue(object)): 7 8 9
	 *            Dequeue(): four times
	 *
	 *            Then Test the following:
	 *            1. The isEmpty() and IsFull() methods for both the pass
	 *            and fail conditions
	 *            2. The Front() method
	 *            3. The copy constructor
	 ***********************************************************************/
	cout << "\n+++++++++++++++++++\n";
	cout << "  Integer Enqueue    ";
	cout << "\n+++++++++++++++++++\n";
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	Queue<int>intQueue;
	cout << "Enqueue  ";
	//PROCESSING- adding elements to the Queue
	intQueue.Enqueue(1);
	intQueue.Enqueue(2);
	intQueue.Enqueue(3);
	intQueue.Enqueue(4);
	intQueue.Enqueue(5);
	intQueue.Enqueue(6);
	intQueue.PrintQueue(intQueue);

	cout << "\nDequeue  ";
	//PROCESSING- removing elements from the Queue
	intQueue.Dequeue();
	intQueue.Dequeue();
	intQueue.PrintQueue(intQueue);

	cout << "\nEnqueue  ";
	//PROCESSING- adding elements to the Queue
	intQueue.Enqueue(7);
	intQueue.Enqueue(8);
	intQueue.Enqueue(9);
	intQueue.PrintQueue(intQueue);

	cout << "\nDequeue  ";
	//PROCESSING- removing elements from the Queue
	intQueue.Dequeue();
	intQueue.Dequeue();
	intQueue.Dequeue();
	intQueue.Dequeue();
	intQueue.PrintQueue(intQueue);

	cout << "\nIs Empty?  ";
	//PROCESSING- checking if queue is empty
	intQueue.isEmpty();

	cout << "\nIs Full?  ";
	//PROCESSING- checking if queue is full
	intQueue.isFull();

	cout << "\nFront of the Queue?  ";
	//PROCESSING- checking what is in the Front of the queue
	intQueue.Front();

	Queue<int>copyIntQueue(intQueue);
	copyIntQueue.PrintQueue(copyIntQueue);
	cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	/***********************************************************************
	 * Part Three: Double queue:
	 *            Insert (Enqueue(object)): 1.1 2.1 3.3 4.4 5.5 6.6
	 *            Dequeue(): once
	 *            Insert (Enqueue(object)): 7.7 8.8
	 *            Dequeue(): five times
	 *
	 *            Then Test the following:
	 *            1. The isEmpty() and IsFull() methods for both the pass
	 *            and fail conditions
	 *            2. The Front() method
	 *            3. The copy constructor
	 ***********************************************************************/
	cout << "\n+++++++++++++++++\n";
	cout << "  Double Queue    ";
	cout << "\n+++++++++++++++++\n";
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	Queue<double>doubleQueue;
	cout << "Enqueue  ";
	//PROCESSING- adding elements to the Queue
	doubleQueue.Enqueue(1.1);
	doubleQueue.Enqueue(2.2);
	doubleQueue.Enqueue(3.3);
	doubleQueue.Enqueue(4.4);
	doubleQueue.Enqueue(5.5);
	doubleQueue.Enqueue(6.6);
	doubleQueue.PrintQueue(doubleQueue);

	cout << "\nDequeue  ";
	//PROCESSING- removing elements from the Queue
	doubleQueue.Dequeue();
	doubleQueue.PrintQueue(doubleQueue);

	cout << "\nEnqueue  ";
	//PROCESSING- adding elements to the Queue
	doubleQueue.Enqueue(7.7);
	doubleQueue.Enqueue(8.8);
	doubleQueue.PrintQueue(doubleQueue);

	cout << "\nDequeue  ";
	//PROCESSING- removing elements from the Queue
	doubleQueue.Dequeue();
	doubleQueue.Dequeue();
	doubleQueue.Dequeue();
	doubleQueue.Dequeue();
	doubleQueue.Dequeue();
	doubleQueue.PrintQueue(doubleQueue);

	cout << "\nIs Empty?  ";
	//PROCESSING- checking if queue is empty
	doubleQueue.isEmpty();

	cout << "\nIs Full?  ";
	//PROCESSING- checking if queue is full
	doubleQueue.isFull();

	cout << "\nFront of the Queue?  ";
	//PROCESSING- checking what is in the Front of the queue
	doubleQueue.Front();

	Queue<double>copyDoubleQueue(doubleQueue);
	copyDoubleQueue.PrintQueue(copyDoubleQueue);

	cout << "\n\nTesting true condition for isFULL()\n";
	cout << "Enqueue  ";
	//PROCESSING- adding elements to the Queue
	doubleQueue.Enqueue(7.7);
	doubleQueue.Enqueue(8.8);
	doubleQueue.Enqueue(9.9);
	doubleQueue.Enqueue(1.1);
	doubleQueue.Enqueue(2.2);
	doubleQueue.Enqueue(3.3);
	doubleQueue.Enqueue(4.4);
	doubleQueue.Enqueue(5.5);
	doubleQueue.PrintQueue(doubleQueue);
	cout << "\nIs Full?  ";
	//PROCESSING- checking if queue is full
	doubleQueue.isFull();
	cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	return 0;
}
