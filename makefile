student: main.c add.c delete.c list.c sort.c save.c read.c header.h
	gcc *.c -o student

clean:
	rm -f student
