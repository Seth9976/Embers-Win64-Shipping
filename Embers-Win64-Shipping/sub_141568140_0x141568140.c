// 函数: sub_141568140
// 地址: 0x141568140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int64_t* r12 = arg1
int32_t r13 = 0
int64_t* r15 = arg2
int32_t r14 = 0
uint64_t* var_280 = arg8
float var_228 = 3.40282347e+38f
int32_t* var_1a0 = arg9
int32_t var_240 = 0
int64_t var_250 = 0
int64_t var_248 = 0
char rax_2
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13[0x4]
rax_2, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 =
    sub_141699bd0(r12, arg2, arg3, arg4, &var_250)
int32_t rsi_1

if (rax_2 != 0)
    int128_t var_200
    __builtin_memset(&var_200, 0, 0x18)
    float (* rsi_2)[0x4] = var_200:8.q
    int32_t i = 0
    float (* rbx_1)[0x4] = var_200.q
    int64_t* var_260
    int64_t var_1f0
    float zmm1_1[0x4]
    
    if (var_248.d s> 0)
        do
            char rax_4
            rax_4, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, arg5, arg6 =
                sub_141743d50(sx.q(i) * 0x38 + var_250, *r12, *r15)
            
            if (rax_4 != 0)
                int64_t var_258
                var_258.d = i
                var_260 = &var_250
                
                if (var_1f0 == rsi_2)
                    sub_141701fc0(&var_200, rsi_2, &var_260)
                    rsi_2 = var_200:8.q
                    rbx_1 = var_200.q
                else
                    *rsi_2 = var_260.o
                    rsi_2 = &rsi_2[1]
                    var_200:8.q = rsi_2
                
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
        while (i s< var_248.d)
    
    int64_t rcx_9 = (rsi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_9 == 0)
        rdx_4 = var_250
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_250
    
    float zmm0_1[0x4] = *rdx_4
    int64_t* rdi_1 = nullptr
    zmm1_1 = rdx_4[1]
    var_260 = nullptr
    float var_58_1[0x4] = zmm6
    float var_68_1[0x4] = zmm7
    float var_78_1[0x4] = zmm8
    float var_88_1[0x4] = zmm9
    float var_98_1[0x4] = zmm10
    float var_a8_1[0x4] = zmm11
    float var_b8_1[0x4] = zmm12
    float var_c8_1[0x4] = zmm13
    float var_128[0x4] = zmm0_1
    int64_t var_258_1 = 0
    float var_118_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    float var_d8_1[0x4] = arg5
    float var_e8_1[0x4] = arg6
    int64_t var_f8_1 = rdx_4[3][0].q
    float var_108_1[0x4] = rdx_4[2]
    int512_t zmm6_1
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
    label_141568e1d:
        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14, zmm15 =
            sub_14154a2a0(*r12, *r15, &var_128, arg7, arg8, var_1a0, arg10)
        rsi_1 = 1
    else
        zmm10 = 0x80000000
        zmm9 = zx.o(0)
        
        while (true)
            if (rdx_5 s< 0x80)
                float rax_10 = (*rbx_1)[2]
                float var_264_1 = rax_10
                
                if (rcx_9 s>= 2)
                    zmm1_1 = rsi_2[-1]
                    int64_t i_2 = 0
                    int64_t i_3 = 0
                    rsi_2[-1] = *rbx_1
                    int64_t r11_4 = (&rsi_2[-1] - rbx_1) s>> 4
                    int64_t rdi_3 = (r11_4 - 1) s>> 1
                    
                    if (rdi_3 s> 0)
                        do
                            int64_t r9_1 = i_3 * 2
                            int64_t rcx_11 = r9_1 * 2
                            int64_t r8_7 = **(rbx_1 + (rcx_11 << 3) + 0x20)
                            i_3 = r9_1 + 1
                            
                            if ((*(sx.q((*rbx_1)[rcx_11 * 2 + 0xa]) * 0x38 + r8_7 + 0x18))[0] f<=
                                    *(sx.q((*rbx_1)[rcx_11 * 2 + 6]) * 0x38 + r8_7 + 0x18))
                                i_3 = r9_1 + 2
                            
                            rbx_1[i_2] = rbx_1[i_3]
                            i_2 = i_3
                        while (i_3 s< rdi_3)
                    
                    if (i_3 == rdi_3 && (r11_4.b & 1) == 0)
                        rbx_1[i_2] = rbx_1[r11_4 - 1]
                        i_2 = r11_4 - 1
                    
                    if (i_2 s> 0)
                        int64_t r11_6 = sx.q(_mm_bsrli_si128(zmm1_1, 8)[0]) * 0x38
                        int64_t i_1
                        
                        do
                            i_1 = (i_2 - 1) s>> 1
                            int64_t r9_3 = i_1 * 2
                            int64_t rdx_8 = **(rbx_1 + (r9_3 << 3))
                            
                            if ((*(r11_6 + rdx_8 + 0x18))[0] f>=
                                    *(sx.q((*rbx_1)[r9_3 * 2 + 2]) * 0x38 + rdx_8 + 0x18))
                                break
                            
                            rbx_1[i_2] = *(rbx_1 + (r9_3 << 3))
                            i_2 = i_1
                        while (i_1 s> 0)
                    
                    rax_10 = var_264_1
                    r14 = var_240
                    rbx_1[i_2] = zmm1_1
                
                rsi_2 -= 0x10
                var_200:8.q = rsi_2
                int32_t* rdi_5 = sx.q(rax_10) * 0x38 + var_250
                
                if (rdi_5[0xd].b != 0)
                    goto label_141568d9e
                
                arg5 = rdi_5[3]
                zmm13 = rdi_5[4]
                arg6 = rdi_5[5]
                void* rax_22 = *arg3
                void* rcx_15 = *(rax_22 + 0x10)
                zmm6 = *(rax_22 + 0x28)
                zmm7 = *(rax_22 + 0x2c)
                zmm8 = *(rax_22 + 0x30)
                float zmm3_1[0x4] = *(rcx_15 + 0x20)
                float zmm4_1[0x4] = *(rcx_15 + 0x1c)
                float zmm5_1[0x4] = *(rcx_15 + 0x24)
                zmm13[0] = zmm13[0] * zmm7[0]
                arg5[0] = arg5[0] * zmm6[0]
                zmm13[0] = zmm13[0] * zmm3_1[0]
                arg5[0] = arg5[0] * zmm4_1[0]
                arg6[0] = arg6[0] * zmm8[0]
                zmm13[0] = zmm13[0] + arg5[0]
                arg6[0] = arg6[0] * zmm5_1[0]
                zmm13[0] = zmm13[0] + arg6[0]
                int32_t* rax_23
                int32_t r14_2
                float zmm2_1[0x4]
                
                if (zmm13[0] < zmm9[0])
                    r14_2 = r14 | 2
                    int32_t var_140_1 = *(rcx_15 + 0x18)
                    int64_t var_148
                    rax_23 = &var_148
                    var_148 = *(rcx_15 + 0x10)
                else
                    zmm2_1 = *(rcx_15 + 0x28)
                    float var_188
                    rax_23 = &var_188
                    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                    r14_2 = r14 | 1
                    zmm2_1[0] = zmm2_1[0] * zmm3_1[0]
                    zmm2_1[0] = zmm2_1[0] f+ *(rcx_15 + 0x10)
                    zmm2_1[0] = zmm2_1[0] * zmm5_1[0]
                    zmm2_1[0] = zmm2_1[0] f+ *(rcx_15 + 0x14)
                    zmm2_1[0] = zmm2_1[0] f+ *(rcx_15 + 0x18)
                    var_188 = zmm2_1[0]
                    float var_184_1 = zmm2_1[0]
                    float var_180_1 = zmm2_1[0]
                
                zmm0_1 = zx.o(*rax_23)
                int32_t rax_25 = rax_23[2]
                zmm0_1[0] = zmm0_1[0] * zmm6[0]
                zmm4_1 = zmm13 ^ zmm10
                zmm11 = arg5 ^ zmm10
                float var_23c_1 = zmm0_1[0]
                int32_t rcx_17 = r14_2 & 0xfffffffd
                float var_1d0_1 = zmm0_1[0]
                zmm1_1 = zmm0_1
                zmm0_1 = rax_25
                
                if ((r14_2.b & 2) == 0)
                    rcx_17 = r14_2
                
                zmm0_1[0] = zmm0_1[0] * zmm8[0]
                float temp0_5[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                int32_t rdx_10 = rcx_17 & 0xfffffffe
                temp0_5[0] = temp0_5[0] * zmm7[0]
                float var_238_1 = zmm0_1[0]
                float var_1c8_1 = zmm0_1[0]
                zmm7 = arg6 ^ zmm10
                float var_1cc_1 = temp0_5[0]
                int64_t var_1b0_1 = temp0_5.q
                
                if ((rcx_17.b & 1) == 0)
                    rdx_10 = rcx_17
                
                var_240 = rdx_10
                int128_t* rax_28 = arg4[2]
                zmm8 = *(rax_28 + 4)
                zmm9 = *(rax_28 + 8)
                zmm3_1 = *rax_28
                zmm2_1 = *(rax_28 + 0xc)
                void* rax_29 = *arg4
                zmm4_1[0] = zmm4_1[0] * zmm9[0]
                zmm7[0] = zmm7[0] * zmm8[0]
                zmm4_1[0] = zmm4_1[0] * zmm3_1[0]
                zmm7[0] = zmm7[0] - zmm4_1[0]
                zmm11[0] = zmm11[0] * zmm9[0]
                zmm7[0] = zmm7[0] * zmm3_1[0]
                zmm7[0] = zmm7[0] + zmm7[0]
                zmm11[0] = zmm11[0] - zmm7[0]
                zmm11[0] = zmm11[0] * zmm8[0]
                zmm7[0] = zmm7[0] * zmm9[0]
                zmm4_1[0] = zmm4_1[0] - zmm11[0]
                zmm11[0] = zmm11[0] + zmm11[0]
                zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
                zmm11[0] = zmm11[0] * zmm2_1[0]
                zmm11[0] = zmm11[0] + zmm4_1[0]
                zmm4_1[0] = zmm4_1[0] * zmm3_1[0]
                zmm11[0] = zmm11[0] * zmm9[0]
                zmm7[0] = zmm7[0] - zmm4_1[0]
                zmm11[0] = zmm11[0] * zmm3_1[0]
                zmm7[0] = zmm7[0] * zmm2_1[0]
                zmm7[0] = zmm7[0] * zmm8[0]
                zmm7[0] = zmm7[0] + zmm11[0]
                zmm4_1[0] = zmm4_1[0] * zmm2_1[0]
                zmm7[0] = zmm7[0] + zmm11[0]
                zmm11[0] = zmm11[0] - zmm7[0]
                zmm4_1[0] = zmm4_1[0] * zmm8[0]
                zmm4_1[0] = zmm4_1[0] + zmm7[0]
                zmm4_1[0] = zmm4_1[0] - zmm11[0]
                zmm11[0] = zmm11[0] + zmm4_1[0]
                zmm4_1[0] = zmm4_1[0] + zmm7[0]
                zmm9 = zx.o(0)
                
                if (zmm4_1[0] >= 0f)
                    zmm3_1 = *(rax_29 + 0x1c)
                else
                    zmm3_1 = *(rax_29 + 0x10)
                
                if (zmm7[0] >= 0f)
                    zmm2_1 = *(rax_29 + 0x20)
                else
                    zmm2_1 = *(rax_29 + 0x14)
                
                if (zmm11[0] >= 0f)
                    zmm0_1 = *(rax_29 + 0x24)
                else
                    zmm0_1 = *(rax_29 + 0x18)
                
                float (* rax_30)[0x4] = arg4[1]
                zmm12 = rdi_5[6]
                float temp0_6[0x4] = _mm_unpacklo_ps(zmm2_1, 0)
                float temp0_7[0x4] = _mm_unpacklo_ps(zmm3_1, zmm0_1[0].q)
                zmm5_1 = *rax_30
                float temp0_8[0x4] = _mm_unpacklo_ps(temp0_7, temp0_6[0].q)
                float temp0_9[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                float temp0_10[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xc9), temp0_10)
                float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xd2), temp0_9)
                float temp0_15[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                float temp0_16[0x4] = _mm_sub_ps(temp0_14, temp0_12)
                float temp0_17[0x4] = _mm_add_ps(temp0_16, temp0_16)
                float temp0_18[0x4] = _mm_mul_ps(temp0_15, temp0_17)
                float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xc9), temp0_10)
                float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xd2)
                float temp0_22[0x4] = _mm_add_ps(temp0_18, temp0_8)
                zmm2_1 = zx.o(var_1b0_1)
                zmm4_1 = var_23c_1
                float temp0_26[0x4] = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_21, temp0_9), temp0_20), temp0_22), 
                    rax_30[1])
                zmm4_1[0] = zmm4_1[0] - temp0_26[0]
                float var_1c0_1 = temp0_26[0]
                float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0x55)
                zmm2_1[0] = zmm2_1[0] - temp0_27[0]
                float var_1bc_1 = temp0_27[0]
                zmm0_1 = var_238_1
                float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)
                zmm0_1[0] = zmm0_1[0] - temp0_28[0]
                float var_1b8_1 = temp0_28[0]
                arg5[0] = arg5[0] * zmm4_1[0]
                zmm13[0] = zmm13[0] * zmm2_1[0]
                arg6[0] = arg6[0] * zmm0_1[0]
                zmm13[0] = zmm13[0] + arg5[0]
                float var_170_1 = zmm0_1[0]
                float var_178 = zmm4_1[0]
                zmm12[0] = zmm12[0] * 0.00999999978f
                float var_174_1 = zmm2_1[0]
                zmm13[0] = zmm13[0] + arg6[0]
                zmm0_1 = __andps_xmmxud_memxud(zmm12, data_142d3f770)
                zmm13 = __minss_xmmss_memss(zmm13[0], var_228)
                var_228 = zmm13[0]
                zmm13[0] = zmm13[0] - zmm12[0]
                
                if (__andps_xmmxud_memxud(zmm13, data_142d3f770)[0] <= zmm0_1[0])
                    zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14, 
                        zmm15 = sub_14154a2a0(*r12, *r15, rdi_5, arg7, arg8, var_1a0, arg10)
                    rdi_1 = var_260
                    rsi_1 = 0
                    break
                
                if (not(zmm13[0] < zmm12[0]))
                    int64_t r14_3 = sx.q(r12[1].d)
                    zmm0_1 = zx.o(*(rdi_5 + 0xc))
                    var_128[0] = *rdi_5
                    var_128[1] = rdi_5[1]
                    var_128[2] = rdi_5[2]
                    var_118_1[1] = rdi_5[5]
                    var_118_1[3] = rdi_5[7]
                    var_108_1[0] = rdi_5[8]
                    var_108_1[1] = rdi_5[9]
                    var_108_1[2] = rdi_5[0xa]
                    var_108_1[3] = rdi_5[0xb]
                    var_f8_1.d = rdi_5[0xc]
                    int32_t rax_41 = (r14_3 + 1).d
                    var_118_1[2] = zmm12[0]
                    var_128[3].q = zmm0_1.q
                    var_f8_1:4.b = 0
                    int32_t var_23c_2 = r14_3.d
                    r12[1].d = rax_41
                    
                    if (rax_41 s> *(r12 + 0xc))
                        sub_14083a7e0(r12)
                    
                    int64_t rcx_20 = *r12
                    int64_t rdx_12 = r14_3 * 3
                    *(rcx_20 + (rdx_12 << 2)) = var_1d0_1.q
                    *(rcx_20 + (rdx_12 << 2) + 8) = var_1c8_1
                    int64_t r14_4 = sx.q(r15[1].d)
                    int32_t rax_43 = (r14_4 + 1).d
                    r15[1].d = rax_43
                    
                    if (rax_43 s> *(r15 + 0xc))
                        sub_14083a7e0(r15)
                    
                    int64_t rcx_22 = *r15
                    int64_t rdx_14 = r14_4 * 3
                    var_258_1.d = 0
                    *(rcx_22 + (rdx_14 << 2)) = var_1c0_1.q
                    *(rcx_22 + (rdx_14 << 2) + 8) = var_1b8_1
                    rdi_5[0xd].b = 1
                    
                    if (r13 s< 0 && r13 != 0)
                        sub_1405c5570(&var_260, 0)
                    
                    sub_1415c5980(&var_250, var_264_1, &var_178, &var_260)
                    int64_t r13_1 = sx.q(var_248.d)
                    int32_t r8_10 = var_258_1.d
                    int32_t rax_45 = r8_10 + r13_1.d
                    var_248.d = rax_45
                    
                    if (rax_45 s> var_248:4.d)
                        sub_1407c3b60(&var_250)
                        r8_10 = var_258_1.d
                    
                    if (r8_10 s>= 3)
                        int64_t rdi_6 = 0
                        char var_268_1 = 0
                        uint64_t var_150_1 = sx.q(r8_10)
                        uint64_t rax_46
                        
                        if (r8_10 s<= 0)
                            rax_46.b = 0
                        else
                            int64_t r14_5 = r13_1 * 0x38
                            int32_t rbx_2 = r13_1.d
                            int32_t r11_7 = 1 - r13_1.d
                            int32_t var_1dc_1 = r11_7
                            
                            while (true)
                                int64_t* rdx_17 = var_260
                                int64_t rcx_26 = var_250
                                int64_t r12_1 = sx.q(rdx_17[rdi_6].d)
                                int64_t rsi_3 = sx.q(*(&rdx_17[rdi_6] + 4))
                                int32_t* r9_5 = rcx_26 + r14_5
                                int64_t r10_8 = r12_1 * 0x38 + rcx_26
                                int32_t r11_8 = rbx_2 + 1
                                
                                if (r11_7 + rbx_2 s>= r8_10)
                                    r11_8 = r13_1.d
                                
                                int64_t r8_11 = *r15
                                int32_t rax_51 = rbx_2
                                
                                if (rbx_2 s<= r13_1.d)
                                    rax_51 = r8_10 + r13_1.d
                                
                                int32_t rax_53 = *(r10_8 + (rsi_3 << 2))
                                int64_t rdx_22 = *arg1
                                int64_t rax_55 = sx.q(*(r10_8 + (sx.q((rsi_3 + 1).d s% 3) << 2)))
                                int32_t var_238_2 = rax_55.d
                                int64_t rcx_29 = rax_55 * 3
                                zmm10 = *(rdx_22 + (rcx_29 << 2))
                                zmm10[0] = zmm10[0] f- *(r8_11 + (rcx_29 << 2))
                                zmm6 = *(rdx_22 + (rcx_29 << 2) + 4)
                                zmm6[0] = zmm6[0] f- *(r8_11 + (rcx_29 << 2) + 4)
                                zmm11 = *(rdx_22 + (rcx_29 << 2) + 8)
                                zmm11[0] = zmm11[0] f- *(r8_11 + (rcx_29 << 2) + 8)
                                int64_t rcx_30 = sx.q(rax_53) * 3
                                zmm2_1 = *(rdx_22 + (rcx_30 << 2) + 8)
                                zmm2_1[0] = zmm2_1[0] f- *(r8_11 + (rcx_30 << 2) + 8)
                                zmm5_1 = *(rdx_22 + (rcx_30 << 2))
                                zmm7 = *(rdx_22 + (rdx_12 << 2) + 4)
                                zmm7[0] = zmm7[0] f- *(r8_11 + (rdx_12 << 2) + 4)
                                zmm1_1 = *(rdx_22 + (rdx_12 << 2) + 8)
                                zmm1_1[0] = zmm1_1[0] f- *(r8_11 + (rdx_12 << 2) + 8)
                                zmm3_1 = *(rdx_22 + (rdx_12 << 2))
                                zmm2_1[0] = zmm2_1[0] - zmm11[0]
                                zmm3_1[0] = zmm3_1[0] f- *(r8_11 + (rdx_12 << 2))
                                zmm4_1 = *(rdx_22 + (rcx_30 << 2) + 4)
                                zmm7[0] = zmm7[0] - zmm6[0]
                                zmm5_1[0] = zmm5_1[0] f- *(r8_11 + (rcx_30 << 2))
                                zmm4_1[0] = zmm4_1[0] f- *(r8_11 + (rcx_30 << 2) + 4)
                                zmm1_1[0] = zmm1_1[0] - zmm11[0]
                                zmm3_1[0] = zmm3_1[0] - zmm10[0]
                                zmm7[0] = zmm7[0] * zmm2_1[0]
                                zmm5_1[0] = zmm5_1[0] - zmm10[0]
                                zmm4_1[0] = zmm4_1[0] - zmm6[0]
                                zmm3_1[0] = zmm3_1[0] * zmm2_1[0]
                                zmm1_1[0] = zmm1_1[0] * zmm5_1[0]
                                zmm1_1[0] = zmm1_1[0] * zmm4_1[0]
                                zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
                                zmm7[0] = zmm7[0] * zmm5_1[0]
                                zmm1_1[0] = zmm1_1[0] - zmm7[0]
                                zmm3_1[0] = zmm3_1[0] * zmm4_1[0]
                                zmm7[0] = zmm7[0] - zmm3_1[0]
                                zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                                zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                zmm7[0] = zmm7[0] * zmm7[0]
                                zmm3_1[0] = zmm3_1[0] + zmm1_1[0]
                                zmm3_1[0] = zmm3_1[0] + zmm7[0]
                                
                                if (zmm3_1[0] == 1f)
                                    goto label_141568c2f
                                
                                float var_234_1
                                float var_22c_1
                                
                                if (zmm3_1[0] >= 9.99999994e-09f)
                                    zmm4_1 = 0x3f000000
                                    float temp0_33[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                                    zmm2_1 = 0x3f000000
                                    zmm3_1[0] = zmm3_1[0] * 0.5f
                                    temp0_33[0] = temp0_33[0] * temp0_33[0]
                                    zmm3_1[0] = zmm3_1[0] * temp0_33[0]
                                    zmm2_1[0] = 0.5f - zmm3_1[0]
                                    temp0_33[0] = temp0_33[0] * zmm2_1[0]
                                    temp0_33[0] = temp0_33[0] + temp0_33[0]
                                    temp0_33[0] = temp0_33[0] * temp0_33[0]
                                    zmm3_1[0] = zmm3_1[0] * temp0_33[0]
                                    zmm4_1[0] = 0.5f - zmm3_1[0]
                                    temp0_33[0] = temp0_33[0] * zmm4_1[0]
                                    temp0_33[0] = temp0_33[0] + temp0_33[0]
                                    var_1b0_1.d = temp0_33[0]
                                    zmm1_1[0] = zmm1_1[0] * temp0_33[0]
                                    zmm3_1[0] = zmm3_1[0] * temp0_33[0]
                                    zmm7[0] = zmm7[0] * temp0_33[0]
                                label_141568c2f:
                                    var_22c_1 = zmm7[0]
                                    float var_230_2 = zmm3_1[0]
                                    var_234_1 = zmm1_1[0]
                                else
                                    var_234_1 = data_143dbb1f8[0]
                                    var_22c_1 = data_143dbb200[0]
                                    float var_230_1 = data_143dbb1fc[0]
                                
                                *(r9_5 + 0xc) = var_234_1.q
                                r9_5[5] = var_22c_1
                                zmm0_1 = r9_5[4]
                                zmm2_1 = r9_5[3]
                                zmm1_1 = r9_5[5]
                                zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                                
                                if (zmm2_1[0] >= 9.99999975e-05f)
                                    *r9_5 = var_238_2
                                    r9_5[1] = rax_53
                                    r9_5[2] = var_23c_2
                                    r9_5[8] = rax_51 - 1
                                    rax_46.b = 1
                                    r9_5[7] = r12_1.d
                                    r9_5[9] = r11_8
                                    r9_5[0xa] = rsi_3.d
                                    r9_5[0xb] = 2
                                    r9_5[0xc] = 1
                                    zmm6[0] = zmm6[0] f* r9_5[4]
                                    zmm10[0] = zmm10[0] f* r9_5[3]
                                    zmm11[0] = zmm11[0] f* r9_5[5]
                                    r9_5[0xd].b = 0
                                    zmm6[0] = zmm6[0] + zmm10[0]
                                    zmm6[0] = zmm6[0] + zmm11[0]
                                    r9_5[6] = zmm6[0]
                                else
                                    rax_46.b = 0
                                
                                r15 = arg2
                                r12 = arg1
                                *(r10_8 + (rsi_3 << 2) + 0x1c) = rbx_2
                                *(r10_8 + (rsi_3 << 2) + 0x28) = 0
                                
                                if (rax_46.b == 0)
                                    rsi_2 = var_200:8.q
                                    rax_46.b = 1
                                    rbx_1 = var_200.q
                                    zmm9 = zx.o(0)
                                    break
                                
                                zmm0_1 = r9_5[6]
                                
                                if (not(zmm0_1[0] < zmm12[0]) && not(zmm0_1[0] > zmm13[0]))
                                    char rax_61
                                    rax_61, zmm12, zmm13 = sub_141743d50(r9_5, *r12, *r15)
                                    
                                    if (rax_61 != 0)
                                        int32_t var_130_1 = rbx_2
                                        int64_t* var_138 = &var_250
                                        sub_14175ce20(&var_200, &var_138)
                                
                                r8_10 = var_258_1.d
                                rbx_2 += 1
                                r11_7 = var_1dc_1
                                r14_5 += 0x38
                                rdi_6 += 1
                                
                                if (rdi_6 s>= var_150_1)
                                    rsi_2 = var_200:8.q
                                    zmm9 = zx.o(0)
                                    rbx_1 = var_200.q
                                    rax_46 = zx.q(var_268_1)
                                    break
                        
                        if (rax_46.b == 0)
                            r13 = var_258_1:4.d
                            zmm10 = 0x80000000
                        label_141568d9e:
                            rcx_9 = (rsi_2 - rbx_1) s>> 4
                            
                            if (rcx_9 != 0)
                                r14 = var_240
                                rdx_5 += 1
                                continue
            
            rdi_1 = var_260
            goto label_141568e1d
    
    zmm15.o = var_e8_1
    zmm14.o = var_d8_1
    zmm13_1.o = var_c8_1
    zmm12_1.o = var_b8_1
    zmm11_1.o = var_a8_1
    zmm10_1.o = var_98_1
    zmm9_1.o = var_88_1
    zmm8_1.o = var_78_1
    zmm7_1.o = var_68_1
    zmm6_1.o = var_58_1
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    if (rbx_1 != 0)
        float (* rax_68)[0x4] = rbx_1
        
        if (((var_1f0 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_68 - rbx_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rbx_1)
else
    *arg7 = 0
    rsi_1 = 2
    *arg9 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg9[1].d = 0
    *arg10 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_208_1 = 0
    arg10[1].d = 0
    int32_t var_208_2 = 0

int64_t rcx_39 = var_250

if (rcx_39 != 0)
    sub_140a74f90(rcx_39)

__security_check_cookie(rax_1 ^ &var_2a8)
return zx.q(rsi_1)
