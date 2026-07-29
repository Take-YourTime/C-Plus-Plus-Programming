gcc = g++
t1 = Q1
t2 = Q2
t3 = Q3
t4 = Q4
flag = -std=c++11

make:
	$(gcc) $(flag) -c $(t1).cpp $(t2).cpp $(t3).cpp $(t4).cpp
	$(gcc) $(flag) -o $(t1) $(t1).o
	$(gcc) $(flag) -o $(t2) $(t2).o
	$(gcc) $(flag) -o $(t3) $(t3).o
	$(gcc) $(flag) -o $(t4) $(t4).o

clean:
	rm -f $(t1) $(t2) $(t3) $(t4)
	rm -f $(t1).o $(t2).o $(t3).o $(t4).o
