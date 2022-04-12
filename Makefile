test:
	g++ math.cpp test.cpp -o test

main:
	g++ math.cpp main.cpp -o main

clean:
	rm -f ./test ./main

.PHONY: test
.PHONY: main
.PHONY: clean
