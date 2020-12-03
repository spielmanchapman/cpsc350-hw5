docker start compsci
docker attach compsci
cd /home
g++ main.cpp or *.cpp	./a.out
make all				make realclean
git add -A
git commit -m "message"
git push origin master
-----------------------------------
# A simple Makefile for CPSC 350
# Assumes the following directory hierarchy:
# Assignment X
# 	src
#       include

#this Makefile goes in the src directory

#change this to the correct assignment #
EXECUTABLE := hw5

# the source files to be built
SOURCES := *.cpp

#stuff you don't need to worry about
INCLUDES := -I ../include
EXT := exe
CC := g++

all:
	$(CC) $(INCLUDES) $(SOURCES) -o $(EXECUTABLE).$(EXT)

realclean:
	find . -type f -name "*.o" -exec rm '{}' \;
	find . -type f -name "*.exe" -exec rm '{}' \;

# this line required by make - don't delete
