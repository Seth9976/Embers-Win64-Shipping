// 函数: sub_1425da020
// 地址: 0x1425da020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg2 + 0x20)
int64_t result = sx.q(*(arg2 + 0x28))

for (void* rdi_1 = result * 0x1f0 + i; i != rdi_1; i += 0x1f0)
    result = sub_1425da290(arg2, *i, i)

return result
