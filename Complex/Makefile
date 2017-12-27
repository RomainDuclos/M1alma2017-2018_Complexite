all:
	g++ -std=c++11 -c src/*.cpp && mv *.o obj/
	g++ -std=c++11 -o Complex.exe obj/*.o
	./Complex.exe

Compile:
	g++ -std=c++11 -c src/*.cpp && mv *.o obj/

Build:
	g++ -std=c++11 -o Complex obj/*.o

Complex:
	./Complex.exe

Test:
	g++ -std=c++11 -c src/test/TestAlg.cpp && mv TestAlg.o obj/test/
	g++ -std=c++11 -o Test.exe obj/test/TestAlg.o
	./Test.exe

Clean:
	rm obj/*.o
	rm *.exe