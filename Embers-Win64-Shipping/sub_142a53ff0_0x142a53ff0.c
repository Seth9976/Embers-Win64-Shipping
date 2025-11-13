// 函数: sub_142a53ff0
// 地址: 0x142a53ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_2 = sx.q(arg1)
uint64_t rax_2

if (r8_2.d u< 0xd800)
    rax_2 = zx.q((r8_2.d & 0x1f) + (zx.d(*(&data_14361b8e0 + (r8_2 s>> 5 << 1))) << 2))
else if (r8_2.d u<= 0xffff)
    int32_t rcx = 0
    
    if (r8_2.d s<= 0xdbff)
        rcx = 0x140
    
    rax_2 = zx.q((r8_2.d & 0x1f)
        + (zx.q(*(&data_14361b8e0 + (sx.q((r8_2.d s>> 5) + rcx) << 1))) << 2).d)
else if (r8_2.d u> 0x10ffff)
    rax_2 = 0x11f4
else if (r8_2.d s< 0x110000)
    rax_2 = zx.q((r8_2.d & 0x1f) + (zx.q(*(&data_14361b8e0 + (zx.q(
        zx.d(*(&data_14361b8e0 + (sx.q((r8_2.d s>> 0xb) + 0x820) << 1))) + (r8_2.d s>> 5 & 0x3f))
        << 1))) << 2).d)
else
    rax_2 = 0x55cc

uint32_t rcx_5 = zx.d(*(&data_14361b8e0 + (rax_2 << 1))) u>> 6

if (rcx_5 != 0)
    if (rcx_5 u< 0xb)
        return _mm_cvtepi32_pd(zx.q(rcx_5 - 1))
    
    if (rcx_5 u< 0x15)
        return _mm_cvtepi32_pd(zx.q(rcx_5 - 0xb))
    
    if (rcx_5 u< 0xb0)
        return _mm_cvtepi32_pd(zx.q(rcx_5 - 0x15))
    
    if (rcx_5 u< 0x1e0)
        double zmm1 = _mm_cvtepi32_pd(zx.q((rcx_5 & 0xf) + 1))
        return _mm_cvtepi32_pd(zx.q((rcx_5 s>> 4) - 0xc)) f/ zmm1
    
    if (rcx_5 u< 0x300)
        int32_t rdx_4 = (rcx_5 & 0x1f) + 2
        uint64_t result = _mm_cvtepi32_pd(zx.q((rcx_5 s>> 5) - 0xe))
        
        if (rdx_4 u>= 4)
            uint64_t i_1 = zx.q(rdx_4) u>> 2
            rdx_4 += neg.d(i_1.d) << 2
            uint64_t i
            
            do
                result = result f* 10000.0
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (rdx_4 == 1)
            return result f* 10.0
        
        if (rdx_4 == 2)
            return result f* 100.0
        
        if (rdx_4 != 3)
            return result
        
        return result f* 1000.0
    
    if (rcx_5 u< 0x324)
        int32_t rdx_9 = (rcx_5 s>> 2) - 0xbf
        
        if ((rcx_5 & 3) == 0)
            rdx_9 *= 0x3c
        else
            if ((rcx_5 & 3) == 1)
                return _mm_cvtepi32_pd(zx.q(rdx_9 * 0xe10))
            
            if ((rcx_5 & 3) == 2)
                return _mm_cvtepi32_pd(zx.q(rdx_9 * 0x34bc0))
            
            if ((rcx_5 & 3) == 3)
                return _mm_cvtepi32_pd(zx.q(rdx_9 * 0xc5c100))
        
        return _mm_cvtepi32_pd(zx.q(rdx_9))
    
    if (rcx_5 u< 0x33c)
        return _mm_cvtepi32_pd(zx.q((((zx.q(rcx_5 - 0x324) & 3) << 1) + 1).d))
            f/ _mm_cvtepi32_pd(zx.q(0x14 << ((rcx_5 - 0x324) s>> 2).b))
    
    if (rcx_5 u< 0x34c)
        return _mm_cvtepi32_pd(zx.q((((zx.q(rcx_5 - 0x33c) & 3) << 1) + 1).d))
            f/ _mm_cvtepi32_pd(zx.q(0x20 << ((rcx_5 - 0x33c) s>> 2).b))

return -0x3e6290cbac000000
