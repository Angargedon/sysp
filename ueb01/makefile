prg = ueb01
obj = ueb01.o tools.o
cc = gcc -Wall 

$(prg): $(obj)
	@$(cc) -o $@ $^

ueb01.o: ueb01.c tools.h
	@$(cc) -c $<

tools.o: tools.c
	@$(cc) -c $^

clean:
	@rm -f $(prg) $(obj)

run:
	@./$(prg)

all: clean $(prg) run
