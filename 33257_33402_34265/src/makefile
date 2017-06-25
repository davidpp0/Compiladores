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
	@echo '[example6.ya]'
	@./compiler < example6.ya
	indent -br -brf -ce yac.c -o yac2.c
	gcc-6 -Wall yac2.c -o yac2.out
	./yac2.out	

clean :
	@$(RM) compiler
	@$(RM) yasin.tab.c yasin.tab.h
	@$(RM) lex.yy.c
	@$(RM) yasin.output
	@$(RM) yac.c yac2.c yac2.out
