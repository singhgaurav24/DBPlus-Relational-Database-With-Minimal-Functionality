
CFLAGS = -std=c++1z -lstdc++ -Wall -I../src/ -L../

all:
	$(CXX) $(CFLAGS) src/main.cpp src/queryProcess/create.cpp src/queryProcess/validateQuery.cpp src/include/create.hpp src/include/executeQuery.hpp src/include/validateQuery.hpp src/util/util.hpp src/util/util.cpp src/util/enums.hpp src/util/datatypes.hpp -o DBPlus -lsqlparser

