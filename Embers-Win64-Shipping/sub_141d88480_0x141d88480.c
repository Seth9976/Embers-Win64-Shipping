// 函数: sub_141d88480
// 地址: 0x141d88480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x99) = 1
int32_t temp0 = *(arg1 + 0x90)
*(arg1 + 0x90) = 1
int64_t* rcx = *(arg1 + 0x28)

if (rcx == 0)
    return zx.q(temp0)

jump(*(*rcx + 8))
