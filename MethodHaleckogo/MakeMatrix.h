#pragma once
#include <vector>

typedef std::vector<std::vector<float>> halec;

/**
	��������� ������ ��� �������
**/
halec memoMatrix(unsigned RowCol);

/**
	����������� ������� 
	halec memoMatrix(unsigned RowCol);
	��� �������� �������������� ������
	� ����� ��������
**/
halec memoMatrix(unsigned RowCol, bool flag);

/**
	������������� �������
**/

halec initMatrix(halec NameMatrix);

/**
	������������� ������� �������� ����������
	���������� initMatrix(Name, flag)
	��� ������������� ��������� ����������
**/
halec initMatrix(halec NameMatrix, bool flag);

/**
	����� �������
**/
void outMatrix(halec NameMatrix);