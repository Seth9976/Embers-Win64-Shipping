// 函数: sub_142b4b6f0
// 地址: 0x142b4b6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x54)
int32_t i_1 = r10 - 1
double zmm2 = arg2
int64_t i = sx.q(i_1)

if (r10 - 1 s>= 0)
    if (i + 1 s>= 4)
        do
            arg2 = *(*(arg1 + 0x58) + (i << 3))
            int32_t rax_3 = *(arg1 + 0x50)
            
            if (rax_3 != 2)
                arg2 = arg2 f- _mm_cvtepi32_pd(zx.q(arg3)).q
            
            if (rax_3 == 0)
                arg2 = arg2 f- _mm_cvtepi32_pd(zx.q(arg4)).q
            
            if (zmm2 > arg2)
                goto label_142b4b8de
            
            if (arg5 == 0)
                arg2 - zmm2
                
                if (not(is_unordered.q(arg2, zmm2)) && arg2 == zmm2)
                    goto label_142b4b8de
            
            *arg6 = arg2
            i_1 -= 1
            arg2 = *(*(arg1 + 0x58) + (i << 3) - 8)
            int32_t rax_5 = *(arg1 + 0x50)
            
            if (rax_5 != 2)
                arg2 = arg2 f- _mm_cvtepi32_pd(zx.q(arg3)).q
            
            if (rax_5 == 0)
                arg2 = arg2 f- _mm_cvtepi32_pd(zx.q(arg4)).q
            
            if (zmm2 > arg2)
                goto label_142b4b8de
            
            if (arg5 == 0)
                arg2 - zmm2
                
                if (not(is_unordered.q(arg2, zmm2)) && arg2 == zmm2)
                    goto label_142b4b8de
            
            *arg6 = arg2
            i_1 -= 1
            arg2 = *(*(arg1 + 0x58) + (i << 3) - 0x10)
            int32_t rax_7 = *(arg1 + 0x50)
            
            if (rax_7 != 2)
                arg2 = arg2 f- _mm_cvtepi32_pd(zx.q(arg3)).q
            
            if (rax_7 == 0)
                arg2 = arg2 f- _mm_cvtepi32_pd(zx.q(arg4)).q
            
            if (zmm2 > arg2)
                goto label_142b4b8de
            
            if (arg5 == 0)
                arg2 - zmm2
                
                if (not(is_unordered.q(arg2, zmm2)) && arg2 == zmm2)
                    goto label_142b4b8de
            
            *arg6 = arg2
            i_1 -= 1
            arg2 = *(*(arg1 + 0x58) + (i << 3) - 0x18)
            int32_t rax_9 = *(arg1 + 0x50)
            
            if (rax_9 != 2)
                arg2 = arg2 f- _mm_cvtepi32_pd(zx.q(arg3)).q
            
            if (rax_9 == 0)
                arg2 = arg2 f- _mm_cvtepi32_pd(zx.q(arg4)).q
            
            if (zmm2 > arg2)
                goto label_142b4b8de
            
            if (arg5 == 0)
                arg2 - zmm2
                
                if (not(is_unordered.q(arg2, zmm2)) && arg2 == zmm2)
                    goto label_142b4b8de
            
            i_1 -= 1
            *arg6 = arg2
            i -= 4
        while (i s>= 3)
    
    if (i s>= 0)
        int64_t i_2
        
        do
            arg2 = *(*(arg1 + 0x58) + (i << 3))
            int32_t rax_11 = *(arg1 + 0x50)
            
            if (rax_11 != 2)
                arg2 = arg2 f- _mm_cvtepi32_pd(zx.q(arg3)).q
            
            if (rax_11 == 0)
                arg2 = arg2 f- _mm_cvtepi32_pd(zx.q(arg4)).q
            
            if (zmm2 > arg2)
                break
            
            if (arg5 == 0)
                arg2 - zmm2
                
                if (not(is_unordered.q(arg2, zmm2)) && arg2 == zmm2)
                    break
            
            i_1 -= 1
            *arg6 = arg2
            i_2 = i
            i -= 1
        while (i_2 - 1 s>= 0)

label_142b4b8de:
int32_t result
result.b = i_1 != *(arg1 + 0x54) - 1
return result
