EXE = game

OBJS_EXE = main.o alphabet.o gamePlay.o driver.o

CXX = clang++
CXXFLAGS = -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic 
LD = clang++
#LDFLAGS = -std=c++1y -stdlib=libc++ -lc++abi -lpthread -lm
LDFLAGS = -std=c++1y -stdlib=libc++ -lpthread -lm 

all : game

$(EXE) : $(OBJS_EXE)
	$(LD) $(OBJS_EXE) $(LDFLAGS) -o $(EXE)

#object files
driver.o : driver.cpp driver.h
	$(CXX) $(CXXFLAGS) driver.cpp -o $@

gamePlay.o : gamePlay.cpp gamePlay.h alphabet.h driver.h
	$(CXX) $(CXXFLAGS) gamePlay.cpp -o $@

alphabet.o : alphabet.cpp alphabet.h
	$(CXX) $(CXXFLAGS) alphabet.cpp -o $@

main.o : main.cpp alphabet.h gamePlay.h driver.h
	$(CXX) $(CXXFLAGS) main.cpp -o main.o

clean :
	-rm -f *.o $(EXE)