#include <iostream>

using namespace std;

int main()
{
	const int N = 15;
	int arr[N] = {0, -10, 20, 12, 13, -20, 19, 23, -11, 1, 9, 8, 2, 3, -18};
	cout << "Пункт А\nИзначальный массив:";
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
	// найти кол-во отрицательных элемента массива
	int counter = 0;
	for (int k = 0; k < N; k++)
	{
		if (arr[k] < 0)
			counter++;
	}
	cout << "Количество отрицательных элементов = " << counter << endl;
	// найти сумму модулей элементов массива, расположенных после минимального по модулю элемента:
	int minimal = abs(arr[0]);
	int indexMin = 0;
	for (int j = 0; j < N; j++)
	{
		if (abs(arr[j]) < minimal)
		{
			minimal = arr[j];
			indexMin = j;
		}
	}
	int sum = 0;
	for (int l = indexMin; l < N; l++)
	{
		sum += abs(arr[l]);
	}
	cout << "Сумма модулей элементов массива, расположенных после мин. по модулю элемента = " << sum << endl;
	// заменить все отрицательные элементы массива их квадратами и упорядочить массив по возрастанию.
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < 0)
		{
			arr[i] = arr[i] * arr[i];
		}
	}
	// сортируем массив
	for (int a = 1; a < N; a++)
	{
		for (int b = N - 1; b >= a; b--)
		{
			if (arr[b - 1] > arr[b])
			{
				int temp = arr[b - 1];
				arr[b - 1] = arr[b];
				arr[b] = temp;
			}
		}
	}
	// выводим массив
	cout << "Измененный массив:";
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
	// В) Путем перестановки элементов матрицы добиться того, чтобы ее максимальный элемент находился в
	// верхнем левом углу, следующий по величине элемент в позиции (2,2)б следующий – в позиции (3,3) и т. д., то есть заполнить главную диагональ матрицы.
	// Найти номер первой из строк, не содержащей ни одного положительного элемента.
	const int M = 4;
	int matrix[M][M] = {
		{3, -5, 12, 1},
		{-2, -8, -1, -4}, // строка, где нет ни одного положительного элемента
		{7, 0, 15, 2},
		{4, 9, -3, 6}};
	// вывод исходной матрицы
	cout << "ПунктБ\nИсхдоная матрица:\n";
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
	// поиск и перестановка максимальных элементов
	for (int i = 0; i < M; i++)
	{
		int max_row = i;
		int max_col = i;
		// ищем максимум в оставшейся части
		for (int r = i; r < M; r++)
		{
			for (int c = i; c < M; c++)
			{
				if (matrix[r][c] > matrix[max_row][max_col])
				{
					max_row = r;
					max_col = c;
				}
			}
		}
		swap(matrix[i][i], matrix[max_row][max_col]);
	}
	cout << "\nМатрица после перестановки на главную диагональ:\n";
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
	// находим первую строку не содержащей ни одного положит элемента
	int target_row = -1;
	for (int i = 0; i < M; i++)
	{
		bool only_non_positive = true;
		for (int j = 0; j < M; j++)
		{
			if (matrix[i][j] > 0)
			{
				only_non_positive = false;
				break;
			}
		}
		if (only_non_positive)
		{
			target_row = i;
			break; // останавливаемся на первой найденной строке
		}
	}
	if (target_row != -1)
	{
		cout << "\nПервая строка без положительных элементов: индекс " << target_row << endl;
	}
	else
	{
		cout << "\nНет строк без положительных элементов.\n";
	}
}