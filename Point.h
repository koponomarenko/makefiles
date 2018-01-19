#ifndef POINT_H
#define POINT_H

class Point
{
public:
	Point();
	Point(int x, int y);
	void move(int x, int y);
	int getX() const;
	int getY() const;

private:
	int m_x, m_y;
};

#endif
