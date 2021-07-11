all:
	mkdir simple/
	cd src/ && make
	cd src/ && make clean
clean:
	rm -r simple
run:
	cd simple && ./SIMPLE


