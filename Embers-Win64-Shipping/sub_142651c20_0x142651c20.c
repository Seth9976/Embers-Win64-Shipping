// 函数: sub_142651c20
// 地址: 0x142651c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == *(arg1 + 0x48))
    return 

bool cond:0_1 = (*(arg1 + 0x4c) & 1) == 0
*(arg1 + 0x48) = arg2

if (cond:0_1 || arg2 == 0)
    return 

void* rcx = *(arg1 + 0x60)
int32_t rax = 0
*(rcx + 0x98) &= 0xffffffef

if (arg2 == 1)
    rax = 0x10

*(rcx + 0x98) |= rax
