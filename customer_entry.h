/*customer_entry will store all of the 
*/

#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

#ifndef _customer_entry_h
#define _customer_entry_h
/*
struct customer_info
{
    char * name;
    char * seat_number;
    int * boarding_number; 
};
*/
class customer_entry 
{
public:
    customer_entry();
    ~customer_entry();
    int create_entry(char * a_name, char * a_seat);
    //int save();
    int copy_entry(const customer_entry & new_entry);
    //int retrieve(int * boarding_number, customer_entry & found) const;
    int display();
private:
    char * name;
    char * seat_number;
    int boarding_number;
    //node * head;
    
};  // end customer info

#endif
bool again();
