// 函数: sub_141c7e630
// 地址: 0x141c7e630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xf].b == 0)
    return 

sub_141c7d980(arg1)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t rax = arg1[6]
int64_t zmm0_1 = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
*(arg1 + 0xa0) = zmm0_1
int32_t rcx_1 = int.d((zmm0_1 f- *(arg1 + 0x98)) f* 1000.0)

if (rcx_1 s>= rax)
    rax = rcx_1

arg1[6] = rax
