#include<iostream>
#include<string>
#include"class minibus.h"
#include"bus stop.h"
using namespace std;

//Функция выводит на экран остановку: amoun_people - количество людей на остановке
string Bus_stop::print_bus_stop(int amount_people, double lat, double lon) {
	string str;
	cout << "S: " << lat << endl << "D: " << lon << endl;//S - широта, D - долгота
	//Цикл печатает верх остаовки
	for (int i = 0; i < 8; i++)
	{
		cout << "*"; 
		str[i] = "*";
	}
	//Выводит количество людей
	if (amount_people < 10) {
		//если людей меньше 10-ти, пишем ноль в начале
		cout << endl << "*" << "  " << "0" << amount_people << "  " << "*" << endl;
	}
	else {
		cout << endl << "*" << "  " << amount_people << "  " << "*" << endl;
	}
	//Цикл печатает низ остановки
	for (int i = 0; i < 8; i++)
	{
		cout << "*";
		str[i] = '*';
	}
	cout << endl;
	return str;
}


//Функуия выводит на экран маршрутку: amount_people - количество людей в маршрутке, total_place - всего мест
string Minibus::print_minibus(int amount_people, const int total_place, double lat, double lon) {
	string str;
	cout << "S: " << lat << endl << "D: " << lon << endl;//S - широта, D - долгота
	//Цикл печатает верх маршрутки-
	for (int i = 0; i < 8; i++) {
		if (i == 0 || i == 7) {
			cout << "+";
			str[i] = "+";
		}
		else {
			cout << "-";
			str[i] = "-";
		}
	}
	//Выводит количество людей в маршрутке и сколько всего мест
	if (amount_people < 10) {
		//если людей меньше 10-ти, пишем ноль в начале
		cout << endl << "|" << " " << "0" << amount_people << "/" << total_place << " " << "\\" << endl;
		
	}
	else {
		cout << endl << "|" << " " << amount_people << "/" << total_place << " " << "\\" << endl;
	}
	//Цикл печатает низ маршрутки
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			cout << "+";
			str[i+8] = "+";
		}
		else if (i == 1 || i == 7) {
			cout << "0";
			str[i+8] = "0";
		}
		else if (i == 9) {
			cout << "\\";
			str[i+8] = "\\";
		}
		else {
			cout << "-";
			str[i + 8] = "-";
		}	
	}
	cout << endl;
	str[18] = "\0";
	return str;
}


 int main() {
	 Minibus a;
	 string minibus;
	 Bus_stop b(0, 100, 53, 37);
	 //b.print_bus_stop(3, 57.35, 57.37);
	 a.print_minibus(5, 20, 57.35, 57.37);
	 minibus = a.print_minibus(5, 20, 57.35, 57.37);
	 cout << minibus;
 }