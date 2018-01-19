#include "Point.h"

Point::Point(): m_x(0), m_y(0) {}

Point::Point(int x, int y): m_x(x), m_y(y) {}

void Point::move(int x, int y)
{
	m_x += x;
	m_y += y;
}

int Point::getX() const
{
	return m_x;
}

int Point::getY() const
{
	return m_y;
}
