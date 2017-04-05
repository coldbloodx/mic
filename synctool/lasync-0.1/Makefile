.PHONY: all
.PHONY: lasync
.PHONY: clean
.PHONY: install

all: lasync


OBJS = lib/*.o
CXXFLAGS = -Wno-write-strings -Wno-format-security

ifdef DIST
    CXXFLAGS += -D __REDHAT__ -g
endif  

RPMNAME=lasync-0.1-1.x86_64

rpm:
	mkdir -p SOURCES SPECS RPMS SRPMS BUILD BUILDROOT/$(RPMNAME)/
	$(MAKE) DIST=RHEL
	$(MAKE) install prefix=BUILDROOT/$(RPMNAME)/
	cp sync.spec SPECS -fr
	rpmbuild -bb SPECS/sync.spec --define "_topdir `pwd`" 
	find . -name *.rpm -exec mv {} . \;

deb:
	-echo | dh_make -s -c bsd --createorig -e naughtyboywx@yeah.net
	dpkg-buildpackage -uc -us
	rm -fr debian/lasync/
	rm -f debian/lasync.debhelper.log  debian/lasync.substvars 
	rm -f debian/files
	rm -f ../*.tar.gz ../*.dsc ../*.changes

lasync: main.o 
	cd lib; $(MAKE)
	g++ $(OBJS) $(CXXFLAGS)  -o $@ $^ 

%.o: %.cpp
	g++ -c $(CXXFLAGS) -o $@ $< 

prefix = /
DEST = $(prefix)/opt/lasync
install: all
	mkdir -p $(DEST)/sbin; 
	mkdir -p $(prefix)/usr/sbin;
	cp -r lasync $(DEST)/sbin; 
	cp -r lasync.wrapper $(prefix)/usr/sbin/lasync;
	cp -r etc syncdir $(DEST)

uninstall: clean
	rm -fr /opt/laworks;

clean:
	rm -fr lasync
	rm -f *.o lib/*.o 
	#rm -f ../*.tar.gz ../*.dsc ../*.deb ../*.changes
	#rm -fr debian/lasync/
	#rm -f debian/lasync.debhelper.log  debian/lasync.substvars 
	#rm -f debian/files
	#rm -fr SOURCES SPECS RPMS SRPMS BUILD BUILDROOT
	#rm -fr *.rpm
