// 函数: sub_140418c90
// 地址: 0x140418c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
sub_140b21590(&arg_8)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t rax_1
int64_t rdx
rdx:rax_1 = sx.o(arg_8)
data_143cd7e10 = float.d(mods.dp.q(rdx:rax_1, 0xc92a69c000))
    * 9.9999999999999995e-08 f- (float.d(performanceCount) f* data_143d796f8 f+ 16777216.0)
return divs.dp.q(rdx:rax_1, 0xc92a69c000)
