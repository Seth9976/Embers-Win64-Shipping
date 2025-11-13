// 函数: sub_1409c3680
// 地址: 0x1409c3680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x18)
int32_t result = 0

for (void* rdi_2 = (sx.q(*(arg1 + 0x20)) << 4) + i; i != rdi_2; i += 0x10)
    result = sub_140b21160(*i, *(i + 8) << 4, result)

return result
