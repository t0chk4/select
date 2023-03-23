CXX = g++
OUTPUT = select

SRC_DIR = src
CPP_FILES = $(addsuffix /*.cpp, $(SRC_DIR))
TARGETS = $(wildcard $(CPP_FILES))

all: $(TARGETS)
	$(CXX) -o $(OUTPUT) $(TARGETS)

clear:
	rm -f $(OUTPUT)