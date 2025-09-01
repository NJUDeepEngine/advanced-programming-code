CXX := g++
CXXFLAGS := -std=c++17 -O2 -Wall -Wextra -pedantic
BIN := bin

# 查找所有源文件
SRC := $(shell find src examples -name "*.cpp")
EXES := $(patsubst %.cpp,$(BIN)/%,$(SRC))

all: $(EXES)

$(BIN)/%: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -rf $(BIN)

# 按主题编译
classes: $(filter $(BIN)/src/01_classes_and_objects/%,$(EXES))
this-pointer: $(filter $(BIN)/src/02_this_pointer/%,$(EXES))
constructors: $(filter $(BIN)/src/03_constructors_destructors/%,$(EXES))
examples: $(filter $(BIN)/examples/%,$(EXES))

.PHONY: all clean classes this-pointer constructors examples