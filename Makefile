CC := g++
CFLAGS := -std=c++11 -Iinclude

SRC_DIR := src
BUILD_DIR := build
BIN_DIR := bin

SRCS := $(wildcard $(SRC_DIR)/**/*.cpp $(SRC_DIR)/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))
$(shell mkdir -p $(dir $(OBJS)))
TARGET := $(BIN_DIR)/checker

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -rf $(BUILD_DIR)/* $(BIN_DIR)/*

dirs:
	mkdir -p $(BUILD_DIR) $(BIN_DIR)

all: dirs $(TARGET)
