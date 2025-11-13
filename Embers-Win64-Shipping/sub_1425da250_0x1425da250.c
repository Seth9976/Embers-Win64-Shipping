// 函数: sub_1425da250
// 地址: 0x1425da250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0 = *(arg1 + 8)
void* i = *(arg2 + 0x20)

for (void* rdx_1 = sx.q(*(arg2 + 0x28)) * 0x1f0 + i; i != rdx_1; i += 0x1f0)
    *(i + 8) = zmm0

int64_t result
result.b = 1
return result
