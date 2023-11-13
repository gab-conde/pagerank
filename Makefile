COMPILER=g++
# OPTIONS=-g -std=c++14 -Wall -Wuninitialized
OPTIONS=-g -std=c++14
COMPILE=$(COMPILER) $(OPTIONS)

all: build

build:
	$(COMPILE) src/main.cpp src/Graph.cpp -o build/main && ./build/main


.PHONY: all build