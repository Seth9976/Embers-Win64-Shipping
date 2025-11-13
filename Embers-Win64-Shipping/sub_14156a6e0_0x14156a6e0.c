// 函数: sub_14156a6e0
// 地址: 0x14156a6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int64_t* r15 = arg1
int64_t* r12 = arg2
uint64_t* var_290 = arg6
float* var_1d8 = arg5
int32_t* var_1c8 = arg7
int32_t var_250 = 0
int64_t var_260 = 0
int64_t var_258 = 0
char rax_2
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
uint128_t zmm12
uint128_t zmm13
int128_t zmm15
rax_2, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm15 =
    sub_14169ba00(r15, arg2, arg3, arg4, &var_260)
int32_t rdi_1

if (rax_2 != 0)
    int32_t i = 0
    int128_t var_218
    __builtin_memset(&var_218, 0, 0x18)
    float (* rdi_2)[0x4] = var_218:8.q
    float (* rbx_1)[0x4] = var_218.q
    int64_t* var_270
    int64_t var_208
    float zmm1_1[0x4]
    
    if (var_258.d s> 0)
        do
            char rax_4
            rax_4, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_260, *r15, *r12)
            
            if (rax_4 != 0)
                int64_t var_268
                var_268.d = i
                var_270 = &var_260
                
                if (var_208 == rdi_2)
                    sub_141701fc0(&var_218, rdi_2, &var_270)
                    rdi_2 = var_218:8.q
                    rbx_1 = var_218.q
                else
                    *rdi_2 = var_270.o
                    rdi_2 = &rdi_2[1]
                    var_218:8.q = rdi_2
                
                int64_t r8_4 = (rdi_2 - rbx_1) s>> 4
                
                if (r8_4 s>= 2)
                    zmm1_1 = rdi_2[-1]
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
        while (i s< var_258.d)
    
    int64_t rcx_9 = (rdi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_9 == 0)
        rdx_4 = var_260
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_260
    
    float var_58_1[0x4] = zmm6
    int64_t* rsi_1 = nullptr
    float var_68_1[0x4] = zmm7
    int32_t r13_1 = 0
    float var_78_1[0x4] = zmm8
    float var_88_1[0x4] = zmm9
    float var_98_1[0x4] = zmm10
    float var_a8_1[0x4] = zmm11
    uint128_t var_b8_1 = zmm12
    uint128_t var_c8_1 = zmm13
    var_270 = nullptr
    int64_t var_268_1 = 0
    zmm1_1 = rdx_4[1]
    float var_130[0x4] = *rdx_4
    float var_120_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
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
    int512_t zmm15_2
    
    if (rcx_9 == 0)
    label_14156b250:
        zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm15_2 =
            sub_14154a2a0(*r15, *r12, &var_130, var_1d8, arg6, var_1c8, arg8)
        rdi_1 = 1
    else
        zmm13 = 0x80000000
        zmm12 = zx.o(0)
        
        while (true)
            if (rdx_5 s< 0x80)
                float rax_10 = (*rbx_1)[2]
                float var_274_1 = rax_10
                
                if (rcx_9 s>= 2)
                    zmm1_1 = rdi_2[-1]
                    int64_t i_2 = 0
                    int64_t i_3 = 0
                    rdi_2[-1] = *rbx_1
                    int64_t r11_4 = (&rdi_2[-1] - rbx_1) s>> 4
                    int64_t rsi_3 = (r11_4 - 1) s>> 1
                    
                    if (rsi_3 s> 0)
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
                        while (i_3 s< rsi_3)
                    
                    if (i_3 == rsi_3 && (r11_4.b & 1) == 0)
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
                    
                    rax_10 = var_274_1
                    rbx_1[i_2] = zmm1_1
                
                rdi_2 -= 0x10
                var_218:8.q = rdi_2
                int32_t* rsi_5 = sx.q(rax_10) * 0x38 + var_260
                char r14_2 = rsi_5[0xd].b
                
                if (r14_2 != 0)
                    goto label_14156b1d3
                
                zmm10 = rsi_5[3]
                zmm6 = rsi_5[4]
                zmm11 = rsi_5[5]
                void* rax_22 = *arg3
                void* rcx_15 = *(rax_22 + 0x10)
                zmm7 = *(rax_22 + 0x28)
                zmm8 = *(rax_22 + 0x2c)
                zmm9 = *(rax_22 + 0x30)
                float zmm4_1 = *(rcx_15 + 0x20)
                float zmm3_1[0x4] = *(rcx_15 + 0x1c)
                float zmm5_1[0x4] = *(rcx_15 + 0x24)
                zmm6[0] = zmm6[0] * zmm8[0]
                zmm10[0] = zmm10[0] * zmm7[0]
                zmm6[0] = zmm6[0] * zmm4_1
                zmm10[0] = zmm10[0] * zmm3_1[0]
                zmm11[0] = zmm11[0] * zmm9[0]
                zmm6[0] = zmm6[0] + zmm10[0]
                zmm11[0] = zmm11[0] * zmm5_1[0]
                zmm6[0] = zmm6[0] + zmm11[0]
                int32_t* rax_23
                int32_t rdx_10
                float zmm0_1[0x4]
                
                if (zmm6[0] f< zmm12.d)
                    rdx_10 = var_250 | 2
                    int32_t var_180_1 = *(rcx_15 + 0x18)
                    int64_t var_188
                    rax_23 = &var_188
                    var_188 = *(rcx_15 + 0x10)
                else
                    zmm0_1 = *(rcx_15 + 0x28)
                    float var_1b8
                    rax_23 = &var_1b8
                    zmm3_1[0] = zmm3_1[0] * zmm0_1[0]
                    rdx_10 = var_250 | 1
                    zmm4_1 = zmm4_1 * zmm0_1[0]
                    zmm3_1[0] = zmm3_1[0] f+ *(rcx_15 + 0x10)
                    zmm5_1[0] = zmm5_1[0] * zmm0_1[0]
                    zmm4_1 = zmm4_1 f+ *(rcx_15 + 0x14)
                    zmm5_1[0] = zmm5_1[0] f+ *(rcx_15 + 0x18)
                    var_1b8 = zmm3_1[0]
                    float var_1b4_1 = zmm4_1
                    float var_1b0_1 = zmm5_1[0]
                
                zmm1_1 = zx.o(*rax_23)
                int32_t rcx_17 = rdx_10 & 0xfffffffd
                zmm9[0] = zmm9[0] f* rax_23[2]
                zmm7[0] = zmm7[0] * zmm1_1[0]
                
                if ((rdx_10.b & 2) == 0)
                    rcx_17 = rdx_10
                
                float temp0_5[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm8[0] = zmm8[0] * temp0_5[0]
                int32_t rdx_12 = rcx_17 & 0xfffffffe
                float var_1e8_1 = zmm7[0]
                float var_1e0_1 = zmm9[0]
                float var_1ac = (zmm10 ^ zmm13)[0]
                float var_1e4_1 = zmm8[0]
                
                if ((rcx_17.b & 1) == 0)
                    rdx_12 = rcx_17
                
                var_250 = rdx_12
                float var_1a8_1 = (zmm6 ^ zmm13)[0]
                float var_1a4_1 = (zmm11 ^ zmm13)[0]
                float var_140[0x4]
                float* rax_28
                float zmm6_1[0x4]
                float zmm14_1
                int32_t zmm15_1
                rax_28, zmm6_1, zmm7, zmm8, zmm9, zmm10, zmm11, zmm14_1, zmm15_1 =
                    sub_14170a370(arg4, &var_140, &var_1ac)
                zmm13 = rsi_5[6]
                zmm12 = zx.o(*rax_28)
                int32_t rax_29 = rax_28[2]
                zmm7[0] = zmm7[0] f- zmm12.d
                zmm9[0] = zmm9[0] f- rax_29
                uint128_t zmm0_2 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                zmm8[0] = zmm8[0] f- zmm0_2.d
                zmm10[0] = zmm10[0] * zmm7[0]
                zmm0_2.d = zmm13.d f* 0.00999999978f
                zmm6_1[0] = zmm6_1[0] * zmm8[0]
                zmm0_2 = __andps_xmmxud_memxud(zmm0_2, data_142d3f770)
                zmm11[0] = zmm11[0] * zmm9[0]
                zmm6_1[0] = zmm6_1[0] + zmm10[0]
                float var_1a0 = zmm7[0]
                float var_19c_1 = zmm8[0]
                float var_198_1 = zmm9[0]
                zmm6_1[0] = zmm6_1[0] + zmm11[0]
                float temp0_8[0x4] = _mm_min_ss(zmm6_1[0], zmm14_1)
                zmm14_1 = temp0_8[0]
                temp0_8[0] = temp0_8[0] f- zmm13.d
                
                if (__andps_xmmxud_memxud(temp0_8, data_142d3f770)[0] f<= zmm0_2.d)
                    zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm15_2 =
                        sub_14154a2a0(*r15, *r12, rsi_5, var_1d8, arg6, var_1c8, arg8)
                    rsi_1 = var_270
                    rdi_1 = 0
                    break
                
                if (not(zmm14_1 f< zmm13.d))
                    zmm0_2 = zx.o(*(rsi_5 + 0xc))
                    var_130[0] = *rsi_5
                    var_130[1] = rsi_5[1]
                    var_130[2] = rsi_5[2]
                    var_120_1[1] = rsi_5[5]
                    var_120_1[3] = rsi_5[7]
                    var_110_1[0] = rsi_5[8]
                    var_110_1[1] = rsi_5[9]
                    var_110_1[2] = rsi_5[0xa]
                    var_110_1[3] = rsi_5[0xb]
                    var_100_1:4.b = r14_2
                    int64_t r14_3 = sx.q(r15[1].d)
                    var_100_1.d = rsi_5[0xc]
                    var_120_1[2] = zmm13.d
                    var_130[3].q = zmm0_2.q
                    int32_t rax_40 = (r14_3 + 1).d
                    int32_t var_1f8_1 = r14_3.d
                    r15[1].d = rax_40
                    
                    if (rax_40 s> *(r15 + 0xc))
                        sub_14083a7e0(r15)
                    
                    int64_t rcx_20 = *r15
                    int64_t rdx_15 = r14_3 * 3
                    *(rcx_20 + (rdx_15 << 2)) = var_1e8_1.q
                    *(rcx_20 + (rdx_15 << 2) + 8) = var_1e0_1
                    int64_t r14_4 = sx.q(r12[1].d)
                    int32_t rax_42 = (r14_4 + 1).d
                    r12[1].d = rax_42
                    
                    if (rax_42 s> *(r12 + 0xc))
                        sub_14083a7e0(r12)
                    
                    int64_t rax_43 = *r12
                    int64_t rcx_22 = r14_4 * 3
                    var_268_1.d = 0
                    *(rax_43 + (rcx_22 << 2)) = zmm12.q
                    *(rax_43 + (rcx_22 << 2) + 8) = rax_29
                    rsi_5[0xd].b = 1
                    
                    if (r13_1 s< 0 && r13_1 != 0)
                        sub_1405c5570(&var_270, 0)
                    
                    sub_1415c5980(&var_260, var_274_1, &var_1a0, &var_270)
                    int64_t r13_2 = sx.q(var_258.d)
                    int32_t r8_11 = var_268_1.d
                    int32_t rax_44 = r8_11 + r13_2.d
                    var_258.d = rax_44
                    
                    if (rax_44 s> var_258:4.d)
                        sub_1407c3b60(&var_260)
                        r8_11 = var_268_1.d
                    
                    if (r8_11 s>= 3)
                        int64_t rsi_6 = 0
                        char var_278_1 = 0
                        int64_t var_190_1 = sx.q(r8_11)
                        int64_t rax_45
                        
                        if (r8_11 s<= 0)
                            rax_45.b = 0
                        else
                            void* rdi_3 = r13_2 * 0x38
                            int32_t rbx_2 = r13_2.d
                            int32_t r11_7 = 1 - r13_2.d
                            int32_t var_1f0_1 = r11_7
                            
                            while (true)
                                int64_t* rdx_20 = var_270
                                int64_t rcx_26 = var_260
                                int64_t r15_1 = sx.q(rdx_20[rsi_6].d)
                                int64_t r14_5 = sx.q(*(&rdx_20[rsi_6] + 4))
                                int32_t* r9_5 = rdi_3 + rcx_26
                                int64_t r10_8 = r15_1 * 0x38 + rcx_26
                                int32_t r11_8 = rbx_2 + 1
                                
                                if (r11_7 + rbx_2 s>= r8_11)
                                    r11_8 = r13_2.d
                                
                                int64_t r8_12 = *r12
                                int32_t rax_50 = rbx_2
                                
                                if (rbx_2 s<= r13_2.d)
                                    rax_50 = r8_11 + r13_2.d
                                
                                int32_t rax_52 = *(r10_8 + (r14_5 << 2))
                                int64_t rdx_25 = *arg1
                                int64_t rax_54 = sx.q(*(r10_8 + (sx.q((r14_5 + 1).d s% 3) << 2)))
                                int32_t var_24c_2 = rax_54.d
                                int64_t rcx_29 = rax_54 * 3
                                zmm10 = *(rdx_25 + (rcx_29 << 2))
                                zmm10[0] = zmm10[0] f- *(r8_12 + (rcx_29 << 2))
                                zmm6 = *(rdx_25 + (rcx_29 << 2) + 4)
                                zmm6[0] = zmm6[0] f- *(r8_12 + (rcx_29 << 2) + 4)
                                zmm11 = *(rdx_25 + (rcx_29 << 2) + 8)
                                zmm11[0] = zmm11[0] f- *(r8_12 + (rcx_29 << 2) + 8)
                                int64_t rcx_30 = sx.q(rax_52) * 3
                                float zmm2_1[0x4] = *(rdx_25 + (rcx_30 << 2) + 8)
                                zmm2_1[0] = zmm2_1[0] f- *(r8_12 + (rcx_30 << 2) + 8)
                                zmm5_1 = *(rdx_25 + (rcx_30 << 2))
                                zmm7 = *(rdx_25 + (rdx_15 << 2) + 4)
                                zmm7[0] = zmm7[0] f- *(r8_12 + (rdx_15 << 2) + 4)
                                zmm1_1 = *(rdx_25 + (rdx_15 << 2) + 8)
                                zmm1_1[0] = zmm1_1[0] f- *(r8_12 + (rdx_15 << 2) + 8)
                                zmm3_1 = *(rdx_25 + (rdx_15 << 2))
                                zmm2_1[0] = zmm2_1[0] - zmm11[0]
                                zmm3_1[0] = zmm3_1[0] f- *(r8_12 + (rdx_15 << 2))
                                zmm4_1 = *(rdx_25 + (rcx_30 << 2) + 4)
                                zmm7[0] = zmm7[0] - zmm6[0]
                                zmm5_1[0] = zmm5_1[0] f- *(r8_12 + (rcx_30 << 2))
                                zmm4_1 = zmm4_1 f- *(r8_12 + (rcx_30 << 2) + 4)
                                zmm1_1[0] = zmm1_1[0] - zmm11[0]
                                zmm3_1[0] = zmm3_1[0] - zmm10[0]
                                zmm7[0] = zmm7[0] * zmm2_1[0]
                                zmm5_1[0] = zmm5_1[0] - zmm10[0]
                                zmm4_1 = zmm4_1 - zmm6[0]
                                zmm3_1[0] = zmm3_1[0] * zmm2_1[0]
                                zmm1_1[0] = zmm1_1[0] * zmm5_1[0]
                                zmm1_1[0] = zmm1_1[0] * zmm4_1
                                zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
                                zmm7[0] = zmm7[0] * zmm5_1[0]
                                zmm1_1[0] = zmm1_1[0] - zmm7[0]
                                zmm3_1[0] = zmm3_1[0] * zmm4_1
                                zmm7[0] = zmm7[0] - zmm3_1[0]
                                zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                                zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                zmm7[0] = zmm7[0] * zmm7[0]
                                zmm3_1[0] = zmm3_1[0] + zmm1_1[0]
                                zmm3_1[0] = zmm3_1[0] + zmm7[0]
                                
                                if (zmm3_1[0] == 1f)
                                    goto label_14156b069
                                
                                float var_248_1
                                float var_240_1
                                
                                if (zmm3_1[0] f>= zmm15_1)
                                    float temp0_11[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                                    zmm2_1 = 0x3f000000
                                    zmm3_1[0] = zmm3_1[0] * 0.5f
                                    temp0_11[0] = temp0_11[0] * temp0_11[0]
                                    zmm3_1[0] = zmm3_1[0] * temp0_11[0]
                                    zmm2_1[0] = 0.5f - zmm3_1[0]
                                    temp0_11[0] = temp0_11[0] * zmm2_1[0]
                                    temp0_11[0] = temp0_11[0] + temp0_11[0]
                                    temp0_11[0] = temp0_11[0] * temp0_11[0]
                                    zmm3_1[0] = zmm3_1[0] * temp0_11[0]
                                    temp0_11[0] = temp0_11[0] * (0.5f - zmm3_1[0])
                                    temp0_11[0] = temp0_11[0] + temp0_11[0]
                                    zmm1_1[0] = zmm1_1[0] * temp0_11[0]
                                    zmm3_1[0] = zmm3_1[0] * temp0_11[0]
                                    zmm7[0] = zmm7[0] * temp0_11[0]
                                label_14156b069:
                                    var_240_1 = zmm7[0]
                                    float var_244_2 = zmm3_1[0]
                                    var_248_1 = zmm1_1[0]
                                else
                                    var_248_1 = data_143dbb1f8[0]
                                    var_240_1 = data_143dbb200[0]
                                    float var_244_1 = data_143dbb1fc[0]
                                
                                *(r9_5 + 0xc) = var_248_1.q
                                r9_5[5] = var_240_1
                                zmm0_1 = r9_5[4]
                                zmm2_1 = r9_5[3]
                                zmm1_1 = r9_5[5]
                                zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                                
                                if (zmm2_1[0] >= 9.99999975e-05f)
                                    *r9_5 = var_24c_2
                                    r9_5[1] = rax_52
                                    r9_5[2] = var_1f8_1
                                    r9_5[8] = rax_50 - 1
                                    rax_45.b = 1
                                    r9_5[7] = r15_1.d
                                    r9_5[9] = r11_8
                                    r9_5[0xa] = r14_5.d
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
                                    rax_45.b = 0
                                
                                r12 = arg2
                                r15 = arg1
                                *(r10_8 + (r14_5 << 2) + 0x1c) = rbx_2
                                *(r10_8 + (r14_5 << 2) + 0x28) = 0
                                
                                if (rax_45.b == 0)
                                    rdi_2 = var_218:8.q
                                    rax_45.b = 1
                                    rbx_1 = var_218.q
                                    break
                                
                                zmm0_1 = r9_5[6]
                                
                                if (not(zmm0_1[0] f< zmm13.d) && not(zmm0_1[0] > zmm14_1))
                                    char rax_60
                                    rax_60, zmm13, zmm14_1, zmm15_1 =
                                        sub_141743d50(r9_5, *r15, *r12)
                                    
                                    if (rax_60 != 0)
                                        int32_t var_148_1 = rbx_2
                                        int64_t* var_150 = &var_260
                                        sub_14175ce20(&var_218, &var_150)
                                
                                r8_11 = var_268_1.d
                                rbx_2 += 1
                                r11_7 = var_1f0_1
                                rdi_3 += 0x38
                                rsi_6 += 1
                                
                                if (rsi_6 s>= var_190_1)
                                    rdi_2 = var_218:8.q
                                    rbx_1 = var_218.q
                                    rax_45 = zx.q(var_278_1)
                                    break
                        
                        if (rax_45.b == 0)
                            r13_1 = var_268_1:4.d
                            zmm12 = zx.o(0)
                            zmm13 = 0x80000000
                        label_14156b1d3:
                            rcx_9 = (rdi_2 - rbx_1) s>> 4
                            
                            if (rcx_9 != 0)
                                rdx_5 += 1
                                continue
            
            rsi_1 = var_270
            goto label_14156b250
    
    zmm15_2.o = zmm15
    zmm13_1.o = var_c8_1
    zmm12_1.o = var_b8_1
    zmm11_1.o = var_a8_1
    zmm10_1.o = var_98_1
    zmm9_1.o = var_88_1
    zmm8_1.o = var_78_1
    zmm7_1.o = var_68_1
    zmm6_2.o = var_58_1
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    if (rbx_1 != 0)
        float (* rax_67)[0x4] = rbx_1
        
        if (((var_208 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_67 - rbx_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rbx_1)
else
    *arg5 = 0
    *arg7 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg7[1].d = 0
    *arg8 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg8[1].d = 0
    rdi_1 = 2
    int32_t var_220_1 = 0
    int32_t var_220_2 = 0

int64_t rcx_39 = var_260

if (rcx_39 != 0)
    sub_140a74f90(rcx_39)

__security_check_cookie(rax_1 ^ &var_2b8)
return zx.q(rdi_1)
