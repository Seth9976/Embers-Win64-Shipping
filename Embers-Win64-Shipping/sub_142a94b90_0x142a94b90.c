// 函数: sub_142a94b90
// 地址: 0x142a94b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0)
    return 

int32_t rcx = *(arg1 + 0x18)
uint32_t count = arg3

if (arg3 s> 0x7fffffff - rcx)
    *(arg1 + 0x18) = 0x7fffffff
    *(arg1 + 0x1c) = 1
    return 

int64_t rcx_1 = sx.q(*(arg1 + 0x14))
*(arg1 + 0x18) = rcx + arg3
uint32_t count_1 = *(arg1 + 0x10) - rcx_1.d

if (arg3 s> count_1)
    count = count_1
    *(arg1 + 0x1c) = 1

if (count s> 0)
    int64_t rcx_2 = rcx_1 + *(arg1 + 8)
    
    if (arg2 != rcx_2)
        memcpy(rcx_2, arg2, count)

*(arg1 + 0x14) += count
