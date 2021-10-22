/*	1.	Поле количество людей на остановке.(int amount_people)
    2.	Поле int max_people(задает максимальное количество людей)
    3.	/*Координаты (для каждой остановки своя широта и долгота,тип double lat, lon )
    4.	Конструктор: максимальное количество людей, долгота, широта)
    5.	Функция добавления людей(int add_people())
    6.	Функция для печати остановки */

#include <iostream>
using namespace std;

class Bus_stop {
    int amount_people;
    int max_people;
    double lat;
    double lon;
public:
    Bus_stop(int am_peop, int max_peop, double lat, double lon) {
        amount_people = am_peop;
        max_people = max_peop;
        lat = lat;
        lon = lon;
    }
};
