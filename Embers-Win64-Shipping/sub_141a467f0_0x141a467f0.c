// 函数: sub_141a467f0
// 地址: 0x141a467f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_38 = zmm6
int128_t zmm9
int128_t var_68 = zmm9
int128_t zmm10
int128_t var_78 = zmm10
void var_178
uint64_t var_d0 = __security_cookie ^ &var_178
int64_t r15 = sx.q(*(arg1 + 0x18))
uint64_t result

if (r15.d != 0)
    if (r15.d != 1)
        if (sub_141a47f90(arg1, arg2, arg3).b != 0)
            result.b = 1
        else
            int32_t* rcx_1 = *(arg1 + 0x10)
            int32_t r14_1 = *rcx_1
            int32_t rdi_1 = rcx_1[sx.q(*(arg1 + 0x18)) - 1]
            int32_t var_f0
            sub_141a417b0(&var_f0, r14_1, rdi_1, arg2)
            uint64_t var_140_1
            int32_t var_e4
            uint128_t zmm1_1
            uint128_t zmm2_1
            uint128_t zmm3_1
            int32_t var_148_4
            int32_t var_e8
            int32_t rdx_3
            
            if (arg2.d s< r14_1 || (arg2.d == r14_1 && arg2:4.d.d f< r14_1.q:4.d))
                uint32_t rcx_10 = zx.d(*(arg1 + 8))
                
                if (rcx_10 == 1)
                    uint128_t* rdx_7 = *(arg1 + 0x20)
                    zmm6.d = (*rdx_7).d f- *(r15 * 0x1c + rdx_7 - 0x1c)
                    zmm6.d = zmm6.d f* _mm_cvtepi32_ps(zx.o(var_e8)).d
                else if (rcx_10 != 2)
                    zmm6 = var_e4
                else
                    result = zx.q(var_e8) & 0x80000001
                    
                    if (result.d s< 0)
                        result = zx.q(((result.d - 1) | 0xfffffffe) + 1)
                    
                    if (result.d != 1)
                        zmm6 = var_e4
                    else
                        zmm3_1 = 0x3f7fffff
                        int32_t var_148_1
                        var_148_1.q = var_f0.q
                        var_140_1.d = rdi_1
                        var_140_1:4.d = 0
                        zmm2_1.d = var_140_1:4.d.d f- 0f
                        zmm1_1.d = zmm2_1.d f+ zmm2_1.d
                        zmm1_1.d = zmm1_1.d f- 0.5f
                        int32_t rcx_13 = int.d(zmm1_1.d) s>> 1
                        rdx_3 = rcx_13 - var_f0 + rdi_1
                        var_148_4 = rdx_3
                        zmm2_1.d = zmm2_1.d f- _mm_cvtepi32_ps(zx.o(rcx_13)).d
                        
                        if (zmm2_1.d f>= 0f)
                        label_141a469ab:
                            
                            if (zmm2_1.d f>= zmm3_1.d)
                                int32_t var_144_5 = zmm3_1.d
                                goto label_141a469ce
                            
                            int32_t var_144_4 = zmm2_1.d
                            goto label_141a469ce
                        
                        int32_t var_144_9 = 0
                    label_141a469ce:
                        var_140_1.d = r14_1
                        var_140_1:4.d = 0
                        zmm2_1.d = var_148_4.q:4.d.d f+ var_140_1:4.d
                        zmm1_1.d = zmm2_1.d f+ zmm2_1.d
                        zmm1_1.d = zmm1_1.d f- 0.5f
                        int32_t rax_10 = int.d(zmm1_1.d)
                        zmm1_1 = zmm2_1
                        int32_t rax_13 = (rax_10 s>> 1) + r14_1 + rdx_3
                        int32_t rcx_7 = int.d(zmm1_1.d)
                        
                        if (rcx_7 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_7)).d f== zmm1_1.d))
                            zmm1_1 = _mm_cvtepi32_ps(zx.o(rcx_7
                                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1_1, zmm1_1.q)) & 1)))
                        
                        zmm2_1.d = zmm2_1.d f- zmm1_1.d
                        
                        if (not(zmm2_1.d f>= 0f))
                            zmm6 = var_e4
                            int32_t var_144_6 = 0
                            var_f0.q = rax_13.q
                        else if (zmm2_1.d f>= zmm3_1.d)
                            int32_t var_144_8 = zmm3_1.d
                            var_f0.q = rax_13.q
                            zmm6 = var_e4
                        else
                            zmm6 = var_e4
                            int32_t var_144_7 = zmm2_1.d
                            var_f0.q = rax_13.q
            else
                int32_t var_144_1 = 0
                
                if (arg2.d s> rdi_1 || (arg2.d == rdi_1 && not(arg2:4.d.d f<= rdi_1.q:4.d)))
                    uint32_t rcx_3 = zx.d(*(arg1 + 9))
                    
                    if (rcx_3 == 1)
                        int32_t* rdx_4 = *(arg1 + 0x20)
                        zmm6.d = rdx_4[r15 * 7 - 7].d f- *rdx_4
                        zmm6.d = zmm6.d f* _mm_cvtepi32_ps(zx.o(var_e8)).d
                    else if (rcx_3 != 2)
                        zmm6 = var_e4
                    else
                        result = zx.q(var_e8) & 0x80000001
                        
                        if (result.d s< 0)
                            result = zx.q(((result.d - 1) | 0xfffffffe) + 1)
                        
                        if (result.d == 1)
                            zmm3_1 = 0x3f7fffff
                            int32_t var_144_2 = 0
                            zmm2_1.d = rdi_1.q:4.d.d f- var_f0.q:4.d
                            zmm1_1.d = zmm2_1.d f+ zmm2_1.d
                            zmm1_1.d = zmm1_1.d f- 0.5f
                            int32_t rcx_6 = int.d(zmm1_1.d) s>> 1
                            rdx_3 = rcx_6 - var_f0 + rdi_1
                            var_148_4 = rdx_3
                            zmm2_1.d = zmm2_1.d f- _mm_cvtepi32_ps(zx.o(rcx_6)).d
                            
                            if (zmm2_1.d f>= 0f)
                                goto label_141a469ab
                            
                            int32_t var_144_3 = 0
                            goto label_141a469ce
                        
                        zmm6 = var_e4
                else
                    zmm6 = var_e4
            int32_t rcx_15 = var_f0
            
            if (rcx_15 s< r14_1 || rcx_15 s> rdi_1)
                result.b = 0
            else
                int32_t i_2 = *(arg1 + 0x18)
                int64_t rbx_1 = 0
                int32_t r9_2 = 0
                int64_t r11_1 = *(arg1 + 0x10)
                
                if (i_2 s> 0)
                    int32_t i = i_2
                    
                    do
                        int32_t r8_2 = i & 0x80000001
                        
                        if (r8_2 s< 0)
                            r8_2 = ((r8_2 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(i)
                        int32_t i_1 = (temp3_1 - temp2_1) s>> 1
                        i = i_1
                        int32_t rax_25 = i_1 + r9_2
                        
                        if (rcx_15 s>= *(r11_1 + (sx.q(rax_25) << 2)))
                            r9_2 = r8_2 + rax_25
                    while (i s> 0)
                
                int32_t rdi_2 = -1
                int32_t r14_2 = -1
                
                if (r9_2 - 1 s>= 0)
                    r14_2 = r9_2 - 1
                
                if (r9_2 s< i_2)
                    rdi_2 = r9_2
                
                uint128_t zmm8
                
                if (r9_2 - 1 s< 0 || r9_2 s>= i_2)
                    zmm8 = zx.o(0)
                else
                    int64_t rax_27 = sx.q(r9_2)
                    int32_t rdx_10 = *(r11_1 + (rax_27 << 2) - 4)
                    int32_t rax_29 = *(r11_1 + (rax_27 << 2)) - rdx_10
                    zmm8.d = _mm_cvtepi32_ps(zx.o(rcx_15 - rdx_10)).d f+ var_f0.q:4.d
                    zmm8.d = zmm8.d f/ _mm_cvtepi32_ps(zx.o(rax_29)).d
                
                int64_t* rcx_17 = data_143f29fe8
                int32_t rax_31 = (*(*rcx_17 + 0x90))(rcx_17)
                int64_t rdx_11 = *(arg1 + 0x20)
                
                if (r14_2 != 0xffffffff)
                    int64_t r8_6 = sx.q(r14_2)
                    result = r8_6 * 0x1c + rdx_11
                    
                    if (rdi_2 != 0xffffffff)
                        int64_t r10_1 = sx.q(rdi_2)
                        uint128_t* rax_34 = r10_1 * 0x1c
                        int96_t var_130_1 = (*result).12
                        uint64_t var_120_1 = *(result + 0x10)
                        result = zx.q((*(result + 0x18)).b)
                        uint64_t var_e0_1 = *(rax_34 + rdx_11 + 0x10)
                        var_f0.o = *(rax_34 + rdx_11)
                        
                        if (result.b != 0)
                        label_141a46cca:
                            uint128_t zmm0_1
                            
                            if (result.b == 2)
                                uint8_t rdi_4 = (var_120_1 u>> 0x20).b
                                int32_t var_ec
                                
                                if (rdi_4 u> 1 || ((var_e0_1 u>> 0x20).b & 0xfd) != 0)
                                    int64_t r9_3 = sx.q(*(arg1 + 0x9c))
                                    zmm0_1.q = float.d(*(arg1 + 0x98))
                                    int64_t rdx_12 = *(arg1 + 0x10)
                                    var_140_1:4.d = 0
                                    int64_t rcx_22 = sx.q(*(rdx_12 + (r8_6 << 2)))
                                    zmm2_1.q = 0x3ff0000000000000 f/ zmm0_1.q
                                    var_140_1.d = rcx_22.d
                                    uint64_t var_138_7 = var_140_1
                                    int64_t rcx_23 = sx.q(*(rdx_12 + (r10_1 << 2)))
                                    var_140_1.d = rcx_23.d
                                    var_140_1:4.d = 0
                                    zmm0_1.q = float.d(r9_3.d)
                                    zmm0_1.q = zmm0_1.q f* zmm2_1.q
                                    zmm3_1.q = float.d(rcx_22 * r9_3)
                                    uint128_t zmm7
                                    zmm7.d = 1f f/ _mm_cvtpd_ps(zmm0_1).d
                                    zmm1_1.d = float.s(r9_3.d)
                                    uint128_t zmm4_1
                                    zmm4_1.q = float.d(rcx_23 * r9_3)
                                    zmm0_1 = zmm1_1
                                    zmm1_1.d = zmm1_1.d f* var_140_1:4.d
                                    zmm0_1.d = zmm0_1.d f* var_138_7:4.d
                                    zmm3_1.q = zmm3_1.q f+ _mm_cvtps_pd(zmm0_1.q).q
                                    zmm3_1.q = zmm3_1.q f* zmm2_1.q
                                    zmm4_1.q = zmm4_1.q f+ _mm_cvtps_pd(zmm1_1.q).q
                                    uint64_t var_138_8 = zmm3_1.q
                                    zmm4_1.q = zmm4_1.q f* zmm2_1.q
                                    uint64_t var_140_3 = zmm4_1.q
                                    zmm0_1.q = zmm4_1.q f- zmm3_1.q
                                    uint128_t zmm12 = _mm_cvtpd_ps(zmm0_1)
                                    zmm0_1.d = zmm7.d f* var_130_1:8.d
                                    uint128_t zmm0_3 = atanf(zmm0_1.d)
                                    zmm2_1 = zmm0_3
                                    zmm0_3.d = zmm0_3.d f* 0.159154937f
                                    
                                    if (zmm2_1.d f< 0f)
                                        zmm0_3.d = zmm0_3.d f- 0.5f
                                    else
                                        zmm0_3.d = zmm0_3.d f+ 0.5f
                                    
                                    int128_t zmm11 = 0xbf800000
                                    zmm0_3.d =
                                        _mm_cvtepi32_ps(zx.o(int.d(zmm0_3.d))).d f* 6.28318548f
                                    zmm2_1.d = zmm2_1.d f- zmm0_3.d
                                    
                                    if (not(zmm2_1.d f<= 1.57079637f))
                                        zmm3_1 = 0xbf800000
                                        zmm0_3.d = 3.14159274f f- zmm2_1.d
                                        zmm2_1 = zmm0_3
                                    else if (zmm2_1.d f>= -1.57079637f)
                                        zmm3_1 = 0x3f800000
                                    else
                                        zmm3_1 = 0xbf800000
                                        zmm0_3.d = -3.14159274f f- zmm2_1.d
                                        zmm2_1 = zmm0_3
                                    
                                    zmm1_1.d = zmm2_1.d f* zmm2_1.d
                                    zmm0_3.d = zmm1_1.d f* 2.3889859e-08f
                                    float zmm4_2 = 2.75255616e-06f f- zmm0_3.d
                                    zmm0_3.d = zmm1_1.d f* 2.60516146e-07f
                                    zmm4_2 = ((((zmm4_2 f* zmm1_1.d - 0.000198408743f) f* zmm1_1.d
                                        + 0.00833333097f) f* zmm1_1.d - 0.166666672f) f* zmm1_1.d + 1f)
                                        f* zmm2_1.d
                                    zmm2_1.d = 2.47604949e-05f f- zmm0_3.d
                                    zmm2_1.d = zmm2_1.d f* zmm1_1.d
                                    zmm2_1.d = zmm2_1.d f- 0.00138883782f
                                    zmm2_1.d = zmm2_1.d f* zmm1_1.d
                                    zmm2_1.d = zmm2_1.d f+ 0.0416666381f
                                    zmm2_1.d = zmm2_1.d f* zmm1_1.d
                                    zmm2_1.d = zmm2_1.d f- 0.5f
                                    zmm2_1.d = zmm2_1.d f* zmm1_1.d
                                    zmm2_1.d = zmm2_1.d f+ 1f
                                    zmm2_1.d = zmm2_1.d f* zmm3_1.d
                                    uint128_t zmm15
                                    
                                    if (rdi_4 u< 2)
                                        zmm1_1.d = zmm7.d f* var_130_1:8.d
                                        zmm0_3.d = zmm12.d f* zmm12.d
                                        zmm1_1.d = zmm1_1.d f* zmm12.d
                                        zmm1_1.d = zmm1_1.d f* zmm1_1.d
                                        zmm1_1.d = zmm1_1.d f+ zmm0_3.d
                                        zmm15.d = _mm_sqrt_ss(zx.o(0).d, zmm1_1.d).d f* 0.333333343f
                                    else
                                        zmm15 = var_120_1.d
                                    
                                    zmm0_3 = zmm15
                                    zmm15.d = zmm15.d f* zmm4_2
                                    zmm0_3.d = zmm0_3.d f* zmm2_1.d
                                    zmm15.d = zmm15.d f+ var_130_1.d
                                    zmm1_1.q = _mm_cvtps_pd(zmm0_3.q).q f+ var_138_8
                                    int32_t var_148_6 = _mm_cvtpd_ps(zmm1_1).d
                                    zmm0_3.d = zmm7.d f* var_ec
                                    uint128_t zmm0_4 = atanf(zmm0_3.d)
                                    zmm2_1 = zmm0_4
                                    zmm0_4.d = zmm0_4.d f* 0.159154937f
                                    
                                    if (zmm2_1.d f< 0f)
                                        zmm0_4.d = zmm0_4.d f- 0.5f
                                    else
                                        zmm0_4.d = zmm0_4.d f+ 0.5f
                                    
                                    zmm0_4.d =
                                        _mm_cvtepi32_ps(zx.o(int.d(zmm0_4.d))).d f* 6.28318548f
                                    zmm2_1.d = zmm2_1.d f- zmm0_4.d
                                    
                                    if (not(zmm2_1.d f<= 1.57079637f))
                                        zmm0_4.d = 3.14159274f f- zmm2_1.d
                                        zmm2_1 = zmm0_4
                                    else if (zmm2_1.d f>= -1.57079637f)
                                        zmm11 = 0x3f800000
                                    else
                                        zmm0_4.d = -3.14159274f f- zmm2_1.d
                                        zmm2_1 = zmm0_4
                                    
                                    zmm1_1.d = zmm2_1.d f* zmm2_1.d
                                    zmm0_4.d = zmm1_1.d f* 2.3889859e-08f
                                    int128_t zmm13
                                    zmm13.d = 2.75255616e-06f f- zmm0_4.d
                                    zmm0_4.d = zmm1_1.d f* 2.60516146e-07f
                                    zmm13.d = zmm13.d f* zmm1_1.d
                                    int128_t zmm14
                                    zmm14.d = 2.47604949e-05f f- zmm0_4.d
                                    zmm13.d = zmm13.d f- 0.000198408743f
                                    zmm14.d = zmm14.d f* zmm1_1.d
                                    zmm13.d = zmm13.d f* zmm1_1.d
                                    zmm14.d = zmm14.d f- 0.00138883782f
                                    zmm13.d = zmm13.d f+ 0.00833333097f
                                    zmm14.d = zmm14.d f* zmm1_1.d
                                    zmm13.d = zmm13.d f* zmm1_1.d
                                    zmm14.d = zmm14.d f+ 0.0416666381f
                                    zmm13.d = zmm13.d f- 0.166666672f
                                    zmm14.d = zmm14.d f* zmm1_1.d
                                    zmm13.d = zmm13.d f* zmm1_1.d
                                    zmm14.d = zmm14.d f- 0.5f
                                    zmm13.d = zmm13.d f+ 1f
                                    zmm14.d = zmm14.d f* zmm1_1.d
                                    zmm13.d = zmm13.d f* zmm2_1.d
                                    zmm14.d = zmm14.d f+ 1f
                                    zmm14.d = zmm14.d f* zmm11.d
                                    
                                    if (((var_e0_1 u>> 0x20).b & 0xfd) == 0)
                                        zmm7.d = zmm7.d f* var_ec
                                        zmm0_4.d = zmm12.d f* zmm12.d
                                        zmm7.d = zmm7.d f* zmm12.d
                                        zmm7.d = zmm7.d f* zmm7.d
                                        zmm7.d = zmm7.d f+ zmm0_4.d
                                        zmm1_1.d = _mm_sqrt_ss(0, zmm7.d).d f* 0.333333343f
                                    else
                                        zmm1_1 = var_e4
                                    
                                    zmm8 ^= data_142d3f780
                                    zmm0_4.d = zmm1_1.d f* zmm13.d
                                    zmm1_1.d = zmm1_1.d f* zmm14.d
                                    zmm10.d = var_f0.d f- zmm0_4.d
                                    double zmm4_3
                                    zmm4_3.d = 1f f/ zmm12.d
                                    zmm2_1.q = var_140_3 f- _mm_cvtps_pd(zmm1_1.q).q
                                    zmm1_1.q = _mm_cvtps_pd(_mm_cvtpd_ps(zmm2_1).q).q f- var_138_8
                                    zmm0_4.q = _mm_cvtps_pd(var_148_6.q).q f- var_138_8
                                    zmm2_1.d = _mm_cvtpd_ps(zmm1_1).d f* zmm4_3.d
                                    zmm1_1 = _mm_cvtpd_ps(zmm0_4)
                                    zmm3_1 = _mm_cvtps_pd(zmm2_1.q)
                                    zmm1_1.d = zmm1_1.d f* zmm4_3.d
                                    zmm0_4.q = 0x3ff0000000000000 f- zmm3_1.q
                                    zmm4_3 = _mm_cvtps_pd(zmm1_1.q).q
                                    zmm2_1.q = zmm3_1.q f- zmm4_3
                                    zmm0_4.q = zmm0_4.q f- zmm2_1.q
                                    zmm1_1.q = zmm2_1.q f- zmm4_3
                                    zmm0_4.q = zmm0_4.q f- zmm1_1.q
                                    double var_108_1 = zmm4_3 * 3.0
                                    zmm1_1.q = zmm1_1.q f* 3.0
                                    uint64_t var_f8_1 = zmm0_4.q
                                    zmm0_4.q = fconvert.d(zmm8.d)
                                    uint64_t var_100_1 = zmm1_1.q
                                    uint64_t var_110 = zmm0_4.q
                                    int32_t rax_47
                                    int64_t zmm7_1
                                    uint128_t zmm9_1
                                    uint128_t zmm10_1
                                    int128_t zmm11_1
                                    rax_47, zmm7_1, zmm9_1, zmm10_1, zmm11_1 =
                                        sub_141a69930(&var_110, &var_f0)
                                    uint128_t zmm2_2
                                    
                                    if (rax_47 != 1)
                                        int64_t rcx_25 = 3
                                        int64_t* rax_48 = &var_f0
                                        zmm2_2 = 0xff7fffff
                                        int32_t var_d8
                                        
                                        if (&var_f0 u> &var_d8)
                                            rcx_25 = 0
                                        
                                        do
                                            uint128_t zmm1_2 = zx.o(*rax_48)
                                            
                                            if (not(zmm1_2.q f< 0.0) && not(zmm1_2.q f> zmm7_1))
                                                int128_t zmm0_5
                                                
                                                if (not(zmm2_2.d f< zmm9_1.d))
                                                    zmm0_5.q = fconvert.d(zmm2_2.d)
                                                
                                                if (zmm2_2.d f< zmm9_1.d
                                                        || not(zmm1_2.q f<= zmm0_5.q))
                                                    zmm2_2 = _mm_cvtpd_ps(zmm1_2)
                                            
                                            rax_48 = &rax_48[1]
                                            rbx_1 += 1
                                        while (rbx_1 != rcx_25)
                                        
                                        if (not(zmm2_2.d f!= -3.40282347e+38f))
                                            zmm2_2 = zmm9_1
                                    else
                                        zmm2_2 = _mm_cvtpd_ps(zx.o(var_f0.q))
                                    
                                    uint128_t zmm0_6
                                    zmm0_6, result, zmm6 = sub_141a3b3d0(var_130_1.d, zmm15, 
                                        zmm10_1, zmm11_1, zmm2_2.d)
                                    zmm0_6.d = zmm0_6.d f+ zmm6.d
                                    zmm6 = zmm0_6
                                else
                                    int64_t rax_38 = *(arg1 + 0x10)
                                    zmm3_1 = var_f0
                                    int32_t var_158_1 = zmm8.d
                                    zmm1_1 = _mm_cvtepi32_ps(zx.o(*(rax_38 + (r10_1 << 2))
                                        - *(rax_38 + (r8_6 << 2))))
                                    zmm0_1 = zmm1_1
                                    zmm1_1.d = zmm1_1.d f* var_130_1:8.d
                                    zmm0_1.d = zmm0_1.d f* var_ec
                                    zmm1_1.d = zmm1_1.d f* 0.333333343f
                                    zmm0_1.d = zmm0_1.d f* 0.333333343f
                                    zmm2_1.d = zmm3_1.d f- zmm0_1.d
                                    zmm0_1 = var_130_1.d
                                    zmm1_1.d = zmm1_1.d f+ zmm0_1.d
                                    uint128_t zmm0_2
                                    zmm0_2, result, zmm6 =
                                        sub_141a3b3d0(zmm0_1, zmm1_1, zmm2_1, zmm3_1, var_158_1)
                                    zmm0_2.d = zmm0_2.d f+ zmm6.d
                                    zmm6 = zmm0_2
                            else
                                zmm0_1.d = var_130_1.d.d f+ zmm6.d
                                zmm6 = zmm0_1
                        else
                            if (rax_31 != 0)
                                result = zx.q(result.b)
                                
                                if ((*(rax_34 + rdx_11 + 0x18)).b == 2)
                                    result = 2
                            
                            if (result.b != 0)
                                goto label_141a46cca
                            
                            zmm1_1.d = var_f0.d f- var_130_1.d
                            zmm1_1.d = zmm1_1.d f* zmm8.d
                            zmm1_1.d = zmm1_1.d f+ var_130_1.d
                            zmm1_1.d = zmm1_1.d f+ zmm6.d
                            zmm6 = zmm1_1
                    else
                        zmm6.d = zmm6.d f+ *result
                else
                    zmm6.d = zmm6.d f+ *(sx.q(rdi_2) * 0x1c + rdx_11)
                
                *arg3 = zmm6.d
                result.b = 1
    else
        result = zx.q(r15.b)
        *arg3 = **(arg1 + 0x20)
else if (*(arg1 + 0x34) == r15.b)
    result.b = 0
else
    *arg3 = *(arg1 + 0x30)
    result.b = 1

__security_check_cookie(var_d0 ^ &var_178)
return result
