#ifndef __HW_UTILS_HEADER__
#define __HW_TUILS_HEADER__

#include <string>
using namespace std;

struct CpuInfo 
{
    string model_name;
    string arch;
    string byteorder;
    string logic_cores;
    string logic_threads;
    string cores_per_socket;
    string socket;
    string virtualization;
    string l1data_cache;
    string l1instruction_cache;
    string flags;
};

struct MemInfo 
{
    string modelname;
};

struct DiskInfo
{
    string modelname;
    string size;
    string partitions;
};

struct VideoInfo
{
    string modelname;
};

struct PciInfo
{

    string modelname;
};

class LAHWInfoCollector 
{
public:
    static int getcpuinfo(CpuInfo *cpuinfo);
    static int getmeminfo(MemInfo *meminfo);
    static int getdiskinfo(DiskInfo *diskinfo);
    static int getpciinfo(PciInfo *pciinfo);
    static int getvgainfo(VideoInfo *videoinfo);
};

#endif
