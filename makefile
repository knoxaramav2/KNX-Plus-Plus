#compiles entire KNX project

CC = g++
SUBDIRS = Src/Core
BITVRS=64
BINPATH=$(shell pwd)/bin
DEBUG=false
COMMON= -std=gnu++17 -Wall -g -m$(BITVRS) 
CLEANTEXT = o a

export CC
export BITVRS
export BINPATH
export DEBUG
export COMMON
export CLEANTEXT

subdirs:
	for dir in $(SUBDIRS); do \
	 $(MAKE) -C $$dir; \
	done

.PHONY: run
run:
	bin/KNX_PP.exe

.PHONY: dbg
dbg:
	exec gdb bin/KNX

.PHONY: clean
clean:
	for dir in $(SUBDIRS); do \
	 $(MAKE) clean -C $$dir; \
	done
	 rm -f $@ bin/KNX
	 rm -f $@ bin/*.so

build: clean subdirs run