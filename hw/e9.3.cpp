
/*
Youssef elsuradi

tong yee

*/


#include <iostream>
using namespace std;

class Circuit{
    int s1, s2, lamp;

public:

    Circuit() {
        s1 = 0;
        s2 = 0;
        lamp = 0;
    }


    int get_first_switch_state() {
        return s1;
    }

    int get_second_switch_state() {
        return s2;
    }

    int get_lamp_state(){
        return lamp;
    }

    void toggle_first_switch() {
        s1 = (s1 == 1?0:1);
        lamp = (lamp == 1?0:1);
    }

    void toggle_second_switch() {
        s2 = (s2 == 1?0:1);
        lamp = (lamp == 1?0:1);
    }



};

int main(){

    

    Circuit c;

    //display init states

    cout<<"Initial state:"<<endl;

    cout<<"Switch1: "<<c.get_first_switch_state()<<endl;

    cout<<"Switch2: "<<c.get_second_switch_state()<<endl;

    cout<<"Lamp: "<<c.get_lamp_state()<<endl;

    

    //togs s1

    cout<<"Toggling switch1..."<<endl;

    c.toggle_first_switch();

    

    //display states 

    cout<<"Switch1: "<<c.get_first_switch_state()<<endl;

    cout<<"Switch2: "<<c.get_second_switch_state()<<endl;

    cout<<"Lamp: "<<c.get_lamp_state()<<endl;

    

    //togs s2

    cout<<"Toggling switch2..."<<endl;

    c.toggle_second_switch();

    

    //displays the state

    cout<<"Switch1: "<<c.get_first_switch_state()<<endl;

    cout<<"Switch2: "<<c.get_second_switch_state()<<endl;

    cout<<"Lamp: "<<c.get_lamp_state()<<endl;

    

    //-_-

    return 0;

}



