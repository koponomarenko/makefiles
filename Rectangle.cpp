#include "Rectangle.h"

Rectangle::Rectangle() {}

Rectangle::Rectangle(Point bottomLeft, Point topRight)
	: m_bottomLeft(bottomLeft), m_topRight(topRight) {}

void Rectangle::move(int x, int y)
{
	m_bottomLeft.move(x, y);
	m_topRight.move(x, y);
}

Point Rectangle::getBottomLeft() const
{
	return m_bottomLeft;
}

Point Rectangle::getTopRight() const
{
	return m_topRight;
}

int Rectangle::width() const
{
	return m_topRight.getX() - m_bottomLeft.getX();
}

int Rectangle::height() const
{
	return m_topRight.getY() - m_bottomLeft.getY();
}

int Rectangle::area() const
{
	return width() * height();
}
