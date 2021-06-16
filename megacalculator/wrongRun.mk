default:
	clear
	lex -l lex.l
	yacc -vd yacc.y
	gcc -g y.tab.c -ly -ll -lm
	./a.out < wrongInput.txt > wrongOutput.txt
