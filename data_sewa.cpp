#include <iostream>
using namespace std;

int main() {
   string nama, nik,noHp,alamat,merk,tahun,bahan;
   int tanggaRental, tanggalKembali,biaya=600000,potongan,jumlah;
   int totalSewa;
   
   	cout << "RENTAL MOBIL" << endl;
    cout << "NIK: ";		getline(cin,nik);
    cout << "Nama: ";		getline(cin,nama);
    cout << "No. HP: ";	getline(cin,noHp);
    cout << "Alamat: ";	getline(cin,alamat);
	cout << endl;
	
	cout << "DATA MOBIL" << endl;
    cout << "MERK: ";		getline(cin,merk);
    cout << "TAHUN: ";		getline(cin,tahun);
    cout << "BAHAN BAKAR: ";	getline(cin,bahan);
    cout << endl;
    
    cout << "DATA SEWA" << endl;
    cout << "TANGGAL RENATAL: "; cin >> tanggaRental;		
    cout << "TANGGAL PENGEMBALIAN: "; cin >> tanggalKembali;
    
    totalSewa = tanggalKembali-tanggaRental;
    if(totalSewa > 3){
    	potongan = 100000;
    	jumlah = biaya - potongan;
	}else{
		potongan = 0;
		jumlah = biaya - potongan;
	}
    
    cout << endl;
    cout << endl;
    
    
    
    //cetak hasil
    cout<< "**********************************" <<endl;
   	cout<< "*              RENTAL MOBIL      *" <<endl;
   	cout<< "**********************************" <<endl;
    cout << "NIK: " << nik << endl;
    cout << "NAMA: " << nama << endl;
    cout << "NO. HP: " << noHp << endl;
    cout << "ALAMAT: " << alamat << endl;
	cout << endl;
	
	cout<< "**********************************" <<endl;
   	cout<< "*             DATA MOBIL        *" <<endl;
   	cout<< "**********************************" <<endl;
	cout << "MERK: " << merk << endl;
    cout << "TAHUN" << tahun << endl;
    cout << "BAHAN: " << bahan << endl;
	cout << endl;
	
	cout<< "**********************************" <<endl;
   	cout<< "*          DATA SEWA        *" <<endl;
   	cout<< "**********************************" <<endl;
	cout << "TANGGAL RENATAL: " << tanggaRental << endl;
    cout << "TANGGAL PENGEMBALIAN: " << tanggalKembali << endl;
    cout << "BIAYA: " << biaya << endl;
    cout << "POTONGAN: " << potongan << endl;
    cout << "JUMLAH: " << jumlah << endl;

    return 0;
}
