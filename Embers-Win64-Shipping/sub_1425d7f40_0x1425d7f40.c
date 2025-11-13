// 函数: sub_1425d7f40
// 地址: 0x1425d7f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x20)
int64_t result = sx.q(*(arg1 + 0x28))

for (void* rdi_1 = result * 0x1f0 + i; i != rdi_1; i += 0x1f0)
    result = sub_141d43680(i + 0xa8)
    *(i + 0x128) = 1

return result
