// 函数: sub_141f8bee0
// 地址: 0x141f8bee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x80) == 0)
    *arg3 = 0
    *arg2 = 0
    return 

int32_t i = 0
int32_t zmm0 = *(*(arg1 + 0x78) + 4)
*arg3 = zmm0
*arg2 = zmm0

if (*(arg1 + 0x80) s<= 0)
    return 

int64_t rdx = 0

do
    void* rax = *(arg1 + 0x78)
    rdx += 8
    i += 1
    *arg2 = __minss_xmmss_memss(*(rdx + rax - 4), *arg2)
    *arg3 = __maxss_xmmss_memss(*(rdx + rax - 4), *arg3)
while (i s< *(arg1 + 0x80))
