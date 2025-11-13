// 函数: sub_1415adeb0
// 地址: 0x1415adeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t* r12 = arg2
int64_t* r13 = arg1
uint64_t* var_260 = arg8
int64_t var_230
int64_t* var_268 = &var_230
int32_t* var_188 = arg9
var_230 = 0
int64_t var_228 = 0
char rax_3
int128_t zmm6
int128_t zmm7
int128_t zmm8
int128_t zmm9
int128_t zmm10
int128_t zmm11
uint128_t zmm12
float zmm13_1
rax_3, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1 =
    sub_1416d2f80(arg1, arg2, arg3, arg4, var_268)
int32_t rsi_1

if (rax_3 != 0)
    int32_t i = 0
    int128_t var_1f0
    __builtin_memset(&var_1f0, 0, 0x18)
    float (* r14_1)[0x4] = var_1f0:8.q
    float (* rdi_1)[0x4] = var_1f0.q
    int64_t* var_248
    int64_t var_1e0
    float zmm1_1[0x4]
    
    if (var_228.d s> 0)
        do
            char rax_5
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, arg5, arg6 =
                sub_141743d50(sx.q(i) * 0x38 + var_230, *r13, *r12)
            
            if (rax_5 != 0)
                int64_t var_240
                var_240.d = i
                var_248 = &var_230
                
                if (var_1e0 == r14_1)
                    sub_141701fc0(&var_1f0, r14_1, &var_248)
                    r14_1 = var_1f0:8.q
                    rdi_1 = var_1f0.q
                else
                    *r14_1 = var_248.o
                    r14_1 = &r14_1[1]
                    var_1f0:8.q = r14_1
                
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
        while (i s< var_228.d)
    
    int64_t rcx_7 = (r14_1 - rdi_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_7 == 0)
        rdx_4 = var_230
    else
        rdx_4 = sx.q((*rdi_1)[2]) * 0x38 + var_230
    
    int64_t* rbx_1 = nullptr
    uint128_t var_b8_1 = zmm12
    int128_t var_d8_1 = arg5
    int128_t var_e8_1 = arg6
    var_248 = nullptr
    int64_t var_240_1 = 0
    zmm1_1 = rdx_4[1]
    float var_130[0x4] = *rdx_4
    float var_120_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    int64_t var_100_1 = rdx_4[3][0].q
    float var_110_1[0x4] = rdx_4[2]
    int512_t zmm6_4
    int512_t zmm7_3
    int512_t zmm8_3
    int512_t zmm9_3
    int512_t zmm10_3
    int512_t zmm11_3
    int512_t zmm12_1
    int512_t zmm14
    int512_t zmm15
    
    if (rcx_7 == 0)
    label_1415aea39:
        zmm6_4, zmm7_3, zmm8_3, zmm9_3, zmm10_3, zmm11_3, zmm12_1, zmm14, zmm15 =
            sub_14154a2a0(*arg1, *arg2, &var_130, arg7, arg8, var_188, arg10)
        rsi_1 = 1
    else
        arg5 = 0x322bcc77
        arg6 = 0x38d1b717
        
        while (true)
            if (rdx_5 s< 0x80)
                int64_t r15_1 = sx.q((*rdi_1)[2])
                int32_t var_238_1 = r15_1.d
                
                if (rcx_7 s>= 2)
                    zmm1_1 = r14_1[-1]
                    int64_t i_2 = 0
                    int64_t i_3 = 0
                    r14_1[-1] = *rdi_1
                    int64_t r11_4 = (&r14_1[-1] - rdi_1) s>> 4
                    int64_t rbx_3 = (r11_4 - 1) s>> 1
                    
                    if (rbx_3 s> 0)
                        do
                            int64_t r9_1 = i_3 * 2
                            int64_t rcx_9 = r9_1 * 2
                            int64_t r8_7 = **(rdi_1 + (rcx_9 << 3) + 0x20)
                            i_3 = r9_1 + 1
                            
                            if ((*(sx.q((*rdi_1)[rcx_9 * 2 + 0xa]) * 0x38 + r8_7 + 0x18))[0] f<=
                                    *(sx.q((*rdi_1)[rcx_9 * 2 + 6]) * 0x38 + r8_7 + 0x18))
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
                int32_t* rsi_4 = r15_1 * 0x38 + var_230
                var_1f0:8.q = r14_1
                
                if (rsi_4[0xd].b != 0)
                label_1415ae9eb:
                    rcx_7 = (r14_1 - rdi_1) s>> 4
                    
                    if (rcx_7 != 0)
                        rdx_5 += 1
                        continue
                else
                    float var_1b8
                    int128_t zmm6_1 = sub_141758e70(*arg3, &var_1b8, &rsi_4[3], zx.o(0))
                    float zmm3_2[0x4] = rsi_4[3] ^ zmm6_1
                    int128_t zmm7_1 = rsi_4[4] ^ zmm6_1
                    int128_t* rax_21 = arg4[2]
                    zmm12 = rsi_4[5] ^ zmm6_1
                    void* rbx_4 = *arg4
                    float zmm9_1[0x4] = *(rax_21 + 4)
                    float zmm5_1 = *(rax_21 + 8)
                    int128_t zmm8_1 = *rax_21
                    float zmm4_1 = *(rax_21 + 0xc)
                    void* rcx_15 = *(rbx_4 + 0x10)
                    float zmm11_1 = zmm5_1 * zmm3_2[0]
                    zmm6_1.d = zmm8_1.d f* zmm7_1.d
                    zmm9_1[0] = zmm9_1[0] f* zmm12.d
                    zmm9_1[0] = zmm9_1[0] - zmm5_1 f* zmm7_1.d
                    zmm11_1 = zmm11_1 - zmm8_1.d f* zmm12.d
                    float zmm0_2 = zmm9_1[0] * zmm3_2[0]
                    zmm9_1[0] = zmm9_1[0] + zmm9_1[0]
                    zmm6_1.d = zmm6_1.d f- zmm0_2
                    zmm11_1 = zmm11_1 + zmm11_1
                    zmm6_1.d = zmm6_1.d f+ zmm6_1.d
                    float zmm1_2 = zmm9_1[0] * zmm4_1 + zmm3_2[0]
                    zmm9_1[0] = zmm9_1[0] * zmm5_1
                    zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
                    float zmm2_1 = zmm6_1.d * zmm9_1[0] - zmm11_1 * zmm5_1
                    zmm0_2 = zmm6_1.d f* zmm8_1.d
                    zmm6_1.d = zmm6_1.d f* zmm4_1
                    zmm2_1 = zmm2_1 + zmm1_2
                    zmm1_2 = zmm11_1
                    zmm9_1[0] = zmm9_1[0] - zmm0_2
                    zmm6_1.d = zmm6_1.d f+ zmm12.d
                    zmm11_1 = zmm11_1 f* zmm8_1.d - zmm9_1[0]
                    float var_170 = zmm2_1 f* *(rbx_4 + 0x28)
                    zmm9_1[0] = zmm9_1[0] + zmm1_2 * zmm4_1 f+ zmm7_1.d
                    zmm11_1 = (zmm11_1 f+ zmm6_1.d) f* *(rbx_4 + 0x30)
                    zmm9_1[0] = zmm9_1[0] f* *(rbx_4 + 0x2c)
                    float var_168_1 = zmm11_1
                    float var_16c_1 = zmm9_1[0]
                    float var_164
                    sub_141758e70(rcx_15, &var_164, &var_170, zx.o(0))
                    float zmm3_1[0x4] = var_164
                    int32_t var_160
                    float zmm2_2[0x4] = var_160
                    int128_t* rax_22 = arg4[1]
                    zmm3_1[0] = zmm3_1[0] f* *(rbx_4 + 0x28)
                    zmm2_2[0] = zmm2_2[0] f* *(rbx_4 + 0x2c)
                    int32_t var_15c
                    uint128_t zmm0_3
                    zmm0_3.d = var_15c.d f* *(rbx_4 + 0x30)
                    float zmm5_2[0x4] = *rax_22
                    zmm12 = rsi_4[6]
                    float temp0_5[0x4] = _mm_unpacklo_ps(zmm2_2, 0)
                    float temp0_7[0x4] =
                        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_1, zmm0_3.q), temp0_5[0].q)
                    float temp0_8[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
                    zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), temp0_8)
                    float temp0_11[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xd2)
                    float temp0_12[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                    float temp0_13[0x4] = _mm_mul_ps(temp0_11, temp0_12)
                    float temp0_14[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
                    float temp0_15[0x4] = _mm_sub_ps(temp0_13, zmm0_3)
                    float temp0_16[0x4] = _mm_add_ps(temp0_15, temp0_15)
                    float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_16)
                    zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xc9), temp0_8)
                    float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xd2)
                    float temp0_21[0x4] = _mm_add_ps(temp0_17, temp0_7)
                    zmm2_2 = var_1b8
                    float temp0_25[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_20, temp0_12), zmm0_3), temp0_21), 
                        rax_22[1])
                    zmm2_2[0] = zmm2_2[0] - temp0_25[0]
                    float var_1a8_1 = temp0_25[0]
                    zmm0_3 = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
                    float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
                    int32_t var_1b4
                    zmm3_1 = var_1b4
                    zmm3_1[0] = zmm3_1[0] f- zmm0_3.d
                    int32_t var_1a4_1 = zmm0_3.d
                    int32_t var_1b0
                    zmm0_3.d = var_1b0.d f- temp0_27[0]
                    float var_1a0_1 = temp0_27[0]
                    float var_208 = zmm2_2[0]
                    zmm2_2[0] = zmm2_2[0] f* rsi_4[3]
                    float var_204_1 = zmm3_1[0]
                    zmm3_1[0] = zmm3_1[0] f* rsi_4[4]
                    int32_t var_200_3 = zmm0_3.d
                    zmm0_3.d = zmm0_3.d f* rsi_4[5]
                    zmm3_1[0] = zmm3_1[0] + zmm2_2[0]
                    zmm3_1[0] = zmm3_1[0] f+ zmm0_3.d
                    zmm0_3.d = zmm12.d f* 0.00999999978f
                    zmm0_3 = __andps_xmmxud_memxud(zmm0_3, data_142d3f770)
                    float temp0_29[0x4] = _mm_min_ss(zmm3_1[0], zmm13_1)
                    zmm13_1 = temp0_29[0]
                    temp0_29[0] = temp0_29[0] f- zmm12.d
                    
                    if (__andps_xmmxud_memxud(temp0_29, data_142d3f770)[0] f<= zmm0_3.d)
                        zmm6_4, zmm7_3, zmm8_3, zmm9_3, zmm10_3, zmm11_3, zmm12_1, zmm14, zmm15 =
                            sub_14154a2a0(*r13, *r12, rsi_4, arg7, arg8, var_188, arg10)
                        rbx_1 = var_248
                        rsi_1 = 0
                        break
                    
                    if (not(zmm13_1 f< zmm12.d))
                        int64_t rbx_5 = sx.q(r13[1].d)
                        zmm0_3 = zx.o(*(rsi_4 + 0xc))
                        var_130[0] = *rsi_4
                        var_130[1] = rsi_4[1]
                        var_130[2] = rsi_4[2]
                        var_120_1[1] = rsi_4[5]
                        var_120_1[3] = rsi_4[7]
                        var_110_1[0] = rsi_4[8]
                        var_110_1[1] = rsi_4[9]
                        var_110_1[2] = rsi_4[0xa]
                        var_110_1[3] = rsi_4[0xb]
                        var_100_1.d = rsi_4[0xc]
                        var_100_1:4.b = rsi_4[0xd].b
                        int32_t rax_34 = (rbx_5 + 1).d
                        var_120_1[2] = zmm12.d
                        var_130[3].q = zmm0_3.q
                        int32_t var_1c8_1 = rbx_5.d
                        r13[1].d = rax_34
                        
                        if (rax_34 s> *(r13 + 0xc))
                            sub_14083a7e0(r13)
                        
                        int64_t rcx_17 = *r13
                        int64_t r15_2 = rbx_5 * 3
                        *(rcx_17 + (r15_2 << 2)) = var_1b8.q
                        *(rcx_17 + (r15_2 << 2) + 8) = var_1b0
                        int64_t rbx_6 = sx.q(r12[1].d)
                        int32_t rax_36 = (rbx_6 + 1).d
                        r12[1].d = rax_36
                        
                        if (rax_36 s> *(r12 + 0xc))
                            sub_14083a7e0(r12)
                        
                        int64_t rcx_19 = *r12
                        int64_t rdx_13 = rbx_6 * 3
                        var_240_1.d = 0
                        *(rcx_19 + (rdx_13 << 2)) = var_1a8_1.q
                        *(rcx_19 + (rdx_13 << 2) + 8) = var_1a0_1
                        int32_t rax_38 = var_240_1:4.d
                        rsi_4[0xd].b = 1
                        
                        if (rax_38 s< 0 && rax_38 != 0)
                            sub_1405c5570(&var_248, 0)
                        
                        sub_1415c5980(&var_230, var_238_1, &var_208, &var_248)
                        int32_t r8_12 = var_228.d
                        int32_t r11_7 = var_240_1.d
                        int32_t var_238_2 = r8_12
                        int32_t rax_39 = r11_7 + r8_12
                        var_228.d = rax_39
                        
                        if (rax_39 s> var_228:4.d)
                            sub_1407c3b60(&var_230)
                            r8_12 = var_238_2
                            r11_7 = var_240_1.d
                        
                        if (r11_7 s>= 3)
                            int64_t rsi_5 = 0
                            int64_t rax_40 = sx.q(r11_7)
                            
                            if (r11_7 s> 0)
                                void* r12_1 = sx.q(r8_12) * 0x38
                                int32_t r14_2 = 1 - r8_12
                                int32_t rbx_7 = r8_12
                                int32_t var_1c0_1 = r14_2
                                
                                do
                                    int64_t* rdx_16 = var_248
                                    int32_t r13_1 = rbx_7 + 1
                                    int64_t rcx_23 = var_230
                                    int64_t rax_42 = sx.q(rdx_16[rsi_5].d)
                                    int64_t rdi_2 = sx.q(*(&rdx_16[rsi_5] + 4))
                                    int32_t* r9_6 = r12_1 + rcx_23
                                    float var_1c4_1 = rax_42.d
                                    int64_t r10_8 = rax_42 * 0x38 + rcx_23
                                    
                                    if (r14_2 + rbx_7 s>= r11_7)
                                        r13_1 = r8_12
                                    
                                    int32_t r11_8 = rbx_7
                                    
                                    if (rbx_7 s<= r8_12)
                                        r11_8 = rax_39
                                    
                                    int64_t r8_13 = *arg2
                                    int64_t rdx_20 = *arg1
                                    int32_t rax_48 = *(r10_8 + (rdi_2 << 2))
                                    float zmm6_3[0x4] = *(rdx_20 + (r15_2 << 2) + 4)
                                    zmm6_3[0] = zmm6_3[0] f- *(r8_13 + (r15_2 << 2) + 4)
                                    zmm1_1 = *(rdx_20 + (r15_2 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_13 + (r15_2 << 2) + 8)
                                    int64_t rax_50 =
                                        sx.q(*(r10_8 + (sx.q((rdi_2 + 1).d s% 3) << 2)))
                                    zmm3_1 = *(rdx_20 + (r15_2 << 2))
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_13 + (r15_2 << 2))
                                    int32_t var_1cc_1 = rax_50.d
                                    int64_t rcx_26 = rax_50 * 3
                                    float zmm10_2 =
                                        *(rdx_20 + (rcx_26 << 2)) f- *(r8_13 + (rcx_26 << 2))
                                    float zmm7_2 = *(rdx_20 + (rcx_26 << 2) + 4) f-
                                        *(r8_13 + (rcx_26 << 2) + 4)
                                    float zmm11_2 = *(rdx_20 + (rcx_26 << 2) + 8) f-
                                        *(r8_13 + (rcx_26 << 2) + 8)
                                    int64_t rcx_27 = sx.q(rax_48) * 3
                                    float zmm2_3[0x4] = *(rdx_20 + (rcx_27 << 2) + 8)
                                    zmm3_1[0] = zmm3_1[0] - zmm10_2
                                    zmm2_3[0] = zmm2_3[0] f- *(r8_13 + (rcx_27 << 2) + 8)
                                    float zmm5_3[0x4] = *(rdx_20 + (rcx_27 << 2))
                                    zmm6_3[0] = zmm6_3[0] - zmm7_2
                                    float zmm4_3 = *(rdx_20 + (rcx_27 << 2) + 4)
                                    zmm1_1[0] = zmm1_1[0] - zmm11_2
                                    zmm5_3[0] = zmm5_3[0] f- *(r8_13 + (rcx_27 << 2))
                                    zmm4_3 = zmm4_3 f- *(r8_13 + (rcx_27 << 2) + 4)
                                    zmm2_3[0] = zmm2_3[0] - zmm11_2
                                    zmm5_3[0] = zmm5_3[0] - zmm10_2
                                    zmm4_3 = zmm4_3 - zmm7_2
                                    zmm6_3[0] = zmm6_3[0] * zmm2_3[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm2_3[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm5_3[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm4_3
                                    zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
                                    zmm6_3[0] = zmm6_3[0] * zmm5_3[0]
                                    zmm1_1[0] = zmm1_1[0] - zmm6_3[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm4_3
                                    zmm6_3[0] = zmm6_3[0] - zmm3_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm1_1[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm6_3[0]
                                    
                                    if (zmm3_1[0] == 1f)
                                        goto label_1415ae89a
                                    
                                    float var_220_1
                                    float var_218_1
                                    
                                    if (zmm3_1[0] f>= arg5.d)
                                        float temp0_32[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                                        zmm2_3 = 0x3f000000
                                        zmm3_1[0] = zmm3_1[0] * 0.5f
                                        temp0_32[0] = temp0_32[0] * temp0_32[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_32[0]
                                        zmm2_3[0] = 0.5f - zmm3_1[0]
                                        temp0_32[0] = temp0_32[0] * zmm2_3[0]
                                        temp0_32[0] = temp0_32[0] + temp0_32[0]
                                        temp0_32[0] = temp0_32[0] * temp0_32[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_32[0]
                                        temp0_32[0] = temp0_32[0] * (0.5f - zmm3_1[0])
                                        temp0_32[0] = temp0_32[0] + temp0_32[0]
                                        zmm1_1[0] = zmm1_1[0] * temp0_32[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_32[0]
                                        zmm6_3[0] = zmm6_3[0] * temp0_32[0]
                                    label_1415ae89a:
                                        var_218_1 = zmm6_3[0]
                                        float var_21c_2 = zmm3_1[0]
                                        var_220_1 = zmm1_1[0]
                                    else
                                        var_220_1 = data_143dbb1f8[0]
                                        var_218_1 = data_143dbb200[0]
                                        float var_21c_1 = data_143dbb1fc[0]
                                    
                                    *(r9_6 + 0xc) = var_220_1.q
                                    r9_6[5] = var_218_1
                                    float zmm0_1[0x4] = r9_6[4]
                                    zmm2_3 = r9_6[3]
                                    zmm1_1 = r9_6[5]
                                    zmm2_3[0] = zmm2_3[0] * zmm2_3[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_3[0] = zmm2_3[0] + zmm0_1[0]
                                    zmm2_3[0] = zmm2_3[0] + zmm1_1[0]
                                    float rax_52
                                    
                                    if (zmm2_3[0] f>= arg6.d)
                                        *r9_6 = var_1cc_1
                                        r9_6[1] = rax_48
                                        r9_6[2] = var_1c8_1
                                        r9_6[7] = var_1c4_1
                                        rax_52.b = 1
                                        r9_6[8] = r11_8 - 1
                                        r9_6[9] = r13_1
                                        r9_6[0xa] = rdi_2.d
                                        r9_6[0xb] = 2
                                        r9_6[0xc] = 1
                                        r9_6[0xd].b = 0
                                        r9_6[6] = zmm7_2 f* r9_6[4] + zmm10_2 f* r9_6[3]
                                            + zmm11_2 f* r9_6[5]
                                    else
                                        rax_52.b = 0
                                    
                                    *(r10_8 + (rdi_2 << 2) + 0x1c) = rbx_7
                                    *(r10_8 + (rdi_2 << 2) + 0x28) = 0
                                    
                                    if (rax_52.b == 0)
                                        rdi_1 = var_1f0.q
                                        goto label_1415aea02
                                    
                                    zmm0_1 = r9_6[6]
                                    r13 = arg1
                                    
                                    if (not(zmm0_1[0] f< zmm12.d) && not(zmm0_1[0] > zmm13_1))
                                        char rax_57
                                        rax_57, zmm12, zmm13_1, arg5, arg6 =
                                            sub_141743d50(r9_6, *r13, *arg2)
                                        
                                        if (rax_57 != 0)
                                            int32_t var_138_1 = rbx_7
                                            int64_t* var_140 = &var_230
                                            sub_14175ce20(&var_1f0, &var_140)
                                    
                                    r8_12 = var_238_2
                                    rbx_7 += 1
                                    r11_7 = var_240_1.d
                                    r12_1 += 0x38
                                    r14_2 = var_1c0_1
                                    rsi_5 += 1
                                while (rsi_5 s< rax_40)
                                
                                r14_1 = var_1f0:8.q
                                rdi_1 = var_1f0.q
                                r12 = arg2
                            
                            goto label_1415ae9eb
            
        label_1415aea02:
            rbx_1 = var_248
            goto label_1415aea39
    
    zmm15.o = var_e8_1
    zmm14.o = var_d8_1
    zmm12_1.o = var_b8_1
    zmm11_3.o = zmm11
    zmm10_3.o = zmm10
    zmm9_3.o = zmm9
    zmm8_3.o = zmm8
    zmm7_3.o = zmm7
    zmm6_4.o = zmm6
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    if (rdi_1 != 0)
        float (* rax_63)[0x4] = rdi_1
        
        if (((var_1e0 - rdi_1) & 0xfffffffffffffff0) u>= 0x1000)
            rdi_1 = *(rdi_1 - 8)
            
            if (rax_63 - rdi_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rdi_1)
else
    *arg7 = 0
    int32_t var_200_1 = 0
    *arg9 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg9[1].d = 0
    *arg10 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_200_2 = 0
    rsi_1 = 2
    arg10[1].d = 0

int64_t rcx_36 = var_230

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

__security_check_cookie(rax_1 ^ &var_288)
return zx.q(rsi_1)
