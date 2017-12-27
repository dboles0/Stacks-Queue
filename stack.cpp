#include"stack.h"
/*
stack::stack()
{
    s_node head = nullptr;
    s_node data = NULL;
    s_node colum = 0;
    s_node row = 0;
}

stack::~stack()
{

}

//push passengers onto the LLL of Arrays
//the nodes represent row's and the arrays 
//represent seat entries
int stack::push(const s_node & to_add, int row)
{
    int success = 0;
    char seat_grid[row];

    if(!head)
    {
        head = new s_node;
        head->data = new seat_grid[row];
        head->next = NULL;
        head->entries[top].copy_entry(to_add);
        success = 1;
    }
    if(top==seat)
    {
        head = new s_node;
        head->entries = new seat_grid[row];
        top = 0;
        head->entries[top].copy_entry(to_add);
        success = 1;
    }
    ++top;
    return success;
}

//Remove at top of stack
int stack::pop (void)
{

    int success = 0;
    node * temp = NULL;

    --top_index; 
    if(top_index = 0)
    {
        delete [] head->entries;
        temp = head->next;
        delete head;
        head = temp;
        top_index = MAX;
    }
    
    success = 1;

    return success;

} 

//used to check the next nodes information
int stack::peek(customer_entry & found_at_top) 
{
    int success = 0;
    if(!head) return success;
    if(!top_index==0)
    {
        if(head->entries[top_index+1] == found_at_top)
        success = 1;
    }
    return success;
            
}
int display()
{

}
//as customers check in assign the seat numbers to the plane 
int customer_entry::boarding_assignment(int a_row, int a_cnt, int a_lr_cnt, int a_rr_cnt)
{
    char letter [] = 
    {'A','B','C','D','E','F','G','H','I','J','K','L','M',
    'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char seat_letter;
    int  seat_row = 0;
    
    //track the current seat row by dividing the how many passengers 
    //are pressent by the total number of rows, and add one to account
    //for the 0th row
    seat_row = (a_cnt / a_row) + 1;
    
    //if the current count is odd then take the total number of seats
    //in a row minus the left row counter and use for indext for accessing
    //letter entry
    if(a_cnt % 2 == 1)
    {
        seat_letter = letter[a_row - a_lr_cnt];
    }

    //if the curent count is even use the righ side counter to index the 
    //leter to set the seat letter
    else if(a_cnt % 2 == 0)
    {
        seat_letter = letter[a_rr_cnt];
    }
    //a_seat_number[a_cnt] = seat_letter;
    //a_seat_number[a_cnt+1] = seat_row;
    
    //seat_number = new char[strlen(a_seat_number)+1];
    //strcpy(seat_number, a_seat_number);
    
    cout << "your seat number is: \n" << seat_letter << seat_row << ":\n";
} */
