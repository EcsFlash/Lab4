#pragma once
#include <iostream>
using namespace std;

class Pair {
protected:
	int* a, * b;
public:
	Pair();
	Pair(int a, int b);
	Pair(const Pair& other);
	~Pair();
	int* getA() const;
	int* getB() const;
	void setA(int a);
	void setB(int b);
	Pair& operator=(const Pair& other);
	Pair* operator+(const Pair& other);
	Pair* operator-(const Pair& other);
	
	//умножение убрать, вычитание добавить
	//+ - в указатели
	friend ostream& operator<<(ostream& os, Pair& const tr);
private:
	virtual void print() {
		//чтобы работал каст
	}
};