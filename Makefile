SRC := $(foreach x, ./src, $(wildcard $(addprefix $(x)/*,.cpp*)))
DIRS := $(foreach x, ./src/**, $(wildcard $(addprefix $(x)/*,.cpp*)))
INCLUDES:=$(shell pkg-config --cflags libavformat libavcodec libswresample libswscale libavutil sdl)
out.o: 
	g++ ${SRC} ${DIRS} ${INCLUDES} -o build/wttp -fpermissive  && ./build/wttp audio.mp3