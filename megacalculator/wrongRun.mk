default: 
	clear
	lex -l lex.l 
	yacc -vd yacc.y
	gcc -g y.tab.c -ly -lfl -lm
	./a.out < wrongInput.txt > wrongOutput.txt
