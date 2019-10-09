#pragma once
#include <vector>

typedef std::vector<std::vector<float>> halecki;



/**
	��������� ������ ��� �������
**/
halecki memoMatrix(unsigned RowCol);

/**
	����������� �������
	halec memoMatrix(unsigned RowCol);
	���� � - ��������� ������ ��� ���� ������� (������� �, Y � �)
	���� � - ��������� ������ ��� ����������� ������� (������� �)
	���� <�����> - ��������� ������ ��� ����������� ������� � �������� �� ������� ��������� (������� �)
**/
halecki memoMatrix(unsigned RowCol, char Flag);



/**
	������������� �������
	C ������� �����
**/
halecki initMatrix(halecki NameMatrix);

/**
	������������� ������� �������� ����������
	���������� initMatrix(Name, flag)
	��� ������������� ��������� ����������
**/
halecki initMatrix(halecki NameMatrix, bool flag);



/**
	����� �������
**/
void outMatrix(halecki NameMatrix);