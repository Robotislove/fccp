
all:
	# g++ -o hello_cpp main.cpp /home/ttc/Desktop/controlcan/libcontrolcan.so  -lpthread 
	g++ -std=c++14 -o main main.cpp canhelper.cpp ./libcontrolcan.so  -pthread 

clean:
	rm -f *.o main
	rm -f main
