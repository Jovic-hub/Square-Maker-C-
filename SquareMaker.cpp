#include <iostream>

using namespace std;
int main(void) {
	int height = 0;
	int width = 0;

	cout << "Largura: ";
	cin >> width;
	cout << "Altura: ";
	cin >> height;

	cout << "+";
	for (int i = 0; i < width; i++) {
		cout << "=";
	}
	cout << "+" << endl;
	for (int i = 0; i < height; i++) {
		cout << "|";
		for (int j = 0; j < width; j++) {
			cout << " ";
		}
		cout << "|" << endl;
	}
	cout << "+";
	for (int i = 0; i < width; i++) {
		cout << "=";
	}
	cout << "+" << endl;
	
}