CC := clang
CSTD := c99
OPT := -O3
DEBUG := -g
WARNINGS := -Wall -Wextra -Werror -Wpedantic

CFLAGS := -std=$(CSTD) $(OPT) $(DEBUG) -I./src $(WARNINGS)

default:
	$(CC) $(CFLAGS) ./src/p001.c -o ./bin/p001
	./bin/p001

.PHONY: clean
clean:
	$(RM) ./bin/*

%:
	$(CC) $(CFLAGS) ./src/$@.c -o ./bin/$@
	./bin/$@
