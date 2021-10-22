#include<iostream>
#include"class minibus.h"
#include"bus stop.h"
using namespace std;


void Bus_stop::print_bus_stop(int emount_piople) {
	for (int i = 0; i < 8; i++)
	{
		cout << "*";
	}
	cout << endl << "*" << "  " << emount_piople << "  " << "*" << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << "*";
	}
	cout << endl;
}

void Minibus::print_minibus(int amount_place, const int total_place) {
	for (int i = 0; i < 8; i++) {
		if (i == 0 || i == 7) {
			cout << "+";
		}
		else {
			cout << "-";
		}
	}
	cout << endl << "|" << " " << amount_place << "/" << total_place << "  " << "\\" << endl;
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			cout << "+";
		}
		else if (i == 1 || i == 7) {
			cout << "0";
		}
		else if (i == 9) {
			cout << "\\";
		}
		else {
			cout << "-";
		}	
	}
	cout << endl;
}


 int main() {
	 Minibus a;
	 Bus_stop b(0, 100, 53, 37);
	 a.print_minibus(5, 20);
	 b.print_bus_stop(3);
 }