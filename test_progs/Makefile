CC := gcc
CFLAGS := -g -O0 --static #-fsanitize=address
BUILD := fork_exec hello multi_fork feed_me_mem comp short poll

.PHONY: clean

all: $(BUILD)

clean:
	rm -rf $(BUILD)
