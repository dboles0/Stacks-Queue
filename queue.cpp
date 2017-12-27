#include"queue.h"

//constructor initializing name seat_number and boarding 

queue::queue()
    : rear(NULL)
{}    //end default constructor
/*
//constructor for the customer info class
customer_info::customer_info()
{
    name = new char[100];
    seat_number = new char[3];
    int boarding_number = 0;
}

//destructor for the customer info class
customer_info::~customer_info()
{
    if(name)
        delete [] name;
    if(seat_number)
        delete [] seat_number;
}
*/
/*
//default destructor
queue::~queue()
{
    if(rear)
    {
        q_node * temp = NULL;
        while(rear->next)
        {   
            temp = rear;
            rear = rear->next;
            delete temp;
        }  //end while
     }//end if
}     //end default destructor
*/
/*
q_node::q_node()
{
	data = NULL;
	next = NULL;
}
*/
//add entry to queue
int queue::enqueue(const customer_entry & to_add)
{
    q_node * temp = NULL;
    if(!rear)
    {  
        int success = 0;
        rear = new q_node;
        rear->next = rear;
        success = rear->data.copy_entry(to_add);
        return success;
    }
    else if(rear)
    {
        int success = 0;        
        q_node * temp = new q_node;
        temp->next = rear->next;
        rear->next = temp;
        rear = temp;
        success = temp->data.copy_entry(to_add); 
        return success;
    } 
} // end enqueue

//remove candidate form the end of the CLL queue
int queue::dequeue()
{
    if(!rear) return 0;
    else if(rear->next==rear)
    {
        delete rear;
        rear=NULL;
    }
    else
    {
        q_node * temp = rear->next;
        rear->next = temp->next;
        delete temp;
    }
} // end dequeue
/*
int queue::display()
{
    q_node * current = rear->next;
    q_node * hold = rear->next;
    rear->next = NULL;
    while(current) 
    {
        cout << current->data.name << " ";
        current = current->next;
    }
    rear->next = hold;
}

*/
