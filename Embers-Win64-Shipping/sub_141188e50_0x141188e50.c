// 函数: sub_141188e50
// 地址: 0x141188e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_98 = *arg2
int128_t var_88 = arg2[1]
int128_t var_78 = arg2[2]
int128_t var_68 = arg2[3]
int128_t var_18 = arg2[4]
var_18.q = arg3
void*** result = sub_14081d830(0x88, *(arg1 + 8), 1, 0)

if (result == 0)
    return 0

result[1] = arg3
result[2] = 0
result[3].b = arg4
*(result + 0x1c) = 0
result[4] = 0
result[5].w = 0x200
*(result + 0x30) = var_98
*result = &data_142f11960
result[0x10] = 0
*(result + 0x40) = var_88
*(result + 0x50) = var_78
*(result + 0x60) = var_68
*(result + 0x70) = var_18
return result
