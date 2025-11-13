// 函数: sub_140f51820
// 地址: 0x140f51820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702

if (*(arg1 + 0x3b0) != 0)
    char var_c8 = 1
    int64_t var_c0_1 = 0
    int64_t var_b8_1 = 0
    char var_a8_1 = 0
    int64_t var_a0
    __builtin_memset(&var_a0, 0, 0x88)
    int32_t var_14
    int32_t var_14_1 = var_14 & 0xffffff00
    int32_t var_18_1 = 0x20702
    sub_1405979f0(arg2, &var_c8)
    sub_140597700(&var_c8)

return arg2
