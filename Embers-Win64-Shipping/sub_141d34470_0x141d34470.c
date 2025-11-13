// 函数: sub_141d34470
// 地址: 0x141d34470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0

if (0 == *(arg1 + 0x38))
    *(arg1 + 0x38) = 0
else
    rax = *(arg1 + 0x38)

return arg1 + 8 + (sx.q(rax) << 4)
