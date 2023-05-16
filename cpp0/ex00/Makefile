CC = g++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

SOURCE = megaphone.cpp

EXECUTABLE = megaphone

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCE)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(SOURCE)

clean:
	rm -f $(EXECUTABLE)
