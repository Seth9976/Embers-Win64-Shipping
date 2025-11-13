// 函数: sub_140a57f70
// 地址: 0x140a57f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t* rcx_1 = *(arg1 + 8)
char rax_1 = (*(*rcx_1 + 0x30))(rcx_1, zx.q(arg2))
QueryPerformanceCounter(&performanceCount)
return zx.q(rax_1)
