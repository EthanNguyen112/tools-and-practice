#include <iostream>
using namespace std;

int x;   //variable to change
char op;  //operator to either increment or decrement
char i;  //increment flag
char d;  //decrement flag
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

}

int main(){ //for arduino it would be void loop {
    setup();

    while (op != ("d" || "i")){ // some error with while loop statement

        cout << "Please enter i or d" << endl; 
        cin >> op;
    }

    if (op == i){
    increment();
    }
    
    if (op == d){ 
    
    decrement();
    }

    

    cout << "This output is " << x;
    return 0;

}

