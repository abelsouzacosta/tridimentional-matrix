main: src/main.c
	gcc -I src/services src/main.c src/services/implementations/console.c src/services/implementations/tridimensional-matrix.c -o main
	./main

clean:
	rm -rf main