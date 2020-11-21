CFLAGS=-I./include
CC=clang++

%: 
	# rm *.exe
	${CC} src/$*.cpp ${CFLAGS} -o $*.exe
	./$*.exe

clean:
	rm *.exe
