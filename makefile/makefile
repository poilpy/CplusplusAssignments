rect: exRext.o rect.o
	g++ -o rect exRext.o rect.o
exRext.o: exRext.cpp rectangle.h
	g++ -c exRext.cpp
rect.o: rectangle.cpp rectangle.h
	g++ -c rectangle.cpp
clean:
	rm *.o rect
