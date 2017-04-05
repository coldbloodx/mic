.PHONY: all
.PHONY: ladaemon
.PHONY: clean

OBJS = lib/*.o
LIBS = -lpthread
CXXFLAGS = -Wno-write-strings -Wno-format-security -g

ifdef DIST
    CXXFLAGS += -D __REDHAT__
endif  

all: ladaemon
RPMNAME=ladaemon-0.1-1.x86_64

rpm:
	mkdir -p SOURCES SPECS RPMS SRPMS BUILD BUILDROOT/$(RPMNAME)/opt
	$(MAKE) DIST=RHEL
	$(MAKE) install prefix=BUILDROOT/$(RPMNAME)/opt
	cp daemon.spec SPECS -fr
	rpmbuild -bb SPECS/daemon.spec --define "_topdir `pwd`" 
	find . -name *.rpm -exec mv {} . \;

deb:
	-echo | dh_make -s -c bsd --createorig -e naughtyboywx@yeah.net
	dpkg-buildpackage -uc -us
	rm -f ../*.tar.gz ../*.dsc ../*.changes
	rm -fr debian/ladaemon/
	rm -f debian/ladaemon.debhelper.log  debian/ladaemon.substvars 
	rm -f debian/files

ladaemon: main.o
	cd lib; $(MAKE)
	g++ -o $@ $^ $(OBJS) $(LIBS) $(CXXFLAGS)

ut: 
	cd unittest; $(MAKE)

%.o: %.cpp
	g++ -o $@ -c $< $(CXXFLAGS)


prefix = /opt
DEST = $(prefix)/ladaemon

install:all
	mkdir -p $(DEST)/sbin
	mkdir -p $(DEST)/etc/init.d
	cp -r ladaemon $(DEST)/sbin
	cp -r etc log syncdir scripts $(DEST)
	cp -r svcladaemon $(DEST)/etc/init.d/

clean:
	rm -fr *.rpm
	cd unittest; $(MAKE) clean
	rm -fr SOURCES SPECS RPMS SRPMS BUILD BUILDROOT
	rm -f debian/files
	rm -f debian/ladaemon.debhelper.log  debian/ladaemon.substvars 
	rm -fr debian/ladaemon/
	rm -f ../*.tar.gz ../*.dsc ../*.deb ../*.changes
	rm -f *.o 
