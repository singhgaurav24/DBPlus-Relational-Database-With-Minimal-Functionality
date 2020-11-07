
CFLAGS = -std=c++1z -lstdc++ -Wall -I../src/ -L../

all:
	$(CXX) $(CFLAGS) main.cpp queryProcess/create.cpp queryProcess/validateQuery.cpp include/create.hpp include/executeQuery.hpp include/validateQuery.hpp util/util.hpp util/util.cpp util/enums.hpp util/datatypes.hpp -o example -lsqlparser

