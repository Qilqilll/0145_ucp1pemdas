#include <iostream>
using namespace std;

//hh

struct Node {
	string name;
	char score;
	Node* next;
};

Node* START = NULL;

void addNode() {
	int noMhs;
	string nama;
	char nilai;
	Node* nodeBaru = new Node();
	cout << "Masukan Nama : ";
	cin >> nama;
	cout << "masukan nilai";
	cin >> nilai;

	nodeBaru->name = nama;
	nodeBaru->score = nilai;

}
// 1. a. integer contohnya : umur = 25
//    b. char contohnya : no telpon = 081234567890
//    c. string contohnya : nama = Muhammad Aqil firdaus

// 2. if, while

// 3. struct Mahasiswa {
//char nama[50];
//int umur;
//float IPK;
//};

// 4.
// prosedur :
//void mahasiswa{

//fungsi :
//	Mahasiswa mhs;
//	cout << "Nomor Mahasiswa : ";
//	cin >> mhs.nim;
//	cout << "Nama Mahasiswa : ";
//	cin >> mhs.nama;

//5. for, do while