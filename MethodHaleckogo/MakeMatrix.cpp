#include <iostream>
#include"MakeMatrix.h"

using namespace std;



/**
	Выделение памяти под матрицу
**/
halecki memoMatrix(unsigned RowCol)
{
	halecki Matrix;
	Matrix.resize(RowCol);
	for (int i = 0; i < RowCol; i++)
	{
		Matrix[i].resize(RowCol);
	}
	return Matrix;
}

/**
	Перрегрузка функции
	halec memoMatrix(unsigned RowCol);
	Флаг С - Выделение памяти под один столбец (Матрица С, Y и Х)
	Флаг В - Выделение памяти под ступенчатую матрицу (Матрица В)
	Флаг <Любой> - Выделение памяти под ступенчатую матрицу с едницами на главной диагонали (Матрица Т)
**/
halecki memoMatrix(unsigned RowCol, char Flag)
{
	halecki Matrix;
	Matrix.resize(RowCol);


	if (Flag == 'C')
		for (int i = 0; i < RowCol; i++)
			Matrix[i].resize(1);

	else if (Flag == 'B')
		for (int i = 0; i < RowCol; i++)
			Matrix[i].resize(i + 1);

	else
		for (int i = 0; i < RowCol; i++)
		{
			Matrix[i].resize(RowCol);
			for (int j = 0; j <= i; j++)
				Matrix[i][j] = (j == i) ? 1 : 0;
		}

	return Matrix;
}



/**
	Инициализация матрицы
	С помощью ввода
**/

halecki initMatrix(halecki NameMatrix)
{
	for (int i = 0; i < NameMatrix.size(); i++)
	{
		for (int j = 0; j < NameMatrix[i].size(); j++)
		{
			cout << "A[" << i << "," << j << "] = ";
			cin >> NameMatrix[i][j];
		}
	}
	return NameMatrix;
}

/**
	Инициализация матрицы готовыми значениями
	Перегрузка initMatrix(Name, flag)
	Для инициализации заданными значениями
**/
halecki initMatrix(halecki NameMatrix, bool flag)
{
	for (int i = 0; i < NameMatrix.size(); i++)
	{
		for (int j = 0; j < NameMatrix[i].size(); j++)
		{
			NameMatrix[i][j] = j + (i * NameMatrix.size());
		}
	}
	return NameMatrix;
}



/**
	Вывод матрицы
**/
void outMatrix(halecki NameMatrix)
{
	for (int i = 0; i < NameMatrix.size(); i++)
	{
		for (int j = 0; j < NameMatrix[i].size(); j++)
		{
			cout.width(4);
			cout << NameMatrix[i][j];
		}
		cout << endl;
	}
}