// 函数: sub_141557580
// 地址: 0x141557580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int64_t* r14 = arg1
int64_t* r15 = arg2
int32_t r12 = 0
uint64_t* var_280 = arg6
int32_t* var_1c0 = arg7
int32_t var_238 = 0
int64_t var_248 = 0
int64_t var_240 = 0
char rax_2
uint128_t zmm6
uint128_t zmm7
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
uint32_t zmm11[0x4]
float zmm12[0x4]
float zmm13_1
int128_t zmm14
int128_t zmm15
rax_2, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, zmm14, zmm15 =
    sub_14168be70(r14, arg2, arg3, arg4, &var_248)
int32_t rsi_1

if (rax_2 != 0)
    int128_t var_208
    __builtin_memset(&var_208, 0, 0x18)
    float (* rsi_2)[0x4] = var_208:8.q
    int32_t i = 0
    float (* rbx_1)[0x4] = var_208.q
    int64_t* var_260
    int32_t i_2
    int64_t var_1f8
    float zmm1_1[0x4]
    
    if (var_240.d s> 0)
        do
            char rax_4
            rax_4, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, zmm14, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_248, *r14, *r15)
            
            if (rax_4 != 0)
                i_2 = i
                var_260 = &var_248
                
                if (var_1f8 == rsi_2)
                    sub_141701fc0(&var_208, rsi_2, &var_260)
                    rsi_2 = var_208:8.q
                    rbx_1 = var_208.q
                else
                    *rsi_2 = var_260.o
                    rsi_2 = &rsi_2[1]
                    var_208:8.q = rsi_2
                
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
        while (i s< var_240.d)
    
    int64_t rcx_9 = (rsi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_9 == 0)
        rdx_4 = var_248
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_248
    
    float zmm0_1[0x4] = *rdx_4
    int64_t* rdi_1 = nullptr
    zmm1_1 = rdx_4[1]
    var_260 = nullptr
    uint128_t var_58_1 = zmm6
    uint128_t var_68_1 = zmm7
    float var_78_1[0x4] = zmm8
    float var_88_1[0x4] = zmm9
    float var_98_1[0x4] = zmm10
    uint32_t var_a8_1[0x4] = zmm11
    float var_b8_1[0x4] = zmm12
    float var_130[0x4] = zmm0_1
    i_2.q = 0
    float var_120_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    int128_t var_d8_1 = zmm14
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
    int512_t zmm14_1
    int512_t zmm15_1
    
    if (rcx_9 == 0)
    label_1415580f0:
        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm14_1, zmm15_1 =
            sub_14154a2a0(*r14, *r15, &var_130, arg5, arg6, var_1c0, arg8)
        rsi_1 = 1
    else
        zmm11 = 0x7fffffff
        zmm6 = zx.o(0)
        zmm14 = 0x322bcc77
        zmm15 = 0x38d1b717
        
        while (true)
            if (rdx_5 s< 0x80)
                int64_t r13_1 = sx.q((*rbx_1)[2])
                int32_t var_250_1 = r13_1.d
                
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
                    
                    r12 = var_238
                    rbx_1[i_3] = zmm1_1
                
                rsi_2 -= 0x10
                int32_t* rdi_5 = r13_1 * 0x38 + var_248
                var_208:8.q = rsi_2
                
                if (rdi_5[0xd].b != 0)
                    goto label_141558076
                
                zmm10 = rdi_5[4]
                zmm8 = rdi_5[3]
                zmm9 = rdi_5[5]
                void* rax_20 = *arg3
                uint128_t zmm4_1 = *(rax_20 + 0x1c)
                uint128_t zmm3_1 = *(rax_20 + 0x20)
                float zmm2_1[0x4] = zmm4_1
                uint128_t zmm5_1 = *(rax_20 + 0x24)
                zmm2_1[0] = zmm2_1[0] * zmm8[0]
                zmm10[0] = zmm10[0] f* zmm3_1.d
                zmm9[0] = zmm9[0] f* zmm5_1.d
                zmm2_1[0] = zmm2_1[0] + zmm10[0]
                zmm2_1[0] = zmm2_1[0] + zmm9[0]
                int32_t r12_2
                int32_t* r13_2
                
                if (zmm2_1[0] f< zmm6.d)
                    int64_t var_160
                    r13_2 = &var_160
                    int32_t rax_21 = *(rax_20 + 0x18)
                    r12_2 = r12 | 2
                    var_160 = *(rax_20 + 0x10)
                    int32_t var_158_1 = rax_21
                else
                    zmm2_1 = *(rax_20 + 0x28)
                    float var_1a8
                    r13_2 = &var_1a8
                    zmm2_1[0] = zmm2_1[0] f* zmm4_1.d
                    r12_2 = r12 | 1
                    zmm2_1[0] = zmm2_1[0] f* zmm3_1.d
                    zmm2_1[0] = zmm2_1[0] f+ *(rax_20 + 0x10)
                    zmm2_1[0] = zmm2_1[0] f* zmm5_1.d
                    zmm2_1[0] = zmm2_1[0] f+ *(rax_20 + 0x14)
                    zmm2_1[0] = zmm2_1[0] f+ *(rax_20 + 0x18)
                    var_1a8 = zmm2_1[0]
                    float var_1a4_1 = zmm2_1[0]
                    float var_1a0_1 = zmm2_1[0]
                
                int32_t rax_22 = r13_2[2]
                zmm7 = zx.o(*r13_2)
                zmm12 = rdi_5[6]
                int32_t rcx_16 = r12_2 & 0xfffffffd
                
                if ((r12_2.b & 2) == 0)
                    rcx_16 = r12_2
                
                int32_t rdx_10 = rcx_16 & 0xfffffffe
                
                if ((rcx_16.b & 1) == 0)
                    rdx_10 = rcx_16
                
                var_238 = rdx_10
                void* rax_25 = *arg4
                zmm4_1 = zx.o(*(rax_25 + 0x10))
                int32_t rax_26 = *(rax_25 + 0x18)
                zmm0_1 = zmm4_1
                float temp0_5[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                int128_t* rax_27 = arg4[1]
                float temp0_6[0x4] = _mm_unpacklo_ps(temp0_5, zmm6.q)
                zmm6 = _mm_unpacklo_ps(zmm4_1, rax_26[0].q)
                zmm5_1 = *rax_27
                zmm6 = _mm_unpacklo_ps(zmm6, temp0_6[0].q)
                zmm4_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                float temp0_10[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), temp0_10)
                float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4_1)
                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                float temp0_16[0x4] = _mm_sub_ps(temp0_14, temp0_12)
                float temp0_17[0x4] = _mm_add_ps(temp0_16, temp0_16)
                zmm5_1 = _mm_mul_ps(zmm5_1, temp0_17)
                float temp0_19[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc9)
                zmm3_1 = _mm_shuffle_ps(temp0_17, temp0_17, 0xd2)
                zmm2_1 = zmm7
                float temp0_21[0x4] = _mm_mul_ps(temp0_19, temp0_10)
                zmm3_1 = _mm_mul_ps(zmm3_1, zmm4_1)
                zmm5_1 = _mm_add_ps(zmm5_1, zmm6)
                zmm3_1 =
                    __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm3_1, temp0_21), zmm5_1), rax_27[1])
                zmm2_1[0] = zmm2_1[0] f- zmm3_1.d
                int32_t var_1d4_1 = zmm3_1.d
                float temp0_27[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
                float temp0_28[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                zmm3_1 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm8[0] = zmm8[0] * zmm2_1[0]
                zmm3_1.d = zmm3_1.d f- temp0_28[0]
                float var_1d0_1 = temp0_28[0]
                zmm0_1 = rax_22
                zmm0_1[0] = zmm0_1[0] - temp0_27[0]
                float var_1cc_1 = temp0_27[0]
                int32_t var_194_1 = zmm3_1.d
                zmm3_1.d = zmm3_1.d f* zmm10[0]
                float var_198 = zmm2_1[0]
                zmm9[0] = zmm9[0] * zmm0_1[0]
                zmm8[0] = zmm8[0] f+ zmm3_1.d
                float var_190_1 = zmm0_1[0]
                zmm8[0] = zmm8[0] + zmm9[0]
                float temp0_30[0x4] = _mm_min_ss(zmm8[0], zmm13_1)
                zmm13_1 = temp0_30[0]
                temp0_30[0] = temp0_30[0] - zmm12[0]
                zmm1_1 = _mm_and_ps(temp0_30, zmm11)
                zmm12[0] = zmm12[0] * 0.00999999978f
                zmm0_1 = _mm_and_ps(zmm12, zmm11)
                
                if (zmm1_1[0] <= zmm0_1[0])
                    zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm14_1, zmm15_1 =
                        sub_14154a2a0(*r14, *r15, rdi_5, arg5, arg6, var_1c0, arg8)
                    rdi_1 = var_260
                    rsi_1 = 0
                    break
                
                if (not(zmm13_1 < zmm12[0]))
                    int64_t r12_3 = sx.q(r14[1].d)
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
                    int32_t rax_38 = (r12_3 + 1).d
                    var_120_1[2] = zmm12[0]
                    var_130[3].q = zmm0_1.q
                    var_100_1:4.b = 0
                    int32_t var_1e4_1 = r12_3.d
                    r14[1].d = rax_38
                    
                    if (rax_38 s> *(r14 + 0xc))
                        sub_14083a7e0(r14)
                    
                    int64_t rcx_19 = *r14
                    int64_t rdx_12 = r12_3 * 3
                    int32_t rax_39 = r13_2[2]
                    *(rcx_19 + (rdx_12 << 2)) = zmm7.q
                    *(rcx_19 + (rdx_12 << 2) + 8) = rax_39
                    int64_t r13_3 = sx.q(r15[1].d)
                    int32_t rax_40 = (r13_3 + 1).d
                    r15[1].d = rax_40
                    
                    if (rax_40 s> *(r15 + 0xc))
                        sub_14083a7e0(r15)
                    
                    int64_t rcx_21 = *r15
                    int64_t rdx_15 = r13_3 * 3
                    int32_t var_258 = 0
                    *(rcx_21 + (rdx_15 << 2)) = var_1d4_1.q
                    *(rcx_21 + (rdx_15 << 2) + 8) = var_1cc_1
                    rdi_5[0xd].b = 1
                    int32_t var_254
                    
                    if (var_254 s< 0 && var_254 != 0)
                        sub_1405c5570(&var_260, 0)
                    
                    sub_1415c5980(&var_248, var_250_1, &var_198, &var_260)
                    int64_t r13_4 = sx.q(var_240.d)
                    int32_t r8_10 = var_258
                    int32_t rax_43 = r8_10 + r13_4.d
                    var_240.d = rax_43
                    
                    if (rax_43 s> var_240:4.d)
                        sub_1407c3b60(&var_248)
                        r8_10 = var_258
                    
                    if (r8_10 s>= 3)
                        int64_t rdi_6 = 0
                        char var_268_1 = 0
                        uint64_t var_168_1 = sx.q(r8_10)
                        uint64_t rax_44
                        
                        if (r8_10 s<= 0)
                            rax_44.b = 0
                        else
                            void* r14_1 = r13_4 * 0x38
                            int32_t rbx_2 = r13_4.d
                            int32_t r11_7 = 1 - r13_4.d
                            int32_t var_1dc_1 = r11_7
                            
                            while (true)
                                int64_t* rdx_18 = var_260
                                int64_t rcx_25 = var_248
                                int64_t r12_4 = sx.q(rdx_18[rdi_6].d)
                                int64_t rsi_3 = sx.q(*(&rdx_18[rdi_6] + 4))
                                int32_t* r9_5 = r14_1 + rcx_25
                                int64_t r10_8 = r12_4 * 0x38 + rcx_25
                                int32_t r11_8 = rbx_2 + 1
                                
                                if (r11_7 + rbx_2 s>= r8_10)
                                    r11_8 = r13_4.d
                                
                                int64_t r8_11 = *r15
                                int32_t rax_49 = rbx_2
                                
                                if (rbx_2 s<= r13_4.d)
                                    rax_49 = r8_10 + r13_4.d
                                
                                int64_t rdx_22 = *arg1
                                int32_t rax_52 = *(r10_8 + (rsi_3 << 2))
                                int64_t rax_54 = sx.q(*(r10_8 + (sx.q((rsi_3 + 1).d s% 3) << 2)))
                                int32_t var_1e8_1 = rax_54.d
                                int64_t rcx_28 = rax_54 * 3
                                zmm10 = *(rdx_22 + (rcx_28 << 2))
                                zmm10[0] = zmm10[0] f- *(r8_11 + (rcx_28 << 2))
                                zmm6.d = (*(rdx_22 + (rcx_28 << 2) + 4)).d f-
                                    *(r8_11 + (rcx_28 << 2) + 4)
                                zmm11 = *(rdx_22 + (rcx_28 << 2) + 8)
                                zmm11[0] = zmm11[0] f- *(r8_11 + (rcx_28 << 2) + 8)
                                int64_t rcx_29 = sx.q(rax_52) * 3
                                zmm2_1 = *(rdx_22 + (rcx_29 << 2) + 8)
                                zmm2_1[0] = zmm2_1[0] f- *(r8_11 + (rcx_29 << 2) + 8)
                                zmm5_1 = *(rdx_22 + (rcx_29 << 2))
                                zmm7.d = (*(rdx_22 + (rdx_12 << 2) + 4)).d f-
                                    *(r8_11 + (rdx_12 << 2) + 4)
                                zmm1_1 = *(rdx_22 + (rdx_12 << 2) + 8)
                                zmm1_1[0] = zmm1_1[0] f- *(r8_11 + (rdx_12 << 2) + 8)
                                zmm3_1 = *(rdx_22 + (rdx_12 << 2))
                                zmm2_1[0] = zmm2_1[0] f- zmm11[0]
                                zmm3_1.d = zmm3_1.d f- *(r8_11 + (rdx_12 << 2))
                                zmm7.d = zmm7.d f- zmm6.d
                                zmm5_1.d = zmm5_1.d f- *(r8_11 + (rcx_29 << 2))
                                zmm4_1.d = (*(rdx_22 + (rcx_29 << 2) + 4)).d f-
                                    *(r8_11 + (rcx_29 << 2) + 4)
                                zmm1_1[0] = zmm1_1[0] f- zmm11[0]
                                zmm3_1.d = zmm3_1.d f- zmm10[0]
                                zmm0_1 = zmm7
                                zmm0_1[0] = zmm0_1[0] * zmm2_1[0]
                                zmm5_1.d = zmm5_1.d f- zmm10[0]
                                zmm8 = zmm1_1
                                zmm4_1.d = zmm4_1.d f- zmm6.d
                                zmm9 = zmm3_1
                                zmm9[0] = zmm9[0] * zmm2_1[0]
                                zmm1_1[0] = zmm1_1[0] f* zmm5_1.d
                                zmm8[0] = zmm8[0] f* zmm4_1.d
                                zmm9[0] = zmm9[0] - zmm1_1[0]
                                zmm7.d = zmm7.d f* zmm5_1.d
                                zmm8[0] = zmm8[0] - zmm0_1[0]
                                zmm3_1.d = zmm3_1.d f* zmm4_1.d
                                zmm7.d = zmm7.d f- zmm3_1.d
                                zmm9[0] = zmm9[0] * zmm9[0]
                                zmm8[0] = zmm8[0] * zmm8[0]
                                zmm1_1 = zmm7
                                zmm1_1[0] = zmm1_1[0] f* zmm7.d
                                zmm9[0] = zmm9[0] + zmm8[0]
                                zmm9[0] = zmm9[0] + zmm1_1[0]
                                
                                if (zmm9[0] == 1f)
                                    goto label_141557f06
                                
                                float var_234_1
                                float var_22c_1
                                
                                if (zmm9[0] f>= zmm14.d)
                                    zmm3_1 = zmm9
                                    zmm5_1 = _mm_rsqrt_ss(zmm9.d, zmm3_1.d)
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
                                    zmm4_1.d = 0.5f f- zmm3_1.d
                                    zmm0_1[0] = zmm0_1[0] f* zmm4_1.d
                                    zmm5_1.d = zmm5_1.d f+ zmm0_1[0]
                                    zmm8[0] = zmm8[0] f* zmm5_1.d
                                    zmm9[0] = zmm9[0] f* zmm5_1.d
                                    zmm7.d = zmm7.d f* zmm5_1.d
                                label_141557f06:
                                    var_22c_1 = zmm7.d
                                    float var_230_2 = zmm9[0]
                                    var_234_1 = zmm8[0]
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
                                
                                if (zmm2_1[0] f>= zmm15.d)
                                    *r9_5 = var_1e8_1
                                    r9_5[1] = rax_52
                                    r9_5[2] = var_1e4_1
                                    r9_5[8] = rax_49 - 1
                                    rax_44.b = 1
                                    r9_5[7] = r12_4.d
                                    r9_5[9] = r11_8
                                    r9_5[0xa] = rsi_3.d
                                    r9_5[0xb] = 2
                                    r9_5[0xc] = 1
                                    zmm6.d = zmm6.d f* r9_5[4]
                                    zmm10[0] = zmm10[0] f* r9_5[3]
                                    zmm11[0] = zmm11[0] f* r9_5[5]
                                    r9_5[0xd].b = 0
                                    zmm6.d = zmm6.d f+ zmm10[0]
                                    zmm6.d = zmm6.d f+ zmm11[0]
                                    r9_5[6] = zmm6.d
                                else
                                    rax_44.b = 0
                                
                                r15 = arg2
                                *(r10_8 + (rsi_3 << 2) + 0x1c) = rbx_2
                                *(r10_8 + (rsi_3 << 2) + 0x28) = 0
                                
                                if (rax_44.b == 0)
                                    rsi_2 = var_208:8.q
                                    rax_44.b = 1
                                    rbx_1 = var_208.q
                                    zmm11 = 0x7fffffff
                                    r14 = arg1
                                    break
                                
                                zmm0_1 = r9_5[6]
                                
                                if (not(zmm0_1[0] < zmm12[0]) && not(zmm0_1[0] > zmm13_1))
                                    char rax_61
                                    rax_61, zmm12, zmm13_1, zmm14, zmm15 =
                                        sub_141743d50(r9_5, *arg1, *r15)
                                    
                                    if (rax_61 != 0)
                                        int32_t var_138_1 = rbx_2
                                        int64_t* var_140 = &var_248
                                        sub_14175ce20(&var_208, &var_140)
                                
                                r8_10 = var_258
                                rbx_2 += 1
                                r11_7 = var_1dc_1
                                r14_1 += 0x38
                                rdi_6 += 1
                                
                                if (rdi_6 s>= var_168_1)
                                    rsi_2 = var_208:8.q
                                    rbx_1 = var_208.q
                                    zmm11 = 0x7fffffff
                                    r14 = arg1
                                    rax_44 = zx.q(var_268_1)
                                    break
                        
                        if (rax_44.b == 0)
                            zmm6 = zx.o(0)
                        label_141558076:
                            rcx_9 = (rsi_2 - rbx_1) s>> 4
                            
                            if (rcx_9 != 0)
                                r12 = var_238
                                rdx_5 += 1
                                continue
            
            rdi_1 = var_260
            goto label_1415580f0
    
    zmm15_1.o = var_e8_1
    zmm14_1.o = var_d8_1
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
        
        if (((var_1f8 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_68 - rbx_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rbx_1)
else
    *arg5 = 0
    rsi_1 = 2
    *arg7 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg7[1].d = 0
    *arg8 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_210_1 = 0
    arg8[1].d = 0
    int32_t var_210_2 = 0

int64_t rcx_38 = var_248

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

__security_check_cookie(rax_1 ^ &var_2a8)
return zx.q(rsi_1)
