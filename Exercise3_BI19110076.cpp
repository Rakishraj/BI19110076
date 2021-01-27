
//LAB 1//
#include <iostream>
using namespace std;

void ChangeIt_1(int n) { 
  n = 5;                    
}                           

void ChangeIt_2(int *n) {   
  *n = 6;                   
}                           

void ChangeIt_3(int &n) {   
  n = 7;                    
}                           

int ChangeIt_4(int n) {     
  n = 8;
  return n;
}

void swap(int *x, int *y)
{
	int average;
	int temp = *x;
	if(*x > *y)
	{
		*x = *y;
		*y = temp;
	    
	}
	cout << "x: "<< *x << endl << "y: " << *y << endl;	
}

double getAverage(int *array, int SIZE)
{
	int average;
	int total = 0;
	for ( int i = 0 ; i < SIZE ; i ++ )
	{
		total += *(array + i);	
	}
	average = total/SIZE;
	cout << "Average : " <<  average << endl;
}

main()
{
    int *p;     
    int x=10, y=7, SIZE=5, data[SIZE]={1,3,2,5,4};
    p=&x;       
    
    ChangeIt_1(x); 
    cout << "ChangeIt_1  : " << *p << endl;
    
    ChangeIt_2(&x);
    cout << "ChangeIt_2  : " << *p << endl;
    
    ChangeIt_3(x);
    cout << "ChangeIt_3  : " << *p << endl;
    
    x = ChangeIt_4(x);
    cout << "ChangeIt_4  : " << *p << endl;
    
    swap(&x,&y);
    getAverage(data,SIZE);
}





/* 
1.x is passed by value
2.n is passed by using address, thus a dereference pointer need to be used
3.
      void swap(int *x, int *y)
      {
	   int average;
	   int temp = *x;
	   if(*x > *y)
	   {
		*x = *y;
		*y = temp;
	    
	   }
	   cout << "x: "<< *x << endl << "y: " << *y << endl;	
      }
.
.
.
.
.
    swap(&x,&y);
}

4.
     double getAverage(int *array, int SIZE)
{
	int average;
	int total = 0;
	for ( int i = 0 ; i < SIZE ; i ++ )
	{
		total += *(array + i);	
	}
	average = total/SIZE;
	cout << "Average : " <<  average << endl;
}
.
.
.
.
   getAverage(data,SIZE);
					
}   
*/

