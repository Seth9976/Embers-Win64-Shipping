// 函数: sub_142125240
// 地址: 0x142125240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x5c)

if ((rax & 2) != 0)
    return rax & 1

int64_t* rcx = *(arg1 + 0xd0)

if (rcx == 0)
    return 0

jump(*(*rcx + 0x378))
