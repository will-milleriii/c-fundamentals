CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -O0 -std=c99 -pedantic

PROGS = ex_5_3 ex_5_4 ex_5_6 ex_5_10

all: $(PROGS)

%: %.c
        $(CC) $(CFLAGS) $< -o $@

clean:
        rm -f $(PROGS) compile_commands.json

.PHONY: all clean
