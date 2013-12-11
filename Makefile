all: buddy_test

buddy_test: buddy.o buddy_test.o
	gcc -o $@ $^

%.o: %.c
	gcc -c $^

clean:
	rm -rf *.o buddy_test
