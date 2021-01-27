#include <iostream>
using namespace std;


void swap(int *xp,int *xy)
{
	int temp = *xp;
	*xp = *xy;
	*xy = temp;
	
}

void SelectionSort(int  arr[], int n)
{
	int t;
	
	for(int i =0; i<n-1; i++)
	{
	
		t = i;
		for(int j = i+1; j < n ; j++)
		{
			if(arr[j] <arr[i])
			{
				t = j;
				swap(&arr[t],&arr[i]);
			}
		}
		
		
	}
}

void printArray(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << " ";  
     
}  


int main()
{
	int arr[]={4,2,0,3,4,0,4,1,2,1,3};
	int n = 11;
	
	cout<<"array before sorting : ";
	cout<<"[ "; printArray(arr,n); cout<<" ]";
	cout<<endl;
	SelectionSort(arr,n);
	cout<<"array after sorting : ";
	cout<<"[ "; printArray(arr,n); cout<<" ]";
	
}
