CC := g++
JOB = job
PREFIX := obj/
SRC := main.cpp Man.cpp  Man.h
OBJ := $(patsubst %.cpp, $(PREFIX)%.o, $(SRC))

$(JOB): $(OBJ)
	$(CC) -o $@ $^

$(PREFIX)%.o: %.cpp
	$(CC) -c -o $@ $^

debug: $(JOB)
	gdb -x gdb.config $(JOB)

cod:  $(SRC)
	mintty emacs $(SRC)

clean:
	rm -rf *.exe $(PREFIX)*.o
