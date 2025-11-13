// 函数: sub_1421bc4f0
// 地址: 0x1421bc4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx

if (*(arg1 + 0x118) s>= 0 || *(arg1 + 0x230) != 0 || *(arg1 + 0x240) != 0)
    rdx = 1
else
    rdx = 0

int64_t result = *(arg1 + 0x1d0)
void* r8_1

if (result != 0)
    r8_1 = *(arg1 + 0x18)

if (result == 0 || r8_1 == 0 || *(r8_1 + 0x588) != result)
    result.b = 0
else
    result.b = 1

if (rdx != 0 && result.b != 0)
    result.b = 1
    return result

result.b = 0
return result
