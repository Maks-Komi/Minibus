/*	1.	ѕоле количество людей на остановке.(int amount_people)
    2.	ѕоле int max_people(задает максимальное количество людей)
    3.	/* оординаты (дл€ каждой остановки сво€ широта и долгота,тип double lat, lon )
    4.	 онструктор: максимальное количество людей, долгота, широта)
    5.	‘ункци€ добавлени€ людей(int add_people())
    6.	‘ункци€ дл€ печати остановки */

#include <iostream>
using namespace std;
int max_people = 50;
class Bus_stop {
    int amount_people = 0;
    double latitude = 0.0, longitub = 0.0;
public:
    Bus_stop(int am_peop, int max_peop, double lat, double lon) {
        amount_people = am_peop;
        max_people = max_peop;
        this->latitude = lat;
        this->longitub = lon;
    }
    int add_people();
    void print_bus_stop(int, double, double);
};

//
class People {
    int start_time = 18000;//начало 5 часов утра в секундах 
    int time_interval = 68400 / 900;//из полного рабочего дн€ делем 15 минут ,
    //примрное количество изменений на остановке
    int *human;
public:
  
};