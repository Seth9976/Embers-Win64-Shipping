// 函数: sub_140d7b670
// 地址: 0x140d7b670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 8)
void* rcx_2 = sx.q(*(arg1 + 0x10)) * 0x50 + r9

if (r9 != rcx_2)
    int32_t zmm2 = *arg3
    
    do
        if (not(zmm2 f< _mm_cvtepi32_ps(zx.o(*(r9 + 0x28))).d)
                && not(zmm2 f>= _mm_cvtepi32_ps(zx.o(*(r9 + 0x30))).d))
            int32_t zmm1 = arg3[1]
            
            if (not(zmm1 f< _mm_cvtepi32_ps(zx.o(*(r9 + 0x2c))).d)
                    && zmm1 f< _mm_cvtepi32_ps(zx.o(*(r9 + 0x34))).d)
                *arg2 = *(r9 + 0x38)
                return arg2
        
        r9 += 0x50
    while (r9 != rcx_2)

*arg2 = 0
arg2[1] = 0
return arg2
