#pragma once
#include <string>
#include <iostream>
#include "Object.h"
//using namespace std;

class Pair : public Object
 {
	// контструктор без параметров
public:
	Pair(void);
public:
	//деструктор
	virtual ~Pair(void);
	void Show();//функция для просмотра атрибутов класса с помощью указателя
	//конструктор с параметрами
	Pair(int, int);
	//конструктор копирования
	Pair(const Pair&);
	//селекторы
	int  get_first(){ return first; }
	int  get_second() { return second; }
	//модификаторы
	int set_first(int);
	int set_second(int);

	int perimeter ();
	// перегрузка опирации присваивания
	Pair& operator= (const Pair&);
	//глобальные  операторы функции ввода-вывода
	friend std::istream& operator >> (std::istream &in, Pair& pair);
	friend std::ostream& operator << (std::ostream &out, const Pair& pair);

//атрибуты
protected:
	int first;
	int second;
};
