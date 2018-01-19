CXX = g++
CXXFLAGS = -O2 -g -Wall

objects = main.o Point.o Rectangle.o

prog_name = a.out

main: $(objects)
	$(CXX) $(CXXFLAGS) -o $(prog_name) $(objects)

main.o: Point.h Rectangle.h
Point.o: Point.h
Rectangle.o: Rectangle.h Point.h

.PHONY: clean
clean:
	-rm -rf $(objects) $(prog_name)