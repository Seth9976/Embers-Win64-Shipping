// 函数: sub_1429b5b60
// 地址: 0x1429b5b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = 0
int64_t result = (arg3[1] - *arg3) s>> 3
int32_t rsi = 0

if (result != 0)
    uint64_t r8 = 0
    
    do
        sub_14297d090(arg1, *arg3 + (r8 << 3))
        rsi += 1
        result = (arg3[1] - *arg3) s>> 3
        r8 = zx.q(rsi)
    while (r8 u< result)

*arg4 = 1
int64_t rdx_1 = *arg3
int64_t rcx_3 = (arg3[1] - rdx_1) s>> 3

if (rcx_3 != 0)
    result = 0
    
    do
        if (*(rdx_1 + (result << 3)) u<= 0)
            *arg4 = 0
            return sub_1429b6c10(arg1, arg2, arg3)
        
        result_1 += 1
        result = zx.q(result_1)
    while (result u< rcx_3)

return result
