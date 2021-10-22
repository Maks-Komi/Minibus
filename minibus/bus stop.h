/*	1.	Поле количество людей на остановке.(int amount_people)
    2.	Поле int max_people(задает максимальное количество людей)
    3.	/*Координаты (для каждой остановки своя широта и долгота,тип double lat, lon )
    4.	Конструктор: максимальное количество людей, долгота, широта)
    5.	Функция добавления людей(int add_people())
    6.	Функция для печати остановки */

#include <iostream>
using namespace std;

class Bus_stop {
    int amount_people = 0;
    int max_people = 50;
    double latitude = 0.0, longitub = 0.0;
public:
    Bus_stop(int am_peop, int max_peop, double lat, double lon) {
        amount_people = am_peop;
        max_people = max_peop;
        this->latitude = lat;
        this->longitub = lon;
    }
    void print_bus_stop(int, double, double);
};
