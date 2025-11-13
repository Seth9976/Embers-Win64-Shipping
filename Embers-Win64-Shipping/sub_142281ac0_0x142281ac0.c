// 函数: sub_142281ac0
// 地址: 0x142281ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*(arg1 + 0x38) != 0)
    if (*(arg1 + 0x30) != 0)
        if (*(arg1 + 0x28) != 0)
        label_142281aed:
            
            if (*(arg1 + 0x70) u<= 0x100 && *(arg1 + 0xa0) - 1 u<= 1 && *(arg1 + 0xa8) u>= 4
                    && not(0f f> *(arg1 + 0x80)) && not(0f f> *(arg1 + 0x84))
                    && not(0f f> *(arg1 + 0x88)) && *(arg1 + 0x90) != 0 && *(arg1 + 0xc8) != 0
                    && *(arg1 + 0xc0) u>= *(arg1 + 0xbc) && not(0f f>= *(arg1 + 0xd0))
                    && (*(arg1 + 0x8c) & 0x4010) != 0x4010
                    && (_fpclass(_mm_cvtps_pd(*(arg1 + 0xd4))) & 0x207) == 0
                    && (_fpclass(_mm_cvtps_pd(*(arg1 + 0xd8))) & 0x207) == 0
                    && (_fpclass(_mm_cvtps_pd(*(arg1 + 0xdc))) & 0x207) == 0
                    && (_fpclass(_mm_cvtps_pd(*(arg1 + 0xe0))) & 0x207) == 0
                    && (_fpclass(_mm_cvtps_pd(*(arg1 + 0xe4))) & 0x207) == 0
                    && (_fpclass(_mm_cvtps_pd(*(arg1 + 0xe8))) & 0x207) == 0)
                int32_t zmm2 = *(arg1 + 0xd4)
                int32_t zmm1 = *(arg1 + 0xe0)
                
                if (not(zmm2 f> zmm1) && not((*(arg1 + 0xe4)).d f< *(arg1 + 0xd8))
                    && (*(arg1 + 0xe8)).d f>= *(arg1 + 0xdc))
                label_142281c9f:
                    int32_t rcx = *(arg1 + 0x10c)
                    
                    if ((rcx & (rcx - 1)) == 0 && rcx u<= 0x20)
                        result.b = 1
                        return result
                else if (not(zmm2 f!= 8.50705867e+37f) && not(8.50705867e+37f f!= *(arg1 + 0xd8))
                        && not(8.50705867e+37f f!= *(arg1 + 0xdc))
                        && not(zmm1 f!= -8.50705867e+37f)
                        && not(-8.50705867e+37f f!= *(arg1 + 0xe4))
                        && not(-8.50705867e+37f f!= *(arg1 + 0xe8)))
                    goto label_142281c9f
    else if (*(arg1 + 0x28) == 0)
        goto label_142281aed

result.b = 0
return result
