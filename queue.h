#include"customer_entry.h"
/*
struct customer_info
{
    char * name;
    char * seat_number;
    int boarding_number;
    customer_info();
    ~customer_info();
};
*/

//class queue to put the canditates in a CLL
//and enque/dequeue as nessisary

struct q_node
{
    //q_node();
    customer_entry data;
    q_node * next;
};  //end q_node struct

class queue 
{
public:
    queue();
    //~queue();
    int enqueue(const customer_entry & to_add);
    int dequeue();
    int display();

private:
    q_node * rear; 
};  // end queue

