#pragma once
#include<string>
using namespace std;

class Minibus {
	const int total_place = 20;
	int amount_people = 0;
	int free_place = 0;
	double latitude = 0.0, longitub = 0.0;
public:
	int completion();
	string print_minibus(int, int, double, double);
};