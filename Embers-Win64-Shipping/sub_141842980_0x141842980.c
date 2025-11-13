// 函数: sub_141842980
// 地址: 0x141842980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0xf8)
char rdx = 0
void* r8_1 = sx.q(*(arg1 + 0x100)) * 0x138 + result

while (result != r8_1)
    if (*(result + 0x70) != 2)
        result.b = 0
        return result
    
    result += 0x138
    rdx = 1

return zx.q(rdx)
