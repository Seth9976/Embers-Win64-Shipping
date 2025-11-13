// 函数: sub_140a5a080
// 地址: 0x140a5a080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t* rcx_1 = *(arg1 + 8)
char rax_1 = (*(*rcx_1 + 0x20))(rcx_1, arg2, arg3)
QueryPerformanceCounter(&performanceCount)
return zx.q(rax_1)
