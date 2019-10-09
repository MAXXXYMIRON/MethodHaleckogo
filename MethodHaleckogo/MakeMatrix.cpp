#include <iostream>
#include"MakeMatrix.h"

using namespace std;



/**
	��������� ������ ��� �������
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
	����������� �������
	halec memoMatrix(unsigned RowCol);
	���� � - ��������� ������ ��� ���� ������� (������� �, Y � �)
	���� � - ��������� ������ ��� ����������� ������� (������� �)
	���� <�����> - ��������� ������ ��� ����������� ������� � �������� �� ������� ��������� (������� �)
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
	������������� �������
	� ������� �����
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
	������������� ������� �������� ����������
	���������� initMatrix(Name, flag)
	��� ������������� ��������� ����������
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
	����� �������
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