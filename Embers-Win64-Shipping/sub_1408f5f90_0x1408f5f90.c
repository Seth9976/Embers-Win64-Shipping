// 函数: sub_1408f5f90
// 地址: 0x1408f5f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x240) = 0
*(arg1 + 0x310) = 0
int32_t result = *(arg1 + 0x1f8)

if (result != 0 && result != 1)
    result = sub_142022c90(arg1 + 0x1f0, zx.q(*(arg1 + 0x200)))
    *(arg1 + 0x248) = 0
    *(arg1 + 0x311) = 0

return result
