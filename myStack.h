#include "GenArrayClass.h"
#include <iostream>
#ifndef MYSTACK_H
#define MYSTACK_H


template <typename T>
class MyStack{
private:
    GenArrayClass<T> storage;
    int size;

public:
    bool push(T value);
    T pop();
    const T& peek();
    bool isEmpty();
    MyStack();
};

template <typename T>
MyStack<T> :: MyStack(): storage(1) {
    size = 0;
}

template <typename T>
bool MyStack<T> :: push(T value){
    if(this->size == storage.getSize()){
        storage.Resize(this->size*2);
    }
    storage[size++] = value;
    return true;
}

template <typename T>
T MyStack<T> :: pop(){
    return storage[--size];
}

template <typename T>
const T& MyStack<T> :: peek(){
    return storage[size-1];
}

template <typename T>
bool MyStack<T> :: isEmpty(){
    if (this->size == 0)
        return true;
    else
        return false;
}

#endif // MYSTACK_H
