#include<iostream>
using namespace std;

int main(){

//declaration
double absensi, tugas, uts, uas;
float nilai_akhir;
string nama;

//process
cout<<"masukan nama mahasiswa : ";
cin>>nama;
cout<<"masukan nilai absensi : ";
cin>>absensi;
cout<<"masukan nilai tugas : ";
cin>>tugas;
cout<<"masukan nilai uts : ";
cin>>uts;
cout<<"masukan nilai uas : ";
cin>>uas;

//rumus
cout<<"nilai akhir :"<<(absensi*0.1)+(tugas*0.2)+(uts*0.3)+(uas*0.4)<<endl;

//preview
cout<<" nama mahasiswa "<<nama<<"adalah"<<(absensi*0.1)+(tugas*0.2)+(uts*0.3)+(uas*0.4)<<endl;

}