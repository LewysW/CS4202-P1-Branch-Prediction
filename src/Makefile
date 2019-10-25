all: clean predictor

predictor:
	g++ main.cpp branch.cpp predictor.cpp alwaysTaken.cpp twoBit.cpp GShare.cpp profiled.cpp -o predictor -std=c++17


clean: 
	rm -rf predictor *.o
