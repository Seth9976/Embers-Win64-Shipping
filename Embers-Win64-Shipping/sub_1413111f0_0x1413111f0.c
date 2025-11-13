// 函数: sub_1413111f0
// 地址: 0x1413111f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_14081d830(0x48, *(arg1 + 8), 1, 0)

if (result == 0)
    return 0

result[1] = arg3
result[2] = 0
result[3].b = arg4
*(result + 0x1c) = 0
result[4] = 0
result[5].w = 0x200
*result = &data_142f285d0
int128_t zmm0 = *arg2
result[8] = 0
*(result + 0x30) = zmm0
return result
