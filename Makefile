# CPP=g++
# CPPFLAG=-Wall -I$(INCLUDE)

# SRC=src 
# INCLUDE=include  

# main : main.o $(SRC)/my_alloc.o
# 	$(CPP) $(CPPFLAG) main.o $(SRC)/my_alloc.o -o main

# main.o : main.cpp $(INCLUDE)/my_alloc.h
# 	$(CPP) $(INCLUDE) -c main.cpp -o main.o

# $(SRC)/my_alloc.o :  $(SRC)/my_alloc.cpp $(INCLUDE)/my_alloc.h
# 	$(CPP) $(INCLUDE) -c $(SRC)/my_alloc.cpp -o $(SRC)/my_alloc.o

# clean:
# 	rm -r $(SRC)/*.o main


CPP=g++
CPPFLAGS=-Wall -I$(INCLUDE)

SRC=src
INCLUDE=include

main: main.o $(SRC)/my_alloc.o
	$(CPP) $(CPPFLAGS) main.o $(SRC)/my_alloc.o -o main

main.o: main.cpp $(INCLUDE)/my_alloc.h
	$(CPP) $(CPPFLAGS) -c main.cpp -o main.o

$(SRC)/my_alloc.o: $(SRC)/my_alloc.cpp $(INCLUDE)/my_alloc.h
	$(CPP) $(CPPFLAGS) -c $(SRC)/my_alloc.cpp -o $(SRC)/my_alloc.o

clean:
	rm -r $(SRC)/*.o main
