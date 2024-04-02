CC = g++

all: hw06

alldb: debug

hw06: addbook.o delbook.o showbook.o showbooks.o poplist.o menu.o hw06.cpp hw06.h
	$(CC) hw06.cpp -o hw06 addbook.o delbook.o showbook.o showbooks.o poplist.o menu.o

debug: addbook.o delbook.o showbook.o showbooks.o poplist.o menu.o hw06.cpp hw06.h
	$(CC) -g hw06.cpp -o hw06 addbook.o delbook.o showbook.o showbooks.o poplist.o menu.o

addbook.o: addbook.cpp hw06.h
	$(CC) -c addbook.cpp -o addbook.o

delbook.o: delbook.cpp hw06.h
	$(CC) -c delbook.cpp -o delbook.o

showbook.o: showbook.cpp hw06.h
	$(CC) -c showbook.cpp -o showbook.o

showbooks.o: showbooks.cpp hw06.h
	$(CC) -c showbooks.cpp -o showbooks.o

poplist.o: poplist.cpp hw06.h
	$(CC) -c poplist.cpp -o poplist.o

menu.o: menu.cpp hw06.h
	$(CC) -c menu.cpp -o menu.o

clean:
	rm hw06 *.o

tar:
	tar cf hw06.tar *.cpp *.txt *.h *.scr makefile