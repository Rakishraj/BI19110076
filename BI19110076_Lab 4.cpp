#include <iostream>

using namespace std;

class Queue{
	int queueArr[10], n, rear, front;
	
	public:
	Queue(){ // constructor
		rear = -1;
		front = -1;
	}
	
	void add_Q (int input2);
	void delete_Q();
	void display_Q();
};
			
void Queue::add_Q (int input2){ //circular queue or copy&paste to front queue, if empty or not
   	n = 10;
   		
	if (rear == n - 1) //if queue is full
   		cout << "Queue Overflow!" << endl;
   	else{
    if (front == - 1){ //if queue is not full, insert the integer
		front = 0;
	}	
	rear++;
	queueArr[rear] = input2;
   	}
}
		
void Queue::delete_Q (){
	if (front == - 1 || front > rear) { //if empty
	    cout << "Queue Underflow!";
	    return;
    }  
	else { // if not empty
	    cout << "Element deleted from queue is: " << queueArr[front] << endl;
	    front++;
   	}
}
	
void Queue::display_Q (){
	if (front == - 1) // if empty
   		cout << "Queue is empty." << endl;
   	else { // if not empty
      	cout << "Queue elements are: ";
      	for (int i = front; i <= rear; i++){
      		cout << queueArr[i] << " ";
      	}
    	cout << endl;	
   	}	
}

int main()
{
	int input, input2;
	Queue qu01;
	cout << "Press 1 = INSERT" << endl; 
	cout << "Press 2 = DELETE" << endl;
	cout << "Press 3 = DISPLAY" << endl;
	cout << "Press 4 = EXIT" << endl;
	cout << "===========================" << endl;
	
	do{
		cout << "Enter your choice: " << endl;
		cin >> input;
		switch(input){
			case 1: cout << "Insert element (as integer): ";
					cin >> input2;
					qu01.add_Q(input2);
					break;
			case 2: qu01.delete_Q();
					break;
			case 3: qu01.display_Q();
					break;
			case 4: cout << "Thank you for using this program.";
					exit(0);
					break;
			default: cout << "Invalid choice!" <<endl;
		} //end switch case
	}while(input != 4); //end while
	
	return 0;
	
}
