#pragma once
#include<iostream>
using namespace std;

class Minibus {
	int total_place = 20;
	int amount_people;
	int free_place;
	double latitude, longitub;
	int completion();
	void print_minibus(int, int);
};