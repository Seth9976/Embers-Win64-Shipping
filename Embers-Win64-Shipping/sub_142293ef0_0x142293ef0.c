// 函数: sub_142293ef0
// 地址: 0x142293ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result_1 = *(arg1 + 0xc)
uint64_t result

if (result_1 != 4)
    result = zx.q(result_1)
else
    result = zx.q(data_1439c7a08)

if (result.d s>= 3)
    *(arg1 + 0x28) = 1
    return result

result.b = 0
int64_t i = 0

while (i s< sx.q(*(arg1 + 0x20)))
    int32_t rcx = *(*(arg1 + 0x18) + (i << 2))
    result.b = rcx u> 0xffff
    i += 1
    
    if (rcx u> 0xffff)
        break

*(arg1 + 0x28) = result.b
return result
