// 函数: sub_1419d7290
// 地址: 0x1419d7290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x110)
char rax = sub_141986ba0(arg1 + 0xb0, arg2)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
*(arg1 + 0x180) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

if (arg1 != -0x110)
    LeaveCriticalSection(arg1 + 0x110)

return zx.q(rax)
