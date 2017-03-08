#include <iostream>
#include "hwutils.h"
#include "stdio.h"
#include "unistd.h"
#include "sys/stat.h"
#include "fcntl.h"



CpuInfo::LAHWInfoCollector getcpuinfo()
{
    cout << "in get cpu info" << endl;
}

MemInfo::LAHWInfoCollector  getmeminfo()
{
    cout << " in get mem info" <<endl;
}

DiskInfo::LAHWInfoCollector getdiskinfo()
{
    cout << " in get disk info" <<endl;
}

PciInfo::LAHWInfoCollector  getpciinfo()
{
    cout << " in get pci info" << endl;
}

VideoInfo::LAHWInfoCollector getvgainfo()
{
    cout << " in get vga info " << endl;
}
