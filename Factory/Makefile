CXX = g++

SRC := $(filter-out main.cpp,$(wildcard *.cpp))
STATIC_OBJ=$(SRC:%.cpp=%.o)
CXXFLAGS := -std=c++11 -O3
DEPFLAGS += -MMD -MF .$@.d
INC_PATH=.
deps := $(SRC:%.cpp=.%.o.d)

.PHONY:

all: exe

exe : main.cpp $(STATIC_OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $< $(STATIC_OBJ) -I$(INC_PATH)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $< -I$(INC_PATH) $(DEPFLAGS)

clean :
	rm exe *.o $(deps) &> /dev/null || true

-include $(deps)
