#include<iostream>
using namespace std;

void print_bus_stop(int emount_piople) {
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

void print_minibus(int free, int ocup) {
	for (int i = 0; i < 8; i++) {
		if (i == 0 || i == 7)
			cout << "+";
		else
			cout << "-";
	}
	cout << endl << "|" << " " << free << "/" << ocup << "  " << "\\" << endl;
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

int main() {
	print_bus_stop(10);
	print_minibus(5, 20);
}