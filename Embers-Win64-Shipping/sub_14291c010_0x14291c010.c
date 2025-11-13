// 函数: sub_14291c010
// 地址: 0x14291c010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg2)
    int32_t rax_4 = (temp1_1 + (temp0_1 & 7)) s>> 3
    
    if (*arg1 s>= rax_4 + 1)
        int64_t r8_2 = *(arg1 + 8)
        
        if (r8_2 != 0)
            int64_t result
            result.b = (*(sx.q(rax_4) + r8_2) & (1 << (7 - (arg2.b & 7))).b) != 0
            return result

return 0
