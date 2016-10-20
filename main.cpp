#include <iostream>
#include<stdio.h>
#include "test.h"
#include "myStack.h"
#include "GenArrayClass.h"

using namespace std;

void testGenArray();
void testMyStack();


int main()
{
    cout << "Generic array testing" << endl;
    testGenArray();
    cout << endl << "Custom stack testing" << endl;
    testMyStack();

//    testOprtRedef();
//    testSwap();
//    ReferenceTest();
//    testRetByRef();
    return 0;
}

void testMyStack(){
    char bfrStr[20];
    MyStack<string> varMyStack;
    for(int i=0; i < 5; i++){
        sprintf(bfrStr, "string %d", i);
        varMyStack.push(bfrStr);
    }

    cout << "Popping elements:" << endl;
    while(!varMyStack.isEmpty())
        cout << varMyStack.pop() << endl;
//    cout << 1 << " " << 2;
//    cout << varMyStack.pop() << endl;

}

void testGenArray(){
    char bfrStr[20];
    GenArrayClass<string> strArray;
    GenArrayClass<int> intArray(3);

    for(int i=0; i < strArray.getSize(); i++){
        sprintf(bfrStr, "string %d", i);
        strArray[i] = bfrStr;
    }
    cout << "Generic array of strings (default size filled in):" << endl;
    for(int i=0; i < strArray.getSize(); i++){
        cout << strArray[i] << endl;
    }

    strArray.Resize(1);
    cout << endl << "After resize to 1:" << endl;

    for(int i=0; i < strArray.getSize(); i++){
        cout << strArray[i] << endl;
    }


    for(int i=0; i < intArray.getSize(); i++){
        intArray[i] = intArray.getSize()-i;
    }
    cout << endl << "Generic array of ints (size set to 3):" << endl;
    for(int i=0; i < intArray.getSize(); i++){
        cout << intArray[i] << endl;
    }

    cout << endl << "Out of bound element requested strArray[100]:" << endl;
    try{
        strArray[100];
    }
    catch(exception& e){
        cout << e.what() << endl;
    }




}
