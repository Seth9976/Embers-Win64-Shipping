// 函数: sub_14283ddec
// 地址: 0x14283ddec
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + (sx.q(arg2) << 1) + 0xa6) = arg3.w

if (arg2 s> 0x63)
    if (arg2 s<= 0x65)
        *(arg1 + 0x1ba) = 0
    else if (arg2 == 0x78)
        sub_1428318f8(*(arg1 + 0x18), *arg1)
    else if (arg2 == 0x79)
        sub_14283e128(arg1, 1)
        sub_142832314(*(arg1 + 0x18), *arg1)
    else if (arg2 != 0x7b)
        sub_1428322a4(*(arg1 + 0x18), *arg1, 1, arg2)
    else
        sub_142831894(*(arg1 + 0x18), *arg1)
else if (arg2 == 0x63)
    *(arg1 + 0x16a) = 0
    arg1[0x6e] = 0x10000
else if (arg2 == 0)
    int64_t rax
    
    if (*arg1 == 9)
        rax = sub_142831210(**(arg1 + 0x18), "synth.drums-channel.active", "yes")
    
    if (*arg1 != 9 || rax.d == 0)
        rax.b = arg3.b
        rax.b &= 0x7f
        *(arg1 + 0x1a6) = rax.b
        sub_14283e2a4(arg1, arg3 & 0x7f)
else if (arg2 == 6)
    int32_t rdx_5 = sx.d(*(arg1 + 0xf2)) + (arg3 << 7)
    
    if (*(arg1 + 0x1ba) == 0)
        if (arg1[0x5c].w == 0)
            int32_t rcx_5 = sx.d(*(arg1 + 0x16e))
            
            if (rcx_5 == 0)
                sub_14283e25c(arg1, arg3.w)
            else
                uint128_t zmm3
                
                if (rcx_5 == 1)
                    uint128_t zmm0
                    zmm0.q = _mm_cvtepi32_pd(zx.q(rdx_5 - 0x2000)).q f* 0.0001220703125
                    zmm0.q = zmm0.q f* 100.0
                    zmm3 = _mm_cvtpd_ps(zmm0)
                    sub_142832b04(*(arg1 + 0x18), *arg1, 0x34, zmm3)
                else if (rcx_5 == 2)
                    zmm3 = _mm_cvtepi32_ps(zx.o(arg3 - 0x40))
                    sub_142832b04(*(arg1 + 0x18), *arg1, zx.q(rcx_5 + 0x31), zmm3)
    else if (arg1[0x5b].w == 0x78 && *(arg1 + 0x16a) s< 0x64)
        int32_t rax_5 = sx.d(arg1[0x6e].w)
        
        if (rax_5 s< 0x3c)
            uint128_t zmm0_1 = sub_14283ba80(rax_5, rdx_5)
            sub_142832b04(*(arg1 + 0x18), *arg1, zx.q(sx.d(arg1[0x6e].w)), zmm0_1)
        
        arg1[0x6e].w = 0
else if (arg2 == 0x20)
    int32_t rax_2
    
    if (*arg1 == 9)
        rax_2 = sub_142831210(**(arg1 + 0x18), "synth.drums-channel.active", "yes")
    
    if (*arg1 != 9 || rax_2 == 0)
        sub_14283e2a4(arg1, (zx.d(*(arg1 + 0x1a6)) << 7) + (arg3 & 0x7f))
else if (arg2 == 0x40)
    if (arg3 s< 0x40)
        sub_142831c70(*(arg1 + 0x18), *arg1)
else if (arg2 != 0x62)
    sub_1428322a4(*(arg1 + 0x18), *arg1, 1, arg2)
else
    if (arg1[0x5b].w == 0x78)
        if (arg3 == 0x64)
            arg1[0x6e].w += 0x64
        else if (arg3 == 0x65)
            arg1[0x6e].w += 0x3e8
        else if (arg3 == 0x66)
            arg1[0x6e].w += 0x2710
        else if (arg3 s< 0x64)
            arg1[0x6e].w += arg3.w
    
    *(arg1 + 0x1ba) = 1

return 0
