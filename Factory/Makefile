CXX = g++

SRC := $(wildcard *.cpp)
CXXFLAGS := -std=c++11 -O3
DEPFLAGS += -MMD -MF .$@.d
INC_PATH=.
STATIC_OBJ=$(SRC:%.cpp=%.o)
deps := $(SRC:%.cpp=.%.o.d)

.PHONY:

all: exe

exe : $(STATIC_OBJ)
	$(CXX) -o $@ $< 

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $< -I$(INC_PATH) $(DEPFLAGS)

clean :
	rm exe *.o $(deps) &> /dev/null || true

-include $(deps)
