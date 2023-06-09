CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

SOURCE = Zombie.cpp zombieHorde.cpp main.cpp

EXECUTABLE = zombie

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCE)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(SOURCE)

clean:
	rm -f $(EXECUTABLE)
