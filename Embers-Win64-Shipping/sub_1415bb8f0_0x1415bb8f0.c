// 函数: sub_1415bb8f0
// 地址: 0x1415bb8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
int64_t* r12 = arg1
int64_t* r15 = arg2
int32_t r14 = 0
uint64_t* var_2b0 = arg8
float var_258 = 3.40282347e+38f
int32_t* var_1c8 = arg9
int32_t var_268 = 0
int64_t var_278 = 0
int64_t var_270 = 0
char rax_2
float zmm6[0x4]
int128_t zmm7
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
int128_t zmm11
float zmm12[0x4]
float zmm13[0x4]
rax_2, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 =
    sub_1416de4a0(r12, arg2, arg3, arg4, &var_278)
int32_t rsi_1

if (rax_2 != 0)
    int128_t var_230
    __builtin_memset(&var_230, 0, 0x18)
    float (* rsi_2)[0x4] = var_230:8.q
    int32_t i = 0
    float (* rbx_1)[0x4] = var_230.q
    int64_t* var_290
    int32_t i_2
    int64_t var_220
    float zmm1_1[0x4]
    
    if (var_270.d s> 0)
        do
            char rax_4
            rax_4, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, arg5, arg6 =
                sub_141743d50(sx.q(i) * 0x38 + var_278, *r12, *r15)
            
            if (rax_4 != 0)
                i_2 = i
                var_290 = &var_278
                
                if (var_220 == rsi_2)
                    sub_141701fc0(&var_230, rsi_2, &var_290)
                    rsi_2 = var_230:8.q
                    rbx_1 = var_230.q
                else
                    *rsi_2 = var_290.o
                    rsi_2 = &rsi_2[1]
                    var_230:8.q = rsi_2
                
                int64_t r8_4 = (rsi_2 - rbx_1) s>> 4
                
                if (r8_4 s>= 2)
                    zmm1_1 = rsi_2[-1]
                    int64_t j_1 = r8_4 - 1
                    
                    if (j_1 s> 0)
                        int64_t r11_1 = sx.q(_mm_bsrli_si128(zmm1_1, 8)[0]) * 0x38
                        int64_t j
                        
                        do
                            j = (j_1 - 1) s>> 1
                            int64_t r10_2 = j * 2
                            int64_t rdx_2 = **(rbx_1 + (r10_2 << 3))
                            
                            if ((*(r11_1 + rdx_2 + 0x18))[0] f>=
                                    *(sx.q((*rbx_1)[r10_2 * 2 + 2]) * 0x38 + rdx_2 + 0x18))
                                break
                            
                            rbx_1[j_1] = *(rbx_1 + (r10_2 << 3))
                            j_1 = j
                        while (j s> 0)
                    
                    rbx_1[j_1] = zmm1_1
            
            i += 1
        while (i s< var_270.d)
    
    int64_t rcx_9 = (rsi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_9 == 0)
        rdx_4 = var_278
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_278
    
    float zmm0_1[0x4] = *rdx_4
    int64_t* rdi_1 = nullptr
    zmm1_1 = rdx_4[1]
    var_290 = nullptr
    float var_58_1[0x4] = zmm6
    int128_t var_68_1 = zmm7
    float var_78_1[0x4] = zmm8
    float var_88_1[0x4] = zmm9
    float var_98_1[0x4] = zmm10
    int128_t var_a8_1 = zmm11
    float var_b8_1[0x4] = zmm12
    float var_c8_1[0x4] = zmm13
    float var_130[0x4] = zmm0_1
    i_2.q = 0
    float var_120_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    float var_d8_1[0x4] = arg5
    float var_e8_1[0x4] = arg6
    int64_t var_100_1 = rdx_4[3][0].q
    float var_110_1[0x4] = rdx_4[2]
    int512_t zmm6_2
    int512_t zmm7_1
    int512_t zmm8_1
    int512_t zmm9_1
    int512_t zmm10_1
    int512_t zmm11_1
    int512_t zmm12_1
    int512_t zmm13_1
    int512_t zmm14
    int512_t zmm15
    
    if (rcx_9 == 0)
    label_1415bc5df:
        zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14, zmm15 =
            sub_14154a2a0(*r12, *r15, &var_130, arg7, arg8, var_1c8, arg10)
        rsi_1 = 1
    else
        zmm10 = zx.o(0)
        
        while (true)
            if (rdx_5 s< 0x80)
                int64_t r13_1 = sx.q((*rbx_1)[2])
                int32_t var_280_1 = r13_1.d
                
                if (rcx_9 s>= 2)
                    zmm1_1 = rsi_2[-1]
                    int64_t i_3 = 0
                    int64_t i_4 = 0
                    rsi_2[-1] = *rbx_1
                    int64_t r11_4 = (&rsi_2[-1] - rbx_1) s>> 4
                    int64_t rdi_3 = (r11_4 - 1) s>> 1
                    
                    if (rdi_3 s> 0)
                        do
                            int64_t r9_1 = i_4 * 2
                            int64_t rcx_11 = r9_1 * 2
                            int64_t r8_7 = **(rbx_1 + (rcx_11 << 3) + 0x20)
                            i_4 = r9_1 + 1
                            
                            if ((*(sx.q((*rbx_1)[rcx_11 * 2 + 0xa]) * 0x38 + r8_7 + 0x18))[0] f<=
                                    *(sx.q((*rbx_1)[rcx_11 * 2 + 6]) * 0x38 + r8_7 + 0x18))
                                i_4 = r9_1 + 2
                            
                            rbx_1[i_3] = rbx_1[i_4]
                            i_3 = i_4
                        while (i_4 s< rdi_3)
                    
                    if (i_4 == rdi_3 && (r11_4.b & 1) == 0)
                        rbx_1[i_3] = rbx_1[r11_4 - 1]
                        i_3 = r11_4 - 1
                    
                    if (i_3 s> 0)
                        int64_t r11_6 = sx.q(_mm_bsrli_si128(zmm1_1, 8)[0]) * 0x38
                        int64_t i_1
                        
                        do
                            i_1 = (i_3 - 1) s>> 1
                            int64_t r9_3 = i_1 * 2
                            int64_t rdx_8 = **(rbx_1 + (r9_3 << 3))
                            
                            if ((*(r11_6 + rdx_8 + 0x18))[0] f>=
                                    *(sx.q((*rbx_1)[r9_3 * 2 + 2]) * 0x38 + rdx_8 + 0x18))
                                break
                            
                            rbx_1[i_3] = *(rbx_1 + (r9_3 << 3))
                            i_3 = i_1
                        while (i_1 s> 0)
                    
                    r14 = var_268
                    rbx_1[i_3] = zmm1_1
                
                rsi_2 -= 0x10
                int32_t* rdi_5 = r13_1 * 0x38 + var_278
                var_230:8.q = rsi_2
                
                if (rdi_5[0xd].b != 0)
                label_1415bc560:
                    rcx_9 = (rsi_2 - rbx_1) s>> 4
                    
                    if (rcx_9 != 0)
                        r14 = var_268
                        rdx_5 += 1
                        continue
                else
                    arg5 = rdi_5[3]
                    arg6 = rdi_5[4]
                    zmm6 = rdi_5[5]
                    void* rax_20 = *arg3
                    void* rcx_15 = *(rax_20 + 0x10)
                    zmm7 = *(rax_20 + 0x28)
                    zmm8 = *(rax_20 + 0x2c)
                    zmm9 = *(rax_20 + 0x30)
                    float zmm3_1[0x4] = *(rcx_15 + 0x20)
                    float zmm4_1[0x4] = *(rcx_15 + 0x1c)
                    float zmm5_1[0x4] = *(rcx_15 + 0x24)
                    arg6[0] = arg6[0] * zmm8[0]
                    arg5[0] = arg5[0] f* zmm7.d
                    arg6[0] = arg6[0] * zmm3_1[0]
                    arg5[0] = arg5[0] * zmm4_1[0]
                    zmm6[0] = zmm6[0] * zmm9[0]
                    arg6[0] = arg6[0] + arg5[0]
                    zmm6[0] = zmm6[0] * zmm5_1[0]
                    arg6[0] = arg6[0] + zmm6[0]
                    int32_t* rax_21
                    int32_t r14_2
                    float zmm2_1[0x4]
                    
                    if (arg6[0] < zmm10[0])
                        r14_2 = r14 | 2
                        int32_t var_180_1 = *(rcx_15 + 0x18)
                        int64_t var_188
                        rax_21 = &var_188
                        var_188 = *(rcx_15 + 0x10)
                    else
                        zmm2_1 = *(rcx_15 + 0x28)
                        float var_1b8
                        rax_21 = &var_1b8
                        zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                        r14_2 = r14 | 1
                        zmm2_1[0] = zmm2_1[0] * zmm3_1[0]
                        zmm2_1[0] = zmm2_1[0] f+ *(rcx_15 + 0x10)
                        zmm2_1[0] = zmm2_1[0] * zmm5_1[0]
                        zmm2_1[0] = zmm2_1[0] f+ *(rcx_15 + 0x14)
                        zmm2_1[0] = zmm2_1[0] f+ *(rcx_15 + 0x18)
                        var_1b8 = zmm2_1[0]
                        float var_1b4_1 = zmm2_1[0]
                        float var_1b0_1 = zmm2_1[0]
                    
                    zmm0_1 = zx.o(*rax_21)
                    zmm6 ^= 0x80000000
                    arg6 ^= 0x80000000
                    zmm11.d = rax_21[2].d f* zmm9[0]
                    int32_t rcx_17 = r14_2 & 0xfffffffd
                    arg5 ^= 0x80000000
                    float var_27c_1 = zmm6[0]
                    zmm0_1[0] = zmm0_1[0] f* zmm7.d
                    float temp0_5[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                    
                    if ((r14_2.b & 2) == 0)
                        rcx_17 = r14_2
                    
                    temp0_5[0] = temp0_5[0] * zmm8[0]
                    float var_1f8_1 = zmm0_1[0]
                    int32_t var_1f0_1 = zmm11.d
                    int32_t rdx_10 = rcx_17 & 0xfffffffe
                    float var_1f4_1 = temp0_5[0]
                    int128_t* rax_26 = arg4[2]
                    
                    if ((rcx_17.b & 1) == 0)
                        rdx_10 = rcx_17
                    
                    var_268 = rdx_10
                    zmm8 = *(rax_26 + 4)
                    zmm5_1 = *(rax_26 + 8)
                    zmm7 = *rax_26
                    zmm3_1 = *(rax_26 + 0xc)
                    arg6[0] = arg6[0] * zmm5_1[0]
                    arg5[0] = arg5[0] * zmm5_1[0]
                    zmm6[0] = zmm6[0] * zmm8[0]
                    zmm6[0] = zmm6[0] - arg6[0]
                    zmm6[0] = zmm6[0] f* zmm7.d
                    arg6[0] = arg6[0] f* zmm7.d
                    arg5[0] = arg5[0] - zmm6[0]
                    arg5[0] = arg5[0] * zmm8[0]
                    zmm6[0] = zmm6[0] + zmm6[0]
                    arg6[0] = arg6[0] - arg5[0]
                    arg5[0] = arg5[0] + arg5[0]
                    zmm6[0] = zmm6[0] * zmm3_1[0]
                    zmm6[0] = zmm6[0] * zmm5_1[0]
                    arg6[0] = arg6[0] + arg6[0]
                    zmm6[0] = zmm6[0] * zmm8[0]
                    zmm6[0] = zmm6[0] + arg5[0]
                    arg5[0] = arg5[0] * zmm5_1[0]
                    arg6[0] = arg6[0] * zmm8[0]
                    arg6[0] = arg6[0] - arg5[0]
                    arg6[0] = arg6[0] f* zmm7.d
                    arg6[0] = arg6[0] * zmm3_1[0]
                    arg6[0] = arg6[0] + zmm6[0]
                    zmm6[0] = zmm6[0] - arg6[0]
                    arg5[0] = arg5[0] f* zmm7.d
                    arg6[0] = arg6[0] + var_27c_1
                    arg5[0] = arg5[0] * zmm3_1[0]
                    arg5[0] = arg5[0] - zmm6[0]
                    arg5[0] = arg5[0] + arg6[0]
                    arg5[0] = arg5[0] + arg6[0]
                    zmm6[0] = zmm6[0] + arg5[0]
                    float var_138_1 = arg5[0]
                    int64_t var_240 = (_mm_unpacklo_ps(arg6, zmm6[0].q)).q
                    float var_238_3 = var_138_1
                    float var_1a8
                    zmm10, zmm11 = sub_141758e70(*arg4, &var_1a8, &var_240, zx.o(0))
                    int128_t* rax_28 = arg4[1]
                    float zmm6_1[0x4] = var_1a8
                    float zmm5_2[0x4] = *rax_28
                    int32_t var_1a4
                    float temp0_7[0x4] = _mm_unpacklo_ps(var_1a4, 0)
                    int32_t var_1a0
                    float temp0_8[0x4] = _mm_unpacklo_ps(zmm6_1, var_1a0.q)
                    float temp0_9[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
                    float temp0_10[0x4] = _mm_unpacklo_ps(temp0_8, temp0_7[0].q)
                    float temp0_11[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                    uint128_t zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xc9), temp0_9)
                    float temp0_15[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xd2), temp0_11)
                    float temp0_16[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
                    float temp0_17[0x4] = _mm_sub_ps(temp0_15, zmm0_2)
                    float temp0_18[0x4] = _mm_add_ps(temp0_17, temp0_17)
                    float temp0_19[0x4] = _mm_mul_ps(temp0_16, temp0_18)
                    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc9), temp0_9)
                    float temp0_22[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xd2)
                    float temp0_23[0x4] = _mm_add_ps(temp0_19, temp0_10)
                    float temp0_27[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_22, temp0_11), zmm0_2), temp0_23), 
                        rax_28[1])
                    zmm0_1[0] = zmm0_1[0] - temp0_27[0]
                    float var_1e8_1 = temp0_27[0]
                    zmm0_2 = _mm_shuffle_ps(temp0_27, temp0_27, 0x55)
                    temp0_5[0] = temp0_5[0] f- zmm0_2.d
                    float temp0_29[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xaa)
                    zmm11.d = zmm11.d f- temp0_29[0]
                    float var_1e0_1 = temp0_29[0]
                    int32_t var_1e4_1 = zmm0_2.d
                    float var_198 = zmm0_1[0]
                    zmm0_1[0] = zmm0_1[0] f* rdi_5[3]
                    float var_194_1 = temp0_5[0]
                    temp0_5[0] = temp0_5[0] f* rdi_5[4]
                    int32_t var_190_1 = zmm11.d
                    zmm11.d = zmm11.d f* rdi_5[5]
                    temp0_5[0] = temp0_5[0] + zmm0_1[0]
                    zmm12 = rdi_5[6]
                    zmm0_2.d = zmm12.d f* 0.00999999978f
                    temp0_5[0] = temp0_5[0] f+ zmm11.d
                    zmm0_2 = __andps_xmmxud_memxud(zmm0_2, data_142d3f770)
                    zmm13 = __minss_xmmss_memss(temp0_5[0], var_258)
                    var_258 = zmm13[0]
                    zmm13[0] = zmm13[0] - zmm12[0]
                    
                    if (__andps_xmmxud_memxud(zmm13, data_142d3f770)[0] f<= zmm0_2.d)
                        zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14, 
                            zmm15 = sub_14154a2a0(*r12, *r15, rdi_5, arg7, arg8, var_1c8, arg10)
                        rdi_1 = var_290
                        rsi_1 = 0
                        break
                    
                    if (not(zmm13[0] < zmm12[0]))
                        int64_t r14_4 = sx.q(r12[1].d)
                        zmm0_2 = zx.o(*(rdi_5 + 0xc))
                        var_130[0] = *rdi_5
                        var_130[1] = rdi_5[1]
                        var_130[2] = rdi_5[2]
                        var_120_1[1] = rdi_5[5]
                        var_120_1[3] = rdi_5[7]
                        var_110_1[0] = rdi_5[8]
                        var_110_1[1] = rdi_5[9]
                        var_110_1[2] = rdi_5[0xa]
                        var_110_1[3] = rdi_5[0xb]
                        var_100_1.d = rdi_5[0xc]
                        var_100_1:4.b = rdi_5[0xd].b
                        int32_t rax_40 = (r14_4 + 1).d
                        var_120_1[2] = zmm12[0]
                        var_130[3].q = zmm0_2.q
                        int32_t var_208_1 = r14_4.d
                        r12[1].d = rax_40
                        
                        if (rax_40 s> *(r12 + 0xc))
                            sub_14083a7e0(r12)
                        
                        int64_t rcx_20 = *r12
                        int64_t r14_5 = r14_4 * 3
                        *(rcx_20 + (r14_5 << 2)) = var_1f8_1.q
                        *(rcx_20 + (r14_5 << 2) + 8) = var_1f0_1
                        int64_t r13_2 = sx.q(r15[1].d)
                        int32_t rax_42 = (r13_2 + 1).d
                        r15[1].d = rax_42
                        
                        if (rax_42 s> *(r15 + 0xc))
                            sub_14083a7e0(r15)
                        
                        int64_t rcx_22 = *r15
                        int64_t rdx_15 = r13_2 * 3
                        int32_t var_288 = 0
                        *(rcx_22 + (rdx_15 << 2)) = var_1e8_1.q
                        *(rcx_22 + (rdx_15 << 2) + 8) = var_1e0_1
                        rdi_5[0xd].b = 1
                        int32_t var_284
                        
                        if (var_284 s< 0 && var_284 != 0)
                            sub_1405c5570(&var_290, 0)
                        
                        sub_1415c5980(&var_278, var_280_1, &var_198, &var_290)
                        int32_t r8_11 = var_270.d
                        int64_t r13_3 = sx.q(var_288)
                        int32_t var_27c_2 = r8_11
                        int32_t rax_45 = r8_11 + r13_3.d
                        var_270.d = rax_45
                        
                        if (rax_45 s> var_270:4.d)
                            sub_1407c3b60(&var_278)
                            r8_11 = var_27c_2
                        
                        if (r13_3.d s>= 3)
                            int64_t rdi_6 = 0
                            char var_298_1 = 0
                            int64_t var_168_1 = r13_3
                            int64_t rax_46
                            
                            if (r13_3.d s<= 0)
                                rax_46.b = 0
                            else
                                void* r12_1 = sx.q(r8_11) * 0x38
                                int32_t r11_7 = 1 - r8_11
                                int32_t rbx_2 = r8_11
                                int32_t var_200_1 = r11_7
                                
                                while (true)
                                    int64_t* rdx_18 = var_290
                                    int64_t rcx_26 = var_278
                                    int64_t rax_48 = sx.q(rdx_18[rdi_6].d)
                                    int64_t rsi_3 = sx.q(*(&rdx_18[rdi_6] + 4))
                                    void* r9_5 = r12_1 + rcx_26
                                    int32_t var_204_1 = rax_48.d
                                    int64_t r10_8 = rax_48 * 0x38 + rcx_26
                                    int32_t r13_4 = rbx_2 + 1
                                    
                                    if (r11_7 + rbx_2 s>= r13_3.d)
                                        r13_4 = r8_11
                                    
                                    int64_t r8_12 = *r15
                                    int32_t r11_8 = rbx_2
                                    
                                    if (rbx_2 s<= r8_11)
                                        r11_8 = rax_45
                                    
                                    int64_t rdx_21 = *arg1
                                    int32_t rax_54 = *(r10_8 + (rsi_3 << 2))
                                    zmm6 = *(rdx_21 + (r14_5 << 2) + 4)
                                    zmm6[0] = zmm6[0] f- *(r8_12 + (r14_5 << 2) + 4)
                                    zmm1_1 = *(rdx_21 + (r14_5 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_12 + (r14_5 << 2) + 8)
                                    int64_t rax_56 =
                                        sx.q(*(r10_8 + (sx.q((rsi_3 + 1).d s% 3) << 2)))
                                    zmm3_1 = *(rdx_21 + (r14_5 << 2))
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_12 + (r14_5 << 2))
                                    int32_t var_20c_1 = rax_56.d
                                    int64_t rcx_29 = rax_56 * 3
                                    zmm10 = *(rdx_21 + (rcx_29 << 2))
                                    zmm10[0] = zmm10[0] f- *(r8_12 + (rcx_29 << 2))
                                    zmm7.d = (*(rdx_21 + (rcx_29 << 2) + 4)).d f-
                                        *(r8_12 + (rcx_29 << 2) + 4)
                                    zmm11.d = (*(rdx_21 + (rcx_29 << 2) + 8)).d f-
                                        *(r8_12 + (rcx_29 << 2) + 8)
                                    int64_t rcx_30 = sx.q(rax_54) * 3
                                    zmm2_1 = *(rdx_21 + (rcx_30 << 2) + 8)
                                    zmm3_1[0] = zmm3_1[0] - zmm10[0]
                                    zmm2_1[0] = zmm2_1[0] f- *(r8_12 + (rcx_30 << 2) + 8)
                                    zmm5_1 = *(rdx_21 + (rcx_30 << 2))
                                    zmm6[0] = zmm6[0] f- zmm7.d
                                    zmm4_1 = *(rdx_21 + (rcx_30 << 2) + 4)
                                    zmm1_1[0] = zmm1_1[0] f- zmm11.d
                                    zmm5_1[0] = zmm5_1[0] f- *(r8_12 + (rcx_30 << 2))
                                    zmm4_1[0] = zmm4_1[0] f- *(r8_12 + (rcx_30 << 2) + 4)
                                    zmm2_1[0] = zmm2_1[0] f- zmm11.d
                                    zmm5_1[0] = zmm5_1[0] - zmm10[0]
                                    zmm4_1[0] = zmm4_1[0] f- zmm7.d
                                    zmm6[0] = zmm6[0] * zmm2_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm2_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm5_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm4_1[0]
                                    zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
                                    zmm6[0] = zmm6[0] * zmm5_1[0]
                                    zmm1_1[0] = zmm1_1[0] - zmm6[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm4_1[0]
                                    zmm6[0] = zmm6[0] - zmm3_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm6[0] = zmm6[0] * zmm6[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm1_1[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm6[0]
                                    
                                    if (zmm3_1[0] == 1f)
                                        goto label_1415bc3e8
                                    
                                    float var_264_1
                                    float var_25c_1
                                    
                                    if (zmm3_1[0] >= 9.99999994e-09f)
                                        zmm4_1 = 0x3f000000
                                        float temp0_34[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                                        zmm2_1 = 0x3f000000
                                        zmm3_1[0] = zmm3_1[0] * 0.5f
                                        temp0_34[0] = temp0_34[0] * temp0_34[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_34[0]
                                        zmm2_1[0] = 0.5f - zmm3_1[0]
                                        temp0_34[0] = temp0_34[0] * zmm2_1[0]
                                        temp0_34[0] = temp0_34[0] + temp0_34[0]
                                        temp0_34[0] = temp0_34[0] * temp0_34[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_34[0]
                                        zmm4_1[0] = 0.5f - zmm3_1[0]
                                        temp0_34[0] = temp0_34[0] * zmm4_1[0]
                                        temp0_34[0] = temp0_34[0] + temp0_34[0]
                                        zmm1_1[0] = zmm1_1[0] * temp0_34[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_34[0]
                                        zmm6[0] = zmm6[0] * temp0_34[0]
                                    label_1415bc3e8:
                                        var_25c_1 = zmm6[0]
                                        float var_260_2 = zmm3_1[0]
                                        var_264_1 = zmm1_1[0]
                                    else
                                        var_264_1 = data_143dbb1f8[0]
                                        var_25c_1 = data_143dbb200[0]
                                        float var_260_1 = data_143dbb1fc[0]
                                    
                                    *(r9_5 + 0xc) = var_264_1.q
                                    *(r9_5 + 0x14) = var_25c_1
                                    zmm0_1 = *(r9_5 + 0x10)
                                    zmm2_1 = *(r9_5 + 0xc)
                                    zmm1_1 = *(r9_5 + 0x14)
                                    zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                                    
                                    if (zmm2_1[0] >= 9.99999975e-05f)
                                        *r9_5 = var_20c_1
                                        *(r9_5 + 4) = rax_54
                                        *(r9_5 + 8) = var_208_1
                                        *(r9_5 + 0x1c) = var_204_1
                                        rax_46.b = 1
                                        *(r9_5 + 0x20) = r11_8 - 1
                                        *(r9_5 + 0x24) = r13_4
                                        *(r9_5 + 0x28) = rsi_3.d
                                        *(r9_5 + 0x2c) = 2
                                        *(r9_5 + 0x30) = 1
                                        zmm7.d = zmm7.d f* *(r9_5 + 0x10)
                                        zmm10[0] = zmm10[0] f* *(r9_5 + 0xc)
                                        zmm11.d = zmm11.d f* *(r9_5 + 0x14)
                                        *(r9_5 + 0x34) = 0
                                        zmm7.d = zmm7.d f+ zmm10[0]
                                        zmm7.d = zmm7.d f+ zmm11.d
                                        *(r9_5 + 0x18) = zmm7.d
                                    else
                                        rax_46.b = 0
                                    
                                    r15 = arg2
                                    *(r10_8 + (rsi_3 << 2) + 0x1c) = rbx_2
                                    *(r10_8 + (rsi_3 << 2) + 0x28) = 0
                                    
                                    if (rax_46.b == 0)
                                        rsi_2 = var_230:8.q
                                        rax_46.b = 1
                                        rbx_1 = var_230.q
                                        zmm10 = zx.o(0)
                                        r12 = arg1
                                        break
                                    
                                    zmm0_1 = *(r9_5 + 0x18)
                                    
                                    if (not(zmm0_1[0] < zmm12[0]) && not(zmm0_1[0] > zmm13[0]))
                                        char rax_62
                                        rax_62, zmm12, zmm13 = sub_141743d50(r9_5, *arg1, *r15)
                                        
                                        if (rax_62 != 0)
                                            int32_t var_148_1 = rbx_2
                                            int64_t* var_150 = &var_278
                                            sub_14175ce20(&var_230, &var_150)
                                    
                                    r8_11 = var_27c_2
                                    rbx_2 += 1
                                    r13_3 = zx.q(var_288)
                                    r12_1 += 0x38
                                    r11_7 = var_200_1
                                    rdi_6 += 1
                                    
                                    if (rdi_6 s>= var_168_1)
                                        rsi_2 = var_230:8.q
                                        zmm10 = zx.o(0)
                                        rbx_1 = var_230.q
                                        r12 = arg1
                                        rax_46 = zx.q(var_298_1)
                                        break
                            
                            if (rax_46.b == 0)
                                goto label_1415bc560
            
            rdi_1 = var_290
            goto label_1415bc5df
    
    zmm15.o = var_e8_1
    zmm14.o = var_d8_1
    zmm13_1.o = var_c8_1
    zmm12_1.o = var_b8_1
    zmm11_1.o = var_a8_1
    zmm10_1.o = var_98_1
    zmm9_1.o = var_88_1
    zmm8_1.o = var_78_1
    zmm7_1.o = var_68_1
    zmm6_2.o = var_58_1
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    if (rbx_1 != 0)
        float (* rax_69)[0x4] = rbx_1
        
        if (((var_220 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_69 - rbx_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rbx_1)
else
    *arg7 = 0
    rsi_1 = 2
    *arg9 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg9[1].d = 0
    *arg10 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_238_1 = 0
    arg10[1].d = 0
    int32_t var_238_2 = 0

int64_t rcx_39 = var_278

if (rcx_39 != 0)
    sub_140a74f90(rcx_39)

__security_check_cookie(rax_1 ^ &var_2d8)
return zx.q(rsi_1)
