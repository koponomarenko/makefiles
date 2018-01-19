#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"

class Rectangle
{
public:
	Rectangle();
	Rectangle(Point bottomLeft, Point topRight);
	void move(int dx, int dy);
	Point getBottomLeft() const;
	Point getTopRight() const;
	int width() const;
	int height() const;
	int area() const;

private:
	Point m_bottomLeft, m_topRight;
};

#endif
