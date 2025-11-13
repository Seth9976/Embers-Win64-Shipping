// 函数: sub_141830f70
// 地址: 0x141830f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x90)

if (result == 0)
    return 0

*result = &data_142dd6680
sub_140a1d270(&result[1], zx.o(0), sub_140b18f30())
*result = &data_142fe55c0
result[1] = &data_142fe55e0
result[4] = sub_14184de40(0x4014000000000000)
result[5] = sx.q(sub_1418178c0(0xa, 0x24, 0x22))
int64_t rax_3 = j_sub_140a82f30(0x20)

if (rax_3 == 0)
    rax_3 = 0
else
    __builtin_memset(rax_3, 0, 0x20)

result[7] = rax_3
result[6] = rax_3
result[8] = 0
result[9] = 0
result[0xa] = 0
result[0xb] = 0
result[0xc] = result[4]
result[0xd] = result[5]
result[0xe] = &result[8]
result[0xf].b = 0
result[0x10] = 0
return result
