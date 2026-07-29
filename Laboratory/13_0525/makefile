CC = g++
TARGET1 = Q1
TARGET2 = Q2
TARGET3 = Q3
f = Fire
g = Grass
wa = Water
p = pokemon
FLAG = -std=c++11

all: $(TARGET1).cpp $(TARGET2).cpp $(TARGET3).cpp $(f).cpp $(g).cpp $(wa).cpp $(p).cpp
	$(CC) $(FLAG) -c $(TARGET1).cpp $(TARGET2).cpp $(TARGET3).cpp $(f).cpp $(g).cpp $(wa).cpp $(p).cpp
	$(CC) $(FLAG) -o $(TARGET1) $(TARGET1).o $(f).o $(g).o $(wa).o $(p).o
	$(CC) $(FLAG) -o $(TARGET2) $(TARGET2).o $(f).o $(g).o $(wa).o $(p).o
	$(CC) $(FLAG) -o $(TARGET3) $(TARGET3).o

clean:
	rm -f $(TARGET1) $(TARGET2) $(TARGET3)
	rm -f $(TARGET1).o $(TARGET2).o $(TARGET3).o $(f).o $(g).o $(wa).o $(p).o
	
