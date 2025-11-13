// 函数: sub_142b3be80
// 地址: 0x142b3be80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = sx.d(*(arg1 + 0x18))
int64_t result

if (r9 != 0)
    if (r9 == 1)
        result.b = *(arg1 + 0x14) == arg2
        return result
    
    if (r9 != 2)
        abort()
        noreturn
    
    if (*(arg1 + 0x14) != arg2 || *(arg1 + 8) != arg3)
        return 0

result.b = 1
return result
