//Kelompok 1
//Zikwan Ismail
//Nauval Hanif
//Aninda Revi Oktaviani
//Linked List(Absensi)

#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <iostream>
#include <ctype.h>
#include <string.h>

using namespace std;

struct simpul{
	int angka;
	struct simpul*berikut;
};
struct simpul *awal=NULL;
int bil;

void tambah(int info);
void isi();
void tampil();
void hapus();

int main(){
	isi();
	tampil();
	hapus();
	getch();
}
void tambah (int info)
{
	struct simpul *baru;
	baru=(struct simpul*)mallloc(sizeof(struct simpul));
	baru->angka=info;
	baru->berikut=awal;
	awal=baru;
}
void isi(){
	char jawab;
	do {
		cout << "\nInput NPM :";
		cin >> bil;
		tambah(bil);
		cout << "nAbsen Berikutnya	Y/T :";
		cin >> jawab;
	}
		while (toupper(jawab)!='T');
}
	
