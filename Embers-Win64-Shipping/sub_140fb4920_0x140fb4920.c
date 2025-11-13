// 函数: sub_140fb4920
// 地址: 0x140fb4920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax
rax.b = *(arg1 + 0x408) == 0
*(arg1 + 0x408) = rax

if (sub_140b16090(&data_143de57d0) != 0)
    int64_t* var_18_1 = &data_143de57d0
    sub_140b00570(data_143ddb400, u"ColorPickerUI", u"bWheelMode", *(arg1 + 0x408) == 1)

*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
