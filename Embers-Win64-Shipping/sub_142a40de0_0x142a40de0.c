// 函数: sub_142a40de0
// 地址: 0x142a40de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t result = performanceCount ^ sub_142a40de0 ^ arg1
uint64_t r8_3 = (zx.q((result u>> 0x11).d) ^ zx.q(result.d)) & 0xf
int64_t i_1 = r8_3 + 1

if (r8_3 != -1)
    int64_t i
    
    do
        int64_t rcx_4 = (result u>> 0x1e ^ result) * -0x40a7b892e31b1a47
        int64_t rdx_4 = (rcx_4 u>> 0x1b ^ rcx_4) * -0x6b2fb644ecceee15
        result = rdx_4 u>> 0x1f ^ rdx_4
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
