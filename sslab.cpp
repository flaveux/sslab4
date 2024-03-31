#include "FuncCalc(X, Y, Op).h"
#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
	double X1 = 2;
	double Y1 = 5.5;
	int Op1 = 1;
	double result1 = FuncCalc(X1, Y1, Op1);
	cout << "Арифметическая операция " << Op1 << " с числами " << X1 << " " << Y1 << " возвращает число " << result1 << endl;

	double X2 = 4;
	double Y2 = 20.1;
	int Op2 = 2;
	double result2 = FuncCalc(X2, Y2, Op2);
	cout << "Арифметическая операция " << Op2 << " с числами " << X2 << " " << Y2 << " возвращает число " << result2 << endl;

	double X3 = 6;
	double Y3 = 3.5;
	int Op3 = 3;
	double result3 = FuncCalc(X3, Y3, Op3);
	cout << "Арифметическая операция " << Op3 << " с числами " << X3 << " " << Y3 << " возвращает число " << result3 << endl;

	double X4 = 15;
	double Y4 = 5;
	int Op4 = 4;
	double result4 = FuncCalc(X4, Y4, Op4);
	cout << "Арифметическая операция " << Op4 << " с числами " << X4 << " " << Y4 << " возвращает число " << result4;
}

