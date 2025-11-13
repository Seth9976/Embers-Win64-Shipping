// 函数: sub_140bcf2f0
// 地址: 0x140bcf2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
bool z

if (0 == *(arg1 + 0x11))
    *(arg1 + 0x11) = 0
    z = true
else
    result.b = *(arg1 + 0x11)
    z = false

if (not(z))
    char temp0_1 = *(arg1 + 0x11)
    *(arg1 + 0x11) = 0
    int64_t rdx
    rdx.b = temp0_1
    
    if (*(arg1 + 0x2d) != 0)
        jump(*(**(arg1 + 0x40) + 0x20))

return result
