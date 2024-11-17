using namespace std;
#include <windows.h> 
#include <iostream>
#include "Complex.h"
using namespace std;

void printLogo() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 9);
    cout << "Pair & Complex" << endl;
    SetConsoleTextAttribute(hConsole, 15);
}

void pause() {
    bool flag = true;
    int way;
    do {
        cout << "Enter 0 to go back" << endl;
        cin >> way;
        switch (way) {
        case 0:
            flag = false;
            break;
        default:
            break;
        }
    } while (flag);
}

void method1(Complex* tr) {
    int a;
    cin >> a;
    tr->setA(a);
}
void method2(Complex* tr) {
    int a;
    cin >> a;
    tr->setB(a);
}
void method3(Complex*& tr) {
    int a,b;
    cout << "Enter a and b for second Complex" << endl;
    cin >> a >> b;
    Complex* second = new Complex(a, b);
    tr = (Complex*)(*tr - *second);
    delete second;
}
void method4(Complex*& tr) {
    int a, b;
    cout << "Enter a and b for second Complex" << endl;
    cin >> a >> b;
    Complex* second = new Complex(a, b);
    *tr = *tr * *second;
    pause();
}
void method5(Complex*& tr) {
    int a, b;
    cout << "Enter a and b for second Complex" << endl;
    cin >> a >> b;
    Complex* second = new Complex(a, b);
    tr = (Complex*)(*tr + *second);
}
void method6(Complex& tr) {
    pause();
}
void method7(Complex& tr) {
    pause();
}
void method8(Complex& tr) {

}
void method9(Complex& tr) {

}

void method10(Complex& tr) {

}

void showMenu() {
    cout << "Select a method to execute:" << endl;
    cout << "1. Set a" << endl;
    cout << "2. Set b" << endl;
    cout << "3. Substract two complex" << endl;
    cout << "5. Sum two complex" << endl;
    cout << "4. Multiply two complex" << endl;
    cout << "0. Exit" << endl;
}


int main() {
    printLogo();
    double a, b, c;
    /*cin >> len;
    
    for (int i = 0; i < len; i++) {
        cin >> a[i];
    }
    Set set;
    set = Set(a, len);
    cout << set;*/
    ////float X, Y, Z;
    int way = 0;
    cout << "Let's start!" << endl;
    cout << "How do you want to create Complex?" << endl;
    cout << "1. Enter a, b" << endl;
    cout << "2. Start with (0,0)" << endl;
    cout << "Enter 1 or 2" << endl;
    cin >> way;
    system("cls");
    printLogo();
    bool flag = false;
    while (!flag) {
        switch (way)
        {
        case 1:
            cout << "Enter a, b" << endl;
            //cin >> X >> Y >> Z;
            cin >> a >> b;
            flag = true;
            break;
        case 2:
            flag = true;
            break;
        default:
            cout << "Try again later" << endl;
            int o = 1;
            while (o != 0) {
                cout << "Enter 0 if you want to Escape from the COmplex" << endl;
                cin >> o;
            }
            return 0;
            break;
        }
    }
    ////Vector3D vector = Vector3D();
    /*Pair* tr2 = new Complex();
    Complex* tr = dynamic_cast<Complex*>(tr2);*/
    Complex* tr = new Complex();
    switch (way)
    {
    case 1:
        //vector = Vector3D(X, Y, Z);
        //cout << len << endl;
        delete tr;
        tr = new Complex(a, b);
        break;
    default:
        break;
    }

    system("cls");
    int choice = 0;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    do {
        system("cls");
        printLogo();
        cout << "Current complex:" << '\t';
        SetConsoleTextAttribute(hConsole, 12);
        cout << *tr << endl;
        SetConsoleTextAttribute(hConsole, 15);
        showMenu();

        cout << "Enter your choice: " << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            method1(tr);
            break;
        case 2:
            method2(tr);
            break;
        case 3:
            method3(tr);
            break;
        case 4:
            method4(tr);
            break;
        case 5:
            method5(tr);
            break;
        /*case 6:
            method6(tr);
            break;
        case 7:
            method7(tr);
            break;*/
        case 0:
            cout << "Leaving the programm." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 0);

}

