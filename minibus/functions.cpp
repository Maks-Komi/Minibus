#include<iostream>
#include"class minibus.h"
#include"bus stop.h"
#include <string>
using namespace std;

//Функция выводит на экран остановку: amoun_people - количество людей на остановке
string Bus_stop::print_bus_stop(int amount_people, double lat, double lon) {
	string str;
	//cout << "S: " << lat << endl << "D: " << lon << endl;//S - широта, D - долгота
	str += 'S';
	str += ':';
	str += ' ';
	str += '0';
	str += '0';
	str += '.';
	str += '0';
	str += '0';
	str += ' ';
	str += 'D';
	str += ':';
	str += ' ';
	str += '0';
	str += '0';
	str += '.';
	str += '0';
	str += '0';
	str += ' ';
	//Цикл печатает верх остаовки
	for (int i = 0; i < 8; i++)
	{
		//cout << "*"; 
		str += '*';
	}
	//Выводит количество людей
	if (amount_people < 10) {
		//если людей меньше 10-ти, пишем ноль в начале
		//cout << endl << "*" << "  " << "0" << amount_people << "  " << "*" << endl;
	}
	else {
		//cout << endl << "*" << "  " << amount_people << "  " << "*" << endl;
	}
	str += '*';
	str += ' ';
	str += '0';
	str += '0';
	str += ' ';
	str += '*';
	//Цикл печатает низ остановки
	for (int i = 0; i < 8; i++)
	{
		//cout << "*";
		str += '*';
	}
	cout << endl;
	
	return str;
}


//Функуия выводит на экран маршрутку: amount_people - количество людей в маршрутке, total_place - всего мест
string Minibus::print_minibus(int amount_people, const int total_place, double lat, double lon) {
	string str;
	//cout << "S: " << lat << endl << "D: " << lon << endl;//S - широта, D - долгота
	str += 'S';
	str += ':';
	str += ' ';
	str += '0';
	str += '0';
	str += '.';
	str += '0';
	str += '0';
	str += ' ';
	str += 'D';
	str += ':';
	str += ' ';
	str += '0';
	str += '0';
	str += '.';
	str += '0';
	str += '0';
	str += ' ';

	//Цикл печатает верх маршрутки-
	for (int i = 0; i < 8; i++) {
		if (i == 0 || i == 7) {
			//cout << "+";
			str += '+';
		}
		else {
			//cout << "-";
			str += '-';
		}
	}
	//Выводит количество людей в маршрутке и сколько всего мест
	if (amount_people < 10) {
		//если людей меньше 10-ти, пишем ноль в начале
		//cout << endl << "|" << " " << "0" << amount_people << "/" << total_place << " " << "\\" << endl;
	}
	else {
		//cout << endl << "|" << " " << amount_people << "/" << total_place << " " << "\\" << endl;
	}
	str += '|';
	str += ' ';
	str += '0';
	str += '0';
	str += '/';
	str += '0';
	str += '0';
	str += ' ';
	str += '\\';
	//Цикл печатает низ маршрутки
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			//cout << "+";
			str += '+';
		}
		else if (i == 1 || i == 7) {
			//cout << "0";
			str += '0';
		}
		else if (i == 9) {
			//cout << "\\";
			str += '\\';
		}
		else {
			//cout << "-";
			str += '-';
		}	
	}
	cout << endl;	
	return str;
}
void test( string str1, string str2) {
	
	
	if (str1.size() == str2.size()& (str1.compare(str2) == 0)){
		//(str1.compare(str2) != 0);
		cout << "prpgramma rabotaet" << endl;
		cout << str1.compare(str2) << "sadf";
		cout << str1.size() << str2.size();

	}
	else {
		cout << "prpgramma ne rabotaet" << endl;
		cout << str1.size() << str2.size();
	}


}


 int main() {
	 Minibus a;
	 string minibus, ostanovka;//Для хранения остановки и маршрутки в виде строки
	 Bus_stop b(0, 100, 53, 37);
	 ostanovka = b.print_bus_stop(3, 57.35, 57.37);
	 minibus = a.print_minibus(5, 20, 57.35, 57.37);
	cout << ostanovka << endl;//Выводит остановку в строку
	 //cout << minibus << endl;//Выводит маршрутку в строку
	 string eee = "S: 00.00 D: 00.00 ********* 00 *********";
	 test(ostanovka,eee);
 }
 // S: 00.00 D: 00.00 ********* 00 *********
 // S: 00.00 D: 00.00 +------+| 00/00 \+0-----0-\