
#include <iostream>
using namespace std;


double FuncCalc(double X, double Y, int Op) {
	double result;
	if (Op == 1) {
		result = X + Y;
	}
	else if (Op == 2) {
		result = X - Y;
	}
	else if (Op == 3) {
		result = X * Y;
	}
	else result = X / Y;
return result;

}
	

