#include<iostream>
using namespace std;

int main(){
int pilihan;

cout<<"pilih salah satu\n1. Laki-laki\n2. Perempuan"<<endl;
cout<<"masukan pilihan =";
cin>>pilihan;

if(pilihan == 1){
    cout<<"Jenis kelamin saya laki-laki"<<endl;

}else if(pilihan == 2){
    cout<<"jenis kelamin saya perempuan"<<endl;

}else{
    cout<<"Pilihan tidak tersedia"<<endl;
}


}