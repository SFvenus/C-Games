#include <iostream>
using namespace std;

#include <Windows.h>

wstring tetromino[7]; // 7 shapes

int nFieldWidth = 12; //playing field width and Height
int nFieldHeight = 18;

unsigned char *pField = nullptr; // 0 empty space, 1 part of the shap, boundry walls, .. 

int nScreenWidth = 80;           //Console screen size x (columns)
int nScreenHeigth = 30;          //Console screen size y (rows)

int Rotate(int px, int py, int r) {		// r is rotation angle
	switch (r % 4) {					// in Tetris each shape is stored in a 4x4 grid 
	case 0: return py * 4 + px;         // r = 0 degrees
	case 1: return 12 + py - (px * 4);  // r = 90 degrees
	case 2: return 15 - (py * 4) - px;  // r = 180 degrees
	case 3: return 3 - py + (px * 4);   // r = 270 degrees
	}
	return 0;
}

int main() {
	// Create assetes
	tetromino[0].append(L"..X.");
	tetromino[0].append(L"..X.");
	tetromino[0].append(L"..X.");
	tetromino[0].append(L"..X.");

	tetromino[1].append(L"..X.");
	tetromino[1].append(L".XX.");
	tetromino[1].append(L".X..");
	tetromino[1].append(L"....");

	tetromino[2].append(L".X..");
	tetromino[2].append(L".XX.");
	tetromino[2].append(L"..X.");
	tetromino[2].append(L"....");

	tetromino[3].append(L"....");
	tetromino[3].append(L".XX.");
	tetromino[3].append(L".XX.");
	tetromino[3].append(L"....");

	tetromino[4].append(L"..X.");
	tetromino[4].append(L".XX.");
	tetromino[4].append(L"..X.");
	tetromino[4].append(L"....");

	tetromino[5].append(L"....");
	tetromino[5].append(L".XX.");
	tetromino[5].append(L"..X.");
	tetromino[5].append(L"..X.");

	tetromino[6].append(L"....");
	tetromino[6].append(L".XX.");
	tetromino[6].append(L".X..");
	tetromino[6].append(L".X..");

	pField = new unsigned char[nFieldWidth * nFieldHeight]; // create a play field buffer
	for (int x = 0; x < nFieldWidth; x++) // Board Boundry
		for (int y = 0; y < nFieldHeight; y++)
			pField[y * nFieldWidth + x] = (x == 0 || x == nFieldWidth - 1 || y == nFieldHeight) ? 9 : 0; // 9 is the Boarder or 0 for empty space


	wchar_t* screen = new wchar_t[nScreenWidth * nScreenHeigth];
	for (int i = 0; i < nScreenWidth * nScreenHeigth; i++) screen[i] = L' ';
	HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleMode(hConsole, ENABLE_EXTENDED_FLAGS);
	SetConsoleActiveScreenBuffer(hConsole);
	DWORD dwBytesWritten = 0;

	// Game LOOP

	bool bGameOver = false;

	while (!bGameOver) {

		// Draw Field
		for (int x = 0; x < nFieldWidth; x++)
			for (int y = 0; y < nFieldHeight; y++)
				screen[(y + 2) * nScreenWidth + (x + 2)] = L" ABCDEFG=#"[pField[y * nFieldWidth + x]];
		// 0 = ' ', 1 = A, 2 = B, ... 7 = G, '=' = will make a line, # = Border

		// Display Frame
		WriteConsoleOutputCharacter(hConsole, screen, nScreenWidth * nScreenHeigth, { 0,0 }, &dwBytesWritten);
	}




	return 0;
}