#include <conio.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#define maks 5
using namespace std;

struct data
	{
		float matkul[30],jumlahsks[15],nilai[15],nk[15],ip[15];
	};
	data data1[10];
	
	struct mahasiswa
	{
		char nama[30],nim[15],fakultas[30],prodi[30],dosen[30],ketua[30];
		int jumlahmatkul;
		float total_akhir;
	};
	mahasiswa mhs;

main ()
{
	
	awal : 
	cout<<"[            Progam Transkrip Sementara              ]"<<endl;
	cout<<"======================================================"<<endl;
	cout<<"\n";
	
	cout<<" Masukkan Nim Mahasiswa        : "; cin.getline (mhs.nim,15);
	cout<<" Masukkan Nama Mahasiswa       : "; cin.getline (mhs.nama,30);
	cout<<" Masukkan Nama Fakultas        : "; cin.getline (mhs.fakultas,30);
	cout<<" Masukkan Nama Prodi           : "; cin.getline (mhs.prodi,30); 
	cout<<" Masukkan Nama Dosen Penasihat : "; cin.getline (mhs.dosen,30);
	cout<<" Masukkan Nama Ketua Jurusan   : "; cin.getline (mhs.ketua,30);
	cout<<" Masukkan Jumlah Mata Kuliah   : "; cin>>mhs.jumlahmatkul;
	cout<<"\n";
	cout<<"------------------------------------------------------"<<endl;
	 
	for (int i=1;i<=mhs.jumlahmatkul;i++)
	{
		cout<<"         Mata Kuliah ke "<<i<<"           "<<endl;
		cout<<"=========================================="<<endl;
		cout<<" Nama Mata Kuliah	      : "; cin>>data1[i].matkul[i];
		cout<<"	Jumlah SKS                : "; cin>>data1[i].jumlahsks[i];
		cout<<" Nilai Mata Kuliah (abjad) : "; cin>>data1[i].nilai[i];
		if (data1[i].nilai[i] == 'A')
		{
			data1[i].nilai[i] = 4;
		}
		else if (data1[i].nilai[i] == 'A-')
		{
			data1[i].nilai[i] = 3.70;
		}
		else if (data1[i].nilai[i] == 'B+')
		{
			data1[i].nilai[i] = 3.30;
		}
		else if (data1[i].nilai[i] == 'B')
		{
			data1[i].nilai[i] = 3.00;
		}
		else if (data1[i].nilai[i] == 'B-')
		{
			data1[i].nilai[i] = 2.70;
		}
		else if (data1[i].nilai[i] == 'C+')
		{
			data1[i].nilai[i] = 2.30;
		}
		else if (data1[i].nilai[i] == 'C')
		{
			data1[i].nilai[i] = 2.00;
		}
		else if (data1[i].nilai[i] == 'C-')
		{
			data1[i].nilai[i] = 1.70;
		}
		else if (data1[i].nilai[i] == 'D')
		{
			data1[i].nilai[i] = 1.00;
		}
		else if (data1[i].nilai[i] == 'E')
		{
			data1[i].nilai[i] = 0;
		}
		else 
		{
			cout<<" Erorr !"<<endl;
		}
		cout<<"=========================================="<<endl;
		
		data1[i].nk[i]=data1[i].nilai[i]*data1[i].jumlahsks[i];
	}

}
