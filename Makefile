BIN = umask_hook

all: umask

umask:
	gcc -shared $(BIN).c -fPIC -o $(BIN).so	

clean:
	rm -f $(BIN).so

install:
	install $(BIN).so /usr/share/hashcat/

.PHONY:
	all clean install umask
