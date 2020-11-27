#include <iostream>
#include <string>
using namespace std;

class Node
{
	int barcode;
	string product_Name;
	double price;
	
	Node *next;
	
	public :
		
		void setData(int bc,string pName,double p)
		{
			barcode = bc;
			product_Name =pName;
			price = p;
			
		}
		
		
		void setNext(Node *aNext) 
		{
			next=aNext;
		}
		
		int getBarcode()
		{
			return barcode;
		}
		
		string getName()
		{
			return product_Name;
		}
		
		double getPrice()
		{
			return price;
		}
		
		Node *Next()
		{
			return next;
		}
		
	
};




class List
{
	Node *head;
	double total;
	
	public:
		List()
		{
			head=NULL;
		}
		
		void display();
		
		void addNode(int bc,string pName, double p);
		

		
};

void List::addNode(int bc,string pName,double p)
{
	Node* newNode = new Node();
	newNode->setData( bc, pName, p);
	newNode->setNext(NULL);
	
	 
    Node *tmp = head;

    if ( tmp != NULL )
	{
    	
    	while ( tmp->Next() != NULL )
		{
        	tmp = tmp->Next();
    	}

    	
    	tmp->setNext(newNode);
    }
    else
	{
    	
    	head = newNode;
    }
    
   
	
}



void List::display()
{
	double total=0;
	Node *tmp = head;
	
	cout<<"========================================"<<endl;
	cout<<" BC Items			Price"<<endl;
	cout<<"========================================"<<endl;
	if (tmp == NULL)
	{
		cout<< "Empty" <<endl;
		return;
	}
	if(tmp->Next() == NULL)
	{
	   cout<<tmp->getBarcode()<<" "<<tmp->getName()<<"     "<<tmp->getPrice()<<endl;
	   total+=tmp->getPrice();
	}
	else
	{
		do
		{
			cout<<tmp->getBarcode()<<" "<<tmp->getName()<<"     "<<tmp->getPrice()<<endl;
			total+=tmp->getPrice();
			tmp = tmp->Next();
		}
		while (tmp != NULL);
	}
	cout<<"========================================"<<endl;
	cout<<"Total (GST Incl.)             "<<total<<endl;
	cout<<"========================================";
}

int main()
{
	
	List food;
	food.addNode(10,"Pagoda Gnut 110g      ",3.49);
	food.addNode(11,"Hup Seng Cream Cracker",4.19);
	food.addNode(12,"Yit Poh 2n1 Kopi-o    ",7.28);
	food.addNode(13,"Zoelife SN & Seed     ",5.24);
	food.addNode(14,"Gatsby S/FO Wet&Hard  ",16.99);
	food.addNode(15,"GB W/G U/Hold 150g    ",6.49);
	food.display();	
}
