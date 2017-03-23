#include <iostream>
#include <cmath>
using namespace std;

typedef struct kompleks{
	int bil;
	char kar;
};
kompleks a, b, c, d;

void starter(){
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
void penambahan(){
	cout << a.bil + c.bil << " + " << b.bil + d.bil << d.kar << endl;
}
void pengurangan(){
	cout << a.bil - c.bil << " + " << b.bil - d.bil << d.kar << endl;
}
void perkalian(){
	int h1 = (a.bil * c.bil) - (b.bil * d.bil);
 	int h2 = (a.bil * d.bil) - (b.bil * c.bil);
 	cout << h1 + h2 << d.kar << endl;
}
void pembagian(){
	int n, m, o, p;
	n = ((a.bil * c.bil) + (b.bil * d.bil));
	m = (pow(a.bil, 2) + pow(b.bil, 2));
	o = ((b.bil * c.bil) - (a.bil * d.bil));
	p = (pow(c.bil, 2) + pow(d.bil, 2));
	cout << ((n / m) + (o / p)) << d.kar << endl;
}
int main(){
	starter();
	int pilih;
	do{
		cout << "\noperasi bilangan kompleks" << endl;
		cout << "\nsilahkan pilih operasi : " << endl;
		cout << "Tekan 1 untuk Penambahan" << endl;
		cout << "Tekan 2 untuk Pengurangan" << endl;
		cout << "Tekan 3 untuk Perkalian" << endl;
		cout << "Tekan 4 untuk Pembagian" << endl;
		cout << "Tekan 5 untuk Keluar" << endl;
		cout << "Silahkan pilih : "; cin >> pilih;
		if (pilih == 1){
			penambahan();
		}
		else if (pilih == 2){
			pengurangan();
		}
		else if (pilih == 3){
			perkalian();
		}
		else if (pilih == 4){
			pembagian();
		}
		else if (pilih == 5){
			break;
		}
		else{
			cout << "Pilihan hanya 1 - 5" << endl;
		}
	}
	while (true);
	return 0;
}
