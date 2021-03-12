gcc -c vector.c
gcc -c tester.c
gcc -o tester tester.o vector.o
tester