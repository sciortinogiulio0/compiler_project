default: 
	clear
	lex -l lex.l 
	yacc -vd yacc.y
	gcc -g y.tab.c -ly -lfl -lm
	./a.out < correctInput.txt > correctOutput.txt
