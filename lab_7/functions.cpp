#include "functions.h"

void arr_fill(std::vector<int> &p_arr)
{
    for (auto& p_arr: p_arr) {
        std::cin >> p_arr;
    }
}


bool arr_checker(std::vector<int> &p_arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        if (p_arr[i] > p_arr[i + 1]) {
            return true;
        }
    }
    return false;
}

void arr_output(std::vector<int> &array) {
    std::for_each(array.begin(), array.end(), [](int i)
        {
            std::cout << i << " ";
        });
    std::cout << std::endl;
}

void one()
{
    std::vector<std::string> arr = { "Морозов", "Ляхов", "Еремеев", "Ефремов", "Мухин" };
    sort(begin(arr), end(arr), [](std::string a, std::string b)
        {return a < b; });
    for (auto item : arr) {
        std::cout << item << " ";
    }
}

void two()
{
    int amount;
    std::cout << "input amount of students" << std::endl;
    std::cin >> amount;
    std::vector <results> table;
    std::cout << "input names of students" << std::endl; //некорректно работает с русскими символами
    for (int i = 0; i < amount; i++) { //ввод исходных данных
        results person;
        std::cin >> person.name >> person.score;
        table.push_back(person);
        person.name.clear();
    }

    sort(table.begin(), table.end(), [](results a, results b) { //сортировка с помощью лямбда функции
        if (a.score == b.score) {
            return a.name < b.name;
        }
        else
        {
            return a.score > b.score;
        }
        });

    for (auto now : table) { //вывод результата сортировки
        std::cout << std::endl << now.name << " " << now.score << std::endl;
    }
    table.clear();
}

void three()
{
    int size, j;
    std::cout << "insert size of array: ";
    std::cin >> size;
    std::vector<int> arr(size);
    std::cout << std::endl;
    std::cout << "insert array" << std::endl;
    arr_fill(arr);
    arr_output(arr);
    if (arr_checker(arr, size)) {
        for (int i = 1; i < size; ++i) {
            j = i;
            if (arr[j] < arr[j - 1]) {
                while (j > 0 && arr[j] < arr[j - 1]) {
                    std::swap(arr[j], arr[j - 1]);
                    --j;
                }
            }
        }
    }
    arr_output(arr);
}

void four()
{
    int n, x;
    std::cout << "insert size of array: ";
    std::cin >> n; //размер вектора
    std::vector <int> arr(n);
    std::cout << "input array: ";
    for (auto& arr : arr){
        std::cin >> arr; //ввожу данные
    }
    std::cout << "insert x: ";
    std::cin >> x; //число для сравнения
    arr.erase(std::remove_if(arr.begin(), arr.end(), [x](int n) { return n < x; }), arr.end());
    arr_output(arr);
}

void five()
{
    int n;
    std::cout << "insert size of array: ";
    std::cin >> n; //размер вектора
    std::vector <int> arr(n);
    std::cout << "input array: ";
    for (auto& arr : arr) {
        std::cin >> arr; //ввожу данные
    }
    sort(arr.begin(), arr.end(), [](int x, int y) {
        return (abs(x) < abs(y));
        });
    arr_output(arr);
}

void six()
{
    int n, x;
    std::cout << "insert size of array: ";
    std::cin >> n; //размер вектора
    std::vector <int> arr(n);
    std::cout << "input array: ";
    for (auto& arr : arr) {
        std::cin >> arr; //ввожу данные
    }
    for (int i = 0; i < arr.size(); i++) {
        x = arr.at(i);
        for (int j = i + 1; j < arr.size(); j++) {
            arr.erase(std::remove_if(std::next(arr.begin(), j), arr.end(), [x](int n) { return n == x; }), arr.end());
        }
    }
    arr_output(arr);
}

void seven()
{
    int n;
    std::cout << "input size of array: ";
    std::cin >> n; //размер вектора
    std::vector<int> arr(n);
    for (auto& arr : arr) {
        std::cin >> arr;
    }
    arr_output(arr);
    std::vector<int> to_new_arr;
    std::copy_if(arr.begin(), arr.end(),
        std::back_inserter(to_new_arr),
        [](int x) {
            return x >= 0; });
    arr_output(to_new_arr);
}

void eight()
{
    int n;
    std::cout << "input size of array: ";
    std::cin >> n; //размер вектора
    std::vector<int> arr(n);
    for (auto& arr : arr) {
        std::cin >> arr;
    }
    arr_output(arr);
    if (any_of(arr.cbegin(), arr.cend(), [](int i) { return i % 2 == 0; }))
        std::cout << "There is at least one even number\n";
    else
        std::cout << "They're all are uneven\n";
}

void nine()
{
    setlocale(LC_ALL, "Russian");
    std::vector<results> people;
    int n;
    std::cout << "input size of array: ";
    std::cin >> n; //размер вектора
    for (int i = 0; i < n; i++) {
        results temp;
        std::cin >> temp.name >> temp.score;
        people.push_back(temp);
        temp.name.clear();
    }
    std::vector<results> result;
    remove_copy_if(people.begin(), people.end(), back_inserter(result), [](results a)
        {
            return a.score >= 73;
        });
    for (auto element : result)
    {
        std::cout << element.name << " баллы : " << element.score << std::endl;
    }
}

void ten()
{
    std::vector <std::string> arr = { "abc","rat","afa" };
    std::string cont = "a";
    auto result = find_if(arr.begin(), arr.end(), [cont](std::string &s) {
        if (s.find(cont) != std::string::npos) {
            return true;
        } return false;
    });
    std::cout << *result;
}

