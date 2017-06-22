CC = gcc -Wall
YACC = bison -d -v
LEX = flex


ya : yasin.tab.c lex.yy.c
	$(CC) $^ -o $@ -lfl

yasin.tab.c : yasin.y
	$(YACC) $^

lex.yy.c : yalex.lex
	$(LEX) $^

run : ya
	@echo '[example6.ya]'
	@./ya < example6.ya
	

clean :
	@$(RM) ya
	@$(RM) yasin.tab.c yasin.tab.h
	@$(RM) lex.yy.c
	@$(RM) yasin.output
