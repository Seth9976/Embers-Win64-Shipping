// 函数: sub_14154ac80
// 地址: 0x14154ac80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = sub_1416824d0(arg2, **arg3, arg4)
int32_t r10_1 = 0
int32_t rbp = 1
*arg1 = *rax_1
arg1[1].d = *(rax_1 + 8)
*(arg1 + 0xc) = *(rax_1 + 0xc)
*(arg1 + 0x14) = *(rax_1 + 0x14)
int32_t r9 = arg3[1].d
double zmm0
int64_t zmm2

if (r9 s> 1)
    void* r11_1 = 4
    
    do
        void* const rcx_5
        
        if (arg4[1].d == *(arg4 + 0x34))
        label_14154ad50:
            rcx_5 = nullptr
        else
            void* r8_1 = &arg4[7]
            void* rdx_2 = *(r8_1 + 8)
            int64_t r9_1 = sx.q(*(r11_1 + *arg3))
            
            if (rdx_2 != 0)
                r8_1 = rdx_2
            
            int32_t rax_5 = *(r8_1 + (((sx.q(arg4[9].d) - 1) & r9_1) << 2))
            
            if (rax_5 == 0xffffffff)
            label_14154ad50_1:
                rcx_5 = nullptr
            else
                int64_t r8_2 = *arg4
                
                while (true)
                    int64_t rdx_3 = sx.q(rax_5) * 9
                    rcx_5 = r8_2 + (rdx_3 << 2)
                    
                    if (*(r8_2 + (rdx_3 << 2)) == r9_1.d)
                        break
                    
                    rax_5 = *(rcx_5 + 0x1c)
                    
                    if (rax_5 == 0xffffffff)
                        goto label_14154ad50_2
                
                if (rax_5 == 0xffffffff)
                label_14154ad50_2:
                    rcx_5 = nullptr
        
        rbp += 1
        float temp0_1[0x4] = __minss_xmmss_memss((*arg1)[0], *(rcx_5 + 4))
        r11_1 += 4
        int64_t temp0_2 = __minss_xmmss_memss((*(rcx_5 + 8)).d, *(arg1 + 4))
        double temp0_3 = __minss_xmmss_memss((*(rcx_5 + 0xc)).d, arg1[1].d)
        *arg1 = (_mm_unpacklo_ps(temp0_1, temp0_2)).q
        arg1[1].d = temp0_3.d
        zmm2 = *(rcx_5 + 0x14)
        zmm0 = *(rcx_5 + 0x18)
        float temp0_5[0x4] = __maxss_xmmss_memss((*(rcx_5 + 0x10))[0], *(arg1 + 0xc))
        int64_t temp0_6 = __maxss_xmmss_memss(zmm2.d, arg1[2].d)
        double temp0_7 = __maxss_xmmss_memss(zmm0.d, *(arg1 + 0x14))
        *(arg1 + 0xc) = (_mm_unpacklo_ps(temp0_5, temp0_6)).q
        *(arg1 + 0x14) = temp0_7.d
        r9 = arg3[1].d
    while (rbp s< r9)

zmm2.d = (*(arg1 + 0xc)).d f- *arg1
float zmm1[0x4] = *(arg1 + 0x14)
zmm1[0] = zmm1[0] f- arg1[1].d
zmm0.d = arg1[2].d.d f- *(arg1 + 4)
int32_t var_28 = zmm2.d
int32_t var_24 = zmm0.d
float var_20_2 = zmm1[0]

if (not(zmm1[0] f<= zmm2.d) && not(zmm1[0] f<= zmm0.d))
    r10_1 = 2
else if (zmm0.d f> zmm2.d)
    r10_1 = 1

if (arg5 != 0)
    zmm2 = 0x3ff4000000000000
    zmm1 = _mm_cvtps_pd((&var_28)[zx.q(r10_1)][0].q)
    zmm0 = _mm_cvtps_pd((&var_28)[sx.q((r10_1 + 1) u% 3)]) f* zmm2
    
    if (not(zmm1[0].q f>= zmm0))
        zmm0 = _mm_cvtps_pd((&var_28)[sx.q((r10_1 + 2) u% 3)]) f* zmm2
        
        if (not(zmm1[0].q f>= zmm0) && r9 s> 0x14)
            r10_1 = -1

*arg6 = r10_1
return arg1
