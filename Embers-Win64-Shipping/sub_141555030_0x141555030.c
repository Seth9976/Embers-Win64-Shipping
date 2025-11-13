// 函数: sub_141555030
// 地址: 0x141555030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int64_t* r15 = arg2
int64_t* r12 = arg1
uint64_t* var_270 = arg8
int64_t var_240
int64_t* var_278 = &var_240
int32_t* var_1a0 = arg9
var_240 = 0
int64_t var_238 = 0
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
    sub_14168a040(arg1, arg2, arg3, arg4, var_278)
int32_t rsi_1

if (rax_3 != 0)
    int32_t i = 0
    int128_t var_200
    __builtin_memset(&var_200, 0, 0x18)
    float (* rsi_2)[0x4] = var_200:8.q
    float (* rbx_1)[0x4] = var_200.q
    int64_t* var_258
    int64_t var_1f0
    float zmm1_1[0x4]
    
    if (var_238.d s> 0)
        do
            char rax_5
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, arg5, arg6 =
                sub_141743d50(sx.q(i) * 0x38 + var_240, *r12, *r15)
            
            if (rax_5 != 0)
                int64_t var_250
                var_250.d = i
                var_258 = &var_240
                
                if (var_1f0 == rsi_2)
                    sub_141701fc0(&var_200, rsi_2, &var_258)
                    rsi_2 = var_200:8.q
                    rbx_1 = var_200.q
                else
                    *rsi_2 = var_258.o
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
        while (i s< var_238.d)
    
    int64_t rcx_7 = (rsi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_7 == 0)
        rdx_4 = var_240
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_240
    
    int64_t* rdi_1 = nullptr
    uint128_t var_b8_1 = zmm12
    int128_t var_d8_1 = arg5
    int128_t var_e8_1 = arg6
    var_258 = nullptr
    int64_t var_250_1 = 0
    zmm1_1 = rdx_4[1]
    float var_128[0x4] = *rdx_4
    float var_118_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    int64_t var_f8_1 = rdx_4[3][0].q
    float var_108_1[0x4] = rdx_4[2]
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
    label_141555ba4:
        zmm6_4, zmm7_3, zmm8_3, zmm9_3, zmm10_3, zmm11_3, zmm12_1, zmm14, zmm15 =
            sub_14154a2a0(*arg1, *arg2, &var_128, arg7, arg8, var_1a0, arg10)
        rsi_1 = 1
    else
        arg5 = 0x322bcc77
        arg6 = 0x38d1b717
        
        while (true)
            if (rdx_5 s< 0x80)
                int64_t r13_1 = sx.q((*rbx_1)[2])
                int32_t var_248_1 = r13_1.d
                
                if (rcx_7 s>= 2)
                    zmm1_1 = rsi_2[-1]
                    int64_t i_2 = 0
                    int64_t i_3 = 0
                    rsi_2[-1] = *rbx_1
                    int64_t r11_4 = (&rsi_2[-1] - rbx_1) s>> 4
                    int64_t rdi_3 = (r11_4 - 1) s>> 1
                    
                    if (rdi_3 s> 0)
                        do
                            int64_t r9_1 = i_3 * 2
                            int64_t rcx_9 = r9_1 * 2
                            int64_t r8_7 = **(rbx_1 + (rcx_9 << 3) + 0x20)
                            i_3 = r9_1 + 1
                            
                            if ((*(sx.q((*rbx_1)[rcx_9 * 2 + 0xa]) * 0x38 + r8_7 + 0x18))[0] f<=
                                    *(sx.q((*rbx_1)[rcx_9 * 2 + 6]) * 0x38 + r8_7 + 0x18))
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
                    
                    rbx_1[i_2] = zmm1_1
                
                rsi_2 -= 0x10
                int32_t* rdi_5 = r13_1 * 0x38 + var_240
                var_200:8.q = rsi_2
                
                if (rdi_5[0xd].b != 0)
                label_141555b55:
                    rcx_7 = (rsi_2 - rbx_1) s>> 4
                    
                    if (rcx_7 != 0)
                        rdx_5 += 1
                        continue
                else
                    float var_1c8
                    float zmm6_1[0x4] = sub_141758e70(*arg3, &var_1c8, &rdi_5[3], zx.o(0))
                    int128_t zmm8_1 = rdi_5[4] ^ zmm6_1
                    zmm12 = rdi_5[5] ^ zmm6_1
                    int128_t* rax_21 = *arg4
                    int128_t zmm5_1 = rdi_5[3] ^ zmm6_1
                    void* rcx_14 = arg4[1]
                    float zmm9_1[0x4] = *(rax_21 + 4)
                    float zmm10_1[0x4] = *(rax_21 + 8)
                    float zmm11_1[0x4] = *rax_21
                    float zmm2_1 = *(rax_21 + 0xc)
                    float zmm4_1 = zmm10_1[0]
                    zmm10_1[0] = zmm10_1[0] f* zmm8_1.d
                    float zmm7_1 = zmm9_1[0]
                    zmm11_1[0] = zmm11_1[0] f* zmm8_1.d
                    zmm7_1 = zmm7_1 f* zmm12.d - zmm10_1[0]
                    zmm11_1[0] = zmm11_1[0] f* zmm12.d
                    zmm4_1 = zmm4_1 f* zmm5_1.d - zmm11_1[0]
                    zmm9_1[0] = zmm9_1[0] f* zmm5_1.d
                    zmm7_1 = zmm7_1 + zmm7_1
                    zmm11_1[0] = zmm11_1[0] - zmm9_1[0]
                    zmm4_1 = zmm4_1 + zmm4_1
                    zmm10_1[0] = zmm10_1[0] * zmm7_1
                    zmm9_1[0] = zmm9_1[0] * zmm7_1
                    zmm10_1[0] = zmm10_1[0] * zmm4_1
                    zmm11_1[0] = zmm11_1[0] + zmm11_1[0]
                    zmm9_1[0] = zmm9_1[0] * zmm11_1[0]
                    zmm9_1[0] = zmm9_1[0] - zmm10_1[0]
                    zmm11_1[0] = zmm11_1[0] * zmm11_1[0]
                    zmm11_1[0] = zmm11_1[0] * zmm4_1
                    zmm9_1[0] = zmm9_1[0] + zmm2_1 * zmm7_1 f+ zmm5_1.d
                    zmm11_1[0] = zmm11_1[0] * zmm2_1
                    zmm10_1[0] = zmm10_1[0] - zmm11_1[0]
                    zmm11_1[0] = zmm11_1[0] - zmm9_1[0]
                    zmm11_1[0] = zmm11_1[0] f+ zmm12.d
                    zmm11_1[0] = zmm11_1[0] + zmm11_1[0]
                    zmm10_1[0] = zmm10_1[0] + zmm4_1 * zmm2_1 f+ zmm8_1.d
                    float var_130_1 = zmm11_1[0]
                    int64_t var_210 = (_mm_unpacklo_ps(zmm9_1, zmm10_1[0].q)).q
                    float var_208_3 = var_130_1
                    float var_188
                    sub_141758e70(rcx_14, &var_188, &var_210, zx.o(0))
                    int128_t* rax_23 = arg4[2]
                    float zmm5_2[0x4] = *rax_23
                    int32_t var_180
                    float temp0_6[0x4] = _mm_unpacklo_ps(var_188, var_180.q)
                    int32_t var_184
                    float temp0_7[0x4] = _mm_unpacklo_ps(var_184, 0)
                    float temp0_8[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                    float temp0_9[0x4] = _mm_unpacklo_ps(temp0_6, temp0_7[0].q)
                    zmm12 = rdi_5[6]
                    float temp0_10[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
                    uint128_t zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0xc9), temp0_10)
                    float temp0_14[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0xd2), temp0_8)
                    float temp0_15[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
                    float temp0_16[0x4] = _mm_sub_ps(temp0_14, zmm0_3)
                    float temp0_17[0x4] = _mm_add_ps(temp0_16, temp0_16)
                    float temp0_18[0x4] = _mm_mul_ps(temp0_15, temp0_17)
                    zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xc9), temp0_10)
                    float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xd2)
                    float temp0_22[0x4] = _mm_add_ps(temp0_18, temp0_9)
                    float zmm2_2[0x4] = var_1c8
                    float temp0_26[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_21, temp0_8), zmm0_3), temp0_22), 
                        rax_23[1])
                    zmm2_2[0] = zmm2_2[0] - temp0_26[0]
                    float var_1b8_1 = temp0_26[0]
                    zmm0_3 = _mm_shuffle_ps(temp0_26, temp0_26, 0x55)
                    float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)
                    int32_t var_1c4
                    float zmm3_1[0x4] = var_1c4
                    zmm3_1[0] = zmm3_1[0] f- zmm0_3.d
                    int32_t var_1b4_1 = zmm0_3.d
                    int32_t var_1c0
                    zmm0_3.d = var_1c0.d f- temp0_28[0]
                    float var_1b0_1 = temp0_28[0]
                    float var_178 = zmm2_2[0]
                    zmm2_2[0] = zmm2_2[0] f* rdi_5[3]
                    float var_174_1 = zmm3_1[0]
                    zmm3_1[0] = zmm3_1[0] f* rdi_5[4]
                    int32_t var_170_1 = zmm0_3.d
                    zmm0_3.d = zmm0_3.d f* rdi_5[5]
                    zmm3_1[0] = zmm3_1[0] + zmm2_2[0]
                    zmm3_1[0] = zmm3_1[0] f+ zmm0_3.d
                    zmm0_3.d = zmm12.d f* 0.00999999978f
                    zmm0_3 = __andps_xmmxud_memxud(zmm0_3, data_142d3f770)
                    float temp0_30[0x4] = _mm_min_ss(zmm3_1[0], zmm13_1)
                    zmm13_1 = temp0_30[0]
                    temp0_30[0] = temp0_30[0] f- zmm12.d
                    
                    if (__andps_xmmxud_memxud(temp0_30, data_142d3f770)[0] f<= zmm0_3.d)
                        zmm6_4, zmm7_3, zmm8_3, zmm9_3, zmm10_3, zmm11_3, zmm12_1, zmm14, zmm15 =
                            sub_14154a2a0(*r12, *r15, rdi_5, arg7, arg8, var_1a0, arg10)
                        rdi_1 = var_258
                        rsi_1 = 0
                        break
                    
                    if (not(zmm13_1 f< zmm12.d))
                        int64_t r14_2 = sx.q(r12[1].d)
                        zmm0_3 = zx.o(*(rdi_5 + 0xc))
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
                        var_f8_1:4.b = rdi_5[0xd].b
                        int32_t rax_35 = (r14_2 + 1).d
                        var_118_1[2] = zmm12.d
                        var_128[3].q = zmm0_3.q
                        int32_t var_1d8_1 = r14_2.d
                        r12[1].d = rax_35
                        
                        if (rax_35 s> *(r12 + 0xc))
                            sub_14083a7e0(r12)
                        
                        int64_t rcx_16 = *r12
                        int64_t r14_3 = r14_2 * 3
                        *(rcx_16 + (r14_3 << 2)) = var_1c8.q
                        *(rcx_16 + (r14_3 << 2) + 8) = var_1c0
                        int64_t r13_3 = sx.q(r15[1].d)
                        int32_t rax_37 = (r13_3 + 1).d
                        r15[1].d = rax_37
                        
                        if (rax_37 s> *(r15 + 0xc))
                            sub_14083a7e0(r15)
                        
                        int64_t rcx_18 = *r15
                        int64_t rdx_14 = r13_3 * 3
                        var_250_1.d = 0
                        *(rcx_18 + (rdx_14 << 2)) = var_1b8_1.q
                        *(rcx_18 + (rdx_14 << 2) + 8) = var_1b0_1
                        int32_t rax_39 = var_250_1:4.d
                        rdi_5[0xd].b = 1
                        
                        if (rax_39 s< 0 && rax_39 != 0)
                            sub_1405c5570(&var_258, 0)
                        
                        sub_1415c5980(&var_240, var_248_1, &var_178, &var_258)
                        int32_t r8_12 = var_238.d
                        int64_t r13_4 = sx.q(var_250_1.d)
                        int32_t var_248_2 = r8_12
                        int32_t rax_40 = r8_12 + r13_4.d
                        var_238.d = rax_40
                        
                        if (rax_40 s> var_238:4.d)
                            sub_1407c3b60(&var_240)
                            r8_12 = var_248_2
                        
                        if (r13_4.d s>= 3)
                            int64_t rdi_6 = 0
                            int64_t var_150_1 = r13_4
                            
                            if (r13_4.d s> 0)
                                void* r12_1 = sx.q(r8_12) * 0x38
                                int32_t r11_7 = 1 - r8_12
                                int32_t rbx_2 = r8_12
                                int32_t var_1d0_1 = r11_7
                                
                                do
                                    int64_t* rdx_17 = var_258
                                    int64_t rcx_22 = var_240
                                    int64_t rax_42 = sx.q(rdx_17[rdi_6].d)
                                    int64_t rsi_3 = sx.q(*(&rdx_17[rdi_6] + 4))
                                    int32_t* r9_5 = r12_1 + rcx_22
                                    float var_1d4_1 = rax_42.d
                                    int64_t r10_8 = rax_42 * 0x38 + rcx_22
                                    int32_t r13_5 = rbx_2 + 1
                                    
                                    if (r11_7 + rbx_2 s>= r13_4.d)
                                        r13_5 = r8_12
                                    
                                    int64_t r8_13 = *r15
                                    int32_t r11_8 = rbx_2
                                    
                                    if (rbx_2 s<= r8_12)
                                        r11_8 = rax_40
                                    
                                    int64_t rdx_20 = *arg1
                                    int32_t rax_48 = *(r10_8 + (rsi_3 << 2))
                                    float zmm6_3[0x4] = *(rdx_20 + (r14_3 << 2) + 4)
                                    zmm6_3[0] = zmm6_3[0] f- *(r8_13 + (r14_3 << 2) + 4)
                                    zmm1_1 = *(rdx_20 + (r14_3 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_13 + (r14_3 << 2) + 8)
                                    int64_t rax_50 =
                                        sx.q(*(r10_8 + (sx.q((rsi_3 + 1).d s% 3) << 2)))
                                    zmm3_1 = *(rdx_20 + (r14_3 << 2))
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_13 + (r14_3 << 2))
                                    int32_t var_1dc_1 = rax_50.d
                                    int64_t rcx_25 = rax_50 * 3
                                    float zmm10_2 =
                                        *(rdx_20 + (rcx_25 << 2)) f- *(r8_13 + (rcx_25 << 2))
                                    float zmm7_2 = *(rdx_20 + (rcx_25 << 2) + 4) f-
                                        *(r8_13 + (rcx_25 << 2) + 4)
                                    float zmm11_2 = *(rdx_20 + (rcx_25 << 2) + 8) f-
                                        *(r8_13 + (rcx_25 << 2) + 8)
                                    int64_t rcx_26 = sx.q(rax_48) * 3
                                    float zmm2_3[0x4] = *(rdx_20 + (rcx_26 << 2) + 8)
                                    zmm3_1[0] = zmm3_1[0] - zmm10_2
                                    zmm2_3[0] = zmm2_3[0] f- *(r8_13 + (rcx_26 << 2) + 8)
                                    float zmm5_3[0x4] = *(rdx_20 + (rcx_26 << 2))
                                    zmm6_3[0] = zmm6_3[0] - zmm7_2
                                    float zmm4_3 = *(rdx_20 + (rcx_26 << 2) + 4)
                                    zmm1_1[0] = zmm1_1[0] - zmm11_2
                                    zmm5_3[0] = zmm5_3[0] f- *(r8_13 + (rcx_26 << 2))
                                    zmm4_3 = zmm4_3 f- *(r8_13 + (rcx_26 << 2) + 4)
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
                                        goto label_141555a05
                                    
                                    float var_230_1
                                    float var_228_1
                                    
                                    if (zmm3_1[0] f>= arg5.d)
                                        float temp0_33[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                                        zmm2_3 = 0x3f000000
                                        zmm3_1[0] = zmm3_1[0] * 0.5f
                                        temp0_33[0] = temp0_33[0] * temp0_33[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_33[0]
                                        zmm2_3[0] = 0.5f - zmm3_1[0]
                                        temp0_33[0] = temp0_33[0] * zmm2_3[0]
                                        temp0_33[0] = temp0_33[0] + temp0_33[0]
                                        temp0_33[0] = temp0_33[0] * temp0_33[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_33[0]
                                        temp0_33[0] = temp0_33[0] * (0.5f - zmm3_1[0])
                                        temp0_33[0] = temp0_33[0] + temp0_33[0]
                                        zmm1_1[0] = zmm1_1[0] * temp0_33[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_33[0]
                                        zmm6_3[0] = zmm6_3[0] * temp0_33[0]
                                    label_141555a05:
                                        var_228_1 = zmm6_3[0]
                                        float var_22c_2 = zmm3_1[0]
                                        var_230_1 = zmm1_1[0]
                                    else
                                        var_230_1 = data_143dbb1f8[0]
                                        var_228_1 = data_143dbb200[0]
                                        float var_22c_1 = data_143dbb1fc[0]
                                    
                                    *(r9_5 + 0xc) = var_230_1.q
                                    r9_5[5] = var_228_1
                                    float zmm0_1[0x4] = r9_5[4]
                                    zmm2_3 = r9_5[3]
                                    zmm1_1 = r9_5[5]
                                    zmm2_3[0] = zmm2_3[0] * zmm2_3[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_3[0] = zmm2_3[0] + zmm0_1[0]
                                    zmm2_3[0] = zmm2_3[0] + zmm1_1[0]
                                    float rax_52
                                    
                                    if (zmm2_3[0] f>= arg6.d)
                                        *r9_5 = var_1dc_1
                                        r9_5[1] = rax_48
                                        r9_5[2] = var_1d8_1
                                        r9_5[7] = var_1d4_1
                                        rax_52.b = 1
                                        r9_5[8] = r11_8 - 1
                                        r9_5[9] = r13_5
                                        r9_5[0xa] = rsi_3.d
                                        r9_5[0xb] = 2
                                        r9_5[0xc] = 1
                                        r9_5[0xd].b = 0
                                        r9_5[6] = zmm7_2 f* r9_5[4] + zmm10_2 f* r9_5[3]
                                            + zmm11_2 f* r9_5[5]
                                    else
                                        rax_52.b = 0
                                    
                                    *(r10_8 + (rsi_3 << 2) + 0x1c) = rbx_2
                                    *(r10_8 + (rsi_3 << 2) + 0x28) = 0
                                    
                                    if (rax_52.b == 0)
                                        rbx_1 = var_200.q
                                        goto label_141555b6d
                                    
                                    zmm0_1 = r9_5[6]
                                    r15 = arg2
                                    
                                    if (not(zmm0_1[0] f< zmm12.d) && not(zmm0_1[0] > zmm13_1))
                                        char rax_57
                                        rax_57, zmm12, zmm13_1, arg5, arg6 =
                                            sub_141743d50(r9_5, *arg1, *r15)
                                        
                                        if (rax_57 != 0)
                                            int32_t var_140_1 = rbx_2
                                            int64_t* var_148 = &var_240
                                            sub_14175ce20(&var_200, &var_148)
                                    
                                    r8_12 = var_248_2
                                    rbx_2 += 1
                                    r13_4 = zx.q(var_250_1.d)
                                    r12_1 += 0x38
                                    r11_7 = var_1d0_1
                                    rdi_6 += 1
                                while (rdi_6 s< var_150_1)
                                
                                rsi_2 = var_200:8.q
                                rbx_1 = var_200.q
                                r12 = arg1
                            
                            goto label_141555b55
            
        label_141555b6d:
            rdi_1 = var_258
            goto label_141555ba4
    
    zmm15.o = var_e8_1
    zmm14.o = var_d8_1
    zmm12_1.o = var_b8_1
    zmm11_3.o = zmm11
    zmm10_3.o = zmm10
    zmm9_3.o = zmm9
    zmm8_3.o = zmm8
    zmm7_3.o = zmm7
    zmm6_4.o = zmm6
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    if (rbx_1 != 0)
        float (* rax_62)[0x4] = rbx_1
        
        if (((var_1f0 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_62 - rbx_1 - 8 u> 0x1f)
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

int64_t rcx_35 = var_240

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

__security_check_cookie(rax_1 ^ &var_298)
return zx.q(rsi_1)
