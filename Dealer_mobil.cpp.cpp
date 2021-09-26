#include <iostream>
using namespace std;
string nama,alamat,email;
double total_harga;
double input;
void data(){
	cout<<"Masukkan Nama anda: ";
	getline(cin,nama);
	cout<<"Masukkan Alamat Rumah anda: ";
	getline(cin,alamat);
	cout<<"Masukkan Alamat email anda: ";
	getline(cin,email);		
}

void mobil(){
	    int kode,harga,jumlah;
	    char jawaban;
	    int lambogini=0,felali=0,aston=0,bentey=0,bugacci=0,tmp;
	    int ppnbm;
	    int a=0,b=0,c=0,d=0,e=0;
	do{
		cout<<"======================================"<<endl;
        cout<<"PILIH MOBIL:   "<<endl;
        cout<<"1.Lambogini\t\tRp100"<<endl;
        cout<<"2.Felali\t\tRp200"<<endl;
        cout<<"3.Aston Melting\t\tRp300"<<endl;
        cout<<"4.Bentey\t\tRp400"<<endl;
        cout<<"5.Bugacci\t\tRp500"<<endl;
        cout<<"======================================"<<endl;

        cout<<"Masukkan pilihan:  ";
        cin>>kode;
        switch(kode){
    case 1:
        cout<<"Lambogini"<<endl;
        harga=100;
        cout<<"jumlah:  ";
        cin>>jumlah;
        a=harga*jumlah+a;
        lambogini+= jumlah;
        cout<<"Mau lagi ?   ";
        cout<<"Jika iya (Y/y)"<<endl;
        cout<<"Jika Tidak (selain huruf diatas)"<<endl;
        cout<<"Masukan jawaban = ";
        cin>>jawaban;
        break;
    case 2:
        cout<<"Felali"<<endl;
        harga=200;
        cout<<"jumlah:  ";
        cin>>jumlah;
        b=harga*jumlah+b;
        felali+= jumlah;
        cout<<"Mau lagi ?   ";
        cout<<"Jika iya (Y/y)"<<endl;
        cout<<"Jika Tidak (selain huruf diatas)"<<endl;
        cout<<"Masukan jawaban = ";
        cin>>jawaban;
        break;
    case 3:
        cout<<"Aston melting"<<endl;
        harga=300;
        cout<<"jumlah:  ";
        cin>>jumlah;
        c=harga*jumlah+c;
        aston+= jumlah;
        cout<<"Mau lagi ?   ";
        cout<<"Jika iya (Y/y)"<<endl;
        cout<<"Jika Tidak (selain huruf diatas)"<<endl;
        cout<<"Masukan jawaban = ";
        cin>>jawaban;
        break;
    case 4:
        cout<<"Bentey"<<endl;
        harga=400;
        cout<<"jumlah:  ";
        cin>>jumlah;
        d=harga*jumlah+d;
        bentey+= jumlah;
        cout<<"Mau lagi ?   ";
        cout<<"Jika iya (Y/y)"<<endl;
        cout<<"Jika Tidak (selain huruf diatas)"<<endl;
        cout<<"Masukan jawaban = ";
        cin>>jawaban;
        break;
    case 5:
        cout<<"Bugacci"<<endl;
        harga=500;
        cout<<"jumlah:  ";
        cin>>jumlah;
        e=harga*jumlah+e;
        bugacci+= jumlah;
        cout<<"Total pembayaran:"<<harga*jumlah<<endl;
        cout<<"Mau lagi ?   ";
        cout<<"Jika iya (Y/y)"<<endl;
        cout<<"Jika Tidak (selain huruf diatas)"<<endl;
        cout<<"Masukan jawaban = ";
        cin>>jawaban;
        break;
    default:
        cout<<"Pilihan tidak dapat ditemukan";
        cout<<"Mau mengulang? (y/tidak)"<<endl;
        cout<<"Mengulang (Y/y)"<<endl;
        cout<<"Tidak Mengulang (selain huruf diatas)"<<endl;
        cout<<"Masukan jawaban = ";
        cin>>jawaban;
        }  system("cls");
        }while(jawaban=='y'||jawaban == 'Y');
        cout<<"-------------------------------------------"<<endl;
        cout<<"----------PT. Leleodon Enterprise----------"<<endl;
        cout<<"-------------------------------------------"<<endl;
        cout<<"Nama Pembeli                            =  "<<nama<<endl;
        cout<<"Alamat Pembeli                          =  "<<alamat<<endl;
        cout<<"Email Pembeli                           =  "<<email<<endl;
	 	if (a>0){

        cout<<"Jumlah Lambogini                        =  "<< lambogini << endl;
            
        cout<<"Jadi Total harga untuk Lambogini        =  " << a << endl;
			
        }
        if (b>0){

        cout<<"Jumlah Felali                           =  " << felali << endl;
        cout<<"Jadi Total harga untuk Felali           =  " << b << endl;

        }
        if (c>0){

        cout<<"Jumlah Aston melting                    =  "<< aston << endl;
        cout<<"Jadi Total harga untuk Aston Melting    =  " << c << endl;

        }
        if (d>0){

        cout<<"Jumlah Bentey                           =  "<< bentey << endl;
        cout<<"Jadi Total harga untuk Bentey           =  " << d << endl;

        }
        if (e>0){

        cout<<"Jumlah Bugacci                          =  "<< bugacci << endl;
        cout<<"Jadi Total harga untuk Bugacci          =  "<< e << endl;

        }
        tmp=a+b+c+d+e;
        ppnbm=0.4*tmp;
        total_harga=tmp+ppnbm;
        cout<<"PpnBm                                   =  "<<ppnbm<<endl;
       	cout<<"Total akhir pembayaran                  =  "<<total_harga;
       	
}

double kasir (double duit){
	double tampung;
if(duit>=total_harga){
	tampung = duit - total_harga;
	cout<<"Kembalian anda adalah = "<<tampung<<endl;
	cout<<"Terima Kasih Telah Memilih Leleodon"<<endl;
}
else {
	cout<<"Uang anda Kurang "<<endl;
}
	return tampung;
}

int main(){
	cout<<"======================================\tDealer Mobil Leleodon =========================================================="<<endl<<endl<<endl;
	cout<<"Selamat datang di sistem Dealer Mobil Leleodon!"<<endl<<endl;
	data();
	system("cls");
	mobil();
	cout<<endl;
	cout<<"Masukan uang anda = ";
	cin>>input;
	kasir(input);
	
}
