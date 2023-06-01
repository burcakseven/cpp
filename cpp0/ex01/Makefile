CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

SOURCE = PhoneBook.cpp Contact.cpp main.cpp

EXECUTABLE = phonebook

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCE)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(SOURCE)

clean:
	rm -f $(EXECUTABLE)
