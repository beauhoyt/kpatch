SHELL = /bin/sh
CC    = gcc

INSTALL = /usr/bin/install

PREFIX    ?= /usr/local
BINDIR     = $(DESTDIR)$(PREFIX)/bin
SBINDIR    = $(DESTDIR)$(PREFIX)/sbin
MODULESDIR = $(DESTDIR)$(PREFIX)/lib/modules
LIBEXECDIR = $(DESTDIR)$(PREFIX)/libexec/kpatch
DATADIR    = $(DESTDIR)$(PREFIX)/share/kpatch
MANDIR     = $(DESTDIR)$(PREFIX)/share/man/man1

.PHONY: all install clean
.DEFAULT: all
