﻿#include <iostream>
#include <time.h>
using namespace std;
const int n = 400;
char win(0);
char a[3] = { 0,1,2 };

void computer(char A[]) {
	win = 3;
	//1-4
	//4-1
	//3-1-1
	//1-1-3
	//2-1-2
	for (int i = 0; i < n && (win == 0 || win == 3); i++) {
		if ((A[i] == 0) && (win == 3)) win = 0;
		int a(i / 20), b(i - a * 20);
		//5 для компа
		if (b + 4 < 20) {
			//1-4
			if ((A[i] == 0) && (A[i + 1] == 2) && (A[i + 2] == 2) && (A[i + 3] == 2) && (A[i + 4] == 2)) {
				A[i] = 2;
				win = 2;
			}
			if ((A[i] == 0) && (A[i + 21] == 2) && (A[i + 42] == 2) && (A[i + 63] == 2) && (A[i + 84] == 2)) {
				A[i] = 2;
				win = 2;
			}
			if ((A[i] == 0) && (A[i + 19] == 2) && (A[i + 38] == 2) && (A[i + 57] == 2) && (A[i + 76] == 2)) {
				A[i] = 2;
				win = 2;
			}
			//4-1
			if ((A[i] == 2) && (A[i + 1] == 2) && (A[i + 2] == 2) && (A[i + 3] == 2) && (A[i + 4] == 0)) {
				A[i + 4] = 2;
				win = 2;
			}
			if ((A[i] == 2) && (A[i + 21] == 2) && (A[i + 42] == 2) && (A[i + 63] == 2) && (A[i + 84] == 0)) {
				A[i + 84] = 2;
				win = 2;
			}
			if ((A[i] == 2) && (A[i + 19] == 2) && (A[i + 38] == 2) && (A[i + 57] == 2) && (A[i + 76] == 0)) {
				A[i + 76] = 2;
				win = 2;
			}
			//1-1-3
			if ((A[i] == 2) && (A[i + 2] == 2) && (A[i + 3] == 2) && (A[i + 4] == 2) && (A[i + 1] == 0)) {
				A[i + 1] = 2;
				win = 2;
			}
			if ((A[i] == 2) && (A[i + 42] == 2) && (A[i + 63] == 2) && (A[i + 84] == 2) && (A[i + 21] == 0)) {
				A[i + 21] = 2;
				win = 2;
			}
			if ((A[i] == 2) && (A[i + 38] == 2) && (A[i + 57] == 2) && (A[i + 76] == 2) && (A[i + 19] == 0)) {
				A[i + 19] = 2;
				win = 2;
			}
			//3-1-1
			if ((A[i] == 2) && (A[i + 1] == 2) && (A[i + 2] == 2) && (A[i + 4] == 2) && (A[i + 3] == 0)) {
				A[i + 3] = 2;
				win = 2;
			}
			if ((A[i] == 2) && (A[i + 21] == 2) && (A[i + 42] == 2) && (A[i + 84] == 2) && (A[i + 63] == 0)) {
				A[i + 63] = 2;
				win = 2;
			}
			if ((A[i] == 2) && (A[i + 19] == 2) && (A[i + 38] == 2) && (A[i + 76] == 2) && (A[i + 57] == 0)) {
				A[i + 57] = 2;
				win = 2;
			}
			//2-1-2
			if ((A[i] == 2) && (A[i + 1] == 2) && (A[i + 3] == 2) && (A[i + 4] == 2) && (A[i + 2] == 0)) {
				A[i + 2] = 2;
				win = 2;
			}
			if ((A[i] == 2) && (A[i + 21] == 2) && (A[i + 63] == 2) && (A[i + 84] == 2) && (A[i + 42] == 0)) {
				A[i + 42] = 2;
				win = 2;
			}
			if ((A[i] == 2) && (A[i + 19] == 2) && (A[i + 57] == 2) && (A[i + 76] == 2) && (A[i + 38] == 0)) {
				A[i + 38] = 2;
				win = 2;
			}
		}
		if (a + 4 < 20) {
			//1-4
			if ((A[i] == 0) && (A[i + 20] == 2) && (A[i + 40] == 2) && (A[i + 60] == 2) && (A[i + 80] == 2)) {
				A[i] = 2;
				win = 2;
			}
			//4-1
			if ((A[i] == 2) && (A[i + 20] == 2) && (A[i + 40] == 2) && (A[i + 60] == 2) && (A[i + 80] == 0)) {
				A[i + 80] = 2;
				win = 2;
			}
			//1-1-3
			if ((A[i] == 2) && (A[i + 40] == 2) && (A[i + 60] == 2) && (A[i + 80] == 2) && (A[i + 20] == 0)) {
				A[i + 20] = 2;
				win = 2;
			}
			//3-1-1
			if ((A[i] == 2) && (A[i + 20] == 2) && (A[i + 40] == 2) && (A[i + 80] == 2) && (A[i + 60] == 0)) {
				A[i + 60] = 2;
				win = 2;
			}
			//2-1-2
			if ((A[i] == 2) && (A[i + 20] == 2) && (A[i + 60] == 2) && (A[i + 80] == 2) && (A[i + 40] == 0)) {
				A[i + 40] = 2;
				win = 2;
			}
		}
		//5 у игрока (следующим ходом)
		if (b + 4 < 20) {
			//1-4
			if ((A[i] == 0) && (A[i + 1] == 1) && (A[i + 2] == 1) && (A[i + 3] == 1) && (A[i + 4] == 1)) {
				A[i] = 2;
			}
			if ((A[i] == 0) && (A[i + 21] == 1) && (A[i + 42] == 1) && (A[i + 63] == 1) && (A[i + 84] == 1)) {
				A[i] = 2;
			}
			if ((A[i] == 0) && (A[i + 19] == 1) && (A[i + 38] == 1) && (A[i + 57] == 1) && (A[i + 76] == 1)) {
				A[i] = 2;
			}
			//4-1
			if ((A[i] == 1) && (A[i + 1] == 1) && (A[i + 2] == 1) && (A[i + 3] == 1) && (A[i + 4] == 0)) {
				A[i + 4] = 2;
			}
			if ((A[i] == 1) && (A[i + 21] == 1) && (A[i + 42] == 1) && (A[i + 63] == 1) && (A[i + 84] == 0)) {
				A[i + 84] = 2;
			}
			if ((A[i] == 1) && (A[i + 19] == 1) && (A[i + 38] == 1) && (A[i + 57] == 1) && (A[i + 76] == 0)) {
				A[i + 76] = 2;
			}
			//1-1-3
			if ((A[i] == 1) && (A[i + 2] == 1) && (A[i + 3] == 1) && (A[i + 4] == 1) && (A[i + 1] == 0)) {
				A[i + 1] = 2;
			}
			if ((A[i] == 1) && (A[i + 42] == 1) && (A[i + 63] == 1) && (A[i + 84] == 1) && (A[i + 21] == 0)) {
				A[i + 21] = 2;
			}
			if ((A[i] == 1) && (A[i + 38] == 1) && (A[i + 57] == 1) && (A[i + 76] == 1) && (A[i + 19] == 0)) {
				A[i + 19] = 2;
			}
			//3-1-1
			if ((A[i] == 1) && (A[i + 1] == 1) && (A[i + 2] == 1) && (A[i + 4] == 1) && (A[i + 3] == 0)) {
				A[i + 3] = 2;
			}
			if ((A[i] == 1) && (A[i + 21] == 1) && (A[i + 42] == 1) && (A[i + 84] == 1) && (A[i + 63] == 0)) {
				A[i + 63] = 2;
			}
			if ((A[i] == 1) && (A[i + 19] == 1) && (A[i + 38] == 1) && (A[i + 76] == 1) && (A[i + 57] == 0)) {
				A[i + 57] = 2;
			}
			//2-1-2
			if ((A[i] == 1) && (A[i + 1] == 1) && (A[i + 3] == 1) && (A[i + 4] == 1) && (A[i + 2] == 0)) {
				A[i + 2] = 2;
			}
			if ((A[i] == 1) && (A[i + 21] == 1) && (A[i + 63] == 1) && (A[i + 84] == 1) && (A[i + 42] == 0)) {
				A[i + 42] = 2;
			}
			if ((A[i] == 1) && (A[i + 19] == 1) && (A[i + 57] == 1) && (A[i + 76] == 1) && (A[i + 38] == 0)) {
				A[i + 38] = 2;
			}
		}
		if (a + 4 < 20) {
			//1-4
			if ((A[i] == 0) && (A[i + 20] == 1) && (A[i + 40] == 1) && (A[i + 60] == 1) && (A[i + 80] == 1)) {
				A[i] = 2;
			}
			//4-1
			if ((A[i] == 1) && (A[i + 20] == 1) && (A[i + 40] == 1) && (A[i + 60] == 1) && (A[i + 80] == 0)) {
				A[i + 80] = 2;
			}
			//3-1-1
			if ((A[i] == 1) && (A[i + 20] == 1) && (A[i + 40] == 1) && (A[i + 80] == 1) && (A[i + 60] == 0)) {
				A[i + 60] = 2;
			}
			//1-1-3
			if ((A[i] == 1) && (A[i + 40] == 1) && (A[i + 60] == 1) && (A[i + 80] == 1) && (A[i + 20] == 0)) {
				A[i + 20] = 2;
			}
			//2-1-2
			if ((A[i] == 1) && (A[i + 20] == 1) && (A[i + 60] == 1) && (A[i + 80] == 1) && (A[i + 40] == 0)) {
				A[i + 40] = 2;
			}
		}
		//4 для компа
		if (b + 3 < 20) {
			//1-4
			//4-1
			//3-1-1
			//1-1-3
			//2-1-2
		}
		if (a + 3 < 20) {
			//1-4
			//4-1
			//3-1-1
			//1-1-3
			//2-1-2
		}
		//4 для игрока
		if (b + 3 < 20) {
			//1-4
			//4-1
			//3-1-1
			//1-1-3
			//2-1-2
		}
		if (a + 3 < 20) {
			//1-4
			//4-1
			//3-1-1
			//1-1-3
			//2-1-2
		}
		//3 для компа
		if (b + 2 < 20) {
			//1-4
			//4-1
			//3-1-1
			//1-1-3
			//2-1-2
		}
		if (a + 2 < 20) {
			//1-4
			//4-1
			//3-1-1
			//1-1-3
			//2-1-2
		}
		//3 для игрока
		if (b + 2 < 20) {
			//1-4
			//4-1
			//3-1-1
			//1-1-3
			//2-1-2
		}
		if (a + 2 < 20) {
			//1-4
			//4-1
			//3-1-1
			//1-1-3
			//2-1-2
		}
		//2 для компа
		if (b + 1 < 20) {
			//1-4
			//4-1
			//3-1-1
			//1-1-3
			//2-1-2
		}
		if (a + 1 < 20) {
			//1-4
			//4-1
			//3-1-1
			//1-1-3
			//2-1-2
		}
		//2 для игрока
		if (b + 1 < 20) {
			//1-4
			//4-1
			//3-1-1
			//1-1-3
			//2-1-2
		}
		if (a + 1 < 20) {
			//1-4
			//4-1
			//3-1-1
			//1-1-3
			//2-1-2
		}
		//1 для компа
		if (b < 20) {
			//1-4
			//4-1
			//3-1-1
			//1-1-3
			//2-1-2
		}
		if (a < 20) {
			//1-4
			//4-1
			//3-1-1
			//1-1-3
			//2-1-2
		}
		//1 для игрока
		if (b < 20) {
			//1-4
			//4-1
			//3-1-1
			//1-1-3
			//2-1-2
		}
		if (a < 20) {
			//1-4
			//4-1
			//3-1-1
			//1-1-3
			//2-1-2
		}
	}
}

void field(char A[]) {
	system("cls");
	std::cout << "   ";
	for (int i = 1; i <= 20; i++) {
		std::cout << i / 10 << "|";
	}
	std::cout << endl << "   ";
	for (int i = 1; i <= 20; i++) {
		std::cout << i % 10 << "|";
	}
	for (int i = 0; i < n; i++) {
		if (i % 20 == 0) {
			std::cout << endl;
			if ((i / 20 + 1) / 10 == 0) {
				std::cout << ' ';
			}
			std::cout << i / 20 + 1 << "|";
		}
		if (A[i] == a[1]) {
			std::cout << "X" << "|";
		}
		else {
			if (A[i] == a[2]) {
				std::cout << "0" << "|";
			}
			else {
				std::cout << "_" << "|";
			}
		}
	}
}

void player(char A[]) {
	string x; char a, b; bool l(0);
	do {
		if (l) {
			std::cout << "Клетка занята";
			l = 0;
		}
		a = b = 0;
		setlocale(LC_ALL, "Rus");
		std::cout << endl << endl;
		do {
			if (l) {
				l = 0;
				std::cout << "Повторите ввод" << endl;
			}
			int k(0);
			std::cout << "Введите в солбец" << endl;
			cin >> x;
			for (int i = 0; i < x.length(); i++) {
				if ((x[i] >= '0') && (x[i] <= '9')) {
					k++;
				}
			}
			if (k <= 2) {
				a = char(atoi(x.c_str()));
			}
			if (a > 20) {
				x = "";
			}
			if (k < x.length()) {
				x = "";
			}
			l = 1;
		} while (x == "");
		std::cout << endl;
		l = 0;
		do {
			if (l) {
				l = 0;
				std::cout << "Повторите ввод" << endl;
			}
			int k(0);
			std::cout << "Введите в строку" << endl;
			cin >> x;
			for (int i = 0; i < x.length(); i++) {
				if ((x[i] >= '0') && (x[i] <= '9')) {
					k++;
				}
			}
			if (k <= 2) {
				b = char(atoi(x.c_str()));
			}
			if (b > 20) {
				x = "";
			}
			if (k < x.length()) {
				x = "";
			}
			l = 1;
		} while (x == "");
		a--;
		b--;
		l = 1;
	} while (A[b * 20 + a] != 0);
	A[b * 20 + a] = 1;
}

int main() {
	int i, j;
	char A[n];
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	j = rand();
	j %= 2;
	/*
	0 - пустой символ
	1 - игрок
	2 - компьютер
	*/
	for (i = 0; i < n; i++) {
		A[i] = 0;
	}
	A[0] = 0;
	A[20] = 1;
	A[40] = 1;
	A[60] = 1;
	A[80] = 1;
	j = 1;
	if (j > 0) {
		swap(a[1], a[2]);
	}
	if (a[1] == 1) {
		field(A);
		while (win == 0) {
			player(A);
			computer(A);
			field(A);
		}
	}
	else {
		while (win == 0) {
			computer(A);
			field(A);
			if (win > 0) {
				break;
			}
			player(A);
		}
	}
	std::cout << endl << endl;
	if (win == 1) {
		std::cout << "Вы победили";
	}
	if (win == 2) {
		std::cout << "Вы проиграли";
	}
	else {
		std::cout << "Ничья";
	}
	std::cout << endl;
}