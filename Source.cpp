#include<iostream>
#include<fstream>
class Road {
public:
	double length;
	int width;
};

int main() {
	using namespace std;
	Road road;
	std::ifstream fIn;
	cout << "Test v0.1:Ok.\n";
	cout << "Before access: \n";
	//cout << "Length: " << road.length << endl;
	//cout << "Width: " << road.width << endl;
	//road.length = 444.4;
	//road.width = 444.4;
	//cout << "\nAfter access: \n";
	fIn.open("C:\Sivkov David\Homework ggpi\2\2_3\practica2_3\\length.txt");
	fIn >> road.length;
	fIn.close();
	fIn.open("C:\Sivkov David\Homework ggpi\2\2_3\practica2_3\\width.txt");
	fIn >> road.width;
	fIn.close();
	std::cout << "Lenght: " << road.length << endl;
	std::cout << "Width: " << road.width << endl;
};
