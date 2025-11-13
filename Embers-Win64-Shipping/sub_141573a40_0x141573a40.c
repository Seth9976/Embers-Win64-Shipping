// 函数: sub_141573a40
// 地址: 0x141573a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int64_t* r14 = arg1
int64_t* r15 = arg2
int32_t r12 = 0
uint64_t* var_270 = arg8
int32_t* var_1a8 = arg9
int32_t var_228 = 0
int64_t var_238 = 0
int64_t var_230 = 0
char rax_2
float zmm6[0x4]
uint128_t zmm7
float zmm8[0x4]
uint128_t zmm9
float zmm10[0x4]
uint32_t zmm11[0x4]
float zmm12[0x4]
int32_t zmm13_1
rax_2, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1 =
    sub_1416a32c0(r14, arg2, arg3, arg4, &var_238)
int32_t rsi_1

if (rax_2 != 0)
    int128_t var_1f0
    __builtin_memset(&var_1f0, 0, 0x18)
    float (* rsi_2)[0x4] = var_1f0:8.q
    int32_t i = 0
    float (* rbx_1)[0x4] = var_1f0.q
    int64_t* var_250
    int32_t i_2
    int64_t var_1e0
    float zmm1_1[0x4]
    
    if (var_230.d s> 0)
        do
            char rax_4
            rax_4, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, arg5, arg6 =
                sub_141743d50(sx.q(i) * 0x38 + var_238, *r14, *r15)
            
            if (rax_4 != 0)
                i_2 = i
                var_250 = &var_238
                
                if (var_1e0 == rsi_2)
                    sub_141701fc0(&var_1f0, rsi_2, &var_250)
                    rsi_2 = var_1f0:8.q
                    rbx_1 = var_1f0.q
                else
                    *rsi_2 = var_250.o
                    rsi_2 = &rsi_2[1]
                    var_1f0:8.q = rsi_2
                
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
        while (i s< var_230.d)
    
    int64_t rcx_9 = (rsi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_9 == 0)
        rdx_4 = var_238
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_238
    
    float zmm0_1[0x4] = *rdx_4
    int64_t* rdi_1 = nullptr
    zmm1_1 = rdx_4[1]
    var_250 = nullptr
    float var_58_1[0x4] = zmm6
    uint128_t var_68_1 = zmm7
    float var_78_1[0x4] = zmm8
    uint128_t var_88_1 = zmm9
    float var_98_1[0x4] = zmm10
    uint32_t var_a8_1[0x4] = zmm11
    float var_b8_1[0x4] = zmm12
    float var_128[0x4] = zmm0_1
    i_2.q = 0
    float var_118_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    int128_t var_d8_1 = arg5
    int128_t var_e8_1 = arg6
    int64_t var_f8_1 = rdx_4[3][0].q
    float var_108_1[0x4] = rdx_4[2]
    int512_t zmm6_1
    int512_t zmm7_1
    int512_t zmm8_1
    int512_t zmm9_1
    int512_t zmm10_1
    int512_t zmm11_1
    int512_t zmm12_1
    int512_t zmm14
    int512_t zmm15
    
    if (rcx_9 == 0)
    label_1415745ba:
        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm14, zmm15 =
            sub_14154a2a0(*r14, *r15, &var_128, arg7, arg8, var_1a8, arg10)
        rsi_1 = 1
    else
        zmm11 = 0x7fffffff
        zmm6 = zx.o(0)
        arg5 = 0x322bcc77
        arg6 = 0x38d1b717
        
        while (true)
            if (rdx_5 s< 0x80)
                int64_t r13_1 = sx.q((*rbx_1)[2])
                int32_t var_240_1 = r13_1.d
                
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
                    
                    r12 = var_228
                    rbx_1[i_3] = zmm1_1
                
                rsi_2 -= 0x10
                int32_t* rdi_5 = r13_1 * 0x38 + var_238
                var_1f0:8.q = rsi_2
                
                if (rdi_5[0xd].b != 0)
                    goto label_141574540
                
                zmm8 = rdi_5[4]
                zmm9 = rdi_5[3]
                zmm10 = rdi_5[5]
                void* rax_20 = *arg3
                float zmm4_1[0x4] = *(rax_20 + 0x1c)
                uint128_t zmm3_1 = *(rax_20 + 0x20)
                uint128_t zmm5_1 = *(rax_20 + 0x24)
                zmm4_1[0] = zmm4_1[0] f* zmm9.d
                zmm8[0] = zmm8[0] f* zmm3_1.d
                zmm10[0] = zmm10[0] f* zmm5_1.d
                zmm4_1[0] = zmm4_1[0] + zmm8[0]
                zmm4_1[0] = zmm4_1[0] + zmm10[0]
                int32_t r12_2
                int32_t* r13_2
                float zmm2_1[0x4]
                
                if (zmm4_1[0] < zmm6[0])
                    int64_t var_148
                    r13_2 = &var_148
                    int32_t rax_21 = *(rax_20 + 0x18)
                    r12_2 = r12 | 2
                    var_148 = *(rax_20 + 0x10)
                    int32_t var_140_1 = rax_21
                else
                    zmm2_1 = *(rax_20 + 0x28)
                    float var_190
                    r13_2 = &var_190
                    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                    r12_2 = r12 | 1
                    zmm2_1[0] = zmm2_1[0] f* zmm3_1.d
                    zmm2_1[0] = zmm2_1[0] f+ *(rax_20 + 0x10)
                    zmm2_1[0] = zmm2_1[0] f* zmm5_1.d
                    zmm2_1[0] = zmm2_1[0] f+ *(rax_20 + 0x14)
                    zmm2_1[0] = zmm2_1[0] f+ *(rax_20 + 0x18)
                    var_190 = zmm2_1[0]
                    float var_18c_1 = zmm2_1[0]
                    float var_188_1 = zmm2_1[0]
                
                int32_t rax_22 = r13_2[2]
                zmm7 = zx.o(*r13_2)
                zmm12 = rdi_5[6]
                int32_t rcx_16 = r12_2 & 0xfffffffd
                
                if ((r12_2.b & 2) == 0)
                    rcx_16 = r12_2
                
                int32_t rdx_10 = rcx_16 & 0xfffffffe
                
                if ((rcx_16.b & 1) == 0)
                    rdx_10 = rcx_16
                
                var_228 = rdx_10
                void* rcx_17 = *arg4
                void* rax_25 = *(rcx_17 + 0x10)
                zmm3_1.d = (*(rcx_17 + 0x28)).d f* *(rax_25 + 0x10)
                zmm0_1 = *(rax_25 + 0x18)
                zmm0_1[0] = zmm0_1[0] f* *(rcx_17 + 0x30)
                zmm2_1 = *(rax_25 + 0x14)
                zmm2_1[0] = zmm2_1[0] f* *(rcx_17 + 0x2c)
                int128_t* rax_26 = arg4[1]
                float temp0_5[0x4] = _mm_unpacklo_ps(zmm3_1, zmm0_1[0].q)
                float temp0_6[0x4] = _mm_unpacklo_ps(zmm2_1, zmm6[0].q)
                zmm5_1 = *rax_26
                float temp0_7[0x4] = _mm_unpacklo_ps(temp0_5, temp0_6[0].q)
                zmm3_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                float temp0_9[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), temp0_9)
                float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xd2), zmm3_1)
                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                float temp0_15[0x4] = _mm_sub_ps(temp0_13, temp0_11)
                float temp0_16[0x4] = _mm_add_ps(temp0_15, temp0_15)
                zmm5_1 = _mm_mul_ps(zmm5_1, temp0_16)
                float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xc9), temp0_9)
                zmm1_1 = zmm7
                float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xd2)
                zmm5_1 = _mm_add_ps(zmm5_1, temp0_7)
                float temp0_22[0x4] = _mm_mul_ps(temp0_20, zmm3_1)
                float temp0_23[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                float temp0_26[0x4] = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(temp0_22, temp0_19), zmm5_1), rax_26[1])
                zmm3_1.d = zmm7.d f- temp0_26[0]
                float var_1bc_1 = temp0_26[0]
                float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0x55)
                temp0_23[0] = temp0_23[0] - temp0_27[0]
                float var_1b8_1 = temp0_27[0]
                zmm0_1 = rax_22
                int32_t var_180 = zmm3_1.d
                zmm3_1.d = zmm3_1.d f* zmm9.d
                zmm8[0] = zmm8[0] * temp0_23[0]
                float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)
                zmm0_1[0] = zmm0_1[0] - temp0_28[0]
                float var_17c_1 = temp0_23[0]
                zmm3_1.d = zmm3_1.d f+ zmm8[0]
                float var_1b4_1 = temp0_28[0]
                float var_178_1 = zmm0_1[0]
                zmm0_1[0] = zmm0_1[0] * zmm10[0]
                zmm3_1.d = zmm3_1.d f+ zmm0_1[0]
                zmm3_1 = _mm_min_ss(zmm3_1.d, zmm13_1)
                zmm1_1 = zmm3_1
                zmm13_1 = zmm3_1.d
                zmm1_1[0] = zmm1_1[0] - zmm12[0]
                zmm1_1 = _mm_and_ps(zmm1_1, zmm11)
                zmm12[0] = zmm12[0] * 0.00999999978f
                zmm0_1 = _mm_and_ps(zmm12, zmm11)
                
                if (zmm1_1[0] <= zmm0_1[0])
                    zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm14, zmm15 =
                        sub_14154a2a0(*r14, *r15, rdi_5, arg7, arg8, var_1a8, arg10)
                    rdi_1 = var_250
                    rsi_1 = 0
                    break
                
                if (not(zmm13_1 f< zmm12[0]))
                    int64_t r12_3 = sx.q(r14[1].d)
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
                    int32_t rax_37 = (r12_3 + 1).d
                    var_118_1[2] = zmm12[0]
                    var_128[3].q = zmm0_1.q
                    var_f8_1:4.b = 0
                    int32_t var_1c8_1 = r12_3.d
                    r14[1].d = rax_37
                    
                    if (rax_37 s> *(r14 + 0xc))
                        sub_14083a7e0(r14)
                    
                    int64_t rcx_19 = *r14
                    int64_t rdx_13 = r12_3 * 3
                    int32_t rax_38 = r13_2[2]
                    *(rcx_19 + (rdx_13 << 2)) = zmm7.q
                    *(rcx_19 + (rdx_13 << 2) + 8) = rax_38
                    int64_t r13_3 = sx.q(r15[1].d)
                    int32_t rax_39 = (r13_3 + 1).d
                    r15[1].d = rax_39
                    
                    if (rax_39 s> *(r15 + 0xc))
                        sub_14083a7e0(r15)
                    
                    int64_t rcx_21 = *r15
                    int64_t rdx_16 = r13_3 * 3
                    int32_t var_248 = 0
                    *(rcx_21 + (rdx_16 << 2)) = var_1bc_1.q
                    *(rcx_21 + (rdx_16 << 2) + 8) = var_1b4_1
                    rdi_5[0xd].b = 1
                    int32_t var_244
                    
                    if (var_244 s< 0 && var_244 != 0)
                        sub_1405c5570(&var_250, 0)
                    
                    sub_1415c5980(&var_238, var_240_1, &var_180, &var_250)
                    int32_t r8_10 = var_230.d
                    int64_t r13_4 = sx.q(var_248)
                    int32_t var_240_2 = r8_10
                    int32_t rax_42 = r8_10 + r13_4.d
                    var_230.d = rax_42
                    
                    if (rax_42 s> var_230:4.d)
                        sub_1407c3b60(&var_238)
                        r8_10 = var_240_2
                    
                    if (r13_4.d s>= 3)
                        int64_t rdi_6 = 0
                        char var_258_1 = 0
                        uint64_t var_150_1 = r13_4
                        uint64_t rax_43
                        
                        if (r13_4.d s<= 0)
                            rax_43.b = 0
                        else
                            void* r14_1 = sx.q(r8_10) * 0x38
                            int32_t rsi_3 = 1 - r8_10
                            int32_t rbx_2 = r8_10
                            int32_t var_1c4_1 = rsi_3
                            
                            while (true)
                                int64_t* rdx_19 = var_250
                                int64_t rcx_25 = var_238
                                int64_t r12_4 = sx.q(rdx_19[rdi_6].d)
                                int64_t r11_7 = sx.q(*(&rdx_19[rdi_6] + 4))
                                int32_t* r9_5 = r14_1 + rcx_25
                                int64_t r10_8 = r12_4 * 0x38 + rcx_25
                                int32_t rsi_4 = rbx_2 + 1
                                
                                if (rsi_3 + rbx_2 s>= r13_4.d)
                                    rsi_4 = r8_10
                                
                                int64_t r8_11 = *r15
                                int32_t r13_5 = rbx_2
                                
                                if (rbx_2 s<= r8_10)
                                    r13_5 = rax_42
                                
                                int64_t rdx_22 = *arg1
                                int32_t rax_50 = *(r10_8 + (r11_7 << 2))
                                int64_t rax_52 = sx.q(*(r10_8 + (sx.q((r11_7 + 1).d s% 3) << 2)))
                                int32_t var_1cc_1 = rax_52.d
                                int64_t rcx_28 = rax_52 * 3
                                zmm10 = *(rdx_22 + (rcx_28 << 2))
                                zmm10[0] = zmm10[0] f- *(r8_11 + (rcx_28 << 2))
                                zmm6 = *(rdx_22 + (rcx_28 << 2) + 4)
                                zmm6[0] = zmm6[0] f- *(r8_11 + (rcx_28 << 2) + 4)
                                zmm11 = *(rdx_22 + (rcx_28 << 2) + 8)
                                zmm11[0] = zmm11[0] f- *(r8_11 + (rcx_28 << 2) + 8)
                                int64_t rcx_29 = sx.q(rax_50) * 3
                                zmm2_1 = *(rdx_22 + (rcx_29 << 2) + 8)
                                zmm2_1[0] = zmm2_1[0] f- *(r8_11 + (rcx_29 << 2) + 8)
                                zmm5_1 = *(rdx_22 + (rcx_29 << 2))
                                zmm7.d = (*(rdx_22 + (rdx_13 << 2) + 4)).d f-
                                    *(r8_11 + (rdx_13 << 2) + 4)
                                zmm1_1 = *(rdx_22 + (rdx_13 << 2) + 8)
                                zmm1_1[0] = zmm1_1[0] f- *(r8_11 + (rdx_13 << 2) + 8)
                                zmm3_1 = *(rdx_22 + (rdx_13 << 2))
                                zmm2_1[0] = zmm2_1[0] f- zmm11[0]
                                zmm3_1.d = zmm3_1.d f- *(r8_11 + (rdx_13 << 2))
                                zmm4_1 = *(rdx_22 + (rcx_29 << 2) + 4)
                                zmm7.d = zmm7.d f- zmm6[0]
                                zmm5_1.d = zmm5_1.d f- *(r8_11 + (rcx_29 << 2))
                                zmm4_1[0] = zmm4_1[0] f- *(r8_11 + (rcx_29 << 2) + 4)
                                zmm1_1[0] = zmm1_1[0] f- zmm11[0]
                                zmm3_1.d = zmm3_1.d f- zmm10[0]
                                zmm0_1 = zmm7
                                zmm0_1[0] = zmm0_1[0] * zmm2_1[0]
                                zmm5_1.d = zmm5_1.d f- zmm10[0]
                                zmm8 = zmm1_1
                                zmm4_1[0] = zmm4_1[0] - zmm6[0]
                                zmm9.d = zmm3_1.d f* zmm2_1[0]
                                zmm1_1[0] = zmm1_1[0] f* zmm5_1.d
                                zmm8[0] = zmm8[0] * zmm4_1[0]
                                zmm9.d = zmm9.d f- zmm1_1[0]
                                zmm7.d = zmm7.d f* zmm5_1.d
                                zmm8[0] = zmm8[0] - zmm0_1[0]
                                zmm3_1.d = zmm3_1.d f* zmm4_1[0]
                                zmm2_1 = zmm9
                                zmm7.d = zmm7.d f- zmm3_1.d
                                zmm2_1[0] = zmm2_1[0] f* zmm9.d
                                zmm8[0] = zmm8[0] * zmm8[0]
                                zmm1_1 = zmm7
                                zmm1_1[0] = zmm1_1[0] f* zmm7.d
                                zmm2_1[0] = zmm2_1[0] + zmm8[0]
                                zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                                
                                if (zmm2_1[0] == 1f)
                                    goto label_1415743d0
                                
                                float var_224_1
                                float var_21c_1
                                
                                if (zmm2_1[0] f>= arg5.d)
                                    zmm4_1 = 0x3f000000
                                    zmm3_1 = zmm2_1
                                    zmm5_1 = _mm_rsqrt_ss(zmm2_1.d, zmm3_1.d)
                                    zmm2_1 = 0x3f000000
                                    zmm3_1.d = zmm3_1.d f* 0.5f
                                    zmm0_1 = zmm5_1
                                    zmm0_1[0] = zmm0_1[0] f* zmm5_1.d
                                    zmm1_1 = zmm3_1
                                    zmm1_1[0] = zmm1_1[0] * zmm0_1[0]
                                    zmm0_1 = zmm5_1
                                    zmm2_1[0] = 0.5f - zmm1_1[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm2_1[0]
                                    zmm5_1.d = zmm5_1.d f+ zmm0_1[0]
                                    zmm1_1 = zmm5_1
                                    zmm0_1 = zmm5_1
                                    zmm1_1[0] = zmm1_1[0] f* zmm5_1.d
                                    zmm3_1.d = zmm3_1.d f* zmm1_1[0]
                                    zmm4_1[0] = 0.5f f- zmm3_1.d
                                    zmm0_1[0] = zmm0_1[0] * zmm4_1[0]
                                    zmm5_1.d = zmm5_1.d f+ zmm0_1[0]
                                    zmm8[0] = zmm8[0] f* zmm5_1.d
                                    zmm9.d = zmm9.d f* zmm5_1.d
                                    zmm7.d = zmm7.d f* zmm5_1.d
                                label_1415743d0:
                                    var_21c_1 = zmm7.d
                                    int32_t var_220_2 = zmm9.d
                                    var_224_1 = zmm8[0]
                                else
                                    var_224_1 = data_143dbb1f8[0]
                                    var_21c_1 = data_143dbb200[0]
                                    float var_220_1 = data_143dbb1fc[0]
                                
                                *(r9_5 + 0xc) = var_224_1.q
                                r9_5[5] = var_21c_1
                                zmm0_1 = r9_5[4]
                                zmm2_1 = r9_5[3]
                                zmm1_1 = r9_5[5]
                                zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                                
                                if (zmm2_1[0] f>= arg6.d)
                                    *r9_5 = var_1cc_1
                                    r9_5[1] = rax_50
                                    r9_5[2] = var_1c8_1
                                    rax_43.b = 1
                                    r9_5[7] = r12_4.d
                                    r9_5[8] = r13_5 - 1
                                    r9_5[9] = rsi_4
                                    r9_5[0xa] = r11_7.d
                                    r9_5[0xb] = 2
                                    r9_5[0xc] = 1
                                    zmm6[0] = zmm6[0] f* r9_5[4]
                                    zmm10[0] = zmm10[0] f* r9_5[3]
                                    zmm11[0] = zmm11[0] f* r9_5[5]
                                    r9_5[0xd].b = 0
                                    zmm6[0] = zmm6[0] + zmm10[0]
                                    zmm6[0] = zmm6[0] f+ zmm11[0]
                                    r9_5[6] = zmm6[0]
                                else
                                    rax_43.b = 0
                                
                                r15 = arg2
                                *(r10_8 + (r11_7 << 2) + 0x1c) = rbx_2
                                *(r10_8 + (r11_7 << 2) + 0x28) = 0
                                
                                if (rax_43.b == 0)
                                    rsi_2 = var_1f0:8.q
                                    rax_43.b = 1
                                    rbx_1 = var_1f0.q
                                    zmm11 = 0x7fffffff
                                    r14 = arg1
                                    break
                                
                                zmm0_1 = r9_5[6]
                                
                                if (not(zmm0_1[0] < zmm12[0]) && not(zmm0_1[0] f> zmm13_1))
                                    char rax_58
                                    rax_58, zmm12, zmm13_1, arg5, arg6 =
                                        sub_141743d50(r9_5, *arg1, *r15)
                                    
                                    if (rax_58 != 0)
                                        int32_t var_130_1 = rbx_2
                                        int64_t* var_138 = &var_238
                                        sub_14175ce20(&var_1f0, &var_138)
                                
                                r8_10 = var_240_2
                                rbx_2 += 1
                                r13_4 = zx.q(var_248)
                                r14_1 += 0x38
                                rsi_3 = var_1c4_1
                                rdi_6 += 1
                                
                                if (rdi_6 s>= var_150_1)
                                    rsi_2 = var_1f0:8.q
                                    rbx_1 = var_1f0.q
                                    zmm11 = 0x7fffffff
                                    r14 = arg1
                                    rax_43 = zx.q(var_258_1)
                                    break
                        
                        if (rax_43.b == 0)
                            zmm6 = zx.o(0)
                        label_141574540:
                            rcx_9 = (rsi_2 - rbx_1) s>> 4
                            
                            if (rcx_9 != 0)
                                r12 = var_228
                                rdx_5 += 1
                                continue
            
            rdi_1 = var_250
            goto label_1415745ba
    
    zmm15.o = var_e8_1
    zmm14.o = var_d8_1
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
        float (* rax_65)[0x4] = rbx_1
        
        if (((var_1e0 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_65 - rbx_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rbx_1)
else
    *arg7 = 0
    rsi_1 = 2
    *arg9 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg9[1].d = 0
    *arg10 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_1f8_1 = 0
    arg10[1].d = 0
    int32_t var_1f8_2 = 0

int64_t rcx_38 = var_238

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

__security_check_cookie(rax_1 ^ &var_298)
return zx.q(rsi_1)
