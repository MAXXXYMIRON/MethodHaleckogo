#include <iostream>
#include "MakeMatrix.h"
#include "Method_HALECKOGO.h"

using namespace std;

/**
	���������� ��������� ������� � � �
**/
void intiBandT(halecki& const MatrixA, halecki& MatrixB, halecki& MatrixT)
{
	for (int i = 0; i < MatrixA.size(); i++)
	{
		for (int j = 0; j < MatrixB[i].size(); j++)
		{
			MatrixB[i][j] = elementB(i, j, MatrixA, MatrixB, MatrixT);
		}
		for (int j = i + 1; j < MatrixT[i].size(); j++)
		{
			MatrixT[i][j] = elementT(i, j, MatrixA, MatrixB, MatrixT);
		}
	}
}
/**
	���������� ������� ������� �
**/
float elementB(int Row, int Col, halecki& const MatrixA, halecki& const MatrixB, halecki& const MatrixT)
{
	float Result = MatrixA[Row][Col];

	for (int i = 0; i < Col; i++)
	{
		Result -= MatrixB[Row][i] * MatrixT[i][Col];
	}

	return Result;
}
/**
	���������� ������� ������� �
**/
float elementT(int Row, int Col, halecki& const MatixA, halecki& const MatrixB, halecki& const MatrixT)
{
	float Result = MatixA[Row][Col];

	for (int i = 0; i < Row; i++)
	{
		Result -= MatrixB[Row][i] * MatrixT[i][Col];
	}

	return Result / MatrixB[Row][Row];
}



/**
	���������� ��������� ������� Y
**/
halecki initY(halecki& const MatrixB, halecki& const MatrixC)
{
	halecki Y = memoMatrix(MatrixC.size(), 'C');

	for (int i = 0; i < Y.size(); i++)
	{
		Y[i][0] = elementY(i, MatrixB, MatrixC, Y);
	}

	return Y;
}
/**
	���������� �������� ������� Y
**/
float elementY(int Row, halecki& const MatrixB, halecki& const MatrixC, halecki& const MatrixY)
{
	float Result = MatrixC[Row][0];

	for (int i = 0; i < Row; i++)
	{
		Result -= MatrixB[Row][i] * MatrixY[i][0];
	}

	return Result / MatrixB[Row][Row];
}



/**
	���������� ��������� ������� �
**/
halecki initX(halecki& const MatrixT, halecki& const MatrixY)
{
	halecki X = memoMatrix(MatrixY.size(), 'C');

	for (int i = X.size() - 1; i >= 0; i--)
	{
		X[i][0] = elementX(i, MatrixT, MatrixY, X);
	}

	return X;
}
/**
	���������� �������� ������� �
**/
float elementX(int Row, halecki& const MatrixT, halecki& const MatrixY, halecki& const MatrixX)
{
	float Result = MatrixY[Row][0];

	for (int i = Row; i < MatrixX.size() - 1; i++)
	{
		Result -= MatrixT[Row][i + 1] * MatrixX[i + 1][0];
	}

	return Result;
}



/**
	��������� ����������
**/
halecki methodHalecki(halecki& const MatrixA, halecki& const MatrixC)
{
	//������������� ������ � � �
	halecki B = memoMatrix(MatrixA.size(), 'B');
	halecki T = memoMatrix(MatrixA.size(), 'T');
	intiBandT(MatrixA, B, T);

	//������������� ������� Y
	halecki Y = initY(B, MatrixC);

	//������������� ������� �
	return initX(T, Y);
}