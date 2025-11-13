// 函数: sub_141e95bf0
// 地址: 0x141e95bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*arg2)
int32_t rdx = *arg3

if (result.d s> rdx)
    int64_t r8 = *(arg1 + 0x90)
    result = zx.q(*(r8 + (result << 2)))
    
    do
        if (result.d == rdx)
            result.b = 1
            return result
        
        result = zx.q(*(r8 + (sx.q(result.d) << 2)))
    while (result.d != 0xffffffff)

result.b = 0
return result
