// 函数: sub_140b6c480
// 地址: 0x140b6c480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
sub_140a3bc10(arg1)
arg1[0xe] = 0
MEMORYSTATUSEX buffer
buffer.dwLength = 0
buffer.dwMemoryLoad = 0
buffer.dwLength = 0x40
buffer.ullTotalPhys = 0
buffer.ullAvailPhys = 0
buffer.ullTotalPageFile = 0
buffer.ullAvailPageFile = 0
buffer.ullTotalVirtual = 0
buffer.ullAvailVirtual = 0
buffer.ullAvailExtendedVirtual = 0
GlobalMemoryStatusEx(&buffer)
struct PROCESS_MEMORY_COUNTERS ppsmemCounters
__builtin_memset(&ppsmemCounters, 0, 0x48)
K32GetProcessMemoryInfo(GetCurrentProcess(), &ppsmemCounters, 0x48)
*arg1 = buffer.ullTotalPhys
arg1[8] = buffer.ullAvailPhys
arg1[9] = buffer.ullAvailVirtual
arg1[0xa] = ppsmemCounters.WorkingSetSize
arg1[0xb] = ppsmemCounters.PeakWorkingSetSize
arg1[0xc] = ppsmemCounters.PagefileUsage
arg1[0xd] = ppsmemCounters.PeakPagefileUsage
__security_check_cookie(rax_1 ^ &var_c8)
return arg1
