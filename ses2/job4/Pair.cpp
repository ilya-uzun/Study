
#include <iostream>
#include"Pair.h"

// консруктор без параметров
Pair::Pair(void)
{
	first = 0;
	second = 0;
}
//деструктор
Pair::~Pair(void){}
//Конструктор с параметрами
Pair::Pair(int F, int S) {
	first = F;
	second = S;
}
//Конструктор копирования
Pair::Pair(const Pair& pair) {
	first = pair.first;
	second = pair.second;
}
// модификаторы
int Pair::set_first(int F) {
	first = F;
	return first;
}
int Pair::set_second(int S) {
	second = S;
	return second;
}

int Pair::perimeter() {
	return (first*second);
}

// перегрузка операторов присваивания
Pair& Pair::operator=(const Pair& pair)
{
	if (&pair == this)return *this;
	first = pair.first;
	second = pair.second;
	return *this;
}

//глобальная функция для ввода
std::istream& operator>>(std::istream& in, Pair& pair)
{
	std::cout << " Enter (first) class Pair : ";//
	in >> pair.first;
	std::cout << " Enter (second) class Pair : ";//
	in >> pair.second;
	return in;
}
//глобальная функция для  вывода
std::ostream& operator <<(std::ostream& out, const Pair& pair)
{
	out << " Output (first) class Pair = "<< pair.first << std::endl;// 
	out << " Output (second) class Pair  = "<< pair.second << std::endl;//
	return out;
}
