// 函数: sub_141ede7b0
// 地址: 0x141ede7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x170)

if (result == 0)
    return result

sub_1422883b0(result, arg1, 0)
*result = &data_143261680
result[0x2a].d ^= (zx.d(*(arg1 + 0x41c)) ^ result[0x2a].d) & 1
*(result + 0x154) = arg1[0x84]
*(result + 0x15c) = arg1[0x85].d
result[0x2c].d = arg1[0x83].d
int32_t rax_2 = *(arg1 + 0x42c)
*(result + 0x39) &= 0xfe
*(result + 0x164) = rax_2
return result
