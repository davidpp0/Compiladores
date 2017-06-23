CC = gcc -Wall 
YACC = bison -d -v
LEX = flex


compiler : yasin.tab.c lex.yy.c
	$(CC) $^ compiler.c tree.c -o $@ -lfl

yasin.tab.c : yasin.y
	$(YACC) $^

lex.yy.c : yalex.lex
	$(LEX) $^

run : compiler
	@echo '[example1.ya]'
	@./compiler < example1.ya
	

clean :
	@$(RM) compiler
	@$(RM) yasin.tab.c yasin.tab.h
	@$(RM) lex.yy.c
	@$(RM) yasin.output
