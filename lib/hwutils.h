#ifndef __HW_UTILS_HEADER__
#define __HW_TUILS_HEADER__

#include <string>
using namespace std;

struct CpuInfo 
{
    string model_name,
    string arch,
    string byteorder,
    string logic_cores,
    string logic_threads,
    string cores_per_socket,
    string socket,
    string virtualization,
    string l1data_cache,
    string l1instruction_cache,
    string flags
};

struct MemInfo 
{

};

struct DiskInfo
{
    string modelname,
    string size,
    string partitions,
};

struct VideoInfo
{

};

struct PciInfo
{
};

class LAHWInfoCollector 
{
    static CpuInfo getcpuinfo();
    static MemInfo getmeminfo();
    static DiskInfo getdiskinfo();
    static PciInfo getpciinfo();
    static VideoInfo getvgainfo();
};

#endif
