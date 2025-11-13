// 函数: sub_142b639a0
// 地址: 0x142b639a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s<= 0)
    int32_t r10_1 = 0
    int32_t r9_1
    
    if (arg2 == 0)
        r9_1 = 0
    else if (arg2 != 1)
        void* rax_1 = arg1 + 4
        
        if (*(arg1 + 4) != arg2 || *(arg1 + 0x60) != arg2)
            r9_1 = 0
            int64_t rcx_1 = 0
            
            while (*rax_1 != arg2)
                r9_1 += 1
                rcx_1 += 1
                rax_1 += 4
                
                if (rcx_1 s> 0x17)
                    *arg3 = 1
                    return -0x4010000000000000
        else
            int32_t r8 = 0x16
            void* rax_2 = arg1 + 0x5c
            int64_t rcx = 0x16
            
            while (*rax_2 == arg2)
                r8 -= 1
                rcx -= 1
                rax_2 -= 4
                
                if (rcx s< 1)
                    *arg3 = 1
                    return -0x4010000000000000
            
            r9_1 = r8 + 1
    else
        r9_1 = arg2 + 0xb
    
    if (arg2 == 0)
        goto label_142b63ae5
    
    if (arg2 == 1)
        r10_1 = arg2 + 0xb
    label_142b63ae5:
        uint64_t result = _mm_cvtepi32_pd(zx.q(r10_1 + r9_1)) f* 0.5
        
        if (r9_1 s> r10_1)
            result = result f+ 12.0
            
            if (not(result f< 24.0))
                return result f+ -24.0
        
        return result
    
    if (*(arg1 + 4) == arg2 && *(arg1 + 0x60) == arg2)
        int64_t rcx_2 = 1
        void* rax_3 = arg1 + 8
        int32_t r8_1 = 1
        
        while (*rax_3 == arg2)
            r8_1 += 1
            rcx_2 += 1
            rax_3 += 4
            
            if (rcx_2 s> 0x16)
                *arg3 = 1
                return -0x4010000000000000
        
        r10_1 = r8_1
        goto label_142b63ae5
    
    int32_t r8_2 = 0x17
    void* rax_4 = arg1 + 0x60
    int64_t rcx_3 = 0x17
    int64_t temp0_1
    
    do
        if (*rax_4 == arg2)
            r10_1 = r8_2 + 1
            goto label_142b63ae5
        
        r8_2 -= 1
        rax_4 -= 4
        temp0_1 = rcx_3
        rcx_3 -= 1
    while (temp0_1 - 1 s>= 0)
    *arg3 = 1

return -0x4010000000000000
