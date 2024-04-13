#include <iostream>
using namespace std;

int x = 0;
int inc;

void setup(){ // initializing the pins to use for arduino
    //string s1;
    cout << "Enter Input: "; 
    cin >> inc;
    //cout << s1 << endl;
}

void increment(){
    
    for (int i=0; i < inc + 1; i++){
    //cout << i << endl;

    }

    x = x + inc;

}

int main(){ //for arduino it would be void loop {
    setup();
    increment();


    cout << "This output is " << x;
    return 0;

}

