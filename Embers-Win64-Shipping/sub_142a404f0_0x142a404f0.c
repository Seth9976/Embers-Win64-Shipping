// 函数: sub_142a404f0
// 地址: 0x142a404f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
uint64_t result_1

do
    result_1 = *(arg1 + 0x28)
    uint64_t result_2 = result_1
    int32_t r9_2 = result_1.d & 3
    
    if (r9_2 u< 2)
        result_2 = (result_2 & 0xfffffffffffffffc) | sx.q(arg2)
    
    result = zx.q(result_2.d) & 3
    
    if (result.d == r9_2)
        break
    
    result = result_1
    
    if (result == *(arg1 + 0x28))
        *(arg1 + 0x28) = result_2
    else
        result = *(arg1 + 0x28)
while (result_1 != result)
return result
