// 函数: sub_141c29f60
// 地址: 0x141c29f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[2].d s> 0)
    void* r8_1 = arg1[4]
    
    if (r8_1 == 0)
        return zx.q((r8_1 + 5).d)
    
    int32_t i_1 = 0
    
    if (*(r8_1 + 8) != 0)
        int32_t i = 0
        
        if (*(r8_1 + 4) s> 0)
            int64_t rdx = 0
            
            do
                rdx += 4
                i += 1
                *(r8_1 + rdx + 0x18) = *(rdx + *arg2 - 4)
            while (i s< *(r8_1 + 4))
        
        *(r8_1 + 8) = 0
    
    int32_t rcx_1 = *(r8_1 + 4)
    *(r8_1 + 0xc) = rcx_1 * arg2[2].d
    int32_t r9_2 = *(arg2 + 0x14) * rcx_1
    *(r8_1 + 0x18) = 0
    *(r8_1 + 0x10) = 0
    *(r8_1 + 0x14) = r9_2
    double zmm4 = *arg1
    
    if (zmm4 < 0.00390625 || zmm4 > 256.0)
        return 0x16
    
    uint128_t zmm5 = zx.o(arg1[1])
    int32_t rdx_1 = 0
    int32_t rbx_1 = 0
    uint128_t zmm7 = 0x3ff0000000000000
    uint128_t zmm8 = 0x7fffffffffffffff
    uint128_t zmm9 = 0x3bc79ca10c924223
    uint32_t zmm0[0x4]
    uint128_t zmm1
    uint128_t zmm2
    
    if (not(zmm5.q f>= zmm7.q))
        int32_t rdi_1 = 0
        int32_t rbp_1 = 0
        int32_t rsi_1 = rcx_1
        
        do
            int32_t rax_5 = *(r8_1 + 0x14)
            rcx_1 = rsi_1
            rdx_1 = rbp_1
            r9_2 = rax_5
            
            if (rbp_1 s>= rax_5)
                break
            
            rbx_1 = *(r8_1 + 0x10)
            zmm2.q = zmm5.q f+ zmm7.q
            zmm2.q = zmm2.q f* _mm_cvtepi32_pd(zx.o(rsi_1)[0].q)[0].q
            zmm0 = zx.o(*(r8_1 + 0xc))
            zmm2.q = zmm2.q f+ _mm_cvtepi32_pd(zx.q(rbx_1)).q
            
            if (zmm2.q f>= _mm_cvtepi32_pd(zmm0[0].q)[0].q)
                break
            
            rdx_1 = rdi_1
            
            if (rax_5 s> 0)
                zmm2 = zx.o(*arg1)
                zmm1 = zx.o(arg2[5])
                zmm0 = zmm2
                zmm0[0].q = zmm0[0].q f- zmm1.q
                
                if (not(_mm_and_ps(zmm0, zmm8)[0].q f<= zmm9.q))
                    zmm4 = zmm1.q f- zmm2.q
                    zmm0 = _mm_cvtepi32_pd(zx.o(rbp_1)[0].q)
                    zmm1 = _mm_cvtepi32_pd(zx.q(rax_5))
                    zmm4 = zmm4 f* zmm0[0].q f/ zmm1.q f+ zmm2.q
            
            int32_t rdi_2 = 0
            
            if (rsi_1 s> 0)
                uint32_t (* r9_3)[0x4] = nullptr
                
                do
                    zmm1 = *(r9_3 + r8_1 + 0x1c)
                    rdi_2 += 1
                    int64_t rcx_2 = sx.q(*(r8_1 + 0x18))
                    zmm0 = *(r9_3 + *arg2)
                    r9_3 = &(*r9_3)[1]
                    int64_t rax_7 = arg2[1]
                    zmm0[0] = zmm0[0] f- zmm1.d
                    zmm1 = _mm_cvtps_pd(zmm1.q)
                    zmm2.q = _mm_cvtps_pd(zmm0[0].q).q f* zmm5.q
                    zmm2.q = zmm2.q f+ zmm1.q
                    *(rax_7 + (rcx_2 << 2)) = _mm_cvtpd_ps(zmm2)[0]
                    rdx_1 = *(r8_1 + 0x18) + 1
                    *(r8_1 + 0x18) = rdx_1
                    rcx_1 = *(r8_1 + 4)
                while (rdi_2 s< rcx_1)
                
                rbx_1 = *(r8_1 + 0x10)
                r9_2 = *(r8_1 + 0x14)
            
            zmm0 = zmm7
            rdi_1 = rdx_1
            zmm0[0].q = zmm0[0].q f/ zmm4
            rbp_1 = rdx_1
            rsi_1 = rcx_1
            zmm5.q = zmm5.q f+ zmm0[0].q
        while (zmm5.q f< zmm7.q)
    
    uint128_t zmm3
    zmm3.q = zmm5.q f- _mm_cvtepi32_pd(zx.o(int.d(zmm5.q))[0].q)[0].q
    
    if (not(zmm3.q f>= 0.0))
        zmm3.q = zmm3.q f+ zmm7.q
    
    zmm5.q = zmm5.q f- zmm3.q
    zmm2 = zmm3
    int32_t rax_11 = int.d(zmm5.q) * rcx_1 + rbx_1
    *(r8_1 + 0x10) = rax_11
    
    if (rdx_1 s< r9_2)
        int32_t rbx_2 = rcx_1
        int32_t rdi_3 = rax_11
        
        do
            rax_11 = rdi_3
            rcx_1 = rbx_2
            zmm1.q = _mm_cvtepi32_pd(zx.q(rbx_2)).q f* zmm3.q
            zmm1.q = zmm1.q f+ _mm_cvtepi32_pd(zx.o(rdi_3)[0].q)[0].q
            
            if (zmm1.q f>= _mm_cvtepi32_pd(zx.o(*(r8_1 + 0xc))[0].q)[0].q)
                break
            
            if (r9_2 s> 0)
                zmm2 = zx.o(*arg1)
                zmm1 = zx.o(arg2[5])
                zmm0 = zmm2
                zmm0[0].q = zmm0[0].q f- zmm1.q
                
                if (not(_mm_and_ps(zmm0, zmm8)[0].q f<= zmm9.q))
                    zmm4 = zmm1.q f- zmm2.q
                    zmm0 = _mm_cvtepi32_pd(zx.o(rdx_1)[0].q)
                    zmm1 = _mm_cvtepi32_pd(zx.q(r9_2))
                    zmm4 = zmm4 f* zmm0[0].q f/ zmm1.q f+ zmm2.q
            
            int32_t r9_4 = 0
            
            if (rbx_2 s> 0)
                do
                    int32_t rcx_3 = *(r8_1 + 0x10)
                    int64_t rdx_3 = *arg2
                    zmm1 = *(rdx_3 + (sx.q(rcx_3 - *(r8_1 + 4) + r9_4) << 2))
                    int64_t rcx_4 = sx.q(rcx_3 + r9_4)
                    r9_4 += 1
                    int64_t rax_17 = arg2[1]
                    zmm0 = *(rdx_3 + (rcx_4 << 2))
                    int64_t rcx_5 = sx.q(*(r8_1 + 0x18))
                    zmm0[0] = zmm0[0] f- zmm1.d
                    zmm1 = _mm_cvtps_pd(zmm1.q)
                    zmm2.q = _mm_cvtps_pd(zmm0[0].q).q f* zmm3.q
                    zmm2.q = zmm2.q f+ zmm1.q
                    *(rax_17 + (rcx_5 << 2)) = _mm_cvtpd_ps(zmm2)[0]
                    *(r8_1 + 0x18) += 1
                    rcx_1 = *(r8_1 + 4)
                while (r9_4 s< rcx_1)
                
                rdi_3 = *(r8_1 + 0x10)
            
            zmm1.q = zmm7.q f/ zmm4
            zmm1.q = zmm1.q f+ zmm3.q
            zmm3.q = zmm1.q f- _mm_cvtepi32_pd(zx.o(int.d(zmm1.q))[0].q)[0].q
            
            if (not(zmm3.q f>= 0.0))
                zmm3.q = zmm3.q f+ zmm7.q
            
            rdx_1 = *(r8_1 + 0x18)
            zmm1.q = zmm1.q f- zmm3.q
            zmm2 = zmm3
            rbx_2 = rcx_1
            rax_11 = int.d(zmm1.q) * rcx_1 + rdi_3
            *(r8_1 + 0x10) = rax_11
            rdi_3 = rax_11
            r9_2 = *(r8_1 + 0x14)
        while (rdx_1 s< r9_2)
    
    int32_t r9_5 = *(r8_1 + 0xc)
    
    if (rax_11 s> r9_5)
        *(r8_1 + 0x10) = r9_5
        zmm2.q = _mm_cvtepi32_pd(zx.q(divs.dp.d(sx.q(rax_11 - r9_5), rcx_1))).q f+ zmm3.q
    
    arg1[1] = zmm2.q
    
    if (*(r8_1 + 0x10) s> 0 && *(r8_1 + 4) s> 0)
        void* rdx_6 = r8_1 + 0x1c
        
        do
            rdx_6 += 4
            int32_t rax_26 = *(r8_1 + 0x10) - *(r8_1 + 4) + i_1
            i_1 += 1
            *(rdx_6 - 4) = *(*arg2 + (sx.q(rax_26) << 2))
        while (i_1 s< *(r8_1 + 4))
    
    *arg1 = zmm4
    arg2[3].d = divs.dp.d(sx.q(*(r8_1 + 0x10)), *(r8_1 + 4))
    *(r8_1 + 4)
    *(arg2 + 0x1c) = divs.dp.d(sx.q(*(r8_1 + 0x18)), *(r8_1 + 4))

return 0
