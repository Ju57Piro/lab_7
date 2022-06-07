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

void one(); //1. сортировка по алфавиту
void two(); //2. сортировка по убыванию с учетом имени
void three(); //3. Cортировка вставками 
void four(); //4. ”даление чисел < x
void five(); //5. —ортировка по модулю от меньшего к большему.
void six(); //6. ”даление дубликатов чисел
void seven(); //7.  опирование всех не отрицательны чисел.
void eight(); //8. ѕроверка наличи€ четных
void nine(); //9. Ќахождение людей, имеющих меньше 73 баллов
void ten(); //10. поиск первой строки содержащей искомую

