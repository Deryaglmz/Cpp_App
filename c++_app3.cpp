#include <iostream>
using namespace std;

class Nokta {
public:
	int x, y;
	Nokta() {
		x = 10, y = 10;
	}

	void goster() {
		cout << x << " " << y << endl;
	}
	void atama(int a, int b) {
		x = a; y = b;
	}
};
int main() {
	Nokta N1;
	N1.goster();
}
// 10 10

//
class Nokta {
private:
	int x, y;

public:
	Nokta() { //parametre almayan constructor
		x = 10; y = 20;
	}
	void goster() {
		cout << "x:" << x << "y:" << y << endl;
	}
};

int main() {
	Nokta N1;
	N1.goster();
	return 0;
}


//
class Nokta {
private:
	int x, y;

public:
	Nokta() { //parametre almayan constructor
		x = 10; y = 20;
	}
	Nokta(int a, int b) { //parametre alan constructor
		x = a; y = b;
	}

	Nokta(int a) { // bir tane parametre alan constructor
		x = a; y = 0;
	}

	void goster() {
		cout << "x:" << x << " " << "y:" << y << endl;
	}
};

int main() {
	Nokta N1, N2(5, 75), N3(-8, 90), N4(4);
	N1.goster();
	N2.goster();
	N3.goster();
	N4.goster();
	return 0;
}


//
#include<ctime> //tarih eklemek için kütüphane

class Kayit {
private:
	string ad;
	int sinif;
	time_t tarih;

public:
	Kayit() {
		ad = "girilmedi";
		sinif = -1;
		tarih = time(NULL);
	}
	void goster() {
		cout << " Ad: " << ad << " Sinif " << sinif <<  " tarih: "  << ctime(&tarih) << endl;
	}
};

int main() {
	Kayit K1;
	K1.goster();
	return 0;
}

//
#include <iostream>
#include <string>
#include <ctime>

class Kayit {
private:
	std::string ad;
	int sinif;
	time_t tarih;

public:
	Kayit() {
		ad = "girilmedi";
		sinif = -1;
		time(&tarih);
	}

	void goster() {
		char zaman[26];
		ctime_s(zaman, sizeof(zaman), &tarih);
		std::cout << "Ad: " << ad << " Sinif: " << sinif << " Tarih: " << zaman << std::endl;
	}
};
int main() {
	Kayit K1;
	K1.goster();
	return 0;
}// 

//
#include <iostream>
using namespace std;
#include <ctime>

class Kayit {
private:
	string ad;
	int sinif;
	time_t tarih;
	string sehir;

public:
	Kayit() {
		ad = "girilmedi";
		sinif = -1;
		tarih = time(NULL);
		sehir = "girilmedi";
	}

	Kayit(string gelenAd, int gelenSinif){
		ad = gelenAd;
		sinif = gelenSinif;
		tarih = time(NULL);
		sehir = "İstanbul";
	}

	Kayit(string gelenAd, int gelenSinif, string gelenSehir){
		ad = gelenAd;
		sinif = gelenSinif;
		tarih = time(NULL);
		sehir = gelenSehir;
	}

	void goster(){
		cout << " Ad: " << ad << " Sinif " << sinif << " tarih: " << ctime(&tarih) << " sehir: " << sehir << endl;
	}
};

int main() {
	Kayit K1;
	Kayit K2("Enes", 2); // burda verdiğim değer kadar yukarıda parametre girmeliyim
	Kayit K3("Ahmet", 1, " Ankara");
	K2.goster();
	K1.goster();
	K3.goster();
	return 0;
}


//
class Hesap {
private:
	int en, boy, yukseklik , alan, hacim;

public:
	Hesap() {   //parametre almayan constructor
		en = 1; boy = 1; yukseklik = 1;
	}
	Hesap(int gelenEn, int gelenBoy) {   //2 parametre alan constructor
		en = gelenEn;
		boy = gelenBoy;
		yukseklik = 3;
	}

	Hesap(int gelenEn, int gelenBoy , int gelenYukseklik) {   //3 parametre alan constructor
		en = gelenEn;
		boy = gelenBoy;
		yukseklik = gelenYukseklik;
	}

	void alanHesap() {
		alan = en * boy;
	}
	void hacimHesap() {
		hacim = en * boy * yukseklik;
	}

	void goster() {
		cout << " Alan: " << alan << " Hacim: " << hacim  << endl;
	}
};
int main() {
	Hesap  mutfak, salon(2,3), oda(3,4,5);
	mutfak.alanHesap();  // mutfak için parametre vermedim / en = 1; boy = 1;
	mutfak.hacimHesap();
	mutfak.goster();

	salon.alanHesap();    // salon için 2 parametre verdim / alan = 10 hacim = 30
	salon.hacimHesap();
	salon.goster();

	oda.alanHesap();    // oda için 3 parametre verdim / alan = 12 hacim = 60
	oda.hacimHesap();
	oda.goster();

	return  0;
}

//

class Ogrenci {
private:
	int no; string ad;

public:
	Ogrenci() {
		no = -1; ad = " tanimsiz ";
	}

	Ogrenci(int gelenNo, string gelenAd) {
		no = gelenNo; ad = gelenAd;
	}

	Ogrenci(int gelenNo) {
		no = gelenNo; ad = " girilmedi ";
	}

	Ogrenci(string gelenAd) {
		ad = gelenAd; no = -1;
	}

	void goster() {
		cout << " Ad: " << ad << " No: " << no << endl;
	}
};

int main() {
	Ogrenci ogr1, ogr2(200, "Ali"), ogr3("Ali"), ogr4(300);
	ogr1.goster();
	ogr2.goster();
	ogr3.goster();
	ogr4.goster();
	return 0;
}

//
class Ogrenci {
private:
	int no; string ad;

public:
	Ogrenci() {
		no = -1; ad = " tanimsiz ";
	}

	Ogrenci(int gelenNo, string gelenAd) {
		no = gelenNo; ad = gelenAd;
	}

	Ogrenci(int gelenNo) {
		no = gelenNo; ad = " girilmedi ";
	}

	Ogrenci(string gelenAd) {
		ad = gelenAd; no = -1;
	}

	void goster() {
		cout << " Ad: " << ad << " No: " << no << endl;
	}
};

int main() {  // dizi ile yazdım 
	Ogrenci ogr[] = { Ogrenci(30,"Ahmet"), Ogrenci(45), Ogrenci("Mehmet"), Ogrenci()};
	ogr[0].goster();
	ogr[1].goster();
	ogr[2].goster();
	ogr[3].goster();
	return 0;
}

//

class Arac {
private:
	string aracAdi;
	int model;
	string yakitTuru;

public:
	Arac() {
		aracAdi = "Belirsiz"; model = -1; yakitTuru = "Belirsiz";
	}

	Arac(string gelenAd, int gelenModel, string gelenYakit) {
		aracAdi = gelenAd; model = gelenModel; yakitTuru = gelenYakit;
	}

	Arac(string gelenAd, int gelenModel) {
		aracAdi = gelenAd; model = gelenModel; yakitTuru = "Benzinli";
	}

	Arac(string gelenAd) {
		aracAdi = gelenAd; model = -1; yakitTuru = "Benzinli";
	}

	Arac( int gelenModel) {
		aracAdi = "Girilmedi "; model = gelenModel; yakitTuru = "Benzinli";
	}

	void goster() {
		cout << " Arac Adi: " << aracAdi << " Model: " << model << " Yakit Turu: " << yakitTuru << endl;
	}
};

int main() {

	Arac A1, A2("ABC", 2023, "Mazot"), A3("XYZ"), A4(2023);
	A1.goster();
	A2.goster();
	A3.goster();
	A4.goster();

	return 0;
}


//ornek oyun w3
int main() {
	// We put "1" to indicate there is a ship.
	bool ships[4][4] = {
	  { 0, 1, 1, 0 },
	  { 0, 0, 0, 0 },
	  { 0, 0, 1, 0 },
	  { 0, 0, 1, 0 }
	};

	// Keep track of how many hits the player has and how many turns they have played in these variables
	int hits = 0;
	int numberOfTurns = 0;

	// Allow the player to keep going until they have hit all four ships
	while (hits < 4) {
		int row, column;

		cout << "Selecting coordinates\n";

		// Ask the player for a row
		cout << "Choose a row number between 0 and 3: ";
		cin >> row;

		// Ask the player for a column
		cout << "Choose a column number between 0 and 3: ";
		cin >> column;

		// Check if a ship exists in those coordinates
		if (ships[row][column]) {
			// If the player hit a ship, remove it by setting the value to zero.
			ships[row][column] = 0;

			// Increase the hit counter
			hits++;

			// Tell the player that they have hit a ship and how many ships are left
			cout << "Hit! " << (4 - hits) << " left.\n\n";
		}
		else {
			// Tell the player that they missed
			cout << "Miss\n\n";
		}

		// Count how many turns the player has taken
		numberOfTurns++;
	}

	cout << "Victory!\n";
	cout << "You won in " << numberOfTurns << " turns";

	return 0;
}

//

#include<iostream>
using namespace std;

class DiziOlustur {
private:
	int uzunluk;
	int* dizi; //int* dizi; ifadesi, programın çalışma zamanında bir tamsayı dizisine işaret edebilecek bir işaretçi değişkeni tanımlar.
	//Bu işaretçi, daha sonra new ile ayrılan dinamik bellek alanına veya başka bir tamsayı dizisine işaret edebilir.
public:
	DiziOlustur() {
		uzunluk = 3;
		dizi = new int[uzunluk];  //new : bu dizi için dinamik olarak bellekten alan ayırır.
		//Dinamik bellek, programın çalışma zamanında elde edilen, kodun derleme zamanında belirlenmeyen bellek alanını ifade eder.
	}
	DiziOlustur(int uz) {
		if (uz < 3)
			uzunluk = 3;
		else
			uzunluk = uz;
		dizi = new int[uzunluk];
	}
	void degerAta(int index, int deger) {
		dizi[index] = deger;
	}
	int uzunlukYolla() {
		return uzunluk;
	}
	int goster(int index) {
		return dizi[index];
	}
	~DiziOlustur() {
		delete[] dizi;
		cout << "Yikici Calisti. Dizi Silindi." << endl;
	}
};

int main() {
	int boyut;
	DiziOlustur D1(5), D2(7), D3(1), D4(9), D5;
	boyut = D1.uzunlukYolla();
	cout << "Siniftan Gelen Uzunluk: " << boyut << endl;
	for (int i = 0; i < boyut; i++) {
		D1.degerAta(i, i * 5);
		cout << "D1(5) Dizinin " << i << ". elemani: " << D1.goster(i) << endl;
	}
	boyut = D2.uzunlukYolla();
	for (int i = 0; i < boyut; i++) {
		D2.degerAta(i, i * 10);
		cout << "D2(7) Dizinin " << i << ". elemani: " << D2.goster(i) << endl;
	}
	boyut = D3.uzunlukYolla();
	for (int i = 0; i < boyut; i++) {
		D3.degerAta(i, i * 3);
		cout << "D3(1) Dizinin " << i << ". elemani: " << D3.goster(i) << endl;
	}
	boyut = D4.uzunlukYolla();
	for (int i = 0; i < boyut; i++) {
		D4.degerAta(i, i * 4);
		cout << "D4(9) Dizinin " << i << ". elemani: " << D4.goster(i) << endl;
	}
	return 0;
}
//Siniftan Gelen Uzunluk: 5
//D1(5) Dizinin 0. elemani: 0
//D1(5) Dizinin 1. elemani : 5
//D1(5) Dizinin 2. elemani : 10
//D1(5) Dizinin 3. elemani : 15
//D1(5) Dizinin 4. elemani : 20
//D2(7) Dizinin 0. elemani : 0
//D2(7) Dizinin 1. elemani : 10
//D2(7) Dizinin 2. elemani : 20
//D2(7) Dizinin 3. elemani : 30
//D2(7) Dizinin 4. elemani : 40
//D2(7) Dizinin 5. elemani : 50
//D2(7) Dizinin 6. elemani : 60
//D3(1) Dizinin 0. elemani : 0
//D3(1) Dizinin 1. elemani : 3
//D3(1) Dizinin 2. elemani : 6
//D4(9) Dizinin 0. elemani : 0
//D4(9) Dizinin 1. elemani : 4
//D4(9) Dizinin 2. elemani : 8
//D4(9) Dizinin 3. elemani : 12
//D4(9) Dizinin 4. elemani : 16
//D4(9) Dizinin 5. elemani : 20
//D4(9) Dizinin 6. elemani : 24
//D4(9) Dizinin 7. elemani : 28
//D4(9) Dizinin 8. elemani : 32
//Yikici Calisti.Dizi Silindi.
//Yikici Calisti.Dizi Silindi.
//Yikici Calisti.Dizi Silindi.
//Yikici Calisti.Dizi Silindi.
//Yikici Calisti.Dizi Silindi.

//

#include<iostream>
#include<cstring>
using namespace std;

class Karakter {
private:
	int boyut;
	char* icerik;
public:
	Karakter(const char* gelen) {
		boyut = strlen(gelen);
		icerik = new char[boyut + 1];
		strcpy(icerik, gelen);
	}
	void goster() {
		cout << icerik << "  " << boyut << endl;
	}
	~Karakter() {
		cout << "Yikici Calisti" << endl;
		delete[] icerik;
	}
};

int main() {
	Karakter K1("Bilgisayar");
	Karakter K2("Biruni");
	Karakter K3("Program");
	K1.goster();
	K2.goster();
	K3.goster();
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