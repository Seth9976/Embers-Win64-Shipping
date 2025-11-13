// 函数: sub_141583d70
// 地址: 0x141583d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int64_t* r13 = arg1
int64_t* r12 = arg2
float zmm15[0x4] = 0x7f7fffff
uint64_t* var_280 = arg7
int32_t* var_198 = arg8
int32_t var_238 = 0
int64_t var_248 = 0
int64_t var_240 = 0
char rax_2
float zmm6[0x4]
int128_t zmm7
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
uint128_t zmm11
float zmm12[0x4]
float zmm13[0x4]
rax_2, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 =
    sub_1416b0610(r13, arg2, arg3, arg4, &var_248)
int32_t rsi_1

if (rax_2 != 0)
    int32_t i = 0
    int128_t var_200
    __builtin_memset(&var_200, 0, 0x18)
    float (* r14_1)[0x4] = var_200:8.q
    float (* rdi_1)[0x4] = var_200.q
    int64_t* var_260
    int64_t var_1f0
    float zmm1_1[0x4]
    
    if (var_240.d s> 0)
        do
            char rax_4
            rax_4, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, arg5, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_248, *r13, *r12)
            
            if (rax_4 != 0)
                int64_t var_258
                var_258.d = i
                var_260 = &var_248
                
                if (var_1f0 == r14_1)
                    sub_141701fc0(&var_200, r14_1, &var_260)
                    r14_1 = var_200:8.q
                    rdi_1 = var_200.q
                else
                    *r14_1 = var_260.o
                    r14_1 = &r14_1[1]
                    var_200:8.q = r14_1
                
                int64_t r8_4 = (r14_1 - rdi_1) s>> 4
                
                if (r8_4 s>= 2)
                    zmm1_1 = r14_1[-1]
                    int64_t j_1 = r8_4 - 1
                    
                    if (j_1 s> 0)
                        int64_t r11_1 = sx.q(_mm_bsrli_si128(zmm1_1, 8)[0]) * 0x38
                        int64_t j
                        
                        do
                            j = (j_1 - 1) s>> 1
                            int64_t r10_2 = j * 2
                            int64_t rdx_2 = **(rdi_1 + (r10_2 << 3))
                            
                            if ((*(r11_1 + rdx_2 + 0x18))[0] f>=
                                    *(sx.q((*rdi_1)[r10_2 * 2 + 2]) * 0x38 + rdx_2 + 0x18))
                                break
                            
                            rdi_1[j_1] = *(rdi_1 + (r10_2 << 3))
                            j_1 = j
                        while (j s> 0)
                    
                    rdi_1[j_1] = zmm1_1
            
            i += 1
        while (i s< var_240.d)
    
    int64_t rcx_9 = (r14_1 - rdi_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_9 == 0)
        rdx_4 = var_248
    else
        rdx_4 = sx.q((*rdi_1)[2]) * 0x38 + var_248
    
    int64_t* rbx_1 = nullptr
    float var_58_1[0x4] = zmm6
    int128_t var_68_1 = zmm7
    float var_78_1[0x4] = zmm8
    float var_98_1[0x4] = zmm10
    uint128_t var_a8_1 = zmm11
    float var_b8_1[0x4] = zmm12
    float var_c8_1[0x4] = zmm13
    float var_d8_1[0x4] = arg5
    var_260 = nullptr
    int64_t var_258_1 = 0
    zmm1_1 = rdx_4[1]
    float var_128[0x4] = *rdx_4
    float var_118_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    int64_t var_f8_1 = rdx_4[3][0].q
    float var_108_1[0x4] = rdx_4[2]
    int512_t zmm6_2
    int512_t zmm7_1
    int512_t zmm8_1
    int512_t zmm9_1
    int512_t zmm10_1
    int512_t zmm11_1
    int512_t zmm12_1
    int512_t zmm13_1
    int512_t zmm14
    
    if (rcx_9 == 0)
    label_141584a0e:
        zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14 =
            sub_14154a2a0(*r13, *r12, &var_128, arg6, arg7, var_198, arg9)
        rsi_1 = 1
    else
        zmm6 = 0x80000000
        zmm7 = zx.o(0)
        
        while (true)
            if (rdx_5 s< 0x80)
                int64_t r15_1 = sx.q((*rdi_1)[2])
                int32_t var_250_1 = r15_1.d
                
                if (rcx_9 s>= 2)
                    zmm1_1 = r14_1[-1]
                    int64_t i_2 = 0
                    int64_t i_3 = 0
                    r14_1[-1] = *rdi_1
                    int64_t r11_4 = (&r14_1[-1] - rdi_1) s>> 4
                    int64_t rbx_3 = (r11_4 - 1) s>> 1
                    
                    if (rbx_3 s> 0)
                        do
                            int64_t r9_1 = i_3 * 2
                            int64_t rcx_11 = r9_1 * 2
                            int64_t r8_7 = **(rdi_1 + (rcx_11 << 3) + 0x20)
                            i_3 = r9_1 + 1
                            
                            if ((*(sx.q((*rdi_1)[rcx_11 * 2 + 0xa]) * 0x38 + r8_7 + 0x18))[0] f<=
                                    *(sx.q((*rdi_1)[rcx_11 * 2 + 6]) * 0x38 + r8_7 + 0x18))
                                i_3 = r9_1 + 2
                            
                            rdi_1[i_2] = rdi_1[i_3]
                            i_2 = i_3
                        while (i_3 s< rbx_3)
                    
                    if (i_3 == rbx_3 && (r11_4.b & 1) == 0)
                        rdi_1[i_2] = rdi_1[r11_4 - 1]
                        i_2 = r11_4 - 1
                    
                    if (i_2 s> 0)
                        int64_t r11_6 = sx.q(_mm_bsrli_si128(zmm1_1, 8)[0]) * 0x38
                        int64_t i_1
                        
                        do
                            i_1 = (i_2 - 1) s>> 1
                            int64_t r9_3 = i_1 * 2
                            int64_t rdx_8 = **(rdi_1 + (r9_3 << 3))
                            
                            if ((*(r11_6 + rdx_8 + 0x18))[0] f>=
                                    *(sx.q((*rdi_1)[r9_3 * 2 + 2]) * 0x38 + rdx_8 + 0x18))
                                break
                            
                            rdi_1[i_2] = *(rdi_1 + (r9_3 << 3))
                            i_2 = i_1
                        while (i_1 s> 0)
                    
                    rdi_1[i_2] = zmm1_1
                
                r14_1 -= 0x10
                int32_t* rsi_4 = r15_1 * 0x38 + var_248
                var_200:8.q = r14_1
                
                if (rsi_4[0xd].b != 0)
                    goto label_141584990
                
                zmm13 = rsi_4[4]
                zmm12 = rsi_4[3]
                arg5 = rsi_4[5]
                void* rax_20 = *arg3
                float zmm4_1[0x4] = *(rax_20 + 0x1c)
                float zmm3_1[0x4] = *(rax_20 + 0x20)
                float zmm5_1[0x4] = *(rax_20 + 0x24)
                zmm4_1[0] = zmm4_1[0] * zmm12[0]
                zmm13[0] = zmm13[0] * zmm3_1[0]
                arg5[0] = arg5[0] * zmm5_1[0]
                zmm4_1[0] = zmm4_1[0] + zmm13[0]
                zmm4_1[0] = zmm4_1[0] + arg5[0]
                float* rax_21
                int32_t rdx_10
                float zmm2_1[0x4]
                
                if (zmm4_1[0] f< zmm7.d)
                    rdx_10 = var_238 | 2
                    int32_t var_154_1 = *(rax_20 + 0x18)
                    int64_t var_15c
                    rax_21 = &var_15c
                    var_15c = *(rax_20 + 0x10)
                else
                    zmm2_1 = *(rax_20 + 0x28)
                    rdx_10 = var_238 | 1
                    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                    zmm2_1[0] = zmm2_1[0] * zmm3_1[0]
                    zmm2_1[0] = zmm2_1[0] f+ *(rax_20 + 0x10)
                    zmm2_1[0] = zmm2_1[0] * zmm5_1[0]
                    zmm2_1[0] = zmm2_1[0] f+ *(rax_20 + 0x14)
                    zmm2_1[0] = zmm2_1[0] f+ *(rax_20 + 0x18)
                    float var_168 = zmm2_1[0]
                    rax_21 = &var_168
                    float var_164_1 = zmm2_1[0]
                    float var_160_1 = zmm2_1[0]
                
                *rax_21
                zmm12 ^= zmm6
                zmm13 ^= zmm6
                int32_t rax_23 = rax_21[2]
                arg5 ^= zmm6
                void* rbx_4 = arg4[1]
                int32_t rcx_16 = rdx_10 & 0xfffffffd
                
                if ((rdx_10.b & 2) == 0)
                    rcx_16 = rdx_10
                
                int32_t rdx_12 = rcx_16 & 0xfffffffe
                int128_t* rax_26 = *arg4
                
                if ((rcx_16.b & 1) == 0)
                    rdx_12 = rcx_16
                
                void* rcx_17 = *(rbx_4 + 0x10)
                var_238 = rdx_12
                zmm7 = *rax_26
                zmm8 = *(rax_26 + 4)
                zmm5_1 = *(rax_26 + 8)
                zmm4_1 = *(rax_26 + 0xc)
                zmm13[0] = zmm13[0] * zmm5_1[0]
                zmm12[0] = zmm12[0] * zmm5_1[0]
                zmm13[0] = zmm13[0] f* zmm7.d
                arg5[0] = arg5[0] * zmm8[0]
                arg5[0] = arg5[0] - zmm13[0]
                arg5[0] = arg5[0] f* zmm7.d
                zmm12[0] = zmm12[0] - arg5[0]
                zmm12[0] = zmm12[0] * zmm8[0]
                arg5[0] = arg5[0] + arg5[0]
                zmm13[0] = zmm13[0] - zmm12[0]
                zmm12[0] = zmm12[0] + zmm12[0]
                arg5[0] = arg5[0] * zmm4_1[0]
                arg5[0] = arg5[0] * zmm5_1[0]
                zmm13[0] = zmm13[0] + zmm13[0]
                arg5[0] = arg5[0] * zmm8[0]
                arg5[0] = arg5[0] + zmm12[0]
                zmm12[0] = zmm12[0] * zmm5_1[0]
                zmm13[0] = zmm13[0] * zmm8[0]
                zmm13[0] = zmm13[0] - zmm12[0]
                zmm13[0] = zmm13[0] f* zmm7.d
                zmm13[0] = zmm13[0] * zmm4_1[0]
                zmm13[0] = zmm13[0] + arg5[0]
                zmm12[0] = zmm12[0] f* zmm7.d
                arg5[0] = arg5[0] - zmm13[0]
                zmm12[0] = zmm12[0] * zmm4_1[0]
                zmm13[0] = zmm13[0] + arg5[0]
                zmm13[0] = zmm13[0] f* *(rbx_4 + 0x28)
                zmm12[0] = zmm12[0] - arg5[0]
                zmm12[0] = zmm12[0] + zmm13[0]
                float var_190 = zmm13[0]
                zmm12[0] = zmm12[0] + zmm13[0]
                arg5[0] = arg5[0] + zmm12[0]
                zmm12[0] = zmm12[0] f* *(rbx_4 + 0x30)
                arg5[0] = arg5[0] f* *(rbx_4 + 0x2c)
                float var_188_1 = zmm12[0]
                float var_18c_1 = arg5[0]
                float var_184
                zmm7, zmm11 = sub_141758e70(rcx_17, &var_184, &var_190, zx.o(0))
                zmm3_1 = var_184
                zmm3_1[0] = zmm3_1[0] f* *(rbx_4 + 0x28)
                int32_t var_17c
                uint128_t zmm0_2
                zmm0_2.d = var_17c.d f* *(rbx_4 + 0x30)
                float (* rax_27)[0x4] = arg4[2]
                int32_t var_180
                float zmm2_2[0x4] = var_180
                zmm2_2[0] = zmm2_2[0] f* *(rbx_4 + 0x2c)
                float zmm5_2[0x4] = *rax_27
                zmm12 = rsi_4[6]
                float temp0_5[0x4] = _mm_unpacklo_ps(zmm2_2, 0)
                float temp0_7[0x4] =
                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_1, zmm0_2.q), temp0_5[0].q)
                float temp0_8[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
                zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), temp0_8)
                float temp0_11[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xd2)
                float temp0_12[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                float temp0_13[0x4] = _mm_mul_ps(temp0_11, temp0_12)
                float temp0_14[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
                float temp0_15[0x4] = _mm_sub_ps(temp0_13, zmm0_2)
                float temp0_16[0x4] = _mm_add_ps(temp0_15, temp0_15)
                float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_16)
                zmm0_2 = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
                float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xd2)
                zmm2_2 = zmm11
                zmm0_2 = _mm_mul_ps(zmm0_2, temp0_8)
                float temp0_21[0x4] = _mm_mul_ps(temp0_19, temp0_12)
                float temp0_22[0x4] = _mm_add_ps(temp0_17, temp0_7)
                float temp0_25[0x4] = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(temp0_21, zmm0_2), temp0_22), rax_27[1])
                zmm2_2[0] = zmm2_2[0] - temp0_25[0]
                float var_1c0_1 = temp0_25[0]
                zmm0_2 = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
                float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
                zmm3_1 = zmm11
                float temp0_28[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                temp0_28[0] = temp0_28[0] f- zmm0_2.d
                int32_t var_1bc_1 = zmm0_2.d
                zmm0_2.d = rax_23.d f- temp0_27[0]
                float var_1b8_1 = temp0_27[0]
                float var_178 = zmm2_2[0]
                zmm2_2[0] = zmm2_2[0] f* rsi_4[3]
                float var_174_1 = temp0_28[0]
                temp0_28[0] = temp0_28[0] f* rsi_4[4]
                int32_t var_170_1 = zmm0_2.d
                zmm0_2.d = zmm0_2.d f* rsi_4[5]
                temp0_28[0] = temp0_28[0] + zmm2_2[0]
                temp0_28[0] = temp0_28[0] f+ zmm0_2.d
                zmm0_2.d = zmm12.d f* 0.00999999978f
                zmm0_2 = __andps_xmmxud_memxud(zmm0_2, data_142d3f770)
                float temp0_30[0x4] = _mm_min_ss(temp0_28[0], zmm15[0])
                zmm15 = temp0_30
                temp0_30[0] = temp0_30[0] - zmm12[0]
                
                if (__andps_xmmxud_memxud(temp0_30, data_142d3f770)[0] f<= zmm0_2.d)
                    zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14 =
                        sub_14154a2a0(*r13, *r12, rsi_4, arg6, arg7, var_198, arg9)
                    rbx_1 = var_260
                    rsi_1 = 0
                    break
                
                if (not(zmm15[0] < zmm12[0]))
                    int64_t rbx_5 = sx.q(r13[1].d)
                    zmm0_2 = zx.o(*(rsi_4 + 0xc))
                    var_128[0] = *rsi_4
                    var_128[1] = rsi_4[1]
                    var_128[2] = rsi_4[2]
                    var_118_1[1] = rsi_4[5]
                    var_118_1[3] = rsi_4[7]
                    var_108_1[0] = rsi_4[8]
                    var_108_1[1] = rsi_4[9]
                    var_108_1[2] = rsi_4[0xa]
                    var_108_1[3] = rsi_4[0xb]
                    var_f8_1.d = rsi_4[0xc]
                    var_f8_1:4.b = rsi_4[0xd].b
                    int32_t rax_39 = (rbx_5 + 1).d
                    var_118_1[2] = zmm12[0]
                    var_128[3].q = zmm0_2.q
                    int32_t var_1d8_1 = rbx_5.d
                    r13[1].d = rax_39
                    
                    if (rax_39 s> *(r13 + 0xc))
                        sub_14083a7e0(r13)
                    
                    int64_t rcx_19 = *r13
                    int64_t r15_3 = rbx_5 * 3
                    int32_t rax_41 = rax_21[2]
                    *(rcx_19 + (r15_3 << 2)) = *rax_21
                    *(rcx_19 + (r15_3 << 2) + 8) = rax_41
                    int64_t rbx_6 = sx.q(r12[1].d)
                    int32_t rax_42 = (rbx_6 + 1).d
                    r12[1].d = rax_42
                    
                    if (rax_42 s> *(r12 + 0xc))
                        sub_14083a7e0(r12)
                    
                    int64_t rcx_21 = *r12
                    int64_t rdx_16 = rbx_6 * 3
                    var_258_1.d = 0
                    *(rcx_21 + (rdx_16 << 2)) = var_1c0_1.q
                    *(rcx_21 + (rdx_16 << 2) + 8) = var_1b8_1
                    int32_t rax_44 = var_258_1:4.d
                    rsi_4[0xd].b = 1
                    
                    if (rax_44 s< 0 && rax_44 != 0)
                        sub_1405c5570(&var_260, 0)
                    
                    sub_1415c5980(&var_248, var_250_1, &var_178, &var_260)
                    int32_t r8_11 = var_240.d
                    int32_t r11_7 = var_258_1.d
                    int32_t var_250_2 = r8_11
                    int32_t rax_45 = r11_7 + r8_11
                    var_240.d = rax_45
                    
                    if (rax_45 s> var_240:4.d)
                        sub_1407c3b60(&var_248)
                        r8_11 = var_250_2
                        r11_7 = var_258_1.d
                    
                    if (r11_7 s>= 3)
                        int64_t rsi_5 = 0
                        char var_268_1 = 0
                        uint64_t var_150_1 = sx.q(r11_7)
                        uint64_t rax_46
                        
                        if (r11_7 s<= 0)
                            rax_46.b = 0
                        else
                            void* r12_1 = sx.q(r8_11) * 0x38
                            int32_t r14_2 = 1 - r8_11
                            int32_t rbx_7 = r8_11
                            int32_t var_1d0_1 = r14_2
                            
                            while (true)
                                int64_t* rdx_19 = var_260
                                int32_t r13_1 = rbx_7 + 1
                                int64_t rcx_25 = var_248
                                int64_t rax_48 = sx.q(rdx_19[rsi_5].d)
                                int64_t rdi_2 = sx.q(*(&rdx_19[rsi_5] + 4))
                                int32_t* r9_5 = r12_1 + rcx_25
                                int32_t var_1d4_1 = rax_48.d
                                int64_t r10_8 = rax_48 * 0x38 + rcx_25
                                
                                if (r14_2 + rbx_7 s>= r11_7)
                                    r13_1 = r8_11
                                
                                int32_t r11_8 = rbx_7
                                
                                if (rbx_7 s<= r8_11)
                                    r11_8 = rax_45
                                
                                int64_t r8_12 = *arg2
                                int64_t rdx_23 = *arg1
                                int32_t rax_54 = *(r10_8 + (rdi_2 << 2))
                                zmm6 = *(rdx_23 + (r15_3 << 2) + 4)
                                zmm6[0] = zmm6[0] f- *(r8_12 + (r15_3 << 2) + 4)
                                zmm1_1 = *(rdx_23 + (r15_3 << 2) + 8)
                                zmm1_1[0] = zmm1_1[0] f- *(r8_12 + (r15_3 << 2) + 8)
                                int64_t rax_56 = sx.q(*(r10_8 + (sx.q((rdi_2 + 1).d s% 3) << 2)))
                                zmm3_1 = *(rdx_23 + (r15_3 << 2))
                                zmm3_1[0] = zmm3_1[0] f- *(r8_12 + (r15_3 << 2))
                                int32_t var_1dc_1 = rax_56.d
                                int64_t rcx_28 = rax_56 * 3
                                zmm10 = *(rdx_23 + (rcx_28 << 2))
                                zmm10[0] = zmm10[0] f- *(r8_12 + (rcx_28 << 2))
                                zmm7.d = (*(rdx_23 + (rcx_28 << 2) + 4)).d f-
                                    *(r8_12 + (rcx_28 << 2) + 4)
                                zmm11.d = (*(rdx_23 + (rcx_28 << 2) + 8)).d f-
                                    *(r8_12 + (rcx_28 << 2) + 8)
                                int64_t rcx_29 = sx.q(rax_54) * 3
                                zmm2_1 = *(rdx_23 + (rcx_29 << 2) + 8)
                                zmm3_1[0] = zmm3_1[0] - zmm10[0]
                                zmm2_1[0] = zmm2_1[0] f- *(r8_12 + (rcx_29 << 2) + 8)
                                zmm5_1 = *(rdx_23 + (rcx_29 << 2))
                                zmm6[0] = zmm6[0] f- zmm7.d
                                zmm4_1 = *(rdx_23 + (rcx_29 << 2) + 4)
                                zmm1_1[0] = zmm1_1[0] f- zmm11.d
                                zmm5_1[0] = zmm5_1[0] f- *(r8_12 + (rcx_29 << 2))
                                zmm4_1[0] = zmm4_1[0] f- *(r8_12 + (rcx_29 << 2) + 4)
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
                                    goto label_14158481f
                                
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
                                    float* var_1c8_1
                                    var_1c8_1.d = temp0_33[0]
                                    zmm1_1[0] = zmm1_1[0] * temp0_33[0]
                                    zmm3_1[0] = zmm3_1[0] * temp0_33[0]
                                    zmm6[0] = zmm6[0] * temp0_33[0]
                                label_14158481f:
                                    var_22c_1 = zmm6[0]
                                    float var_230_2 = zmm3_1[0]
                                    var_234_1 = zmm1_1[0]
                                else
                                    var_234_1 = data_143dbb1f8[0]
                                    var_22c_1 = data_143dbb200[0]
                                    float var_230_1 = data_143dbb1fc[0]
                                
                                *(r9_5 + 0xc) = var_234_1.q
                                r9_5[5] = var_22c_1
                                float zmm0_1[0x4] = r9_5[4]
                                zmm2_1 = r9_5[3]
                                zmm1_1 = r9_5[5]
                                zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                                
                                if (zmm2_1[0] >= 9.99999975e-05f)
                                    *r9_5 = var_1dc_1
                                    r9_5[1] = rax_54
                                    r9_5[2] = var_1d8_1
                                    r9_5[7] = var_1d4_1
                                    rax_46.b = 1
                                    r9_5[8] = r11_8 - 1
                                    r9_5[9] = r13_1
                                    r9_5[0xa] = rdi_2.d
                                    r9_5[0xb] = 2
                                    r9_5[0xc] = 1
                                    zmm7.d = zmm7.d f* r9_5[4]
                                    zmm10[0] = zmm10[0] f* r9_5[3]
                                    zmm11.d = zmm11.d f* r9_5[5]
                                    r9_5[0xd].b = 0
                                    zmm7.d = zmm7.d f+ zmm10[0]
                                    zmm7.d = zmm7.d f+ zmm11.d
                                    r9_5[6] = zmm7.d
                                else
                                    rax_46.b = 0
                                
                                r13 = arg1
                                *(r10_8 + (rdi_2 << 2) + 0x1c) = rbx_7
                                *(r10_8 + (rdi_2 << 2) + 0x28) = 0
                                
                                if (rax_46.b == 0)
                                    r14_1 = var_200:8.q
                                    rax_46.b = 1
                                    rdi_1 = var_200.q
                                    zmm7 = zx.o(0)
                                    r12 = arg2
                                    break
                                
                                zmm0_1 = r9_5[6]
                                
                                if (not(zmm0_1[0] < zmm12[0]) && not(zmm0_1[0] > zmm15[0]))
                                    char rax_62
                                    rax_62, zmm12, zmm15 = sub_141743d50(r9_5, *r13, *arg2)
                                    
                                    if (rax_62 != 0)
                                        int32_t var_130_1 = rbx_7
                                        int64_t* var_138 = &var_248
                                        sub_14175ce20(&var_200, &var_138)
                                
                                r8_11 = var_250_2
                                rbx_7 += 1
                                r11_7 = var_258_1.d
                                r12_1 += 0x38
                                r14_2 = var_1d0_1
                                rsi_5 += 1
                                
                                if (rsi_5 s>= var_150_1)
                                    r14_1 = var_200:8.q
                                    zmm7 = zx.o(0)
                                    rdi_1 = var_200.q
                                    r12 = arg2
                                    rax_46 = zx.q(var_268_1)
                                    break
                        
                        if (rax_46.b == 0)
                            zmm6 = 0x80000000
                        label_141584990:
                            rcx_9 = (r14_1 - rdi_1) s>> 4
                            
                            if (rcx_9 != 0)
                                rdx_5 += 1
                                continue
            
            rbx_1 = var_260
            goto label_141584a0e
    
    zmm14.o = var_d8_1
    zmm13_1.o = var_c8_1
    zmm12_1.o = var_b8_1
    zmm11_1.o = var_a8_1
    zmm10_1.o = var_98_1
    zmm9_1.o = zmm9
    zmm8_1.o = var_78_1
    zmm7_1.o = var_68_1
    zmm6_2.o = var_58_1
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    if (rdi_1 != 0)
        float (* rax_69)[0x4] = rdi_1
        
        if (((var_1f0 - rdi_1) & 0xfffffffffffffff0) u>= 0x1000)
            rdi_1 = *(rdi_1 - 8)
            
            if (rax_69 - rdi_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rdi_1)
else
    *arg6 = 0
    int32_t var_208_1 = 0
    *arg8 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg8[1].d = 0
    *arg9 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_208_2 = 0
    rsi_1 = 2
    arg9[1].d = 0

int64_t rcx_38 = var_248

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

__security_check_cookie(rax_1 ^ &var_2a8)
return zx.q(rsi_1)
