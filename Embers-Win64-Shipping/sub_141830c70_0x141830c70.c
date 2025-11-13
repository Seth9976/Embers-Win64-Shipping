// 函数: sub_141830c70
// 地址: 0x141830c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *arg1
int64_t result = 0

for (; i != 0; i = *(i + 0x18))
    result += *(i + 8)

return result
