// 函数: sub_14090c1f0
// 地址: 0x14090c1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x18)
void* r8_2 = &result[sx.q(*(arg1 + 0x20)) * 2]

while (result != r8_2)
    int64_t rdx_1 = *result
    result = &result[2]
    *((sx.q(arg2) << 2) + rdx_1) = *(arg1 + 0x28)

return result
