CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

SOURCE = main.cpp Fixed.cpp

EXECUTABLE = fixed

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCE)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(SOURCE)

clean:
	rm -f $(EXECUTABLE)

re: clean all
