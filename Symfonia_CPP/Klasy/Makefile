#Kompilacja: make
#Uruchomienie programu: make run
#Czyszczenie plików: make clean
#Wyświetlenie pomocy: make help

cxx = g++
TARGET = program
src = zad_3.cpp
obj = $(src:.cpp=.o)

all: $(TARGET)

$(TARGET): $(obj)
	$(cxx) $(cxxFLAGS) -o $@ $^

%.o %.cpp
	$(cxx) $(cxxFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(obj) $(TARGET)

help:
	@echo "Dostępne komendy:"
	@echo "  make         - kompilacja programu"
	@echo "  make run     - uruchomienie programu"
	@echo "  make clean   - usunięcie plików obiektowych i wynikowego"
	@echo "  make help    - wyświetlenie tej pomocy"



