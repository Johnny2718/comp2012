#include <iostream>
#include "SushiTrain.h"
using namespace std;

int main(){
    Sushi s1;
    s1.print();
    cout << endl;

    Sushi s2("Salmon", 12);
    s2.print();
    cout << endl;

    Sushi s3(s1);
    s3.print();
    cout << endl;

    Sushi s4(s2);
    s4.print();
    cout << endl;

    s1.clone(s2);
    s1.print();
    cout << endl;

    s2.clone(s3);
    s2.print();
    cout << endl << endl;

    // HINT: You can comment out the codes below and test the program first after finishing TODO #1 ~ TODO #5

    cout << "SushiTrain 1:" << endl;
    SushiTrain st1(10);
    st1.print();
    cout << "Remove last sushi" << endl;
    st1.removeLastSushi();
    st1.print();
    cout << "Add salmon sushi" << endl;
    st1.addSushi(s1);
    st1.print();
    cout << "Add tuna sushi" << endl;
    st1.addSushi(Sushi("Tuna", 17));
    st1.print();
    cout << endl;

    Sushi sushi[5] = {Sushi("Salmon", 12), Sushi("Tuna", 17), Sushi("Egg", 8), Sushi("Tuna", 17), Sushi("Beef", 12)};

    cout << "SushiTrain 2:" << endl;
    SushiTrain st2(sushi, 5);
    st2.print();
    cout << "Add salmon sushi" << endl;
    st2.addSushi(s1);
    st2.print();
    cout << "Remove last sushi" << endl;
    st2.removeLastSushi();
    st2.print();
    cout << endl;


    // cout << "SushiTrain 3:" << endl;
    // SushiTrain st3(st2);
    // st3.print();
    // cout << "Remove last sushi" << endl;
    // st3.removeLastSushi();
    // st3.print();
    // cout << "Add shrimp sushi" << endl;
    // st3.addSushi(Sushi("Shrimp", 12));
    // st3.print();

    return 0;
}
