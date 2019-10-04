#include <iostream>
#include"MakeMatrix.h"

using namespace std;

/**
	��������� ������ ��� �������
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
	����������� �������
	halec memoMatrix(unsigned RowCol);
	��� �������� �������������� ������
	� ����� ��������
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
	������������� �������
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
	������������� ������� �������� ����������
	���������� initMatrix(Name, flag)
	��� ������������� ��������� ����������
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
	����� �������
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