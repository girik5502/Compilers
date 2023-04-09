APPl = lexer
APPp = parser

all: build

build: clean
	clear
	flex $(APPl).l
	bison -d -t $(APPp).y
	g++ -o app $(APPp).tab.c lexer.yy.c  

clean: 
	rm -rf app $(APPp).tab.c lexer.yy.c $(APPp).tab.h lex.yy.c lex.yy.h y.tab.c y.tab.h ast*

clean_build:
	make clean
	make build