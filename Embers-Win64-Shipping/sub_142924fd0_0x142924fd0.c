// 函数: sub_142924fd0
// 地址: 0x142924fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || arg3 == 0)
    return 

uint64_t i_2 = *(arg1 + 0x18)
uint64_t i_1 = i_2

if (arg3 u< i_2)
    i_1 = arg3

if (i_1 != 0)
    void* rcx = arg1 + 0x20
    uint64_t i
    
    do
        *rcx ^= *(arg2 - arg1 + rcx - 0x20)
        rcx += 1
        i = i_1
        i_1 -= 1
    while (i != 1)
    i_2 = *(arg1 + 0x18)

if (arg3 u<= i_2)
    return 

uint64_t r8 = arg3 - i_2

if (r8 u> 0x10)
    r8 = 0x10

int64_t rcx_1 = 0

if (r8 == 0)
    return 

do
    *(arg1 + rcx_1 + 0x40) ^= *(*(arg1 + 0x18) + rcx_1 + arg2)
    rcx_1 += 1
while (rcx_1 u< r8)
