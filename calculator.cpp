#include<iostream>
using namespace std;

// Function prototypes
int add(int n1, int n2);
int min(int n1, int n2);
int mul(int n1, int n2);
int divide(int n1, int n2);
int pow(int n1, int n2);
int fac(int n1);
int fibo(int n1);
int max(int n1, int n2, int n3);
int min(int n1, int n2, int n3);
int squArea(int n1);
int recArea(int n1, int n2);
int triArea(int n1, int n2);
int squpirmeter(int n1);
int recpirmeter(int n1, int n2);
int tripirmeter(int n1, int n2, int n3);
int prim(int num);
int average(int n1, int n2, int n3);

int main() {
    char ch, symbol;
    int num1, num2, num3, res = 1, i = 0;
    do {
        cout << "\nChoose the operation: "
            "\n+ addition "
            "\n- subtraction "
            "\n* multiplication "
            "\n/ division "
            "\n^ power "
            "\n! factorial "
            "\nF fibonacci "
            "\nM maximum of 3 numbers "
            "\nS smallest of 3 numbers "
            "\nA area of square "
            "\nB area of rectangle "
            "\nC area of triangle "
            "\nD perimeter of square "
            "\nE perimeter of rectangle "
            "\nG perimeter of triangle "
            "\nP prime or not "
            "\nV average of 3 numbers \n";
        cin >> symbol;

        // (Rest of the implementation goes here)

        cout << "Do you want another operation? (y or n)\n";
        cin >> ch;
    } while (ch == 'y');
    return 0;
}

// Functions implementation here (same as previous version)
