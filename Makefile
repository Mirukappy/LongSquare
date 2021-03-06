CXX?=g++ 
CXXFLAGS+= --std=c++17 -O3 -Wall -Wextra -I.
SOURCES=src/main.cpp src/LongSquare.cpp

src/%.o: src/%.cpp 
	$(CXX) $(CXXFLAGS) -c -o $@ $<

PersegiPanjang: $(SOURCES:.cpp=.o)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	del src/*.o LongSquare.exe 