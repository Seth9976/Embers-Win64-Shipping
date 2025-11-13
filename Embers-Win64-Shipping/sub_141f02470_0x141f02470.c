// 函数: sub_141f02470
// 地址: 0x141f02470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x58)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_143271d98
result[2].b = *arg1
*(result + 0x11) ^= (arg1[1] ^ *(result + 0x11)) & 1
*(result + 0x12) = arg1[2]
*(result + 0x14) = *(arg1 + 4)
*(result + 0x1c) = *(arg1 + 0xc)
result[4] = *(arg1 + 0x10)
result[5] = *(arg1 + 0x18)
__builtin_memset(&arg1[0x10], 0, 0x30)
result[6] = *(arg1 + 0x20)
result[7] = *(arg1 + 0x28)
result[8] = *(arg1 + 0x30)
result[9] = *(arg1 + 0x38)
result[0xa].b = arg1[0x40]
return result
