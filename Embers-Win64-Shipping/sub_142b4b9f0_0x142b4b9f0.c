// 函数: sub_142b4b9f0
// 地址: 0x142b4b9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_2 = *(arg1 + 0x54)
double zmm2 = arg2

if (rdx_2 - 1 s>= 0)
    int32_t r10_1 = *(arg1 + 0x50)
    int64_t rcx = sx.q(rdx_2 - 1)
    int64_t* rdx_1 = *(arg1 + 0x58) + (rcx << 3)
    int64_t temp1_1
    
    do
        arg2 = *rdx_1
        
        if (r10_1 != 2)
            arg2 = arg2 f- _mm_cvtepi32_pd(zx.q(arg3)).q
        
        if (r10_1 == 0)
            arg2 = arg2 f- _mm_cvtepi32_pd(zx.q(arg4)).q
        
        if (zmm2 > arg2)
        label_142b4ba5d:
            *arg6 = arg2
            double* result
            result.b = 1
            return result
        
        if (arg5 != 0)
            arg2 - zmm2
            
            if (not(is_unordered.q(arg2, zmm2)) && arg2 == zmm2)
                goto label_142b4ba5d
        
        rdx_1 -= 8
        temp1_1 = rcx
        rcx -= 1
    while (temp1_1 - 1 s>= 0)

return 0
