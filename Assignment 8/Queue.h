/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #8 : Templates
 * CLASS 		 : CS1c
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 03/25/2020
 *****************************************************************************/
#ifndef QUEUE_H_
#define QUEUE_H_
#include "myheader.h"
/****************************************************************
 * Queue
 * We will make a queue version of a stack ADT and then we will
 * use the members of this class to perform actions in the main
 * program.
 ***************************************************************/
template <class object>
class Queue
{
public:
	/******************************
	 ** CONSTRUCTOR & DESTRUCTOR **
	 ******************************/

	/****************************************************************
	 * Queue();
	 * Parameterized Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	Queue(int stackSize = 100);

	/****************************************************************
	 * Queue(const Queue<object>& otherQueue);
	 * copy constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	Queue(const Queue<object>& otherQueue);

	/****************************************************************
	 * ~Queue();
	 * Destructor; Clears the linked list
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	~Queue();

	/****************
	 ** MUTATORS **
	 ****************/

	/*******************************************************************
	 * void Enqueue(const object& element);
	 *
	 * Mutator; This method inserts an element at the end of the queue.
	 *------------------------------------------------------------------
	 * Parameter: const object& e  // IN - new element
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void Enqueue(object);

	/*******************************************************************
	 * void Dequeue();
	 *
	 * Mutator; This method removes and returns the element at the front
	 *          of the queue.
	 *------------------------------------------------------------------
	 * Parameter: none
	 *------------------------------------------------------------------
	 * Return: returns the element
	 *******************************************************************/
	void Dequeue();

	/***************
	 ** ACCESSORS **
	 ***************/

	/*******************************************************************
	 * object Front();
	 *
	 * Accessor; This method will return the element at the front
	 *           without removing it.
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return: head node
	 *******************************************************************/
	object Front();

	/****************************************************************
	 * bool isEmpty();
	 *
	 * Accessor; This method indicates whether no elements are stored.
	 * --------------------------------------------------------------
	 * Parameters: none
	 * --------------------------------------------------------------
	 * Return: a boolean expression
	 *******************************************************************/
	bool isEmpty();

	/****************************************************************
	 * bool isFull();
	 *
	 * Accessor; This method indicates whether queue is full.
	 * --------------------------------------------------------------
	 * Parameters: none
	 * --------------------------------------------------------------
	 * Return: a boolean expression
	 *******************************************************************/
	bool isFull();

	/*******************************************************************
	 * 	int Size();
	 *
	 * Accessor; This method will return the number of elements stored.
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return: Total number of strings in the stack
	 *******************************************************************/
	int Size();

	/*******************************************************************
	 * PrintQueue();
	 *
	 * Accessor; This method prints the queues to verify the enqueues
	 *           and dequeues.
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void PrintQueue(Queue<object>& printQueue);

private:
	queue <object> newQueue;
};
/****************************************************************
 * Queue();
 * Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ***************************************************************/
template <class object>
Queue<object>::Queue(int QueueSize){}
/****************************************************************
 * Queue(const Queue<object>& otherQueue);
 * copy constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ***************************************************************/
template<class object>
Queue<object>::Queue(const Queue<object>& otherQueue)
{
	cout << "\nCopy constructor is called - ";
	newQueue= otherQueue.newQueue;
	if (newQueue.size() <= 0)
	{
		cout << "Queue is empty so nothing is copied\n";
	}
	else
	{
		cout << "Copied items are -";
	}

}
/****************************************************************
 * ~Queue();
 * Destructor; Clears the linked list
 * Parameters: none
 * Return: none
 ***************************************************************/
template <class object>
Queue<object>::~Queue(){}

/******************************************************************************
 * Method Enqueue : Class Queue
 * ____________________________________________________________________________
 *  This method will create a Node, then add the Node in the stack, by adding
 *  it to the end of the queue. – returns nothing.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	                const Elem& e - New Node
 *
 * POST-CONDITIONS
 * 	This function will create a Node, then add the Node in the stack, by adding
 *  it to the end of the linked List – returns nothing.
 ******************************************************************************/
template <class object>
void Queue<object>::Enqueue(object element)
{
	if (newQueue.size() >= MAX_SIZE)
	{
		isFull();
	}

	else
	{
		newQueue.push(element);
	}
}
/******************************************************************************
 * Method Dequeue : Class Queue
 * ____________________________________________________________________________
 *  This method will remove the Node from the stack, and then delete the
 *  Node – returns nothing.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	 This function will remove the stringNode from the stack, and delete the
 * 	 stringNode – returns nothing
 ******************************************************************************/
template <class object>
void Queue<object>::Dequeue()
{
	if (newQueue.size() <= 0)
	{
		isEmpty();
	}
	else
	{
		newQueue.pop();
	}
}
/******************************************************************************
 * Method Front : Class Queue
 * ____________________________________________________________________________
 *  This method will return the Node at the top of the stack – returns object.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the Node at the top of the stack – returns object.
 ******************************************************************************/
template <class object>
object Queue<object>::Front()
{
	if (newQueue.size() <= 0)
	{
		cout << "Queue is empty so nothing is in the front\n";
	}
	else
	{
		return newQueue.front();
	}
}
/******************************************************************************
 * Method isEmpty : Class Queue
 * ____________________________________________________________________________
 *  This method will check if stack is empty  – returns a boolean expression.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	This function will check if stack is empty  – returns a boolean expression.
 ******************************************************************************/
template <class object>
bool Queue<object>::isEmpty()
{
	if (!newQueue.empty() || newQueue.size() < 0)
	{
		cout << "Queue is not empty";
		return true;
	}

	else
	{
		cout << "Queue is empty";
		return false;
	}
}
/******************************************************************************
 * Method isFull : Class Queue
 * ____________________________________________________________________________
 *  This method will check if stack is full  – returns a boolean expression.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	This function will check if stack is full  – returns a boolean expression.
 ******************************************************************************/
template <class object>
bool Queue<object>::isFull()
{
	if (newQueue.size() >= MAX_SIZE)
	{
		cout << "Queue is full";
		return true;
	}
	else
	{
		cout << "Queue is not full";
		return false;
	}
}
/******************************************************************************
 * Method Size : Class Queue
 * ____________________________________________________________________________
 *  This method will return the number of strings in the stack.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the number of strings in the stack.
 ******************************************************************************/
template <class object>
int Queue<object>::Size()
{
	return (newQueue.size());
}
/******************************************************************************
 * Method PrintQueue : Class Queue
 * ____________________________________________________________________________
 *  This method will return the Node at the top of the stack.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the Node at the top of the stack.
 ******************************************************************************/
template <class object>
void Queue<object>::PrintQueue(Queue<object>& printQueue)
{
	queue <object> tempQueue;
	tempQueue= printQueue.newQueue;

	while (!tempQueue.empty())
	{
		cout << tempQueue.front() << ", ";
		tempQueue.pop();
	}
}
#endif /* QUEUE_H_ */
