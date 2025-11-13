// 函数: sub_140b673e0
// 地址: 0x140b673e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8

if (data_1439a9570 == 0)
    MEMORYSTATUSEX buffer
    __builtin_memset(&buffer, 0, 0x40)
    buffer.dwLength = 0x40
    GlobalMemoryStatusEx(&buffer)
    SYSTEM_INFO systemInfo
    __builtin_memset(&systemInfo, 0, 0x30)
    GetSystemInfo(&systemInfo)
    uint64_t dwAllocationGranularity = zx.q(systemInfo.dwAllocationGranularity)
    uint64_t ullTotalPhys = buffer.ullTotalPhys
    data_1439a9578 = buffer.ullTotalVirtual
    uint64_t dwPageSize = zx.q(systemInfo.dwPageSize)
    data_1439a9590 = dwAllocationGranularity
    data_1439a9588 = dwAllocationGranularity
    uint64_t rflags_1
    int32_t rcx_3
    rcx_3, rflags_1 = _bit_scan_reverse(ullTotalPhys)
    data_1439a9598 = dwPageSize
    data_1439a9580 = dwPageSize
    data_1439a9570 = ullTotalPhys
    int64_t rcx_6 = 0x40 << 0x39 s>> 0x3f
    uint64_t rflags_2
    char r9_1
    r9_1, rflags_2 = _bit_scan_reverse(ullTotalPhys - 1)
    char rax_5
    
    if (rcx_6 == 0)
        rax_5 = 0x40
    else
        rax_5 = 0x3f - r9_1
    
    rcx_6.b = not.b(rcx_6.b)
    rcx_6.b &= 0x40 - rax_5
    data_1439a95a8 = ((ullTotalPhys + 0x3fffffff) u>> 0x1e).d
    data_1439a95a0 = 1 << rcx_6.b

__security_check_cookie(rax_1 ^ &var_a8)
return &data_1439a9570
