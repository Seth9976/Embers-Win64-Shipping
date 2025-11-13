// 函数: sub_140b0bbf0
// 地址: 0x140b0bbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1 + 0x10

if ((*(arg1 + 0xc) | *(arg1 + 8) | *(arg1 + 4) | *arg1) == 0)
    rcx = nullptr

if (rcx == 0)
    return 0

jump(**rcx)
