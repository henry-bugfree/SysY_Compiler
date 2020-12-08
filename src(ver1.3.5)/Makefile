all: SysY

SysY.tab.c SysY.tab.h:	SysY.y
	bison -t -v -d SysY.y

lex.yy.c: SysY.l SysY.tab.h
	flex SysY.l

SysY: lex.yy.c SysY.tab.c SysY.tab.h
	gcc -o SysY SysY.tab.c lex.yy.c ast.c main.c genllvm.c -lm

clean:
	rm SysY SysY.tab.c lex.yy.c SysY.tab.h
