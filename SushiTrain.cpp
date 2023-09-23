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
        _sushi[i].clone(sushi[i]);
    }
    _numSushi=numSushi;
}
SushiTrain::SushiTrain(const SushiTrain& st) : SushiTrain::SushiTrain(st._capacity){
    _numSushi=st._numSushi;
    for (int i=0;i<_numSushi;i++){
        _sushi[i].clone(st._sushi[i]);
    }
}
void SushiTrain::addSushi(const Sushi& s){
    if(_capacity==_numSushi) cout << "Insufficient capacity" << endl;
    else
    {
        Sushi* p=new Sushi[_numSushi+1];
        for (int i =0 ;i<_numSushi;i++){
            p[i].clone(_sushi[i]);
        }
        p[_numSushi].clone(s);
        Sushi* temp=_sushi;
        _sushi=p;
        delete [] temp; 
        _numSushi++; 
    } 
}
void SushiTrain::removeLastSushi(){
    if(_numSushi==0) cout << "No sushi can be removed" << endl;
    else{
        Sushi* p=new Sushi[_numSushi];
        for (int i =0 ;i<_numSushi-1;i++){
            p[i].clone(_sushi[i]);
        }
        Sushi* temp=_sushi;
        _sushi=p;
        _numSushi--; 
        delete [] temp; 
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
