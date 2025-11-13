// 函数: sub_142128220
// 地址: 0x142128220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0xd8) & 2) != 0)
    return *(arg1 + 0x38)

int64_t* rcx = *(arg1 + 0xd0)

if (rcx == 0)
    return 0

jump(*(*rcx + 0x440))
