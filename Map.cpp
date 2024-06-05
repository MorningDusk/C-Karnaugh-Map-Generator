#include<iostream>
#include<string>
#include<stdlib.h>
#include"Map.h"
using namespace std;

void KarnaughMap::buildTwoKarunaughMap(int index[], int dontcare[], int size1, int size2) {
	int i, j;

	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			map[i][j] = 0;

	for (i = 0; i < size1; i++) {
		if (index[i] == 0)
			map[0][0] = 1;
		else if (index[i] == 1)
			map[1][0] = 1;
		else if (index[i] == 2)
			map[0][1] = 1;
		else if (index[i] == 3)
			map[1][1] = 1;
	}
	for (i = 0; i < size2; i++) {
		if (dontcare[i] == 0)
			map[0][0] = 2;
		else if (dontcare[i] == 1)
			map[1][0] = 2;
		else if (dontcare[i] == 2)
			map[0][1] = 2;
		else if (dontcare[i] == 3)
			map[1][1] = 2;
	}
}

void KarnaughMap::buildThreeKarnaughMap(int index[], int dontcare[], int size1, int size2) {
	int i, j;

	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			map[i][j] = 0;

	for (i = 0; i < size1; i++) {
		if (index[i] == 0)
			map[0][0] = 1;
		else if (index[i] == 1)
			map[0][1] = 1;
		else if (index[i] == 2)
			map[0][3] = 1;
		else if (index[i] == 3)
			map[0][2] = 1;
		else if (index[i] == 4)
			map[1][0] = 1;
		else if (index[i] == 5)
			map[1][1] = 1;
		else if (index[i] == 6)
			map[1][3] = 1;
		else if (index[i] == 7)
			map[1][2] = 1;
	}
	for (i = 0; i < size2; i++) {
		if (dontcare[i] == 0)
			map[0][0] = 2;
		else if (dontcare[i] == 1)
			map[0][1] = 2;
		else if (dontcare[i] == 2)
			map[0][3] = 2;
		else if (dontcare[i] == 3)
			map[0][2] = 2;
		else if (dontcare[i] == 4)
			map[1][0] = 2;
		else if (dontcare[i] == 5)
			map[1][1] = 2;
		else if (dontcare[i] == 6)
			map[1][3] = 2;
		else if (dontcare[i] == 7)
			map[1][2] = 2;
	}
}

void KarnaughMap::buildFourKarnaughMap(int index[], int dontcare[], int size1, int size2) {
	int i, j;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			map[i][j] = 0;

	for (i = 0; i < size1; i++) {
		if (index[i] == 0)
			map[0][0] = 1;
		else if (index[i] == 1)
			map[1][0] = 1;
		else if (index[i] == 2)
			map[3][0] = 1;
		else if (index[i] == 3)
			map[2][0] = 1;
		else if (index[i] == 4)
			map[0][1] = 1;
		else if (index[i] == 5)
			map[1][1] = 1;
		else if (index[i] == 6)
			map[3][1] = 1;
		else if (index[i] == 7)
			map[2][1] = 1;
		else if (index[i] == 8)
			map[0][3] = 1;
		else if (index[i] == 9)
			map[1][3] = 1;
		else if (index[i] == 10)
			map[3][3] = 1;
		else if (index[i] == 11)
			map[2][3] = 1;
		else if (index[i] == 12)
			map[0][2] = 1;
		else if (index[i] == 13)
			map[1][2] = 1;
		else if (index[i] == 14)
			map[3][2] = 1;
		else if (index[i] == 15)
			map[2][2] = 1;
	}
	for (i = 0; i < size2; i++) {
		if (dontcare[i] == 0)
			map[0][0] = 2;
		else if (dontcare[i] == 1)
			map[1][0] = 2;
		else if (dontcare[i] == 2)
			map[3][0] = 2;
		else if (dontcare[i] == 3)
			map[2][0] = 2;
		else if (dontcare[i] == 4)
			map[0][1] = 2;
		else if (dontcare[i] == 5)
			map[1][1] = 2;
		else if (dontcare[i] == 6)
			map[3][1] = 2;
		else if (dontcare[i] == 7)
			map[2][1] = 2;
		else if (dontcare[i] == 8)
			map[0][3] = 2;
		else if (dontcare[i] == 9)
			map[1][3] = 2;
		else if (dontcare[i] == 10)
			map[3][3] = 2;
		else if (dontcare[i] == 11)
			map[2][3] = 2;
		else if (dontcare[i] == 12)
			map[0][2] = 2;
		else if (dontcare[i] == 13)
			map[1][2] = 2;
		else if (dontcare[i] == 14)
			map[3][2] = 2;
		else if (dontcare[i] == 15)
			map[2][2] = 2;
	}
}

void KarnaughMap::drawMap(int m, int n) {
	int i, j, one = isSOP == 1 ? 1 : 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (one == 1) {
				if (map[i][j] == 1 || map[i][j] == 0)
					cout << map[i][j];
				else
					cout << 'X';
			}
			else {
				if (map[i][j] == 1)
					map[i][j] = 0;
				else if (map[i][j] == 0)
					map[i][j] = 1;
				if (map[i][j] == 1 || map[i][j] == 0)
					cout << map[i][j];
				else
					cout << 'X';
			}
			cout << "	";
		}
		cout << endl;
	}
}

int main() {

	char f[16];
	int *one, *dontcare;
	int i, cnt = 0, size1 = 0, size2 = 0, variable, command, n, m;
	KarnaughMap map;

	cout << "Karnaugh Map Generator" << endl;
	cout << "*minimum of 2 variables, maximum of 4 variables*" << endl;
	cout << "Number of Variables: ";
	cin >> variable;

	if (variable == 2) {
		for (i = 0; i < 4; i++) {
			cout << "Set " << i << " to: ";
			cin >> f[i];
			if (f[i] == '1')
				size1++;
			if (f[i] == 'X' || f[i] == 'x')
				size2++;
		}
	}
	else if (variable == 3) {
		for (i = 0; i < 8; i++) {
			cout << "Set " << i << " to: ";
			cin >> f[i];
			if (f[i] == '1')
				size1++;
			if (f[i] == 'X' || f[i] == 'x')
				size2++;
		}
	}
	else if (variable == 4) {
		for (i = 0; i < 16; i++) {
			cout << "Set " << i << " to: ";
			cin >> f[i];
			if (f[i] == '1')
				size1++;
			if (f[i] == 'X' || f[i] == 'x')
				size2++;
		}
	}
	one = new int[size1];
	dontcare = new int[size2];

	for (i = 0; i < 16; i++) {
		if (f[i] == '1') {
			one[cnt] = i;
			cnt++;
		}
	}
	cnt = 0;

	for (i = 0; i < 16; i++) {
		if (f[i] == 'X' || f[i] == 'x') {
			dontcare[cnt] = i;
			cnt++;
		}
	}

	cout << "Sum of Product or Product of Sum?" << endl;
	cin >> command;
		
	map.getisSOP(command);
	if (variable == 2) {
		map.buildTwoKarunaughMap(one, dontcare, size1, size2);
		n = 2;
		m = 2;
	}
	else if (variable == 3) {
		map.buildThreeKarnaughMap(one, dontcare, size1, size2);
		n = 4;
		m = 2;
	}
	else if (variable == 4) {
		map.buildFourKarnaughMap(one, dontcare, size1, size2);
		n = 4;
		m = 4;
	}

	cout << "Karnaugh Map Generated" << endl;
	map.drawMap(m, n);
	

	delete[]one;
	delete[]dontcare;

	return 0;
}

/*
1
0
1
0
0
0
0
1
1
1
0
0
0
0
1
1
*/

