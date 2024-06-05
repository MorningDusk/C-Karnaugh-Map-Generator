#pragma once

class KarnaughMap {
	int map[4][4], isSOP;
public:
	inline void getisSOP(int isSOP) { this->isSOP = isSOP; }
	void buildTwoKarunaughMap(int one[], int dontcare[], int size1, int size2);
	void buildThreeKarnaughMap(int one[], int dontcare[], int size1, int size2);
	void buildFourKarnaughMap(int one[], int dontcare[], int size1, int size2);
	void drawMap(int m, int n);
};