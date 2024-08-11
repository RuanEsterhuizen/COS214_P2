# Object files list
ofiles = TestingMain.o Soldiers.o Infantry.o Boatman.o ShieldBearer.o SoldierFactory.o InfantryFactory.o BoatmanFactory.o ShieldBearerFactory.o Memento.o Caretaker.o

# Executable target
main: $(ofiles)
	@echo "Linking..."
	g++ -std=c++23 $(ofiles) -o main

# Individual object file compilation
TestingMain.o: TestingMain.cpp
	@echo "Compiling TestingMain.cpp..."
	g++ -std=c++23 -c TestingMain.cpp -o TestingMain.o

Soldiers.o: Soldiers.cpp Soldiers.h
	@echo "Compiling Soldiers.cpp..."
	g++ -std=c++23 -c Soldiers.cpp -o Soldiers.o

Infantry.o: Infantry.cpp Infantry.h
	@echo "Compiling Infantry.cpp..."
	g++ -std=c++23 -c Infantry.cpp -o Infantry.o

Boatman.o: Boatman.cpp Boatman.h
	@echo "Compiling Boatman.cpp..."
	g++ -std=c++23 -c Boatman.cpp -o Boatman.o

ShieldBearer.o: ShieldBearer.cpp ShieldBearer.h
	@echo "Compiling ShieldBearer.cpp..."
	g++ -std=c++23 -c ShieldBearer.cpp -o ShieldBearer.o

SoldierFactory.o: SoldierFactory.cpp SoldierFactory.h
	@echo "Compiling SoldierFactory.cpp..."
	g++ -std=c++23 -c SoldierFactory.cpp -o SoldierFactory.o

InfantryFactory.o: InfantryFactory.cpp InfantryFactory.h
	@echo "Compiling InfantryFactory.cpp..."
	g++ -std=c++23 -c InfantryFactory.cpp -o InfantryFactory.o

BoatmanFactory.o: BoatmanFactory.cpp BoatmanFactory.h
	@echo "Compiling BoatmanFactory.cpp..."
	g++ -std=c++23 -c BoatmanFactory.cpp -o BoatmanFactory.o

ShieldBearerFactory.o: ShieldBearerFactory.cpp ShieldBearerFactory.h
	@echo "Compiling ShieldBearerFactory.cpp..."
	g++ -std=c++23 -c ShieldBearerFactory.cpp -o ShieldBearerFactory.o

Memento.o: Memento.cpp Memento.h
	@echo "Compiling Memento.cpp..."
	g++ -std=c++23 -c Memento.cpp -o Memento.o

Caretaker.o: Caretaker.cpp Caretaker.h
	@echo "Compiling Caretaker.cpp..."
	g++ -std=c++23 -c Caretaker.cpp -o Caretaker.o

# Run Valgrind to check for memory leaks
valgrind: main
	@echo "Running Valgrind..."
	valgrind --tool=memcheck ./main

# Coverage testing
coverage:
	@echo "Performing coverage testing..."
	rm -f *.o *.gcov *.gcda *.gcno *.gz *.json *.txt main
	g++ -g --coverage *.cpp -o main
	./main >> output.txt
	@echo "Generating coverage report..."
	gcovr -r . --html --html-details -o coverage.html
	@echo "Coverage report generated as coverage.html"

# Run the executable
run: main
	@echo "Running executable..."
	./main

# Clean up generated files
clean:
	@echo "Cleaning up..."
	rm -f *.o *.gcov *.gcda *.gcno *.gz *.json *.txt main


