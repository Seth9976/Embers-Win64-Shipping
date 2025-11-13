// 函数: sub_140b2f260
// 地址: 0x140b2f260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg3
void* rax_1 = arg3[1]
arg1[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[2].d = arg3[2].d
sub_140a96170(&arg1[3])
arg1[6].d = arg2.d
*(arg1 + 0x34) = 0
*(arg1 + 0x3c) = 0
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
arg1[8] = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
*(arg1 + 0x4c) = 0
BOOL rax_3

if (arg4 != 0 && data_143de5480 != 0)
    rax_3.b = GetCurrentThreadId() == data_143de5470

if (arg4 == 0 || (data_143de5480 != 0 && rax_3.b == 0))
    rax_3.b = 0
else
    rax_3.b = 1

arg1[0xa].b = rax_3.b
bool cond:0 = 0f f!= arg1[6].d
arg1[0xb] = arg5
*(arg1 + 0x51) = 0

if (not(cond:0))
    arg1[7].d = 0x3f800000
    arg1[6].d = 0x3f800000

return arg1
