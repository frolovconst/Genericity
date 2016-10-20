#ifndef GENARYCLS_H
#define GENARYCLS_H
#include <iostream>
#include <exception>
using namespace std;


template <class T>
class GenArrayClass{
private:
    T *genArray;
    int size;
    const int DEFAULT_SIZE = 5;
    int length;
    class MyOutOfBoundException : public exception{
        virtual const char* what() const throw(){
            return "Index out of boundary exception";
        }
    } myex;

public:
    GenArrayClass();
    ~GenArrayClass();
    GenArrayClass(int);
    T &operator[](int) ;
    bool Resize(int);
    int getSize();
};

template <typename T>
GenArrayClass<T>::GenArrayClass(){
    genArray  = new T[DEFAULT_SIZE];
    size = DEFAULT_SIZE;
}

template <typename T>
GenArrayClass<T> :: ~GenArrayClass(){
    delete []genArray;
//    cout << "Generic Array destroyed" << endl;
}

template <typename T>
GenArrayClass<T>::GenArrayClass(int size){
    genArray  = new T[size];
    this->size = size;
}

template <typename T>
T &GenArrayClass<T>::operator[](int index){
    if(index < size && index > -1)
        return this->genArray[index];
    else{
        throw myex;
    }

}

template <typename T>
bool GenArrayClass<T> :: Resize(int newSize){
    T *newArray = new T[newSize];
    int index;
    for(index = 0; index < size; index++){
        if(index >= newSize)
            break;
        newArray[index] = genArray[index];
    }
    delete []genArray;
    genArray = newArray;
    this->size = newSize;
    return true;
}

template <typename T>
int GenArrayClass<T> :: getSize(){
    return this->size;
}



#endif
