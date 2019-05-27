CC = g++
EXECUTABLE = bin/main.exe
CFLAGS = -Wall -Werror -c -MD
SOURCES = $(wildcard $(addprefix src/,*.cpp))
OBJECTS = $(patsubst $(addprefix src/, %.cpp),$(addprefix build/src/, %.o),$(wildcard $(addprefix src/, *.cpp)))
DEPENDENCIES = $(patsubst $(addprefix build/src/, %.o), $(addprefix build/src/, %.d), $(wildcard $(addprefix build/src/, *.o)))

all : $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE) : $(OBJECTS)
	$(CC) $^ -o $@ -std=c++11

build/src/%.o : src/%.cpp
	$(CC) $(CFLAGS) $< -o $@ -std=c++11

.PHONY : clean
clean:
	rm -f $(OBJECTS) $(EXECUTABLE) $(DEPENDENCIES) 

.PHONY : test

test: bin/geometrytest

bin/geometrytest: build/test/main.o build/test/area.o build/test/dist.o build/test/perimetr.o build/test/perimetr_circ.o build/test/area_circ.o
	gcc -Wall -Werror build/test/main.o build/test/area.o build/test/dist.o build/test/perimetr.o build/test/perimetr_circ.o build/test/area_circ.o -o bin/geometrytest -lm

build/test/main.o: test/main.c
	gcc -Wall -Werror -c -I CTest -I src test/main.c -o build/test/main.o

build/test/area.o: src/area.c src/geometry.h
	gcc -Wall -Werror -c -I CTest -I src src/area.c -o build/test/area.o

build/test/dist.o: src/dist.c src/geometry.h
	gcc -Wall -Werror -c -I CTest -I src src/dist.c -o build/test/dist.o	

build/test/perimetr.o: src/perimetr.c src/geometry.h
	gcc -Wall -Werror -c -I CTest -I src src/perimetr.c -o build/test/perimetr.o	

build/test/area_circ.o: src/area_circ.c src/geometry.h
	gcc -Wall -Werror -c -I CTest -I src src/area_circ.c -o build/test/area_circ.o

build/test/perimetr_circ.o: src/perimetr_circ.c src/geometry.h
	gcc -Wall -Werror -c -I CTest -I src src/perimetr_circ.c -o build/test/perimetr_circ.o	

