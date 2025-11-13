// 函数: sub_1423ab180
// 地址: 0x1423ab180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax_1 = zx.q(*(arg1 + 0xb4))
*(arg1 + 0xa8) = *(arg1 + 0x9c)
int32_t result = *(arg1 + 0x88)
*(arg1 + 0xac) = result
*(arg1 + 0xb4) = (((rax_1 << 3).d ^ rax_1.d) & 0x400) ^ rax_1.d
return result
