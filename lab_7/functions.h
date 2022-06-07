#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <array>
#include <functional>

struct results {
	std::string name;
	int score;
};

void arr_fill(std::vector<int>& p_arr);
bool arr_checker(std::vector<int>& p_arr, int size);
void arr_output(std::vector<int>& array);

void one(); //1. ���������� �� ��������
void two(); //2. ���������� �� �������� � ������ �����
void three(); //3. C��������� ��������� 
void four(); //4. �������� ����� < x
void five(); //5. ���������� �� ������ �� �������� � ��������.
void six(); //6. �������� ���������� �����
void seven(); //7. ����������� ���� �� ������������ �����.
void eight(); //8. �������� ������� ������
void nine(); //9. ���������� �����, ������� ������ 73 ������
void ten(); //10. ����� ������ ������ ���������� �������

