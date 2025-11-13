// 函数: sub_142b4b580
// 地址: 0x142b4b580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax

if (*(arg1 + 0x54) s> 0)
    rax = *(arg1 + 0x58)
    
    if (rax != 0)
        double zmm1 = *rax
        int32_t rax_1 = *(arg1 + 0x50)
        
        if (rax_1 != 2)
            zmm1 = zmm1 f- _mm_cvtepi32_pd(zx.q(arg2))
        
        if (rax_1 == 0)
            zmm1 = zmm1 f- _mm_cvtepi32_pd(zx.q(arg3))
        
        *arg4 = zmm1
        rax_1.b = 1
        return rax_1

rax.b = 0
return rax
