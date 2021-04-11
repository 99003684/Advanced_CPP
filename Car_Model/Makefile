PROJECT_NAME = main

SRC = main.cpp\
CarModel.cpp\
CarModelDB.cpp


INC = CarModel.h\
CarModelDB.h

$(PROJECT_NAME).out : $(SRC)
	g++ $^ -o $@ $(INC) 

run : $(PROJECT_NAME).out
	./$^

clean:
	rm -rf *.o *.out