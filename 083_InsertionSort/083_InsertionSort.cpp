// 083_InsertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int arr[12];
int n; 

void input() {        //procedur untuk input

	while (true) {

		cout << "Masukan banyaknya elemen pada array : "; //output ke layar
		cin >> n; //input dari pengguna
		if (n <= 20) // jika n kurang dari atau sama dengan 20
			break; // keluar dari loop
		else {    // jika n lebih dari 20
			cout << "\nArray dapatmempunyai maksimal 20 elemen.\n"; // output ke layar

		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ":";
		cin >> arr[i];


	}
}
void insertionsort() {

	int i, temp, j;
	

	for (i = 1; i <= n - 1; i++) { //step 1
		temp = arr[i]; //step 2
		j = i - 1; //step 3
		while (j >= 0 && arr[j] > temp) //step 4
		{
			arr[j + 1] = arr[j]; //step 4a
			j = j - 1; //step 4b
		}
		arr[j + 1] = temp; //step 5


		for (int k = 0; k < n; k++) {
			cout << arr[k] << " ";         // menampilkan data pada number of pass
		}
	}
}
void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang Telah tersusun" << endl;
	cout << "=================================" << endl;
	cout << endl;

	for (int j = 0; j < n; j++) {
		cout << arr[j];
		if (j < n - 1) {
			cout << "--->";
		}
	}
	cout << endl;
	cout << endl;

	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
	cout << endl;
}


int main()
{
	input();

	insertionsort();
	display();

	return 0;
}