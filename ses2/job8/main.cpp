﻿#pragma once
#include "Person.h"
#include "Abiturient.h"
#include "Vector.cpp"
#include <iostream>
using namespace std;

int main()
{
   Person *a=new Person;//создаем объект класса Person
a->Input();
Abiturient *b=new Abiturient; //создаем объект класса Abiturient
b->Input();
Vector v(10);//Создаем вектор
Object*p=a;//ставим указатель на объект класса Person
v.Add(p);//добавляем объект в вектор
p=b;//ставим указатель на объект класса Abiturient
v.Add(p); //добавляем объект в вектор
v.Show();//вывод вектора
v.Del();//удаление элемента
cout<< "\nVector size="<<v();
   
return 0;
}

