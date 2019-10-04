#include <iostream>
#include"MakeMatrix.h"

using namespace std;

/**
	Выделение памяти под матрицу
**/
halec memoMatrix(unsigned RowCol)
{
	halec Matrix;
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
	Для сознания результирующих матриц
	с одним столбцом
**/
halec memoMatrix(unsigned RowCol, bool flag)
{
	halec Matrix;
	Matrix.resize(RowCol);
	for (int i = 0; i < RowCol; i++)
	{
		Matrix[i].resize(1);
	}
	return Matrix;
}

/**
	Инициализация матрицы
**/

halec initMatrix(halec NameMatrix)
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
halec initMatrix(halec NameMatrix, bool flag)
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
	Вывод вектора
**/
void outMatrix(halec NameMatrix)
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