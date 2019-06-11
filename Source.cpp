#include <iostream>
#include "Rectangle.h"
using namespace std;
void printRectangleArray(Rectangle rectArray[], int size) {
	for (int i=0; i < size; i++) {
		cout << rectArray[i].getWidth() << " " << rectArray[i].getHeight() << " " << rectArray[i].getArea() << endl;
	}
	cout << Rectangle::getNumOfRect() << " " << "Rectangles" << endl;
}
int main() {
	const int SIZE = 3;
	Rectangle rectangleArray[SIZE];
	double inputWidth, inputHeight;
	for (int i = 0; i < SIZE; i++) {
		cin >> inputWidth >> inputHeight;
		rectangleArray[i].setWidth(inputWidth);
		rectangleArray[i].setHeight(inputHeight);
	}
	printRectangleArray(rectangleArray, SIZE);
	system("pause");
}