CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -O0 -std=c99 -pedantic

PROGS = ex_1_1 ex_1_1 ex_1_3 ex_1_4 ex_1_5 ex_1_6 ex_1_7 ex_1_8 ex_1_9 ex_1_10

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(PROGS) compile_commands.json

.PHONY: all clean
