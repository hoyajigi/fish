.SUFFIXES : .c .o

CC = gcc

INC = 
LIBS = 
CFLAGS = -g $(INC) 

OBJS = main.c 
SRCS =  

TARGET = fish

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS)

dep :
	gccmakedep $(INC) $(SRCS)

clean :
	rm -rf $(OBJS) $(TARGET) core

new : 
	$(MAKE) clean 
	$(MAKE) 