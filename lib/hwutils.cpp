#include <iostream>
#include "hwutils.h"
#include "stdio.h"
#include "unistd.h"
#include "sys/stat.h"
#include "fcntl.h"

int LAHWInfoCollector::getcpuinfo(CpuInfo *cpuinfo)
{
    cout << "in get cpu info" << endl;
    return 0;
}

int LAHWInfoCollector::getmeminfo(MemInfo *meminfo)
{
    cout << "in get mem info" <<endl;
    return 0;
}

int LAHWInfoCollector::getdiskinfo(DiskInfo *diskinfo)
{
    cout << "in get disk info" <<endl;
    return 0;
}

int LAHWInfoCollector::getpciinfo(PciInfo *pciinfo)
{
    cout << "in get pci info" << endl;
    return 0;
}

int LAHWInfoCollector::getvgainfo(VideoInfo *videoinfo)
{
    cout << "in get vga info " << endl;
    return 0;
}
