# asd-d-tugas-1-rizkiwahyud
asd-d-tugas-1-rizkiwahyud created by GitHub Classroom

//nomor1
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int pol1[10]; int pol2[10]; int pol3[10];
	//p1
	int i1;
	int p=0;
	int maxP1;
	cout<<"	ARITMATIKA POLINOMIAL	\n\n";
	cout<<"Masukkan Batas Polinomial  Persamaan 1= " ; cin>>maxP1;
	for(i1=0 ; i1<=maxP1-1 ; i1++)
	{
		cout<< "Masukkn Nilai Koefisien Polinomial X^"<<p<< " = " ;
		cin>>pol1[i1]; p++; 
	}
	cout<<"Jadi P1 : ";
	for(i1=maxP1-1 ; i1>=0 ; i1--)
	{
		p--; cout<<" + ("<<pol1[i1]<<"X^"<<p<<")"; 
	}
	for(;maxP1<=10; maxP1++)
	{
		pol1[maxP1]=0;
	}
	//p2
	int i2 ; p=0;
	do 
	{
		cout<<"\n\nMasukkan Batas Polinomial  Persamaan 2= " ; cin>>maxP1;  
	}
	while(maxP1>9);
	for(i2=0 ; i2<=maxP1-1 ; i2++)
	{
		cout<< "Masukkn Nilai Koefisien Polinomial X^"<<p<< " = " ;
		cin>>pol2[i2]; p++;
	}
	cout<<"Jadi P2 : ";
	for(i2=maxP1-1 ; i2>=0 ; i2--)
	{
		p--; cout<<" + ("<<pol2[i2]<<"X^"<<p<<")"; 
	}
	for(; maxP1<=9; maxP1++ )
	{
		pol2[maxP1]=0; 
	}
	//p3
	int i3; p=0;
	do 
	{
		cout<<"\n\nMasukkan Batas Polinomial  Persamaan 3= " ; cin>>maxP1;   
	}
	while(maxP1>9);
	for(i3=0 ; i3<=maxP1-1 ; i3++)
	{
		cout<< "Masukkn Nilai Koefisien Polinomial X^"<<p<< " = " ;
		cin>>pol3[i3]; p++;
	}
	cout<<"Jadi P3 : ";
	for(i3=maxP1-1 ; i3>=0 ; i3--)
	{
		p--; cout<<" + ("<<pol3[i3]<<"X^"<<p<<")"; 
	}
	for(;maxP1<=9; maxP1++)
	{
		pol3[maxP1]=0;
	}
	cout<<"\n\n==============================================";
	cout<< "\nHasil EMPAT OPERASI ARITMATIKA DASAR : ";
	cout<<"\n================================================";
	cout<<"\n\nPenambahan : \n";
	cout<<"P1 + P2  = "<<pol1[10]<<"x^10 + "<<pol1[9]+pol2[9]<<"x^9 + "
	<<pol1[8]+pol2[8]<<"x^8 +"<<pol1[7]+pol2[7]<<"x^7 + "
	<<pol1[6]+pol2[6]<<"x^6 +"<<pol1[5]+pol2[5]<<"x^5 + "
	<<pol1[4]+pol2[4]<<"x^4 + "<<pol1[3]+pol2[3]<<"x^3 +\n"
	<<pol1[2]+pol2[2]<<"x^2 + "<<pol1[1]+pol2[1]<<"x^1 + "
	<<pol1[0]+pol2[0]<<"x^0 ";
	cout<<"\n\nPengurangan : \n";
	cout<<"P1 - P2  = "<<pol1[10]<<"x^10 + "<<pol1[9]-pol2[9]<<"x^9 + "
	<<pol1[8]-pol2[8]<<"x^8 + "<<pol1[7]-pol2[7]<<"x^7 + "
	<<pol1[6]-pol2[6]<<"x^6 + "<<pol1[5]-pol2[5]<<"x^5 + "
	<<pol1[4]-pol2[4]<<"x^4 + "<<pol1[3]-pol2[3]<<"x^3 +\n"
	<<pol1[2]-pol2[2]<<"x^2 + "<<pol1[1]-pol2[1]<<"x^1 + "
	<<pol1[0]-pol2[0]<<"x^0 ";
	cout<<"\n\nPerkalian : \n";
	cout<<"P1 * P3  = "<<pol1[10]*pol3[10]<<"x^11 + "<<pol1[9]*pol3[9]<<"x^10+ "
	<<pol1[8]*pol3[8]<<"x^9 + "<<pol1[7]*pol3[7]<<"x^8 + "
	<<pol1[6]*pol3[6]<<"x^7 + "<<pol1[5]*pol3[5]<<"x^6 + "
	<<pol1[4]*pol3[4]<<"x^5 + "<<pol1[3]*pol3[3]<<"x^4 +\n"
	<<pol1[2]*pol3[2]<<"x^3 + "<<pol1[1]*pol3[1]<<"x^2 + "
	<<pol1[0]*pol3[0]<<"x^1 " ;
	cout<<"\n\nTurunan : \n";
	cout<<"P2'    = "<<pol2[8]*8<<"x^7 + "
	<<pol2[7]*7<<"x^6 + "<<pol2[6]*6<<"x^5 + "
	<<pol2[5]*5<<"x^4 + "<<pol2[4]*4<<"x^3 + "
	<<pol2[3]*3<<"x^2 + "<<pol2[2]*2<<"x^1 +\n"
	<<pol2[1]*1<<"x^0 + "<<pol2[0] *0<<"";
}

//nomor2
#include <iostream>
#include <cmath>
using namespace std;

typedef struct kompleks
{
	int bil;
	char kar;
};
kompleks a, b, c, d;

void starter()
{
	//variabel a
	a.bil = 2;
	//variabel b
	b.bil = 4;
	b.kar = 'i';
	//variabel c
	c.bil = 3;
	//variabel d
	d.bil = 5;
	d.kar = 'i';
	cout << "a = " << a.bil << endl;
	cout << "b = " << b.bil << b.kar << endl;
	cout << "c = " << c.bil << endl;
	cout << "d = " << d.bil << d.kar << endl;
}
void penambahan() 
{
	cout << a.bil + c.bil << " + " << b.bil + d.bil << d.kar << endl;
}
void pengurangan() 
{
	cout << a.bil - c.bil << " + " << b.bil - d.bil << d.kar << endl;
}
void perkalian() 
{
	int h1 = (a.bil * c.bil) - (b.bil * d.bil);
 	int h2 = (a.bil * d.bil) - (b.bil * c.bil);
 	cout << h1 + h2 << d.kar << endl;
}
void pembagian() 
{
	int n, m, o, p;
	n = ((a.bil * c.bil) + (b.bil * d.bil));
	m = (pow(a.bil, 2) + pow(b.bil, 2));
	o = ((b.bil * c.bil) - (a.bil * d.bil));
	p = (pow(c.bil, 2) + pow(d.bil, 2));
	cout << ((n / m) + (o / p)) << d.kar << endl;
}
int main()
{
	starter();
	int pilih;
	do
	{
		cout << "\noperasi bilangan kompleks" << endl;
		cout << "\nsilahkan pilih operasi : " << endl;
		cout << "Tekan 1 untuk Penambahan" << endl;
		cout << "Tekan 2 untuk pengurangan" << endl;
		cout << "Tekan 3 untuk perkalian" << endl;
		cout << "Tekan 4 untuk pembagian" << endl;
		cout << "Tekan 5 untuk keluar" << endl;
		cout << "silahkan pilih : "; cin >> pilih;
		if (pilih == 1)
		{
			penambahan();
		}
		else if (pilih == 2)
		{
			pengurangan();
		}
		else if (pilih == 3)
		{
			perkalian();
		}
		else if (pilih == 4)
		{
			pembagian();
		}
		else if (pilih == 5)
		{
			break;
		}
		else
		{
			cout << "Pilihan hanya 1 - 5" << endl;
		}
	}
	while (true);
	return 0;
}
