#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "rus");
	int n, m;

	//Задача1.Сортировка первывх элемнтов
	/*std::cout << "Задча1.\nИзначвальный массив\n";
	const int size1 = 10;
		int arr1[size1];
		srand(time(NULL));
		for (int i = 0; i < size1; i++)
		{
			arr1[i] = rand() % (10 + 1 - 1) + 1; // [1..10]
			// rand() % (b+1 - a) + a;
			std::cout << arr1[i] << ' ';
        }
		std::cout << std::endl;

		//Пузырьковая сортировка
		//for (int i = size1 - 1; i > 0; i++)
		//	for (int j = 0; j < i; j++)
		//		if (arr1[j] > arr1[j + 1]);
		//	std::swap(arr1[j], arr1[j + 1]);
				
			//Быстрая сортировка
		std::sort(arr1, arr1 + 5); // std::sort(arr1 + 5, arr1 + size1);

			std::cout << "Итоговый массив:\n";
			for (int i = 0; i < size1; i++)
				std::cout << arr1[i] << " ";
			//std::cout  << "\n" <<std::endl;
			std::cout << "\n\n";*/
			
	//Задача 2.Температура в январе
	/*std::cout << "Задача 2.\n Температура за все дни января \n";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++)
	{
		arr2[i] = rand() % (-1 + 1 - (- 30)) + (-30);//-30 .. -1
		// = rand() % 30 - 30;
		std::cout << arr2[i] << " ";
	}
	std::cout << "\b\b.\nВведите максимальную температуру для отображения -> ";
	std::cin >> n;
	int sum = 0;
	int counter = 0;
	for ( int i = 0; i < size2; i++)
	{
		sum += arr2[i];
		if (arr2[i] <= n);
		counter++;
	}
	std::cout << "Средняя температура за месяц: " << (double)sum / size2 << "\n";
	std::cout << "Кол- во днейб в которых температура опускалась ниже " << n << " градусов:" << counter << "\n\n";*/

	//Задача 3.
	std::cout << "Задача 3.\n Введите начала диапозона -> ";
	std::cin >> n;
	std::cout << "Задача 3.\n Введите конец диапозона -> ";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	std::cout << "Массив: \n";
	for (int i = 0; i < size3; i++)
	{
		arr3[i] = rand() % 100;
		if (arr3[i] >= n && arr3[i] <= m) //Проверка на диапозон
			std::cout << i + 1 << ". " << arr3[i] << "!\n";
		else
			std::cout << i + 1 << ". " << arr3[i] << " \n";
	}







	return 0;
}