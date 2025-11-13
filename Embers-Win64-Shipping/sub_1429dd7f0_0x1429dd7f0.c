// 函数: sub_1429dd7f0
// 地址: 0x1429dd7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = arg1 + 0x880

for (int32_t i = 0; i s< 0x10; )
    r9 += 0x38
    int32_t rdx_3 = (i s>> 2) * *(arg1 + 0xe80)
    int32_t rax_2 = i & 3
    i += 1
    *(r9 - 0x38) = (rdx_3 + rax_2) << 2

*(arg1 + 0xc00) = 0
*(arg1 + 0xce0) = 0
*(arg1 + 0xc38) = 4
*(arg1 + 0xd18) = 4
int32_t rax_4 = *(arg1 + 0xe94) << 2
*(arg1 + 0xc70) = rax_4
*(arg1 + 0xd50) = rax_4
int32_t result = ((zx.q(*(arg1 + 0xe94)) << 2) + 4).d
*(arg1 + 0xca8) = result
*(arg1 + 0xd88) = result
return result
