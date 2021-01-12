CC=/home/john/llvm/llvm-project/build/bin/clang

all: main.cc
	$(CC) -v -g main.cc -o main

clean:
	rm main
