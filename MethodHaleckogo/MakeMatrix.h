#pragma once
#include <vector>

typedef std::vector<std::vector<float>> halec;

/**
	Выделение памяти под матрицу
**/
halec memoMatrix(unsigned RowCol);

/**
	Перрегрузка функции 
	halec memoMatrix(unsigned RowCol);
	Для сознания результирующих матриц
	с одним столбцом
**/
halec memoMatrix(unsigned RowCol, bool flag);

/**
	Инициализация матрицы
**/

halec initMatrix(halec NameMatrix);

/**
	Инициализация матрицы готовыми значениями
	Перегрузка initMatrix(Name, flag)
	Для инициализации заданными значениями
**/
halec initMatrix(halec NameMatrix, bool flag);

/**
	Вывод вектора
**/
void outMatrix(halec NameMatrix);