// 函数: sub_14283952c
// 地址: 0x14283952c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r8 = 0
int16_t r9 = 0

if (*(arg1 + 0x38) != 0 && (*(arg1 + 0x34) & 0x10) == 0 && *(arg1 + 0x48) == 0)
    int32_t r10_1 = *(arg1 + 0x24)
    
    if (*(arg1 + 0x20) s< r10_1)
        int16_t* r11_1 = *(arg1 + 0x40) + (sx.q(*(arg1 + 0x20)) << 1)
        uint64_t i_1 = zx.q(r10_1 - *(arg1 + 0x20))
        uint64_t i
        
        do
            if (*r11_1 s> r8)
                r8 = *r11_1
            else if (*r11_1 s< r9)
                r9 = *r11_1
            
            r11_1 = &r11_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (sx.d(r8) s<= neg.d(sx.d(r9)))
        r8 = neg.w(r9)
    
    if (r8 == 0)
        r8 = 1
    
    *(arg1 + 0x48) = 1
    double temp0_2[0x2] = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(sx.d(r8))).q)
    temp0_2[0] = temp0_2[0] * 3.0517578125e-05
    *(arg1 + 0x50) = 3.0000000000000001e-05 f/ _mm_cvtps_pd(_mm_cvtpd_ps(temp0_2)[0]).q

return 0
