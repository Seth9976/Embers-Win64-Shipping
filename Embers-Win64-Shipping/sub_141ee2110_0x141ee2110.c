// 函数: sub_141ee2110
// 地址: 0x141ee2110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x210) & 0x10) != 0)
    return arg1 + 0x268

int64_t rax_1 = *(arg1 + 0x260)

if (rax_1 != 0)
    return rax_1 + 0x28

int64_t* rcx = *(arg1 + 0x1f0)

if (rcx == 0)
    return 0

jump(*(*rcx + 0x278))
