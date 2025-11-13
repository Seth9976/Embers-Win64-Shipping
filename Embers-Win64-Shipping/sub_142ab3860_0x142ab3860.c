// 函数: sub_142ab3860
// 地址: 0x142ab3860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 1)
    int32_t rdx
    rdx.b = 1
    
    if ((data_143ccaf50 & *(arg1 + 0x14)) == 0)
        return float.d(sub_142ab5250(arg1, rdx.b))
    
    return float.d(neg.q(sub_142ab5250(arg1, rdx.b)))

int32_t rdx_1

if (arg2 == 2)
    rdx_1.b = 1
else
    if (arg2 != 3)
        if (arg2 == 4)
            int32_t rcx_2 = *(arg1 + 0xc)
            
            if (arg1[5].d s< rcx_2)
                rcx_2 = arg1[5].d
            
            return _mm_cvtepi32_pd(zx.q(neg.d(rcx_2))).q
        
        if (arg2 != 5)
            return __andps_xmmxud_memxud(sub_142ab5010(arg1), data_142d57d00)
        
        int32_t rax = 0
        int32_t rcx_1 = neg.d(*(arg1 + 0xc))
        
        if (rcx_1 s> 0)
            rax = rcx_1
        
        return _mm_cvtepi32_pd(zx.q(rax)).q
    
    rdx_1 = 0

int64_t rax_1 = sub_142ab5130(arg1, rdx_1.b)
uint64_t result = float.d(rax_1)

if (rax_1 s>= 0)
    return result

return result f+ 1.8446744073709552e+19
