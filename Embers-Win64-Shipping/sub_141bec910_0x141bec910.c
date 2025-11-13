// 函数: sub_141bec910
// 地址: 0x141bec910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x38)
int128_t zmm1 = *(arg1 + 0x40)

if (result != 0)
    char var_28_1 = 1
    int64_t var_20 = 0
    int32_t var_18_1 = 0
    int128_t var_38_1 = zmm1
    *(result + 0x38) = 1
    *(result + 0x28) = zmm1
    sub_140692f90(result + 0x40, &var_20)
    sub_140745b20(&var_20)
    result = *(arg1 + 0x38)

if (result != 0)
    *(result + 0x24) = *(arg1 + 0x50)
    result = *(arg1 + 0x38)

if (result != 0)
    *(result + 0x25) = *(arg1 + 0x51)

return result
