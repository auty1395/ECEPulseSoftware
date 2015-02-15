all: testclient testserver client

client:
	gcc client.c -o client
testclient:
	gcc testclient.c -o testclient

testserver:
	gcc testserver.c -o testserver

clean:
	rm -rf testclient testserver
