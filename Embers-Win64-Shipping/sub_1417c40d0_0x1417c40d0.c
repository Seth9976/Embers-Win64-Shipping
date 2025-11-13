// 函数: sub_1417c40d0
// 地址: 0x1417c40d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x60)

if (result == 0)
    return result

int32_t rbx = *(arg1 + 0x50)
*(arg1 + 0x10)
int128_t zmm10 = *(arg1 + 0x20)
int128_t zmm11 = *(arg1 + 0x30)
int128_t zmm12 = *(arg1 + 0x40)
result[1] = 0
*result = &data_142fc9648
int128_t zmm6_1 = sub_140b58170(&result[1], &data_1437020ab, 1)
*(result + 0x20) = zmm10
*result = &data_142fc9790
*(result + 0x30) = zmm11
result[0xa].d = rbx
*(result + 0x10) = zmm6_1
*(result + 0x40) = zmm12
return result
