out.o: 
	g++ src/main.cpp src/Process/ProcessManager.cpp -o main -fpermissive && ./main 