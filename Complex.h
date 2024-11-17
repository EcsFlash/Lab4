#pragma once
#include "Pair.h"

class Complex : public Pair {
public:
	Complex();
	Complex(int a, int b);
	Complex(const Complex& other);

	//Complex operator+(const Complex& other);
	Complex operator*(const Complex& other);
	Complex operator/(const Complex& other);
	friend ostream& operator<<(ostream& os, Complex& const tr);
	//Complex operator=(const Complex& other);
	Complex conj();
	~Complex();
	// �������� ���������, ����� ������, ����������� �������� �������� ����������
	//����������� �����
};