// 函数: sub_142a42250
// 地址: 0x142a42250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SYSTEM_INFO systemInfo
GetSystemInfo(&systemInfo)
uint64_t dwPageSize = zx.q(systemInfo.dwPageSize)

if (dwPageSize.d != 0)
    data_143cc8280 = dwPageSize

uint64_t dwAllocationGranularity = zx.q(systemInfo.dwAllocationGranularity)

if (dwAllocationGranularity.d != 0)
    data_143cc8288 = dwAllocationGranularity

HMODULE rax = LoadLibraryA("kernelbase.dll")

if (rax != 0)
    int64_t rax_1 = GetProcAddress(rax, "VirtualAlloc2FromApp")
    data_144015390 = rax_1
    
    if (rax_1 == 0)
        data_144015390 = GetProcAddress(rax, "VirtualAlloc2")
    
    FreeLibrary(rax)

HMODULE rax_3 = LoadLibraryA("ntdll.dll")

if (rax_3 != 0)
    data_144015398 = GetProcAddress(rax_3, "NtAllocateVirtualMemoryEx")
    FreeLibrary(rax_3)

if (sub_142a43d70(5) == 0)
    char result = sub_142a43d70(6)
    
    if (result == 0)
        return result

return sub_142a42c60()
