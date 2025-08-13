.PHONY: all

all:
	@gcc -Wall -Wextra -Werror -std=c89 -static -o main *.c
	@./main
	@rm main