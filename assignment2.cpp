#include <iostream>
using namespace std;


class Stack {
public:
	//top variable to check if item can be
	//inserted into stack
	int top;
	char arr[50];

	//constructor initializes top to -1 for empty stack
	//all items become null
	Stack() {
		top = -1;
		for (int i = 0;i < 50;i++) {
			arr[i] = NULL;
		}

	}
	//functin to check if stack is empty
	bool isEmpty() {
		if (top == -1) {
			return true;
		}
		else {
			return false;
		}
	}
	//function to check if stack is full
	bool isFull() {
		//no item can be inserted if last position
		//of stack is already filled
		if (top == 49) {
			return true;
		}
		else {
			return false;
		}

	}

	//insert element into stack
	void push(char val) {
		//check if stack can accommodate another element
		if (isFull()) {
			cout << "Stack overflow" << endl;

		}
		else {
			//increment top to add new element in the 
			//correct position
			top++;
			arr[top] = val;
		}
	}
	//function to remove a value from the top of stack
	char pop() {
		//check is stack has any elements in it
		if (isEmpty()) {
			cout << "Stack underflow" << endl;

		}
		else {
			//store top value in a variable
			char val = arr[top];
			//initialize to null to remove item
			arr[top] = NULL;
			//decrement top to make the position available
			top--;
			//return the value that was stored on top
			return val;

		}
	}
	//count the number of items in stack
	int count() {
		//increment top to show correct number of items
		return (top + 1);
	}
	//function to show the item on top
	char peek() {
		return arr[top];
	}
};
