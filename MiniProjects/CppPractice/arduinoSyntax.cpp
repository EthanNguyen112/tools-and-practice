#include <iostream>
using namespace std;

int x;   //variable to change
char op;  //operator to either increment or decrement
int inc; //increment number
int dc;  //decrement number

void setup(){ // initializing the pins to use for arduino
    //string s1;
    cout << "Enter Input between i (increment) or d (decrement): ";
    cin >> op;
    //cout << s1 << endl;

}

void increment(){
    
    cout << "Enter Input: "; 
    cin >> inc;
    for (int i=0; i < inc + 1; i++){
    //cout << i << endl;

    }

    x = x + inc;

}
void decrement(){
    cout << "Enter Input: "; 
    cin >> dc;
    for (int i=dc; i < inc + 1; i++){
    //cout << i << endl;

    }
    x = x - dc;
}

int main(){ //for arduino it would be void loop {
    setup();
    cout << op << endl; 

    while (op != 'd' && op != 'i'){
        cout << "Please enter i (increase) or d(decrease) :";
        
        cin >> op; 
        cout << op << endl; 
    }
    

    if (op == 'i'){
    increment();
    cout << "incrementing"<< endl;
    }
    
    if (op == 'd'){ 
    
    decrement();
    cout << "decrementing"<< endl;
    }

    

    cout << "This output is " << x;
    return 0;

}

