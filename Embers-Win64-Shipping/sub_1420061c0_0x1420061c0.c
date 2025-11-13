// 函数: sub_1420061c0
// 地址: 0x1420061c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x39)
int64_t rbx = *(arg1 + 0x30)
uint128_t zmm6
uint128_t var_48 = zmm6
int64_t var_88
int64_t arg_8
uint128_t zmm0_2
uint128_t zmm1
int64_t zmm3

if (*(arg1 + 0x38) == 0)
    int64_t* lpPerformanceCount_1 = &arg_8
    zmm6 = _mm_cvtepi32_pd(zx.q(rbx.d))
    uint128_t zmm7 = _mm_cvtepi32_pd(zx.q((rbx u>> 0x20).d))
    int32_t rax_33
    double zmm2
    
    if (rax == 0)
        sub_140b21590(lpPerformanceCount_1)
        uint128_t zmm1_2
        zmm1_2.q = float.d(mods.dp.q(sx.o(arg_8), 0xc92a69c000))
        zmm1_2.q = zmm1_2.q f* 9.9999999999999995e-08
        zmm1_2.q = zmm1_2.q f* zmm6.q
        zmm1_2.q = zmm1_2.q f/ zmm7.q
        int64_t rcx_18 = int.q(zmm1_2.q)
        zmm0_2 = zmm1_2
        
        if (rcx_18 != -0x8000000000000000 && not(float.d(rcx_18) f== zmm1_2.q))
            zmm0_2.q =
                float.d(rcx_18 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_2, zmm0_2.q))) & 1))
        
        zmm3 = 0x3f7fffff
        zmm1_2.q = zmm1_2.q f- zmm0_2.q
        rax_33 = int.d(zmm0_2.q)
        
        if (not(zmm1_2.q f<= 0.0))
            zmm1_2 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff).q, zmm1_2.q)
        
        zmm2 = _mm_cvtpd_ps(zmm1_2)
    else
        QueryPerformanceCounter(lpPerformanceCount_1)
        zmm1.q = fmod(float.d(arg_8) f* data_143d796f8 f+ 16777216.0 f+ data_143f3efd0, 
            0x40f5180000000000).q f* zmm6.q
        zmm1.q = zmm1.q f/ zmm7.q
        int64_t rcx_16 = int.q(zmm1.q)
        zmm0_2 = zmm1
        
        if (rcx_16 != -0x8000000000000000 && not(float.d(rcx_16) f== zmm1.q))
            zmm0_2.q =
                float.d(rcx_16 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_2, zmm0_2.q))) & 1))
        
        zmm3 = 0x3f7fffff
        zmm1.q = zmm1.q f- zmm0_2.q
        rax_33 = int.d(zmm0_2.q)
        
        if (not(zmm1.q f<= 0.0))
            zmm1 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff).q, zmm1.q)
        
        zmm2.d = fconvert.s(zmm1.q)
    
    arg_8.d = rax_33
    
    if (zmm2.d f>= 0f)
        arg_8:4.d = _mm_min_ss(zmm2.d, zmm3.d).d
    else
        arg_8:4.d = 0
    
    var_88 = arg_8
else
    int64_t arg_18
    int64_t* lpPerformanceCount = &arg_18
    int64_t arg_10 = rbx
    char r9_1
    double zmm0_1[0x2]
    
    if (rax == 0)
        uint32_t rsi_2 = (rbx u>> 0x20).d
        sub_140b21590(lpPerformanceCount)
        int64_t rax_8
        int64_t rdx
        rdx:rax_8 = sx.o(arg_18)
        char rax_11
        
        if ((rbx.d == 0x7530 && rsi_2 == 0x3e9) || (rbx.d == 0xea60 && rsi_2 == 0x3e9))
            rax_11 = sub_140b4afa0()
        
        if (((rbx.d != 0x7530 || rsi_2 != 0x3e9) && (rbx.d != 0xea60 || rsi_2 != 0x3e9))
                || rax_11 == 0)
            r9_1 = 0
        else
            r9_1 = 1
        
        zmm3 = 0x3fe0000000000000
        zmm0_1 = _mm_cvtepi32_pd(zx.o(arg_10:4.d)[0])
        
        if (r9_1 == 0)
            zmm1.q = _mm_cvtepi32_pd(zx.q(rbx.d)).q f/ zmm0_1[0]
            zmm1.q = zmm1.q f+ zmm3
            int64_t rcx_4 = int.q(zmm1.q)
            
            if (rcx_4 != -0x8000000000000000)
                zmm0_1 = zx.o(0)
                zmm0_1[0] = float.d(rcx_4)
                
                if (not(zmm0_1[0] f== zmm1.q))
                    zmm1.q =
                        float.d(rcx_4 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))
        else
            zmm1.q = _mm_cvtepi32_pd(zx.q(rbx.d)).q f/ zmm0_1[0]
        
        zmm1.q = zmm1.q f* float.d(mods.dp.q(rdx:rax_8, 0xc92a69c000))
        zmm1.q = zmm1.q f* 9.9999999999999995e-08
        zmm1.q = zmm1.q f+ zmm3
    else
        uint32_t r15_2 = (rbx u>> 0x20).d
        QueryPerformanceCounter(lpPerformanceCount)
        zmm0_1 = fmod(float.d(arg_18) f* data_143d796f8 f+ 16777216.0 f+ data_143f3efd0, 
            0x40f5180000000000)
        zmm0_1[0] = zmm0_1[0] * 10000000.0
        zmm6 = 0x3fe0000000000000
        zmm0_1[0] = zmm0_1[0] f+ zmm6.q
        int64_t rcx = int.q(zmm0_1[0])
        
        if (rcx != -0x8000000000000000)
            zmm1.q = float.d(rcx)
            
            if (not(zmm1.q f== zmm0_1[0]))
                uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1[0]))
                zmm0_1 = zx.o(0)
                zmm0_1[0] = float.d(rcx - (zx.q(temp0_2) & 1))
        
        int64_t rdi_1 = int.q(zmm0_1[0])
        char rax_4
        
        if ((rbx.d == 0x7530 && r15_2 == 0x3e9) || (rbx.d == 0xea60 && r15_2 == 0x3e9))
            rax_4 = sub_140b4afa0()
        
        if (((rbx.d != 0x7530 || r15_2 != 0x3e9) && (rbx.d != 0xea60 || r15_2 != 0x3e9))
                || rax_4 == 0)
            r9_1 = 0
        else
            r9_1 = 1
        
        zmm0_1 = _mm_cvtepi32_pd(zx.o(arg_10:4.d)[0])
        
        if (r9_1 == 0)
            zmm1.q = _mm_cvtepi32_pd(zx.q(rbx.d)).q f/ zmm0_1[0]
            zmm1.q = zmm1.q f+ zmm6.q
            int64_t rcx_2 = int.q(zmm1.q)
            
            if (rcx_2 != -0x8000000000000000)
                zmm0_1 = zx.o(0)
                zmm0_1[0] = float.d(rcx_2)
                
                if (not(zmm0_1[0] f== zmm1.q))
                    zmm1.q =
                        float.d(rcx_2 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))
        else
            zmm1.q = _mm_cvtepi32_pd(zx.q(rbx.d)).q f/ zmm0_1[0]
        
        zmm1.q = zmm1.q f* float.d(rdi_1)
        zmm1.q = zmm1.q f* 9.9999999999999995e-08
        zmm1.q = zmm1.q f+ zmm6.q
    
    int64_t rcx_6 = int.q(zmm1.q)
    
    if (rcx_6 != -0x8000000000000000)
        zmm0_1 = zx.o(0)
        zmm0_1[0] = float.d(rcx_6)
        
        if (not(zmm0_1[0] f== zmm1.q))
            zmm1.q = float.d(rcx_6 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))
    
    arg_8.d = int.d(zmm1.q)
    void var_74
    int32_t* rax_17 = sub_140af0b20(&var_74, &arg_8, &arg_10, r9_1)
    uint128_t zmm1_1 = _mm_cvtepi32_pd(zx.q(*(arg1 + 0x30)))
    char rax_18 = (rax_17[4]).b
    var_88.o = *rax_17
    zmm1_1.q = zmm1_1.q f/ _mm_cvtepi32_pd(zx.q(*(arg1 + 0x34))).q
    float temp0_18 = _mm_cvtpd_ps(zmm1_1)
    zmm0_2.d = -0.5f - (temp0_18 + temp0_18)
    int32_t r9_4 = neg.d(int.d(zmm0_2.d) s>> 1)
    int32_t rdi_3 = r9_4 * 0x3c
    int32_t r14_3 = rdi_3 * 0x3c
    int32_t rcx_9
    
    if (r9_4 s> 0)
        int64_t var_80
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(var_80:4.d)
        int32_t r8_3 = var_80.d + divs.dp.d(temp2_1:temp3_1, r9_4)
        int32_t rdx_8 = r8_3 s/ 0x3c
        int32_t rcx_13 = var_88:4.d + rdx_8
        int32_t rdx_13 = rcx_13 s/ 0x3c
        int32_t r10_2 = var_88.d + rdx_13
        int32_t rcx_14 = rcx_13 + rdx_13 * 0xffffffc4
        int32_t r10_4
        
        if (rax_18 == 0)
            r10_4 = r10_2 * r14_3
        else
            int32_t rbx_1 = 4
            
            if (r9_4 s<= 0x1e)
                rbx_1 = 2
            
            int32_t rdx_15 = r10_2 * 0x3c + rcx_14
            zmm1_1.q = _mm_cvtepi32_pd(zx.q(rdx_15)).q f* 0.10000000000000001
            int64_t r11_1 = int.q(zmm1_1.q)
            
            if (zmm1_1.q f>= 0.0)
                if (r11_1 != -0x8000000000000000)
                    zmm0_2.q = float.d(r11_1)
                    
                    if (not(zmm0_2.q f== zmm1_1.q))
                        zmm1_1.q = float.d(r11_1
                            - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1_1, zmm1_1.q))) & 1))
            else if (r11_1 != -0x8000000000000000)
                zmm0_2.q = float.d(r11_1)
                
                if (not(zmm0_2.q f== zmm1_1.q))
                    zmm1_1.q = float.d(r11_1
                        + ((zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1_1, zmm1_1.q))) & 1) ^ 1))
            
            r10_4 = r10_2 * r14_3 - (rdx_15 - int.d(zmm1_1.q)) * rbx_1
        
        rcx_9 = rcx_14 * rdi_3 + (r8_3 + rdx_8 * 0xffffffc4) * r9_4
            + mods.dp.d(temp2_1:temp3_1, r9_4) + r10_4
    else
        rcx_9 = 0
    
    var_88:4.d = 0
    var_88.d = rcx_9
int64_t var_80_1 = *(arg1 + 0x30)
*arg2 = var_88.o
return arg2
