#include<iostream>
#include"class minibus.h"
using namespace std;

 void Minibus::print_minibus(int amount_place, const int total_place) {
	for (int i = 0; i < 8; i++) {
		if (i == 0 || i == 7)
			cout << "+";
		else
			cout << "-";
	}
	cout << endl << "|" << " " << amount_place << "/" << total_place << "  " << "\\" << endl;
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			cout << "+";
		}
		else if (i == 1 || i == 7)
			cout << "0";
		else if (i == 9)
			cout << "\\";
		else
			cout << "-";
	}
	cout << endl;
}

 int Minibus::completion() {
	 return 0;
 }

 int main() {
	 Minibus a;
	a.print_minibus(5, 20);
 }