#pragma once
#include <vector>

typedef std::vector<std::vector<float>> halecki;



/**
	Выделение памяти под матрицу
**/
halecki memoMatrix(unsigned RowCol);

/**
	Перрегрузка функции
	halec memoMatrix(unsigned RowCol);
	Флаг С - Выделение памяти под один столбец (Матрица С, Y и Х)
	Флаг В - Выделение памяти под ступенчатую матрицу (Матрица В)
	Флаг <Любой> - Выделение памяти под ступенчатую матрицу с едницами на главной диагонали (Матрица Т)
**/
halecki memoMatrix(unsigned RowCol, char Flag);



/**
	Инициализация матрицы
	C помощью ввода
**/
halecki initMatrix(halecki NameMatrix);

/**
	Инициализация матрицы готовыми значениями
	Перегрузка initMatrix(Name, flag)
	Для инициализации заданными значениями
**/
halecki initMatrix(halecki NameMatrix, bool flag);



/**
	Вывод матрицы
**/
void outMatrix(halecki NameMatrix);