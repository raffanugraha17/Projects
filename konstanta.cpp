#include<iostream>
using namespace std;

int main (){
    const float phi= 3.14;
    float l,r;

    // value r
    cout<<"masukan nilai jari-jari : ";
    cin>>r;

    //proses
    l=phi*r*r;

    //penampilan hasil
    cout<<"luas lingkaran dengan jari jari"<< r<<" cm"<<" adalah ";
    cout<<l<< "cm";
}
