//Donald C Boles
//ID - 903512975
//CS 163 - Data Structures (Spring 2017)


//this program will streamline the management
//of passengers boarding an aircraft in two parts
//first it will take the queue of customers checking
//in then sort each customers by in a first in 
//last out entry method
    
#include "queue.h"
#include "stack.h"

using namespace std;

int main ()
{
    customer_entry to_add;   //instanciate and add to customer_entry with to_add
    stack boarding_stack;    //instanciate stack to store passengers on aircraft
    queue check_in_queue;    //before boarding call queue
    queue boarding_queue;    //after boarding call queue
    bool valid = false;      //use for validity trigger
    char name[100];          //hold customers name 
    char seat_number[10];    //holds row and seat for customer
    int boarding_number = 0; //numeric value indicate line position
    int row = 0;             //holds the number of seats in aircraft
    int column = 0;          //holds number of rows in the aircraft
    int cnt = 0;             //count to track each customers entry
    int lr_cnt = 0;          //count to index left side of aircraft
    int rr_cnt = 0;          //count to index right side of aircraft



    
    cout << "\n\n\nAircraft\'s Dimentions " << endl;
    cout << "Enter the aircrafts total number of row\'s: " << endl;
    
    //ensure valid entry type 
    while(!valid)
    {
        cin >> column;
        cin.ignore(100, '\n');
        valid = true;
        
        //sanitize entry if cin.fail
        if(cin.fail())
        {	
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Enter valid numeric entry: " << endl;
            valid = false;
        }
    }    //end while for column entry
    //set valid to false again to use again 
    valid = false;

    cout << "Enter the total number of seats in each row: " << endl;
    
    //ensure valid data type
    while(!valid)
    {
    cin >> row;
    cin.ignore(100, '\n'); 
        valid = true;
      
        //sanitize entry if cin.fail
        if(cin.fail())
        {	
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Enter valid numeric entry: " << endl;
            valid = false;
        }
    }     //end while row entry
     
    cout << "\nCustomer\'s information:" << endl;

    //loop through customers until the list is filled
    do
    {
        cout << "\nEnter customer\'s name: " << endl;
        cin.get(name, 100); cin.ignore(100, '\n'); 

        cout << "\nEnter seat infomraiton: " << endl;
        cin.get(seat_number, 100); cin.ignore(100, '\n'); 
        to_add.create_entry(name, seat_number);

        //this is the first counter line ticket queue 
        //check_in_queue.enqueue(to_add);    

        //initialize the boarding steats on the aircraft each time 
        //a new passenger checks in             
        //boarding_stack.boarding_assignment(); 
        //incrament count to track each entry
        ++cnt; 

        //count for the left side rows in the plane which 
        //will incrament if the count is even
        //use mode to wrap the incramented index and divide
        //by two to split the rows in half accounting only 
        //for the right side
        if(cnt % 2 == 1)
        {
        ++lr_cnt;
        lr_cnt = lr_cnt % (row/2);
        }

        //count for the aircraft's right side rows  
        //it will incrament if the main count is even
        //use mode to wrap the incramented index and divide
        //by two to split the rows in half accounting only 
        //for the left side
        else if (cnt % 2 == 0)
        {
        ++rr_cnt;
        rr_cnt = rr_cnt % (row/2);
        }

        //captre boarding pass informaiton form user
        //if(a_queue.enqueue(to_add);

    }while(again()); 
    //check_in_queue.display();
    //initiate a
    //boarding_queue.initiate(cnt);
    
    //enqueue all customers to boarding_queue
    //create peek funciton and if queue peek matches entry
    //then push to stack.     
        /* 
    do
    {
        if(a_queue.dequeue())
        cout << "after removing an item" << endl;
            a_queue.display_all()
        else 
        cout << "noting to dispaly" << endl;
    }while(again())
    
    */ 
    return 0;

}


