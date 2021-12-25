







//The following code illustrates that static method
//cannot work with non-static data members 
//(aka instance data members) or call non-static methods
//(aka instance methods).
//In short,
//(1) static methods can call static methods or
//    work with static members.
//(2) non-static methods can call non-static methods or 
//    work with non-static members.
//(3) static methods cannot access non-static methods or
//    work with non-static members.
//(4) non-static methods can access static methods or 
//    static members.

#include <iostream>
using namespace std;

class Computer {
    public:       
        Computer()       
        {   
            id = id_generator;
            id_generator++;
            num_computers++; 
        }

        ~Computer()       
        {         
            num_computers--; 
        }

        int get_id() const
        {
            //non-static (aka instance) method
            //can access static method or static data member.
            //With an instance created, the class must be
            //defined already, and static method 
            //(also called class method)
            //is there already.

            //You may think static methods as regular employees,
            //and instance methods as temporary employees,
            //temporary employees is attached to an instance,
            //and must be called by 
            //instanceName.instanceMethodName(...);
            //where ... means appropriate parameters.
            
            //Regular employees cannot call temporary
            //employees (since temporary employees may not exist
            //when regular employees are created),
            //But temporary employees can call regular employees. 
            //The following code is not good for logic
            //since we do not need to print out the current
            //number of computers before returning
            //the id of the current computer.
            //However, the following code can still be 
            //compiled and run.
            //cout << "current number of computers: "
            //     << num_computers << endl;
            return id;
        }

        static int get_num_computers() 
        {
            //Illustrate that whether we can access 
            //instance data member or instance method member
            //or not in static method or not. 
            //Note that the logic is not correct since
            //we do not need to access id
            //when getting number of computers.

            //The following commented code will not be compiled.
            //id = 2; //not allowed. Cannot access 
            //instance data member in static member.
            //Reason: static method exists 
            //when a class is defined,
            //it is possible at that time, 
            //no object (aka instance) is created.
            //So, there is no way to access instance data member.

            //get_id(); //not compiled.
            //instance method get_id must be associated 
            //with an instance.

            //this->get_id(); //not compiled.
            //this means pointer to current object,
            //but in static method, no object is created yet.

            return num_computers;
        }

    private:       
        static int num_computers;
        static int id_generator;
        int id;
};

int Computer::num_computers = 0; 
    //in the very beginning, no computer yet.
int Computer::id_generator = 1; //incoming computer's id

int main()
{
    Computer* first = new Computer;
    cout << "id of first computer: " << first->get_id() << endl;
    delete first;
    first = nullptr;

    Computer* second = new Computer;
    cout << "id of second computer: " << second->get_id() << endl;
    cout << "number of computers: "
         << Computer::get_num_computers() << endl;
    delete second;
    second = nullptr;

//Sample output:
//id of first computer: 1
//id of second computer: 2
//number of computers: 1

    return 0;
}