// 函数: sub_1413faff0
// 地址: 0x1413faff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg1 != 0)
    int32_t temp0_1 = sub_1410f8230().d
    
    if (temp0_1 s< 0)
        int32_t temp1_1 = data_1439b6b00
        
        if (temp1_1 s< 0)
            result.b = *(arg1 + 0x20) u>> 4
            result.b &= 1
        else
            result.b = temp1_1 != 0
    else
        result.b = temp0_1 s> 0
    
    char rdx_1
    
    if (result.b == 0)
        rdx_1 = 0
    else
        int32_t rcx = data_1439b6b3c
        bool cond:2_1 = rcx s<= 0
        
        if (rcx s< 0)
            result = zx.q(*(arg1 + 0xe0))
            int32_t rcx_1 = 2
            
            if (result.d s>= 2)
                rcx_1 = result.d
            
            cond:2_1 = rcx_1 s<= 0
        
        rdx_1 = cond:2_1 ? 0 : 1
    
    if (data_143f0f21f != 0)
        uint64_t r8_1 = zx.q(data_143f0f1a0)
        
        if (((*(&data_143f025fc + sx.q(r8_1.d) * 0x14) u>> 0x13).b & 1) != 0
                && test_bit(data_143f13cd8, r8_1) && rdx_1 != 0)
            result = *(arg1 + 0xe8)
            
            if (result != 0 && *(result + 0x18) != 0)
                result.b = 1
                return result

result.b = 0
return result
