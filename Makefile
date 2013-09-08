.SUFFIXES : .c .o

CC = gcc

INC = 
LIBS = 
CFLAGS = -g $(INC) 

OBJS = main.c env.c map_lib.c finder.c 
SRCS =  

TARGET = fish

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) -Wall -o $@ $(OBJS) $(LIBS)

dep :
	gccmakedep $(INC) $(SRCS)

clean :
	rm -rf $(OBJS) $(TARGET) core

new : 
	$(MAKE) clean 
	$(MAKE) 
