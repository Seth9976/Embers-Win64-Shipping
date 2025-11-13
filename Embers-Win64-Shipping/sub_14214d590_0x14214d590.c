// 函数: sub_14214d590
// 地址: 0x14214d590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
int64_t* result = sub_140b214c0(&var_18)
int128_t zmm0 = *result
*(arg1 + 8) |= 8
*(arg1 + 0x230) = arg3
*(arg1 + 0x220) = zmm0
*(arg1 + 0x30) = 0

if (*(arg1 + 0x34) != 0)
    result = sub_1405a52a0(arg1 + 0x28, 0)

*(arg1 + 0x40) = 0

if (*(arg1 + 0x44) != 0)
    result = sub_1405a5130(arg1 + 0x38, 0)

*(arg1 + 0x50) = 0

if (*(arg1 + 0x54) != 0)
    result = sub_140638cc0(arg1 + 0x48, 0)

*(arg1 + 0x60) = 0

if (*(arg1 + 0x64) != 0)
    result = sub_140638cc0(arg1 + 0x58, 0)

*(arg1 + 0x70) = 0

if (*(arg1 + 0x74) != 0)
    result = sub_1405a5310(arg1 + 0x68, 0)

*(arg1 + 0x234) = 4

if (arg2 != 0)
    *(arg2 + 0x230) = arg1

return result
