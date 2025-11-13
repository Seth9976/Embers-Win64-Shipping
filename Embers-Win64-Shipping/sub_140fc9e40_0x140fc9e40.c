// 函数: sub_140fc9e40
// 地址: 0x140fc9e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = send(*(arg1 + 0x28), arg2, arg3, 0)
*arg4 = rax
uint8_t rdi_1 = (rax u>> 0x1f).b ^ 1

if (rdi_1 != 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    *(arg1 + 0x30) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

return zx.q(rdi_1)
