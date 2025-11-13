// 函数: sub_142b8dec0
// 地址: 0x142b8dec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_2 = arg2

if (arg2 == 0)
    return 0xffffffff

int32_t result_1 = 0

while (true)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(result_1 + result_2)
    int32_t result = (temp1_1 - temp0_1) s>> 1
    int64_t rdx_1 = *(arg1 + (sx.q(result) << 3))
    
    if (arg3 u< rdx_1)
        if (result == result_1)
            return not.d(result_1)
        
        result_2 = result
    else
        if (arg3 u<= rdx_1)
            return result
        
        if (result == result_1)
            break
        
        result_1 = result

return zx.q(not.d(result_1 + 1))
