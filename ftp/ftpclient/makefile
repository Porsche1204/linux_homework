myftp: main.o readfile.o stringtool.o
	gcc -o $@ main.o readfile.o stringtool.o
main.o: main.c 
	gcc -c $^
readfile.o: c/readfile.c 
	gcc -c $^
stringtool.o: c/stringtool.c
	gcc -c $^
clean:
	rm *.o
