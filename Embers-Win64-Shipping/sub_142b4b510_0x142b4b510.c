// 函数: sub_142b4b510
// 地址: 0x142b4b510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_2 = *(arg1 + 0x54)

if (rax_2 s> 0)
    int64_t r11_1 = *(arg1 + 0x58)
    
    if (r11_1 != 0)
        int32_t rax_1 = *(arg1 + 0x50)
        double zmm1 = *(r11_1 + (sx.q(rax_2 - 1) << 3))
        
        if (rax_1 != 2)
            zmm1 = zmm1 f- _mm_cvtepi32_pd(zx.q(arg2))
        
        if (rax_1 == 0)
            zmm1 = zmm1 f- _mm_cvtepi32_pd(zx.q(arg3))
        
        *arg4 = zmm1
        rax_1.b = 1
        return rax_1

rax_2.b = 0
return rax_2
