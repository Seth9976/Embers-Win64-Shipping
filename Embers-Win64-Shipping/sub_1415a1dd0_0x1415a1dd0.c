// 函数: sub_1415a1dd0
// 地址: 0x1415a1dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int64_t* r12 = arg2
int64_t* r14 = arg1
uint64_t* var_250 = arg8
int64_t var_220
int64_t* var_258 = &var_220
float var_1f8 = 3.40282347e+38f
float* var_168 = arg7
int32_t* var_178 = arg9
var_220 = 0
int64_t var_218 = 0
char rax_3
int128_t zmm6
float zmm7[0x4]
int128_t zmm8
int128_t zmm9
int128_t zmm10
int128_t zmm11
float zmm12[0x4]
float zmm13[0x4]
rax_3, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 =
    sub_1416c8e80(arg1, arg2, arg3, arg4, var_258)
int32_t rdi_1

if (rax_3 != 0)
    int32_t i = 0
    int128_t var_1d8
    __builtin_memset(&var_1d8, 0, 0x18)
    float (* rdi_2)[0x4] = var_1d8:8.q
    float (* rbx_1)[0x4] = var_1d8.q
    int64_t* var_230
    int64_t var_1c8
    float zmm1_1[0x4]
    
    if (var_218.d s> 0)
        do
            char rax_5
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, arg5, arg6 =
                sub_141743d50(sx.q(i) * 0x38 + var_220, *r14, *r12)
            
            if (rax_5 != 0)
                int64_t var_228
                var_228.d = i
                var_230 = &var_220
                
                if (var_1c8 == rdi_2)
                    sub_141701fc0(&var_1d8, rdi_2, &var_230)
                    rdi_2 = var_1d8:8.q
                    rbx_1 = var_1d8.q
                else
                    *rdi_2 = var_230.o
                    rdi_2 = &rdi_2[1]
                    var_1d8:8.q = rdi_2
                
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
        while (i s< var_218.d)
    
    int64_t rcx_7 = (rdi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_7 == 0)
        rdx_4 = var_220
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_220
    
    int64_t* rsi_1 = nullptr
    float var_68_1[0x4] = zmm7
    int32_t r13_1 = 0
    float var_b8_1[0x4] = zmm12
    float var_c8_1[0x4] = zmm13
    uint128_t var_d8_1 = arg5
    float var_e8_1[0x4] = arg6
    var_230 = nullptr
    int64_t var_228_1 = 0
    zmm1_1 = rdx_4[1]
    float var_128[0x4] = *rdx_4
    float var_118_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    int64_t var_f8_1 = rdx_4[3][0].q
    float var_108_1[0x4] = rdx_4[2]
    int512_t zmm6_3
    int512_t zmm7_1
    int512_t zmm8_2
    int512_t zmm9_2
    int512_t zmm10_2
    int512_t zmm11_2
    int512_t zmm12_1
    int512_t zmm13_1
    int512_t zmm14
    int512_t zmm15
    
    if (rcx_7 == 0)
    label_1415a2931:
        zmm6_3, zmm7_1, zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm12_1, zmm13_1, zmm14, zmm15 =
            sub_14154a2a0(*arg1, *arg2, &var_128, var_168, arg8, var_178, arg10)
        rdi_1 = 1
    else
        zmm7 = zx.o(0)
        
        while (true)
            if (rdx_5 s< 0x80)
                float rax_11 = (*rbx_1)[2]
                float var_238_1 = rax_11
                
                if (rcx_7 s>= 2)
                    zmm1_1 = rdi_2[-1]
                    int64_t i_2 = 0
                    int64_t i_3 = 0
                    rdi_2[-1] = *rbx_1
                    int64_t r11_4 = (&rdi_2[-1] - rbx_1) s>> 4
                    int64_t rsi_3 = (r11_4 - 1) s>> 1
                    
                    if (rsi_3 s> 0)
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
                    
                    rax_11 = var_238_1
                    rbx_1[i_2] = zmm1_1
                
                rdi_2 -= 0x10
                var_1d8:8.q = rdi_2
                int32_t* rsi_5 = sx.q(rax_11) * 0x38 + var_220
                
                if (rsi_5[0xd].b != 0)
                label_1415a28e5:
                    rcx_7 = (rdi_2 - rbx_1) s>> 4
                    
                    if (rcx_7 != 0)
                        rdx_5 += 1
                        continue
                else
                    float var_1a0
                    uint128_t zmm6_1 = sub_141758e70(*arg3, &var_1a0, &rsi_5[3], zmm7)
                    arg5 = rsi_5[4]
                    arg6 = rsi_5[5]
                    zmm13 = rsi_5[3]
                    uint128_t zmm4_1 = arg5 ^ zmm6_1
                    float (* rax_23)[0x4] = *arg4
                    zmm7 = arg6 ^ zmm6_1
                    float zmm11_1[0x4] = zmm13 ^ zmm6_1
                    float zmm10_1[0x4] = zmm7
                    float zmm8_1[0x4] = (*rax_23)[1]
                    float zmm9_1[0x4] = (*rax_23)[2]
                    float zmm3_1[0x4] = *rax_23
                    float zmm2_1[0x4] = (*rax_23)[3]
                    void* rax_24 = arg4[1]
                    uint128_t zmm0_2
                    zmm0_2.d = zmm4_1.d f* zmm9_1[0]
                    zmm6_1.d = zmm4_1.d f* zmm3_1[0]
                    zmm10_1[0] = zmm10_1[0] * zmm8_1[0]
                    zmm11_1[0] = zmm11_1[0] * zmm9_1[0]
                    zmm10_1[0] = zmm10_1[0] f- zmm0_2.d
                    zmm0_2.d = zmm7.d f* zmm3_1[0]
                    zmm11_1[0] = zmm11_1[0] f- zmm0_2.d
                    zmm0_2.d = zmm11_1.d f* zmm8_1[0]
                    zmm10_1[0] = zmm10_1[0] + zmm10_1[0]
                    zmm6_1.d = zmm6_1.d f- zmm0_2.d
                    zmm11_1[0] = zmm11_1[0] + zmm11_1[0]
                    zmm10_1[0] = zmm10_1[0] * zmm9_1[0]
                    zmm6_1.d = zmm6_1.d f+ zmm6_1.d
                    zmm11_1[0] = zmm11_1[0] * zmm2_1[0]
                    zmm11_1[0] = zmm11_1[0] f+ zmm4_1.d
                    zmm0_2.d = zmm6_1.d f* zmm3_1[0]
                    zmm11_1[0] = zmm11_1[0] * zmm9_1[0]
                    zmm10_1[0] = zmm10_1[0] f- zmm0_2.d
                    zmm4_1.d = zmm11_1.d f* zmm3_1[0]
                    zmm10_1[0] = zmm10_1[0] * zmm2_1[0]
                    zmm0_2.d = zmm10_1.d f* zmm8_1[0]
                    zmm10_1[0] = zmm10_1[0] + zmm11_1[0]
                    float zmm1_2[0x4] = zmm6_1
                    zmm6_1.d = zmm6_1.d f* zmm8_1[0]
                    zmm10_1[0] = zmm10_1[0] + zmm11_1[0]
                    zmm1_2[0] = zmm1_2[0] * zmm2_1[0]
                    zmm4_1.d = zmm4_1.d f- zmm0_2.d
                    zmm6_1.d = zmm6_1.d f- zmm11_1[0]
                    zmm1_2[0] = zmm1_2[0] + zmm7[0]
                    zmm7 = zx.o(0)
                    zmm6_1.d = zmm6_1.d f+ zmm10_1[0]
                    zmm4_1.d = zmm4_1.d f+ zmm1_2[0]
                    
                    if (zmm6_1.d f>= 0f)
                        zmm3_1 = *(rax_24 + 0x1c)
                    else
                        zmm3_1 = *(rax_24 + 0x10)
                    
                    if (zmm10_1[0] >= 0f)
                        zmm2_1 = *(rax_24 + 0x20)
                    else
                        zmm2_1 = *(rax_24 + 0x14)
                    
                    if (zmm4_1.d f>= 0f)
                        zmm0_2 = *(rax_24 + 0x24)
                    else
                        zmm0_2 = *(rax_24 + 0x18)
                    
                    float (* rax_25)[0x4] = arg4[2]
                    zmm12 = rsi_5[6]
                    float temp0_5[0x4] = _mm_unpacklo_ps(zmm2_1, 0)
                    zmm6_1 = _mm_unpacklo_ps(zmm3_1, zmm0_2.q)
                    float zmm5_1[0x4] = *rax_25
                    zmm6_1 = _mm_unpacklo_ps(zmm6_1, temp0_5[0].q)
                    zmm4_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                    float temp0_9[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9), temp0_9)
                    float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2), zmm4_1)
                    float temp0_14[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    float temp0_15[0x4] = _mm_sub_ps(temp0_13, zmm0_2)
                    float temp0_16[0x4] = _mm_add_ps(temp0_15, temp0_15)
                    float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_16)
                    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xc9), temp0_9)
                    float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xd2)
                    float temp0_21[0x4] = _mm_add_ps(temp0_17, zmm6_1)
                    zmm2_1 = var_1a0
                    float temp0_25[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_20, zmm4_1), zmm0_2), temp0_21), 
                        rax_25[1])
                    zmm2_1[0] = zmm2_1[0] - temp0_25[0]
                    float var_190_1 = temp0_25[0]
                    zmm0_2 = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
                    float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
                    int32_t var_19c
                    zmm3_1 = var_19c
                    zmm3_1[0] = zmm3_1[0] f- zmm0_2.d
                    int32_t var_18c_1 = zmm0_2.d
                    int32_t var_198
                    zmm0_2.d = var_198.d f- temp0_27[0]
                    float var_188_1 = temp0_27[0]
                    float var_1f0 = zmm2_1[0]
                    zmm2_1[0] = zmm2_1[0] * zmm13[0]
                    float var_1ec_1 = zmm3_1[0]
                    zmm3_1[0] = zmm3_1[0] f* arg5.d
                    int32_t var_1e8_3 = zmm0_2.d
                    zmm0_2.d = zmm0_2.d f* arg6[0]
                    zmm3_1[0] = zmm3_1[0] + zmm2_1[0]
                    zmm3_1[0] = zmm3_1[0] f+ zmm0_2.d
                    zmm0_2.d = zmm12.d f* 0.00999999978f
                    float temp0_28[0x4] = __minss_xmmss_memss(zmm3_1[0], var_1f8)
                    zmm0_2 = __andps_xmmxud_memxud(zmm0_2, data_142d3f770)
                    zmm13 = temp0_28
                    temp0_28[0] = temp0_28[0] - zmm12[0]
                    var_1f8 = zmm13[0]
                    
                    if (__andps_xmmxud_memxud(temp0_28, data_142d3f770)[0] f<= zmm0_2.d)
                        zmm6_3, zmm7_1, zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm12_1, zmm13_1, zmm14, 
                            zmm15 = sub_14154a2a0(*r14, *r12, rsi_5, var_168, arg8, var_178, arg10)
                        rsi_1 = var_230
                        rdi_1 = 0
                        break
                    
                    if (not(zmm13[0] < zmm12[0]))
                        int64_t r15_2 = sx.q(r14[1].d)
                        zmm0_2 = zx.o(*(rsi_5 + 0xc))
                        var_128[0] = *rsi_5
                        var_128[1] = rsi_5[1]
                        var_128[2] = rsi_5[2]
                        var_118_1[1] = rsi_5[5]
                        var_118_1[3] = rsi_5[7]
                        var_108_1[0] = rsi_5[8]
                        var_108_1[1] = rsi_5[9]
                        var_108_1[2] = rsi_5[0xa]
                        var_108_1[3] = rsi_5[0xb]
                        var_f8_1.d = rsi_5[0xc]
                        var_f8_1:4.b = rsi_5[0xd].b
                        int32_t rax_37 = (r15_2 + 1).d
                        var_118_1[2] = zmm12[0]
                        var_128[3].q = zmm0_2.q
                        int32_t var_1b4_1 = r15_2.d
                        r14[1].d = rax_37
                        
                        if (rax_37 s> *(r14 + 0xc))
                            sub_14083a7e0(r14)
                        
                        int64_t rcx_16 = *r14
                        int64_t rdx_11 = r15_2 * 3
                        *(rcx_16 + (rdx_11 << 2)) = var_1a0.q
                        *(rcx_16 + (rdx_11 << 2) + 8) = var_198
                        int64_t r14_1 = sx.q(r12[1].d)
                        int32_t rax_39 = (r14_1 + 1).d
                        r12[1].d = rax_39
                        
                        if (rax_39 s> *(r12 + 0xc))
                            sub_14083a7e0(r12)
                        
                        int64_t rcx_18 = *r12
                        int64_t rdx_13 = r14_1 * 3
                        var_228_1.d = 0
                        *(rcx_18 + (rdx_13 << 2)) = var_190_1.q
                        *(rcx_18 + (rdx_13 << 2) + 8) = var_188_1
                        rsi_5[0xd].b = 1
                        
                        if (r13_1 s< 0 && r13_1 != 0)
                            sub_1405c5570(&var_230, 0)
                        
                        sub_1415c5980(&var_220, var_238_1, &var_1f0, &var_230)
                        int64_t r13_2 = sx.q(var_218.d)
                        int32_t r8_11 = var_228_1.d
                        int32_t rax_41 = r8_11 + r13_2.d
                        var_218.d = rax_41
                        
                        if (rax_41 s> var_218:4.d)
                            sub_1407c3b60(&var_220)
                            r8_11 = var_228_1.d
                        
                        if (r8_11 s>= 3)
                            int64_t rax_42 = sx.q(r8_11)
                            int64_t rsi_6 = 0
                            
                            if (r8_11 s<= 0)
                                r14 = arg1
                            else
                                void* rdi_3 = r13_2 * 0x38
                                int32_t rbx_2 = r13_2.d
                                int32_t r11_7 = 1 - r13_2.d
                                int32_t var_1ac_1 = r11_7
                                
                                do
                                    int64_t* rdx_16 = var_230
                                    int64_t rcx_22 = var_220
                                    int64_t r15_3 = sx.q(rdx_16[rsi_6].d)
                                    int64_t r14_2 = sx.q(*(&rdx_16[rsi_6] + 4))
                                    int32_t* r9_5 = rdi_3 + rcx_22
                                    int64_t r10_8 = r15_3 * 0x38 + rcx_22
                                    int32_t r11_8 = rbx_2 + 1
                                    
                                    if (r11_7 + rbx_2 s>= r8_11)
                                        r11_8 = r13_2.d
                                    
                                    int64_t r8_12 = *r12
                                    int32_t rax_47 = rbx_2
                                    
                                    if (rbx_2 s<= r13_2.d)
                                        rax_47 = r8_11 + r13_2.d
                                    
                                    int32_t rax_49 = *(r10_8 + (r14_2 << 2))
                                    int64_t rdx_21 = *arg1
                                    int64_t rax_51 =
                                        sx.q(*(r10_8 + (sx.q((r14_2 + 1).d s% 3) << 2)))
                                    int32_t var_1b8_1 = rax_51.d
                                    int64_t rcx_25 = rax_51 * 3
                                    zmm10_1 = *(rdx_21 + (rcx_25 << 2))
                                    zmm10_1[0] = zmm10_1[0] f- *(r8_12 + (rcx_25 << 2))
                                    float zmm6_2 = *(rdx_21 + (rcx_25 << 2) + 4) f-
                                        *(r8_12 + (rcx_25 << 2) + 4)
                                    zmm11_1 = *(rdx_21 + (rcx_25 << 2) + 8)
                                    zmm11_1[0] = zmm11_1[0] f- *(r8_12 + (rcx_25 << 2) + 8)
                                    int64_t rcx_26 = sx.q(rax_49) * 3
                                    float zmm2_2[0x4] = *(rdx_21 + (rcx_26 << 2) + 8)
                                    zmm2_2[0] = zmm2_2[0] f- *(r8_12 + (rcx_26 << 2) + 8)
                                    float zmm5_2[0x4] = *(rdx_21 + (rcx_26 << 2))
                                    zmm7 = *(rdx_21 + (rdx_11 << 2) + 4)
                                    zmm7[0] = zmm7[0] f- *(r8_12 + (rdx_11 << 2) + 4)
                                    zmm1_1 = *(rdx_21 + (rdx_11 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_12 + (rdx_11 << 2) + 8)
                                    zmm3_1 = *(rdx_21 + (rdx_11 << 2))
                                    zmm2_2[0] = zmm2_2[0] - zmm11_1[0]
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_12 + (rdx_11 << 2))
                                    float zmm4_2 = *(rdx_21 + (rcx_26 << 2) + 4)
                                    zmm7[0] = zmm7[0] - zmm6_2
                                    zmm5_2[0] = zmm5_2[0] f- *(r8_12 + (rcx_26 << 2))
                                    zmm4_2 = zmm4_2 f- *(r8_12 + (rcx_26 << 2) + 4)
                                    zmm1_1[0] = zmm1_1[0] - zmm11_1[0]
                                    zmm3_1[0] = zmm3_1[0] - zmm10_1[0]
                                    zmm7[0] = zmm7[0] * zmm2_2[0]
                                    zmm5_2[0] = zmm5_2[0] - zmm10_1[0]
                                    zmm4_2 = zmm4_2 - zmm6_2
                                    zmm3_1[0] = zmm3_1[0] * zmm2_2[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm5_2[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm4_2
                                    zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
                                    zmm7[0] = zmm7[0] * zmm5_2[0]
                                    zmm1_1[0] = zmm1_1[0] - zmm7[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm4_2
                                    zmm7[0] = zmm7[0] - zmm3_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm7[0] = zmm7[0] * zmm7[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm1_1[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm7[0]
                                    
                                    if (zmm3_1[0] == 1f)
                                        goto label_1415a278c
                                    
                                    float var_210_1
                                    float var_208_1
                                    
                                    if (zmm3_1[0] >= 9.99999994e-09f)
                                        float temp0_32[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                                        zmm2_2 = 0x3f000000
                                        zmm3_1[0] = zmm3_1[0] * 0.5f
                                        temp0_32[0] = temp0_32[0] * temp0_32[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_32[0]
                                        zmm2_2[0] = 0.5f - zmm3_1[0]
                                        temp0_32[0] = temp0_32[0] * zmm2_2[0]
                                        temp0_32[0] = temp0_32[0] + temp0_32[0]
                                        temp0_32[0] = temp0_32[0] * temp0_32[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_32[0]
                                        temp0_32[0] = temp0_32[0] * (0.5f - zmm3_1[0])
                                        temp0_32[0] = temp0_32[0] + temp0_32[0]
                                        zmm1_1[0] = zmm1_1[0] * temp0_32[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_32[0]
                                        zmm7[0] = zmm7[0] * temp0_32[0]
                                    label_1415a278c:
                                        var_208_1 = zmm7[0]
                                        float var_20c_2 = zmm3_1[0]
                                        var_210_1 = zmm1_1[0]
                                    else
                                        var_210_1 = data_143dbb1f8[0]
                                        var_208_1 = data_143dbb200[0]
                                        float var_20c_1 = data_143dbb1fc[0]
                                    
                                    *(r9_5 + 0xc) = var_210_1.q
                                    r9_5[5] = var_208_1
                                    float zmm0_1[0x4] = r9_5[4]
                                    zmm2_2 = r9_5[3]
                                    zmm1_1 = r9_5[5]
                                    zmm2_2[0] = zmm2_2[0] * zmm2_2[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_2[0] = zmm2_2[0] + zmm0_1[0]
                                    zmm2_2[0] = zmm2_2[0] + zmm1_1[0]
                                    float rax_54
                                    
                                    if (zmm2_2[0] >= 9.99999975e-05f)
                                        *r9_5 = var_1b8_1
                                        r9_5[1] = rax_49
                                        r9_5[2] = var_1b4_1
                                        r9_5[8] = rax_47 - 1
                                        rax_54.b = 1
                                        r9_5[7] = r15_3.d
                                        r9_5[9] = r11_8
                                        r9_5[0xa] = r14_2.d
                                        r9_5[0xb] = 2
                                        r9_5[0xc] = 1
                                        zmm6_2 = zmm6_2 f* r9_5[4]
                                        zmm10_1[0] = zmm10_1[0] f* r9_5[3]
                                        zmm11_1[0] = zmm11_1[0] f* r9_5[5]
                                        r9_5[0xd].b = 0
                                        r9_5[6] = zmm6_2 + zmm10_1[0] + zmm11_1[0]
                                    else
                                        rax_54.b = 0
                                    
                                    *(r10_8 + (r14_2 << 2) + 0x1c) = rbx_2
                                    *(r10_8 + (r14_2 << 2) + 0x28) = 0
                                    
                                    if (rax_54.b == 0)
                                        rbx_1 = var_1d8.q
                                        goto label_1415a28fa
                                    
                                    zmm0_1 = r9_5[6]
                                    r12 = arg2
                                    r14 = arg1
                                    
                                    if (not(zmm0_1[0] < zmm12[0]) && not(zmm0_1[0] > zmm13[0]))
                                        char rax_58
                                        rax_58, zmm12, zmm13 = sub_141743d50(r9_5, *r14, *r12)
                                        
                                        if (rax_58 != 0)
                                            int32_t var_130_1 = rbx_2
                                            int64_t* var_138 = &var_220
                                            sub_14175ce20(&var_1d8, &var_138)
                                    
                                    r8_11 = var_228_1.d
                                    rbx_2 += 1
                                    r11_7 = var_1ac_1
                                    rdi_3 += 0x38
                                    rsi_6 += 1
                                while (rsi_6 s< rax_42)
                                
                                rdi_2 = var_1d8:8.q
                                zmm7 = zx.o(0)
                                rbx_1 = var_1d8.q
                            
                            r13_1 = var_228_1:4.d
                            goto label_1415a28e5
            
        label_1415a28fa:
            rsi_1 = var_230
            goto label_1415a2931
    
    zmm15.o = var_e8_1
    zmm14.o = var_d8_1
    zmm13_1.o = var_c8_1
    zmm12_1.o = var_b8_1
    zmm11_2.o = zmm11
    zmm10_2.o = zmm10
    zmm9_2.o = zmm9
    zmm8_2.o = zmm8
    zmm7_1.o = var_68_1
    zmm6_3.o = zmm6
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    if (rbx_1 != 0)
        float (* rax_63)[0x4] = rbx_1
        
        if (((var_1c8 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_63 - rbx_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rbx_1)
else
    *arg7 = 0
    *arg9 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg9[1].d = 0
    *arg10 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg10[1].d = 0
    rdi_1 = 2
    int32_t var_1e8_1 = 0
    int32_t var_1e8_2 = 0

int64_t rcx_35 = var_220

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

__security_check_cookie(rax_1 ^ &var_278)
return zx.q(rdi_1)
