#include <iostream>
#include "SushiTrain.h"
using namespace std;

// TODO #5 ~ TODO #10: add your code here
// Helper for TODO #8: cout << "Insufficient capacity" << endl;
// Helper for TODO #9: cout << "No sushi can be removed" << endl;
SushiTrain::SushiTrain(int capacity): _capacity(capacity){
    _sushi=new Sushi [capacity];
    _numSushi=0;
}
SushiTrain::SushiTrain(const Sushi sushi[],int numSushi): _capacity(numSushi){
    _sushi=new Sushi[numSushi];
    for (int i =0 ;i<numSushi;i++){
        _sushi[i]=sushi[i];
    }
    _numSushi=numSushi;
}
SushiTrain::SushiTrain(const SushiTrain& st) :_capacity(st._capacity){
    _numSushi=st._numSushi;
    _sushi->clone(*st._sushi);
}
void SushiTrain::addSushi(const Sushi& s){
    if(_capacity==_numSushi) cout << "Insufficient capacity" << endl;
    else
    {
        _sushi[_numSushi].clone(s);
        _numSushi++;
    } 
}
void SushiTrain::removeLastSushi(){
    if(_numSushi==0) cout << "No sushi can be removed" << endl;
    else{
        _sushi[_numSushi].~Sushi();
        _numSushi-=1;
    } 
}
int SushiTrain::totalPrice()const{
    int total=0;
    for (int i=0;i<_numSushi;i++)
    {
        total+=_sushi[i].getPrice();
    }
    return total;
}



// End of TODO #5 ~ TODO #10
// ***************************************************
// Do not modify the codes below

SushiTrain::~SushiTrain(){
    delete [] _sushi;
}

void SushiTrain::print() const{
    if(_numSushi == 0)
        cout << "Capacity = " << _capacity << ", there is no sushi on the Sushi Train." << endl;
    else{
        for(int i = 0; i < _numSushi; ++i){
            _sushi[i].print();
            cout << " ";
        }
        cout << endl;
    }
    cout << "Capacity = " << _capacity <<", total price for " << _numSushi << " sushi is $" << totalPrice() << endl;
    return;
}
