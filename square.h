#pragma once
#include"Shape.h"

class Square :public Shape {
private:
	float side;
public:
	Square();
	Square(float side);
	void display();
	float calArea();
	float calPeri();
};
