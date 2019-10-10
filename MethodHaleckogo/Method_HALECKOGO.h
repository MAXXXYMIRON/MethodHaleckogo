#pragma once
#include <iostream>
#include "MakeMatrix.h"


/**
	Выичсление элементов матрицы В и Т
**/
void intiBandT(halecki& const MatrixA, halecki& MatrixB, halecki& MatrixT);
/**
	Вычисление элемнта матрицы В
**/
float elementB(int Row, int Col, halecki& const MatrixA, halecki& const MatrixB, halecki& const MatrixT);
/**
	Вычисление элемнта матрицы Т
**/
float elementT(int Row, int Col, halecki& const MatrixA, halecki& const MatrixB, halecki& const MatrixT);



/**
	Вычисление элементов матрицы Y
**/
halecki initY(halecki& const MatrixB, halecki& const MatrixC);
/**
	Вычисление элемента матрицы Y
**/
float elementY(int Row, halecki& const MatrixB, halecki& const MatrixC, halecki& const MatrixY);



/**
	Вычисление элементов матрицы Х
**/
halecki initX(halecki& const MatrixT, halecki& const MatrixY);
/**
	Вычисление элемента матрицы Х
**/
float elementX(int Row, halecki& const MatrixT, halecki& const MatrixY, halecki& const MatrixX);



/**
	Получение результата
**/
halecki methodHalecki(halecki& const MatrixA, halecki& const MatrixC);