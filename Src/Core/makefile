#compiles core component

EXPORT_PTH=../../bin/
VERSION = -DVERSION='"00.01"'
CFLAGS = -std=c++14 -Wall $(COMMON)
LFLAGS = #-lm -ldl -lpthread
OUT = KNX_PP
CLEANEXT = o a
BITVRS=64
DBGFLAG=
SRC=launcher.cpp

ifeq ($(shell uname), Linux)
	FixPath = $1
	PLATFORM = -D__LINUX
	OSMODE = -DBITMODE=$(BITVRS)
	EXT=
	RUNPATH=./$(EXPORT_PTH)$(OUT)$(EXT)
else
#Windows
	FixPath = $(subst /,\,$1)
	PLATFORM = -D__WINDOWS
	OSMODE = -DBITMODE=$(BITVRS)
	EXT=.exe
	RUNPATH=$(EXPORT_PTH)$(OUT)$(EXT)
endif

all:
	$(CC) $(SRC) $(OSMODE) $(CFLAGS) $(PLATFORM) $(VERSION) $(LFLAGS) $(KLIB) -o $(RUNPATH)

.PHONY: clean
clean:
	rm -f $@ *.o

.PHONY: dbg
dbg: $(OUT)
	$(RUNPATH) $(DBGFLAGS)
