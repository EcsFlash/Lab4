#include "Complex.h"

Complex::Complex(): Pair()
{
}

Complex::Complex(int a, int b): Pair(a, b)
{
}

Complex::Complex(const Complex& other):Pair(other)
{
}

Complex Complex::operator*(const Complex& other)
{
    cout << *a << '\t' << *(other.b) << '\t' << *b << '\t' << *(other.a) << endl;
    return Complex(*a * *(other.a) - *b * *(other.b), *a * *(other.b) + *b * *(other.a));
}

Complex Complex::operator/(const Complex& other)
{
    return Complex((*a* *(other.a) + *b * *(other.b))/(*other.a * *other.a + *other.b * *other.b), (*other.a * *b - *a * *other.b)/(*other.a * *other.a + *other.b * *other.b));
}
//задача 75 на 67 стр

//3 -4 2 5 переможеить должно получится 26 7
//Complex Complex::operator-(const Complex& other)
//{
//    return Complex(*a - *(), *(other.a) - *(other.b));
//}

//Complex Complex::operator=(const Complex& other)
//{
//    *a = *other.a;
//    *b = *other.b;
//    return *this;
//}

Complex Complex::conj()
{
    return Complex(*a, -*b);
}

ostream& operator<<(ostream& os, Complex& const tr)
{
    return os << *tr.a << " + " << *tr.b << "i";
    // TODO: insert return statement here
}

Complex::~Complex() {

}