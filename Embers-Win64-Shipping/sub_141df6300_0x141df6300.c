// 函数: sub_141df6300
// 地址: 0x141df6300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg2 + 0x18))

if (rcx.d != 0)
    int32_t* rbx_1 = *(arg2 + 0x40)
    int32_t rsi_1 = *rbx_1
    
    if (rsi_1 != 0)
        arg4 = arg4 f* rbx_1[1]
        int32_t rdi_1 = rsi_1 - 1
        int32_t rdx = 0
        int32_t rax_2 = int.d(arg4 + arg4 - 0.5f) s>> 1
        int32_t r9_1
        
        if (rax_2 s>= 0)
            r9_1 = rdi_1
            
            if (rax_2 s< rdi_1)
                r9_1 = rax_2
        else
            r9_1 = 0
        
        uint128_t result = _mm_cvtepi32_ps(zx.o(r9_1))
        
        if (r9_1 + 1 s<= rdi_1)
            rdi_1 = r9_1 + 1
        
        arg4 = arg4 f- result.d
        
        if (rcx.d s> 0)
            int16_t* rax_5 = *(arg2 + 0x10) + 8
            int64_t rcx_1 = 0
            
            do
                if (*rax_5 == arg3)
                    int64_t rcx_2 = sx.q(rdx * rsi_1)
                    float zmm1 = rbx_1[sx.q(r9_1) + rcx_2 + 2]
                    result.d = rbx_1[sx.q(rdi_1) + rcx_2 + 2].d f- zmm1
                    result.d = result.d f* arg4
                    result.d = result.d f+ zmm1
                    return result
                
                rdx += 1
                rcx_1 += 1
                rax_5 = &rax_5[6]
            while (rcx_1 s< rcx)

return zx.o(0)
