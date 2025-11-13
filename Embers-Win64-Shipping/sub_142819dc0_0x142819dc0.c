// 函数: sub_142819dc0
// 地址: 0x142819dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_142816b00(arg1) & (arg2 - 1)
int32_t rdi_2 = (arg2 - result) & (arg2 - 1)

if (rdi_2 == 0)
    return result

return sub_142816c80(arg1, arg1 + 0x28, rdi_2)
