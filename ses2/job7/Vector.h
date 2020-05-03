#pragma once
#include <iostream>

struct Node
{
	int data;
	Node* pNext;
};

class Vector // Определяем односвязный список
{
private:
	Node* pFirst;

public:
	Vector() : pFirst(NULL) {}

	// метод добавления записи
	Vector& push_front(int);

	// Перегрузка операции обращения по индексу
	int& operator [] (int);

	// Объявление внутреннего класса-итератора
	class Iterator
	{
	protected:
		Node* iter;

	public:
		Iterator(Node* node) : iter(node) {}

		// перегрузка инкрементов
		Iterator& operator ++ ();
		Iterator operator ++ (int);

		// перегрузка сравнения итераторов
		bool operator != (Iterator right);

		// получение ссылки на запись
		int& get();
	};

	// Получение итераторов
	Iterator start();
	Iterator end();
};