#include <iostream>
#include "MakeMatrix.h"
#include "Method_HALECKOGO.h"

using namespace std;

int main()
{
	setlocale(0, "");

	unsigned n = 0;
	cout << "Введите порядок - ";
	cin >> n;

	//Создание матриц с помощью вектора == helec в модуле MakeMatrix.h
	halecki A = memoMatrix(n), // По эл. А находятся эл. В и Т
		C = memoMatrix(n, 'C');// По эл. С и В находятся эл. Y
		// По эл. Y и T находятся эл. X
		// Результат

	 
	A = { 
		  {-0.52, -0.2, 0.6, 0.76, -0.3},
		  {0.63, -0.75, 0.21, -0.28, -0.36},
	      {-0.18, 0.05, 0.72, 0.59, 0.55},
	      {0.79, -0.9, 0.46, 0.12, -0.47},
	      {0.32, -0.93, -0.62, 0.63, -0.4} 
		};

	C = { {0.58}, {0.37}, {-0.19}, {-0.47}, {-0.63} };

	outMatrix(methodHalecki(A, C));

	system("pause");
}