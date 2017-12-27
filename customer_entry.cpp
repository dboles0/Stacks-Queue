#include"customer_entry.h"

//default constructor to initialize name, seat_number and 
//boarding number found in class customer_entry private
//section 
customer_entry::customer_entry()
    : name(NULL), seat_number(0), boarding_number(0)
{
}

//default destructor deleting name and seat_number array
customer_entry::~customer_entry()
{
    if(name)
        delete [] name;
    if(seat_number)
       seat_number = 0; 
}

//create entry in customer_entry class to contian customers that
//arive for flight
int customer_entry::create_entry(char * a_name, char * a_seat)
{ 
     
    name = new char[strlen(a_name)+1];
    strcpy(name, a_name);
    seat_number = new char[strlen(a_seat)+1];
    strcpy(name, a_seat);
}

//move passengers form the customer_entry class to the desired function
int customer_entry::copy_entry(const customer_entry & new_entry)
{
    
    name = new char [strlen(new_entry.name)+1];
    strcpy(name, new_entry.name);
    
}
//int retrieve(int * boarding_number, customer_entry & found) const
//display entries
int customer_entry::display()
{
    
   cout << "the current customer is: " << endl;
   cout << name;       
}
//simple true false statment to add additional items in while statement
bool again()
{
    char response;
    cout <<"Would you like to add another? Y/N ";
    cin >> response;
    cin.ignore(100, '\n');
    if (toupper(response)== 'N')
    {    
	return false;
    }
    else 
    { 
        return true;
    }
}
/*
int customer_entry::save()
{
    //connect to file and append info to txt file
    ofstream file_out;        
    file_out.open("customer_info.txt", ios::app);
    if (file_out)
    {
	for(int i=0; i<cnt; ++i)
	    file_out << name[i] << "~"
		<< seat_number[i] << "~"
	file_out.close();
	file_out.clear();
    }

}

int customer_entry::load()
{  
    char name[100];
    char seat_number[100];
    int cnt = 0;

    ifstream in_file;           //input
    in_file.open("customer_info.txt");
    if (in_file)
    {
	//check if there is a connection to the file, not out of i
	//bounds and not at the end of the file then read in the 
	//additional fields
	while (cnt < max_size && in_file && in_file.peek()!=EOF)
	{
	    in_file.get(customer_entry, 100, '~');
	    in_file.ignore(100, '~');
            name[cnt].customer_entry = new char[strlen(a_name)+1];
            strcpy(name[cnt], a_name);
            
            in_file.get(seat_number, 100, '~');
	    in_file.ignore(100, '~');
            seat_number[cnt] = new char[strlen(a_seat_number)+1];
            strcpy(seat_number[cnt], a_seat_number);

	    ++cnt; //increase index
         }
     }
}
*/
