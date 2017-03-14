#include <iostream>
#include "hwutils.h"

int main()
{
    cout << "in uthwutils.cpp" << endl;


    CpuInfo cpuinfo = LAHWInfoCollector::getcpuinfo();
    cout << cpuinfo << endl;
    
    MemInfo meminfo = LAHWInfoCollector::getmeminfo();
    cout << meminfo << endl;

    int ret = 0;

    ret = LAHWInfoCollector::getdiskinfo(NULL);

    ret = LAHWInfoCollector::getvgainfo(NULL);

    ret = LAHWInfoCollector::getpciinfo(NULL); 
    
    return 0;
}
