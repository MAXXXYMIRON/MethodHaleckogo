#include <iostream>
#include "MakeMatrix.h"

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

	 
	A = initMatrix(A, 0);
	C = initMatrix(C, 0);
	outMatrix(A);
	outMatrix(C);

	system("pause");
}