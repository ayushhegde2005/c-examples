CC = gcc
CFLAGS = -Wall -g
TARGET = insertion_sort
SCRS = insertion_sort.c
OBJS = $(SCRS:.c=.o)
	
all: $(TARGET)

$(TARGET):$(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)


%.o: %.c
	        $(CC) $(CFLAGS) -c $< -o $@
	

clean:
	rm -rf $(OBJS) $(TARGET)
