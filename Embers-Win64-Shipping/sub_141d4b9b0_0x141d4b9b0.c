// 函数: sub_141d4b9b0
// 地址: 0x141d4b9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x40)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_143226ea0
result[2] = &data_142d5eeb0
result[3] = &data_142d5eed0
result[4] = 0
int64_t rax = j_sub_140a82f30(0x18)

if (rax == 0)
    result[7] = 0
    result[6] = 0
    return result

__builtin_memset(rax, 0, 0x18)
result[7] = rax
result[6] = rax
return result
