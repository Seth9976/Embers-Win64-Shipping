// 函数: sub_1417c4590
// 地址: 0x1417c4590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x30)

if (result == 0)
    return result

int32_t rbx = *(arg1 + 0x20)
int32_t rbp = *(arg1 + 0x28)
int32_t rsi = *(arg1 + 0x1c)
int32_t rdi = *(arg1 + 0x24)
*(arg1 + 0x10)
uint128_t zmm7 = zx.o(*(arg1 + 0x14))
result[1] = 0
*result = &data_142fc9648
int32_t zmm6_1 = sub_140b58170(&result[1], &data_1437020ab, 1)
*(result + 0x14) = zmm7.q
*result = &data_142fc96b0
result[2].d = zmm6_1
*(result + 0x1c) = rsi
result[4].d = rbx
*(result + 0x24) = rdi
result[5].d = rbp
return result
