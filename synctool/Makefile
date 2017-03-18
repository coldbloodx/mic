.PHONY: rpms
.PHONY: debs
.PHONY: clean

clean:
	cd lasync*; make clean
	cd ladaemon*; make clean
	rm -fr *.rpm *.deb

debs: 
	cd lasync*; make deb 
	cd ladaemon*; make deb
	
rpms: 
	cd ladaemon*; make rpm
	cd lasync*; make rpm 
	find . -name *.rpm -exec mv {} . \;
