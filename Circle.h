#pragma once
#include"Shape.h"

class Circle :public Shape {
private:
	float radious;
public:
	Circle();
	Circle(float radious);
	void display();
	float calArea();
	float circumf();
};
