#include<iostream.h>
#include<conio.h>
main () {
//double huruf;
char nama [30], nim [8], skor;
int huruf,nilaitugas1,nilaitugas2,nilaitugas3,Nilaimid,nilaifinal,totalnilaitugas,j,k,l,na;
cout<<"Program Menghitum Nilai"<<endl<<endl;
cout<<"Masukkan Nama            : ";cin>>nama;
cout<<"Masukkan Nim    			  : ";cin>>nim;
cout<<"Masukkan Nilai Tugas 1   : ";cin>>nilaitugas1;
cout<<"Masukkan Nilai Tugas 2   : ";cin>>nilaitugas2;
cout<<"Masukkan Nilai Tugas 3   : ";cin>>nilaitugas3;
cout<<"Masukkan Nilai Mid   	  : ";cin>>Nilaimid;
cout<<"Masukkan Nilai Final     : ";cin>>nilaifinal;
      totalnilaitugas = (nilaitugas1+nilaitugas2+nilaitugas3)/3;
      j = 0.2*totalnilaitugas;
      k = 0.4*Nilaimid;
      l = 0.4*nilaifinal;
      na = j+k+l;
cout<<"\nNama  		    : "<<nama;
cout<<"\nNim     		 : "<<nim;
cout<<"\nNilai Akhir    : "<<na;
cout<<"\nHuruf          : "<<skor;
   if(na >= 80) {
     cout <<"A"; }

   else if(na >= 70) {
     cout << "B"; }

   else if(na >= 60) {
     cout << "C";  }

   else if(na >= 50) {
     cout << "D";   }
       else {
    cout << "E";
    }
getch () ;
}


