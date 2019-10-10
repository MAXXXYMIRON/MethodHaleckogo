#pragma once
#include <iostream>
#include "MakeMatrix.h"


/**
	���������� ��������� ������� � � �
**/
void intiBandT(halecki& const MatrixA, halecki& MatrixB, halecki& MatrixT);
/**
	���������� ������� ������� �
**/
float elementB(int Row, int Col, halecki& const MatrixA, halecki& const MatrixB, halecki& const MatrixT);
/**
	���������� ������� ������� �
**/
float elementT(int Row, int Col, halecki& const MatrixA, halecki& const MatrixB, halecki& const MatrixT);



/**
	���������� ��������� ������� Y
**/
halecki initY(halecki& const MatrixB, halecki& const MatrixC);
/**
	���������� �������� ������� Y
**/
float elementY(int Row, halecki& const MatrixB, halecki& const MatrixC, halecki& const MatrixY);



/**
	���������� ��������� ������� �
**/
halecki initX(halecki& const MatrixT, halecki& const MatrixY);
/**
	���������� �������� ������� �
**/
float elementX(int Row, halecki& const MatrixT, halecki& const MatrixY, halecki& const MatrixX);



/**
	��������� ����������
**/
halecki methodHalecki(halecki& const MatrixA, halecki& const MatrixC);