all:
	gcc main.c diff_functions.c recursive_descent.c -o diff.exe
	
clean:
	rm -rf *.png
