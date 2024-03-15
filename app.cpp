
#include<iostream>
using namespace std;

int main() {
	float cevre, alan, yarıcap;
	cout << "yarıçap giriniz: ";
	cin >> yarıcap;
	alan = 3.14 * yarıcap * yarıcap;
	cevre = 2 * 3.14 * yarıcap;
	cout << "cevre : " << cevre << endl<< "alan: " << alan << endl;
	return 0;
}


//
#include<iostream>
using namespace std;
int main() {
	int sayi = 10;
	cout << ++sayi << endl;
	cout << sayi++ << endl;
	cout << sayi << endl;
	return 0;
}

#include<iostream>
using namespace std;

int main() {
	int sayi;
	cout << "sayı giriniz : ";
	cin >> sayi;
	if (sayi < 0)
		cout << "sayı negatif";
	else if (sayi >0)
		cout << "sayi pozitif";
	else 
		cout << "sayi sıfıra eşit";
    return 0;
}


#include<iostream>
using namespace std;

int main() {
	int islem;
	cout << "islem girin : ";
	cin >> islem;
	switch (islem) {
	case 1:
		cout << "1. durum";
		break;

	case 2:
		cout << "2. durum";
		break;

	case 3:
		cout << "3. durum";
		break;

	default :
		cout << "islem secilmedi";
	}
}

#include<iostream>
using namespace std;

int main() {
	int islem , a , b;
	cout << "islem girin : ";
	cin >> islem;
	a = 10, b = 20;
	switch (islem)
	{
	case '+':
			cout << a + b;
			break;
	case '-':
		cout << a - b;
		break;
	case '*':
		cout << a * b;
		break;
	case '/':
		cout << a / b;
		break;
	default:
		cout << "islem bulunamadı";
		break;
	}
}

#include<iostream>
using namespace std;

int main() {

	for (int i = 0; i < 5; i++) {
		cout << i << " ";
		cout << "merhaba ";
	}
	return 0;
}


#include<iostream>
using namespace std;
int main() {
	int a = 5;
	while (a != 0) {
		cout << a << " ";
		a--;
	}
	return 0;
}

#include<iostream>
using namespace std;

int main() {
	int sayi = 0;
	while (sayi < 100) {
		if (sayi % 5 == 0) {
			cout << sayi << " ";
		}
		sayi++;
	}
	return 0;
}


#include<iostream>
using namespace std;

int main() {
	int dizi[5] = { 2,4,5,7,6 };
	for (int i = 1; i < 6; i++) {
		cout << i << " sayi " << dizi[i] << endl;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main() {
	int sayi[5];
	for (int i = 0; i < 5; i++) {
		cout << "Dizinin " << i + 1 << ". elemanini gir: ";
		cin >> sayi[i];
	}
	for (int i = 0; i < 5; i++)
		cout << "Dizinin " << i + 1 << ". elemani: " << sayi[i] << endl;
	return 0;
}


#include<iostream>
using namespace std;
int main() {
	int dizi[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	for (int i = 0; i < 3; i++) {
		cout << endl;
		for (int j = 0; j < 3; j++)
			cout << dizi[i][j] << " ";
	}
	return 0;
}

#include<iostream>
using namespace std;
int main() {
	char dizi[10];
	for (int i = 0; i < 10; i++)
		dizi[i] = i + 65;    //i + 65: ASCII tablosunda 'A' karakterinin ifade eder
	  for (int i = 0; i < 10; i++) 
		 cout << dizi[i] << " ";
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string krt1; // Boş bir nesne oluşturma
	string krt2 = "NesneDersi";
	string krt3("Bilgisayar");
	string krt4(krt3);
	string krt5;
	string krt6;
	krt1 = "Program";
	krt5 = krt4;
	krt6 = krt3 + krt1;
	cout << "Krt1: " << krt1 << endl;
	cout << "Krt2: " << krt2 << endl;
	cout << "Krt3: " << krt3 << endl;
	cout << "Krt4: " << krt4 << endl;
	cout << "Krt5: " << krt5 << endl;
	cout << "Krt6: " << krt6 << endl;
	return 0;
}


#include<iostream>
using namespace std;

int main() {
	string krt1("XVCBN");
	string krt2("KLMHBN");
	string krt3(krt1);

	if (krt1 != krt2) {
		cout << "karkaterler birbirinden farklı" << endl;
		if (krt1 > krt2) 
			cout << "karakter 1 , karakter 2 den daha büyük" << endl;
		else
			cout << "karakter 2 , karakter 1 den daha büyük" << endl;
		}
	else
		cout << "karakterler birbirine eşit değil" << endl;
	}

#include<iostream>
using namespace std;

class nokta {
public:
	int x, y;

	void goster(){
		cout << x << " " << y << endl;
	}
	void arttir() {
		x = x + 5;
		y = y + 3;
	}
};

int main() {
	nokta n1, n2;
	n1.x = 10;
	n1.y = 20;
	n1.goster();
	n1.arttir();
	n1.goster();
	return 0;
}

#include<iostream>
using namespace std;

class ogrenci {
private:
	int ogrNo;
	string ogrUlke;

public:
	string adsoyad;
	int sinif;

	void goster() {
		cout << "öğrenci no : " << ogrNo << "ülke : " << ogrUlke << "ad: " << adsoyad << "sınıf: " <<  sinif << endl;
	}

	void ata(int no) {
		if (no < 0) {
			cout << "hatalı giriş yaptınız " << endl;
			ogrNo = 00000;
		}
		else
		ogrNo = no; 
	}

	void ulkeEkle(string ulke) {
		if (ogrUlke == " ")
			ogrUlke = "turkiye";

		else
			ogrUlke = ulke;
	}
};

int main() {
	ogrenci ogr1, ogr2, ogr3;

	ogr1.adsoyad = "Berat Kahveci";
	ogr1.sinif = 1;
	ogr1.ata(100);
	ogr1.ulkeEkle(" ");

	ogr2.adsoyad = "Enes Akin";
	ogr2.sinif = 2;
	ogr2.ata(-50);
	ogr2.ulkeEkle("Fransa");

	ogr1.goster();
	ogr2.goster();

	return 0;
}

#include<iostream>
using namespace std;

class oda {
private:
	int en, boy, yukseklik;
	int alan, hacim;

public:
	void ata(int x, int y, int z) {
		if (x < 0) {
			cout << "hatalı giriş yaptınız" << endl;
			en = 1;
		}
		else
			en = x;

		if (y < 0) {
			cout << "hatalı giriş yaptınız" << endl;
			boy = 1;
		}
		else
			boy = y;

		if (z < 0) {
			cout << "hatalı giriş yaptınız" << endl;
			yukseklik = 1;
		}
		else
			yukseklik = z;
	}

	void alanHesapla() {
		alan = en * boy;
	}

	void hacimHesapla() {
		hacim = en * boy * yukseklik;
	}

	void goster() {
		cout << "Alan : " << alan << "Hacim: " << hacim << endl;
	}
};

int main() {
	oda n1, n2;
	n1.ata(2, 4, 6);
	n1.alanHesapla();
	n1.hacimHesapla();
	n1.goster();
}

int main() {
	int a = 5;
	cout << a << endl;
	cout << &a << endl;
	return 0;0
}

#include<iostream>
using namespace std;
int main() {
	int a = 5;
	int* ptr;  //int* ptr;: Bir işaretçi (pointer) olan ptr oluşturuluyor.
	//Bu işaretçi, bir tamsayı değişkeninin bellek adresini saklamak için kullanılacak.
	ptr = &a;  //ptr = &a;: ptr, a değişkeninin bellek adresini tutacak şekilde ayarlanıyor.
	cout << "a adresi:" << &a << endl; // "a adresi:" << &a <<: a değişkeninin bellek adresi ekrana yazdırılıyor
	cout << "a adresi:" << ptr << endl;//<< "a adresi:"<< ptr <<: ptr işaretçisinin içinde saklanan bellek adresi ekrana yazdırılıyor.
	// a değişkeninin bellek adresi 
	cout << "a degeri:" << *ptr << endl; //<< "a degeri:" << *ptr << ptr işaretçisi aracılığıyla a değişkeninin değeri ekrana yazdırılıyor.
	//*ptr ifadesi, ptr işaretçisinin işaret ettiği bellek adresindeki değeri ifade eder.

	*ptr = *ptr + 1;  // anın değeri 1 artar
	cout << "a degeri:" << a << endl;

	ptr = ptr + 1;  // bellek adresi 4 artar cünkü int 4 byte
	cout << ptr << endl;

	ptr = ptr + 1;  // adres içindeki değer
	cout << "adres içindeki değer" << ptr << endl;
	return 0;
}

#include<iostream>
using namespace std;
int main() {
	int a = 5;
	int* ptr; //ptr oluşturdum
	ptr = &a; //a nın bellek adresini tutar
	cout << " a nın adresi: " << &a << endl;
	cout << " a nın adresi: " << ptr << endl;
	cout << "a nın değeri: " << *ptr << endl;

	*ptr = *ptr + 1;
	cout << "a nın değeri: "  << a << endl; 

	ptr = ptr + 1;
	cout << ptr << endl;

	ptr = ptr + 1;  // adres içindeki değer
	cout << "adres içindeki değer" << ptr << endl;
	return 0;
	 }

	 //
int fonk(int a, int b) {
	return a + b;
}

int main() {
	int a = 10;
	int b = 20;
	int toplam = fonk(a ,b);
	cout << "toplam : " << toplam << endl;
}

//
int fonk(int* a, int* b, int* t, int* f) {
	*f = *a - *b;
	*t = *a + *b;
}

int main() {
	int a = 10, b = 20;
	int toplam, fark;
	fonk(&a, &b, &fark, &toplam);
	cout << "toplam:" << toplam << endl;
	cout << "fark:" << fark << endl;
	return 0;
}

class nokta {
public:
	int a, b;

	void arttir() {
		a = a + 5;
		b = b + 4;
	}

	void goster() {
		cout << "a: " << a << "b: " << b << endl;
	}
};
int main() {
	nokta n1, n2;
	n1.a = 5;
	n2.b;
	n1.arttir();
	n1.goster();
}

#include<iostream>
using namespace std;

class nokta {
public:
	int a, b;

	void arttir(int x, int y) {
		a = x;
		b = y;
		a = a + 5;
		b = b + 3;
	}
	void goster() {
		cout << "a: " << a << "b: " << b << endl;
	}
};

int main() {
	nokta n1, n2;
	n1.a = 4;
	n2.b = 6;
	n1.arttir(n1.a, n2.b);
	n1.goster();
}

//
class ogrenci {
public:
	string ad;
	int no;
	int sinif;

	void goster() {
		cout << "Ad: " << ad << "No: " << no << "sınıf: " << sinif << endl;
	}
};

int main() {
	ogrenci ogr1;
	ogr1.ad = "ali";
	ogr1.no = 123;
	ogr1.sinif = 1;
	ogr1.goster();
	return 0;
}

//


#include<iostream>
 using namespace std;
int main() {
	int dizi[] = { 56,32,45,78,12,4,96,5,21,62 };
	int temp;
	for (int i = 0; i < 10 - 1; i++)
		for (int j = 0; j < 10 - 1; j++) {
			if (dizi[j] > dizi[j + 1]) { // Eğer şu anki eleman bir sonraki elemandan büyükse, yer değiştirme işlemi yapılır
				temp = dizi[j];          //temp : Geçici bir değişken kullanarak, iki elemanın yerini değiştirir.
				dizi[j] = dizi[j + 1];
				dizi[j + 1] = temp;
			}
		}
	for (int i = 0; i < 10; i++)  //Bu döngü, sıralanmış diziyi ekrana yazdırır
	   cout << dizi[i] << " ";
	return 0;
}

#include <iostream>
using namespace std;

class student{
public:
	int ogrNo;
	string ad;
	string okul;
	string ulke;
	int vizeNotu;
	int finalNotu;

	void ortalamaHesapla() {
		int genelNot = vizeNotu + finalNotu;

		if (genelNot > 50) {
			cout << "Geçti";
		}
		else {
			cout << "kaldı";
		}


		cout << "ogrenci" << ad << " " << "not: " << genelNot << endl;


	}
};

int main() {
	student ogrenci;

	cout << "Öğrenci no:";
	cin >> ogrenci.ogrNo;


	cout << "Öğrenci ad :";
	cin >> ogrenci.ad;


	cout << "Öğrenci okul:";
	cin >> ogrenci.okul;


	cout << "Öğrenci uyruk:";
	cin >> ogrenci.ulke;

	cout << "vizenotu:";
	cin >> ogrenci.vizeNotu;

	cout << "finalnotu:";
	cin >> ogrenci.finalNotu;

	ogrenci.NotlarıHesapla();

	return 0;
}

//
#include<iostream>
	using namespace std;
	class Ogrenci {
	private:
		int no, vize, final;
		float ort;
		string ad, okul;
	public:
		Ogrenci() {
			cout << "Veri Girisi yapilmadi" << endl;
		}
		Ogrenci(int g_no, string g_ad, string g_okul, int g_vize, int g_final) {
			no = g_no;
			ad = g_ad;
			okul = g_okul;
			vize = g_vize;
			final = g_final;
		}
		Ogrenci(int g_no, string g_ad, int g_vize, int g_final) {
			no = g_no;
			ad = g_ad;
			okul = "Biruni";
			vize = g_vize;
			final = g_final;
		}
		float ortHesap() {
			ort = 0.4 * vize + 0.6 * final;
			return ort;
		}
		void goster() {
			cout << no << " " << ad << " " << okul << " " << ort << endl;
		}
	};

	int main() {
		float dizi[5];
		Ogrenci Ogr1(100, "Ali", "XYZ", 40, 70);
		dizi[0] = Ogr1.ortHesap();
		Ogr1.goster();
		Ogrenci Ogr2(101, "Ahmet", 80, 90);
		dizi[1] = Ogr2.ortHesap();
		Ogr2.goster();
		Ogrenci Ogr3(102, "Fatma", "ABC", 30, 50);
		dizi[2] = Ogr3.ortHesap();
		Ogr3.goster();
		Ogrenci Ogr4(103, "Ayse", 10, 10);
		dizi[3] = Ogr4.ortHesap();
		Ogr4.goster();
		Ogrenci Ogr5(104, "Hasan", "KLM", 85, 89);
		dizi[4] = Ogr5.ortHesap();
		Ogr5.goster();
		for (int i = 0; i < 5; i++)
			cout << dizi[i] << endl;
		return 0;
	}

//
#include <iostream>
using namespace std;

void degistir(int a) {
    a = a + 2;
}
int main() {
    int a;
    a = 10;
    degistir(a);
    cout << a;
    return 0;
}


//
#include <iostream>
using namespace std;

class Nokta {
public:

	int x, y;
	Nokta(int x, int y) {
	this->x = x; this->y = y;
	}

	void yazdir() {
		cout << x << " " << y;
	}
};

int main() {
	Nokta N1(5,6);
	N1.yazdir;
	return 0;
}