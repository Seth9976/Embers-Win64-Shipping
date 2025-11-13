// 函数: sub_142a45d30
// 地址: 0x142a45d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = *(arg2 + 0x28)
void* r8_1 = *(arg1 + 0x28) - result
uint32_t i
uint32_t rdx

do
    rdx = zx.d(*result)
    i = zx.d(*(result + r8_1))
    
    if (rdx != i)
        break
    
    result = &result[1]
while (i != 0)

result.b = rdx - i == 0
return result
