// 函数: sub_142125200
// 地址: 0x142125200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x30)

if (rcx == 0)
    rcx = *(arg1 + 0x28)

jump(*(*rcx + 0x3f0))
