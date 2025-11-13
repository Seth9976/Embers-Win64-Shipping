// 函数: sub_141f59790
// 地址: 0x141f59790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x160)

if (result == 0)
    return result

sub_1422883b0(result, arg1, 0)
*result = &data_14327e1f8
result[0x2a].d ^= (zx.d(*(arg1 + 0x41c)) ^ result[0x2a].d) & 1
*(result + 0x154) = arg1[0x83].d
int32_t rax_1 = arg1[0x84].d
*(result + 0x39) &= 0xfe
result[0x2b].d = rax_1
return result
