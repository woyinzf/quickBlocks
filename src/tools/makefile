all:
	@cd ../libs ; make
	@cd ethname ; make app
	@cd getBalance ; make
	@cd getBlock ; make
	@cd getLogs ; make
#	@cd getReceipt ; make
	@cd getTrans ; make
	@cd isContract ; make
	@cd scripts ; make app
	@cd whenBlock ; make app

cleanall:
	@cd ../libs ; make cleanall
	@make clean

clean:
	@cd ethname ; make clean
	@cd getBalance ; make clean
	@cd getBlock ; make clean
	@cd getLogs ; make clean
#	@cd getReceipt ; make clean
	@cd getTrans ; make clean
	@cd isContract ; make clean
	@cd whenBlock ; make clean

test:
	@cd ethname; make test
	@cd getBalance ; make test
	@cd getBlock ; make test
	@cd getLogs ; make test
#	@cd getReceipt ; make test
	@cd getTrans ; make test
	@cd isContract ; make test
	@cd whenBlock ; make test

testall:
	@make test

readmes:
	@cd ethname ; ethname -th >README.md
	@cd getBalance ; getBalance -th >README.md
	@cd getBlock ; getBlock -th >README.md
	@cd getLogs ; getLogs -th >README.md
#	@cd getReceipt ; getReceipt -th >README.md
	@cd getTrans ; getTrans -th >README.md
	@cd isContract ; isContract -th >README.md
	@cd whenBlock ; whenBlock -th >README.md

lint:
	@cd ethname ; make lint
	@cd getBalance ; make lint
	@cd getBlock ; make lint
	@cd getLogs ; make lint
	@cd getReceipt ; make lint
	@cd getTrans ; make lint
	@cd isContract ; make lint
	@cd whenBlock ; make lint
