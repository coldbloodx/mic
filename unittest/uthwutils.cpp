#include <iostream>
#include "hwutils.h"

int main()
{
    cout << "in uthwutils.cpp" << endl;

    int ret = 0;

    ret = LAHWInfoCollector::getcpuinfo(NULL);
    
    ret = LAHWInfoCollector::getmeminfo(NULL); 

    ret = LAHWInfoCollector::getdiskinfo(NULL);

    ret = LAHWInfoCollector::getvgainfo(NULL);

    ret = LAHWInfoCollector::getpciinfo(NULL); 
    
    return 0;
}
