// 函数: sub_1425d9f10
// 地址: 0x1425d9f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg2 + 0x28))
int32_t zmm0 = *(arg1 + 8)
void* i = *(arg2 + 0x20)

for (void* rdx_1 = result * 0x1f0 + i; i != rdx_1; i += 0x1f0)
    *(i + 0xc) = zmm0

return result
