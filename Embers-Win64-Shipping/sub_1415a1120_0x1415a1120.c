// 函数: sub_1415a1120
// 地址: 0x1415a1120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int64_t* r14 = arg1
int32_t r12 = 0
int64_t* r15 = arg2
uint64_t* var_290 = arg6
int32_t* var_1b0 = arg7
int32_t var_248 = 0
int64_t var_258 = 0
int64_t var_250 = 0
char rax_2
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13[0x4]
float zmm14_1
int128_t zmm15
rax_2, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14_1, zmm15 =
    sub_1416c8470(r14, arg2, arg3, arg4, &var_258)
int32_t rsi_1

if (rax_2 != 0)
    int128_t var_210
    __builtin_memset(&var_210, 0, 0x18)
    float (* rsi_2)[0x4] = var_210:8.q
    int32_t i = 0
    float (* rbx_1)[0x4] = var_210.q
    int64_t* var_270
    int64_t var_200
    float zmm1_1[0x4]
    
    if (var_250.d s> 0)
        do
            char rax_4
            rax_4, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14_1, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_258, *r14, *r15)
            
            if (rax_4 != 0)
                int64_t var_268
                var_268.d = i
                var_270 = &var_258
                
                if (var_200 == rsi_2)
                    sub_141701fc0(&var_210, rsi_2, &var_270)
                    rsi_2 = var_210:8.q
                    rbx_1 = var_210.q
                else
                    *rsi_2 = var_270.o
                    rsi_2 = &rsi_2[1]
                    var_210:8.q = rsi_2
                
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
        while (i s< var_250.d)
    
    int64_t rcx_9 = (rsi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_9 == 0)
        rdx_4 = var_258
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_258
    
    float zmm0_1[0x4] = *rdx_4
    int64_t* rdi_1 = nullptr
    zmm1_1 = rdx_4[1]
    var_270 = nullptr
    float var_58_1[0x4] = zmm6
    float var_68_1[0x4] = zmm7
    float var_78_1[0x4] = zmm8
    float var_98_1[0x4] = zmm10
    float var_a8_1[0x4] = zmm11
    float var_b8_1[0x4] = zmm12
    float var_130[0x4] = zmm0_1
    int64_t var_268_1 = 0
    float var_120_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    float var_c8_1[0x4] = zmm13
    int128_t var_e8_1 = zmm15
    int64_t var_100_1 = rdx_4[3][0].q
    float var_110_1[0x4] = rdx_4[2]
    int512_t zmm6_1
    int512_t zmm7_1
    int512_t zmm8_1
    int512_t zmm9_1
    int512_t zmm10_1
    int512_t zmm11_1
    int512_t zmm12_1
    int512_t zmm13_1
    int512_t zmm15_1
    
    if (rcx_9 == 0)
    label_1415a1ce2:
        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm15_1 =
            sub_14154a2a0(*r14, *r15, &var_130, arg5, arg6, var_1b0, arg8)
        rsi_1 = 1
    else
        zmm15 = 0x322bcc77
        zmm8 = zx.o(0)
        
        while (true)
            if (rdx_5 s< 0x80)
                int64_t r13_1 = sx.q((*rbx_1)[2])
                int32_t var_260_1 = r13_1.d
                
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
                    
                    r12 = var_268_1:4.d
                    rbx_1[i_2] = zmm1_1
                
                rsi_2 -= 0x10
                int32_t* rdi_5 = r13_1 * 0x38 + var_258
                var_210:8.q = rsi_2
                
                if (rdi_5[0xd].b != 0)
                    goto label_1415a1c65
                
                zmm10 = rdi_5[3]
                zmm11 = rdi_5[4]
                zmm13 = rdi_5[5]
                void* rax_20 = *arg3
                void* rcx_15 = *(rax_20 + 0x10)
                zmm6 = *(rax_20 + 0x28)
                zmm7 = *(rax_20 + 0x2c)
                zmm12 = *(rax_20 + 0x30)
                float zmm3_1[0x4] = *(rcx_15 + 0x20)
                float zmm4_1[0x4] = *(rcx_15 + 0x1c)
                float zmm5_1[0x4] = *(rcx_15 + 0x24)
                zmm11[0] = zmm11[0] * zmm7[0]
                zmm10[0] = zmm10[0] * zmm6[0]
                zmm11[0] = zmm11[0] * zmm3_1[0]
                zmm10[0] = zmm10[0] * zmm4_1[0]
                zmm13[0] = zmm13[0] * zmm12[0]
                zmm11[0] = zmm11[0] + zmm10[0]
                zmm13[0] = zmm13[0] * zmm5_1[0]
                zmm11[0] = zmm11[0] + zmm13[0]
                int32_t* rax_21
                int32_t rdx_10
                float zmm2_1[0x4]
                
                if (zmm11[0] < zmm8[0])
                    rdx_10 = var_248 | 2
                    int32_t var_148_1 = *(rcx_15 + 0x18)
                    int64_t var_150
                    rax_21 = &var_150
                    var_150 = *(rcx_15 + 0x10)
                else
                    zmm2_1 = *(rcx_15 + 0x28)
                    float var_198
                    rax_21 = &var_198
                    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                    rdx_10 = var_248 | 1
                    zmm2_1[0] = zmm2_1[0] * zmm3_1[0]
                    zmm2_1[0] = zmm2_1[0] f+ *(rcx_15 + 0x10)
                    zmm2_1[0] = zmm2_1[0] * zmm5_1[0]
                    zmm2_1[0] = zmm2_1[0] f+ *(rcx_15 + 0x14)
                    zmm2_1[0] = zmm2_1[0] f+ *(rcx_15 + 0x18)
                    var_198 = zmm2_1[0]
                    float var_194_1 = zmm2_1[0]
                    float var_190_1 = zmm2_1[0]
                
                zmm0_1 = zx.o(*rax_21)
                int32_t rax_23 = rax_21[2]
                zmm8 = zmm0_1
                zmm8[0] = zmm8[0] * zmm6[0]
                int32_t rcx_17 = rdx_10 & 0xfffffffd
                float temp0_5[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                temp0_5[0] = temp0_5[0] * zmm7[0]
                
                if ((rdx_10.b & 2) == 0)
                    rcx_17 = rdx_10
                
                zmm7 = rax_23
                int32_t rdx_12 = rcx_17 & 0xfffffffe
                zmm7[0] = zmm7[0] * zmm12[0]
                float var_1d4_1 = temp0_5[0]
                float var_1d8_1 = zmm8[0]
                
                if ((rcx_17.b & 1) == 0)
                    rdx_12 = rcx_17
                
                float var_1d0_1 = zmm7[0]
                var_248 = rdx_12
                void* rcx_18 = *arg4
                void* rax_26 = *(rcx_18 + 0x10)
                zmm3_1 = *(rax_26 + 0x10)
                zmm3_1[0] = zmm3_1[0] f* *(rcx_18 + 0x28)
                zmm0_1 = *(rax_26 + 0x18)
                zmm0_1[0] = zmm0_1[0] f* *(rcx_18 + 0x30)
                zmm2_1 = *(rax_26 + 0x14)
                zmm2_1[0] = zmm2_1[0] f* *(rcx_18 + 0x2c)
                int128_t* rax_27 = arg4[1]
                float temp0_6[0x4] = _mm_unpacklo_ps(zmm3_1, zmm0_1[0].q)
                float temp0_7[0x4] = _mm_unpacklo_ps(zmm2_1, 0)
                zmm5_1 = *rax_27
                float temp0_8[0x4] = _mm_unpacklo_ps(temp0_6, temp0_7[0].q)
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
                float temp0_26[0x4] = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_21, temp0_9), temp0_20), temp0_22), 
                    rax_27[1])
                zmm8[0] = zmm8[0] - temp0_26[0]
                float var_1c8_1 = temp0_26[0]
                float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0x55)
                temp0_5[0] = temp0_5[0] - temp0_27[0]
                float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)
                zmm7[0] = zmm7[0] - temp0_28[0]
                float var_1c4_1 = temp0_27[0]
                float var_188 = zmm8[0]
                zmm8[0] = zmm8[0] * zmm10[0]
                float var_184_1 = temp0_5[0]
                temp0_5[0] = temp0_5[0] * zmm11[0]
                float var_180_1 = zmm7[0]
                float var_1c0_1 = temp0_28[0]
                temp0_5[0] = temp0_5[0] + zmm8[0]
                zmm7[0] = zmm7[0] * zmm13[0]
                zmm12 = rdi_5[6]
                temp0_5[0] = temp0_5[0] + zmm7[0]
                zmm12[0] = zmm12[0] * 0.00999999978f
                float temp0_29[0x4] = _mm_min_ss(temp0_5[0], zmm14_1)
                zmm0_1 = __andps_xmmxud_memxud(zmm12, data_142d3f770)
                zmm14_1 = temp0_29[0]
                temp0_29[0] = temp0_29[0] - zmm12[0]
                
                if (__andps_xmmxud_memxud(temp0_29, data_142d3f770)[0] <= zmm0_1[0])
                    zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm15_1 =
                        sub_14154a2a0(*r14, *r15, rdi_5, arg5, arg6, var_1b0, arg8)
                    rdi_1 = var_270
                    rsi_1 = 0
                    break
                
                if (not(zmm14_1 < zmm12[0]))
                    int64_t r13_2 = sx.q(r14[1].d)
                    zmm0_1 = zx.o(*(rdi_5 + 0xc))
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
                    int32_t rax_38 = (r13_2 + 1).d
                    var_120_1[2] = zmm12[0]
                    var_130[3].q = zmm0_1.q
                    var_100_1:4.b = 0
                    int32_t var_1e8_1 = r13_2.d
                    r14[1].d = rax_38
                    
                    if (rax_38 s> *(r14 + 0xc))
                        sub_14083a7e0(r14)
                    
                    int64_t rcx_20 = *r14
                    int64_t rdx_16 = r13_2 * 3
                    *(rcx_20 + (rdx_16 << 2)) = var_1d8_1.q
                    *(rcx_20 + (rdx_16 << 2) + 8) = var_1d0_1
                    int64_t r13_3 = sx.q(r15[1].d)
                    int32_t rax_40 = (r13_3 + 1).d
                    r15[1].d = rax_40
                    
                    if (rax_40 s> *(r15 + 0xc))
                        sub_14083a7e0(r15)
                    
                    int64_t rcx_22 = *r15
                    int64_t rdx_19 = r13_3 * 3
                    var_268_1.d = 0
                    *(rcx_22 + (rdx_19 << 2)) = var_1c8_1.q
                    *(rcx_22 + (rdx_19 << 2) + 8) = var_1c0_1
                    rdi_5[0xd].b = 1
                    
                    if (r12 s< 0 && r12 != 0)
                        sub_1405c5570(&var_270, 0)
                    
                    sub_1415c5980(&var_258, var_260_1, &var_188, &var_270)
                    int32_t r8_10 = var_250.d
                    int64_t r12_2 = sx.q(var_268_1.d)
                    int32_t var_260_2 = r8_10
                    int32_t rax_42 = r12_2.d + r8_10
                    var_250.d = rax_42
                    
                    if (rax_42 s> var_250:4.d)
                        sub_1407c3b60(&var_258)
                        r8_10 = var_260_2
                    
                    if (r12_2.d s>= 3)
                        int64_t rdi_6 = 0
                        char var_278_1 = 0
                        uint64_t var_158_1 = r12_2
                        uint64_t rax_43
                        
                        if (r12_2.d s<= 0)
                            rax_43.b = 0
                        else
                            void* r14_1 = sx.q(r8_10) * 0x38
                            int32_t rsi_3 = 1 - r8_10
                            int32_t rbx_2 = r8_10
                            int32_t var_1e4_1 = rsi_3
                            
                            while (true)
                                int64_t* rdx_22 = var_270
                                int64_t rcx_26 = var_258
                                int64_t r13_4 = sx.q(rdx_22[rdi_6].d)
                                int64_t r11_7 = sx.q(*(&rdx_22[rdi_6] + 4))
                                int32_t* r9_5 = r14_1 + rcx_26
                                int64_t r10_8 = r13_4 * 0x38 + rcx_26
                                int32_t rsi_4 = rbx_2 + 1
                                
                                if (rsi_3 + rbx_2 s>= r12_2.d)
                                    rsi_4 = r8_10
                                
                                int64_t r8_11 = *r15
                                int32_t r12_3 = rbx_2
                                
                                if (rbx_2 s<= r8_10)
                                    r12_3 = rax_42
                                
                                int64_t rdx_25 = *arg1
                                int32_t rax_50 = *(r10_8 + (r11_7 << 2))
                                int64_t rax_52 = sx.q(*(r10_8 + (sx.q((r11_7 + 1).d s% 3) << 2)))
                                int32_t var_1ec_1 = rax_52.d
                                int64_t rcx_29 = rax_52 * 3
                                zmm10 = *(rdx_25 + (rcx_29 << 2))
                                zmm10[0] = zmm10[0] f- *(r8_11 + (rcx_29 << 2))
                                zmm6 = *(rdx_25 + (rcx_29 << 2) + 4)
                                zmm6[0] = zmm6[0] f- *(r8_11 + (rcx_29 << 2) + 4)
                                zmm11 = *(rdx_25 + (rcx_29 << 2) + 8)
                                zmm11[0] = zmm11[0] f- *(r8_11 + (rcx_29 << 2) + 8)
                                int64_t rcx_30 = sx.q(rax_50) * 3
                                zmm2_1 = *(rdx_25 + (rcx_30 << 2) + 8)
                                zmm2_1[0] = zmm2_1[0] f- *(r8_11 + (rcx_30 << 2) + 8)
                                zmm5_1 = *(rdx_25 + (rcx_30 << 2))
                                zmm7 = *(rdx_25 + (rdx_16 << 2) + 4)
                                zmm7[0] = zmm7[0] f- *(r8_11 + (rdx_16 << 2) + 4)
                                zmm1_1 = *(rdx_25 + (rdx_16 << 2) + 8)
                                zmm1_1[0] = zmm1_1[0] f- *(r8_11 + (rdx_16 << 2) + 8)
                                zmm3_1 = *(rdx_25 + (rdx_16 << 2))
                                zmm2_1[0] = zmm2_1[0] - zmm11[0]
                                zmm3_1[0] = zmm3_1[0] f- *(r8_11 + (rdx_16 << 2))
                                zmm4_1 = *(rdx_25 + (rcx_30 << 2) + 4)
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
                                    goto label_1415a1b00
                                
                                float var_244_1
                                float var_23c_1
                                
                                if (zmm3_1[0] f>= zmm15.d)
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
                                    zmm1_1[0] = zmm1_1[0] * temp0_33[0]
                                    zmm3_1[0] = zmm3_1[0] * temp0_33[0]
                                    zmm7[0] = zmm7[0] * temp0_33[0]
                                label_1415a1b00:
                                    var_23c_1 = zmm7[0]
                                    float var_240_2 = zmm3_1[0]
                                    var_244_1 = zmm1_1[0]
                                else
                                    var_244_1 = data_143dbb1f8[0]
                                    var_23c_1 = data_143dbb200[0]
                                    float var_240_1 = data_143dbb1fc[0]
                                
                                *(r9_5 + 0xc) = var_244_1.q
                                r9_5[5] = var_23c_1
                                zmm0_1 = r9_5[4]
                                zmm2_1 = r9_5[3]
                                zmm1_1 = r9_5[5]
                                zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                                
                                if (zmm2_1[0] >= 9.99999975e-05f)
                                    *r9_5 = var_1ec_1
                                    r9_5[1] = rax_50
                                    r9_5[2] = var_1e8_1
                                    rax_43.b = 1
                                    r9_5[7] = r13_4.d
                                    r9_5[8] = r12_3 - 1
                                    r9_5[9] = rsi_4
                                    r9_5[0xa] = r11_7.d
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
                                    rax_43.b = 0
                                
                                r15 = arg2
                                *(r10_8 + (r11_7 << 2) + 0x1c) = rbx_2
                                *(r10_8 + (r11_7 << 2) + 0x28) = 0
                                
                                if (rax_43.b == 0)
                                    rsi_2 = var_210:8.q
                                    rax_43.b = 1
                                    rbx_1 = var_210.q
                                    r14 = arg1
                                    break
                                
                                zmm0_1 = r9_5[6]
                                
                                if (not(zmm0_1[0] < zmm12[0]) && not(zmm0_1[0] > zmm14_1))
                                    char rax_58
                                    rax_58, zmm12, zmm14_1, zmm15 = sub_141743d50(r9_5, *arg1, *r15)
                                    
                                    if (rax_58 != 0)
                                        int32_t var_138_1 = rbx_2
                                        int64_t* var_140 = &var_258
                                        sub_14175ce20(&var_210, &var_140)
                                
                                r8_10 = var_260_2
                                rbx_2 += 1
                                r12_2 = zx.q(var_268_1.d)
                                r14_1 += 0x38
                                rsi_3 = var_1e4_1
                                rdi_6 += 1
                                
                                if (rdi_6 s>= var_158_1)
                                    rsi_2 = var_210:8.q
                                    rbx_1 = var_210.q
                                    r14 = arg1
                                    rax_43 = zx.q(var_278_1)
                                    break
                        
                        if (rax_43.b == 0)
                            zmm8 = zx.o(0)
                        label_1415a1c65:
                            rcx_9 = (rsi_2 - rbx_1) s>> 4
                            
                            if (rcx_9 != 0)
                                r12 = var_268_1:4.d
                                rdx_5 += 1
                                continue
            
            rdi_1 = var_270
            goto label_1415a1ce2
    
    zmm15_1.o = var_e8_1
    zmm13_1.o = var_c8_1
    zmm12_1.o = var_b8_1
    zmm11_1.o = var_a8_1
    zmm10_1.o = var_98_1
    zmm9_1.o = zmm9
    zmm8_1.o = var_78_1
    zmm7_1.o = var_68_1
    zmm6_1.o = var_58_1
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    if (rbx_1 != 0)
        float (* rax_65)[0x4] = rbx_1
        
        if (((var_200 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_65 - rbx_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rbx_1)
else
    *arg5 = 0
    rsi_1 = 2
    *arg7 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg7[1].d = 0
    *arg8 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_218_1 = 0
    arg8[1].d = 0
    int32_t var_218_2 = 0

int64_t rcx_39 = var_258

if (rcx_39 != 0)
    sub_140a74f90(rcx_39)

__security_check_cookie(rax_1 ^ &var_2b8)
return zx.q(rsi_1)
