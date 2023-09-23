#include <iostream>
#include <cstring>
#include "Sushi.h"
using namespace std;

// TODO #1 ~ TODO #4: add your code here
Sushi::Sushi(){
    this->_name=nullptr;
    this->_price=0;
}
Sushi::Sushi(const char* name,int price){
    _name=new char[strlen(name)+1];
    strcpy(_name,name);
    _price=price;
}
Sushi::Sushi(const Sushi& s){
    if (s._name==nullptr) _name=nullptr;
    else
    {
        _name=new char[strlen(s._name)+1];
        strcpy(_name,s._name);
    }
    _price=s._price;
}
void Sushi::clone(const Sushi& s){
    if (s._name==nullptr) this->_name=nullptr;
    else
    {
        _name=new char[strlen(s._name)+1];
        strcpy(_name,s._name);
    }
    _price=s._price;
}



// End of TODO #1 ~ TODO #4
// ***************************************************
// Do not modify the codes below

Sushi::~Sushi(){
    delete [] _name;
}

int Sushi::getPrice() const{
    return _price;
}

void Sushi::print() const{
    if(!_name)
        cout<< "No sushi: $" << _price;
    else
        cout << _name << " Sushi: $" << _price;
}
