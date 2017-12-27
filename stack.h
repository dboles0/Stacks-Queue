#include"customer_entry.h"

#ifndef STACK_
#define STACK_


struct s_node
{
    int * data;
    s_node * next;
};
class stack 
{
    public:
    //stack();
    //stack(const stack & a_stack);
    //~stack();
    //int boarding_assignment(int a_row, int a_cnt, int a_lr_cnt, int a_rr_cnt);
    //int copy_entry(const s_node & copy);
    //int boarding_pass_info();
    //int push(const s_node & to_add);
    //save on operations/fetches by making our "top" accessor
    //a pointer instead of an index.

    //int pop();
    //int peek();
    //int display();

    private:
    s_node * head; 
    
};  // end stack

#include "stack.cpp"
#endif
