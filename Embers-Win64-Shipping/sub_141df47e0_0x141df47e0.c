// 函数: sub_141df47e0
// 地址: 0x141df47e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = *(arg2 + 0x28)
int32_t rsi = 0
int32_t r14 = arg3[0x12].d
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg2 + 0x18))
int32_t result = (temp1 - temp0) s>> 1
int64_t result_1 = sx.q(result)

if (result s> 0)
    int64_t rbx_1 = 0
    
    do
        sub_141df1510(arg2, arg3, r14, *(*(arg2 + 0x10) + (rbx_1 << 3)))
        result = sub_141df1510(arg2, arg3, r14, *(*(arg2 + 0x10) + (rbx_1 << 3) + 4))
        
        if (r12 s> 0)
            result = sub_141df1510(arg2, arg3, r14, 
                *(*(arg2 + 0x20) + (sx.q(*(arg2 + 0x30) * rsi) << 2)))
        
        rsi += 1
        rbx_1 += 1
    while (rbx_1 s< result_1)

return result
