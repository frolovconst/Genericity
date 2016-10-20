#include <iostream>
using namespace std;

int testArry[] = {1,2,3,4,5};

class Addable{
private:
    int value;
    char tag;
public:
    Addable();
    Addable(int newVal);// : value(newVal){};
    int getValue();
    void setValue(int);
    char getTag();
    void setTag(char);
    Addable &operator+(Addable oprd);
    int &testFoo();
};

void testOprtRedef();
void testSwap();
void swapInts(int&, int&);
void ReferenceTest();
int &setValue(int);
void testRetByRef();

void testRetByRef(){
    cout << "e = " << testArry[4] << endl;
    setValue(4) = 0;
    cout << "e = " << testArry[4] << endl;
}
//
int &setValue(int index){
    return testArry[index];
}
//
//void ReferenceTest(){
//    int value = 5;
//    int var = 7;
//    int &rValue = value;
//    int *pValue = &value;
//    cout << value<< endl;
//    rValue = var;
//    cout << value << endl;
//
//}
//
//void swapInts(int &a, int &b){
//    int bfr;
//    bfr = a;
//    a = b;
//    b = bfr;
//}
//
//void swapIntsByRef(int *a, int *b){
//    int bfr;
//    bfr = *a;
//    *a = *b;
//    *b = bfr;
//}
//
//void testSwap(){
//    int aV = 0;
//    int bV = 1;
//    int *aR;// = new int;
//    int *bR;// = new int;
//    aR = &aV;
//    bR = &bV;
//    cout << "a = " << aV << endl;
//    cout << "b = " << bV << endl;
//    swapInts(aV, bV);
////    swapIntsByRef(aR, bR);
//    cout << "a = " << aV << endl;
//    cout << "b = " << bV << endl;
//}
//
//void testOprtRedef(){
//     Addable varAdd1, varAdd2;
//    varAdd1.setTag('a');
//    varAdd2.setTag('b');
////    Addable *varAdd2 = new Addable;
////    varAdd1->setValue(1);
//    cout << varAdd1.getValue() << endl;
//    varAdd1.setValue(5);
//    cout << varAdd1.getValue() << endl;
//    cout << varAdd2.getValue() << varAdd2.getTag() << endl;
//    varAdd2 = varAdd1 + varAdd2;
//    cout << varAdd2.getValue() << varAdd2.getTag() << endl;
//}
//
//Addable::Addable(){
//    value = 1;
//}
//
//Addable::Addable(int newVal){
//    value = newVal;
//}
//
//int Addable::getValue(){
//    return value;
//}
//
//void Addable::setValue(int newVal){
//    value = newVal;
//}
//
//char Addable::getTag(){
//    return tag;
//}
//
//void Addable::setTag(char newVal){
//    tag = newVal;
//}
//
//Addable &Addable::operator+(Addable oprd){
//    cout << this->tag << endl;
//    Addable bfr;
//    bfr = *(new Addable(value + oprd.value));
//    return bfr;//Addable(value + oprd.value);
//}
//
//int &Addable::testFoo(){
//    int i;
//    return i;
//}
//
//int &foo(){
//int i;
//return i;
//}
