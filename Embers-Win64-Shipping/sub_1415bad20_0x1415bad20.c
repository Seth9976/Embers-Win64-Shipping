// 函数: sub_1415bad20
// 地址: 0x1415bad20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int32_t r12 = 0
int64_t* r13 = arg3
int64_t* r15 = arg2
int64_t* r14 = arg1
uint64_t* var_250 = arg6
int64_t var_220
int64_t* var_258 = &var_220
int32_t* var_178 = arg7
var_220 = 0
int64_t var_218 = 0
char rax_3
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13_1
int128_t zmm14
int128_t zmm15
rax_3, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, zmm14, zmm15 =
    sub_1416dda90(arg1, arg2, arg3, arg4, var_258)
int32_t rsi_1

if (rax_3 != 0)
    int128_t var_1e0
    __builtin_memset(&var_1e0, 0, 0x18)
    float (* rsi_2)[0x4] = var_1e0:8.q
    int32_t i = 0
    float (* rbx_1)[0x4] = var_1e0.q
    int64_t* var_230
    int64_t var_1d0
    float zmm1_1[0x4]
    
    if (var_218.d s> 0)
        do
            char rax_5
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, zmm14, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_220, *r14, *r15)
            
            if (rax_5 != 0)
                int64_t var_228
                var_228.d = i
                var_230 = &var_220
                
                if (var_1d0 == rsi_2)
                    sub_141701fc0(&var_1e0, rsi_2, &var_230)
                    rsi_2 = var_1e0:8.q
                    rbx_1 = var_1e0.q
                else
                    *rsi_2 = var_230.o
                    rsi_2 = &rsi_2[1]
                    var_1e0:8.q = rsi_2
                
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
        while (i s< var_218.d)
    
    int64_t rcx_7 = (rsi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_7 == 0)
        rdx_4 = var_220
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_220
    
    float zmm0_1[0x4] = *rdx_4
    int64_t* rdi_1 = nullptr
    zmm1_1 = rdx_4[1]
    var_230 = nullptr
    float var_58_1[0x4] = zmm6
    float var_68_1[0x4] = zmm7
    float var_78_1[0x4] = zmm8
    float var_88_1[0x4] = zmm9
    float var_98_1[0x4] = zmm10
    float var_a8_1[0x4] = zmm11
    float var_b8_1[0x4] = zmm12
    float var_130[0x4] = zmm0_1
    int64_t var_228_1 = 0
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
    
    if (rcx_7 == 0)
    label_1415bb7d0:
        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm14_1, zmm15_1 =
            sub_14154a2a0(*arg1, *arg2, &var_130, arg5, arg6, var_178, arg8)
        rsi_1 = 1
    else
        zmm14 = 0x322bcc77
        float zmm5_1[0x4] = zx.o(0)
        zmm15 = 0x38d1b717
        
        while (true)
            if (rdx_5 s< 0x80)
                float rax_11 = (*rbx_1)[2]
                float var_238_1 = rax_11
                
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
                    
                    rax_11 = var_238_1
                    r13 = arg3
                    rbx_1[i_2] = zmm1_1
                
                rsi_2 -= 0x10
                var_1e0:8.q = rsi_2
                int32_t* rdi_5 = sx.q(rax_11) * 0x38 + var_220
                
                if (rdi_5[0xd].b != 0)
                label_1415bb781:
                    rcx_7 = (rsi_2 - rbx_1) s>> 4
                    
                    if (rcx_7 != 0)
                        rdx_5 += 1
                        r13 = arg3
                        continue
                else
                    void* rax_22 = *r13
                    zmm11 = rdi_5[3]
                    zmm12 = rdi_5[4]
                    zmm10 = rdi_5[5]
                    float zmm3_1[0x4] = *(rax_22 + 0x28)
                    float zmm4_1[0x4] = *(rax_22 + 0x2c)
                    zmm9 = *(rax_22 + 0x30)
                    void* rcx_13 = *(rax_22 + 0x10)
                    zmm11[0] = zmm11[0] * zmm3_1[0]
                    zmm12[0] = zmm12[0] * zmm4_1[0]
                    bool cond:0_1 = zmm11[0] >= zmm5_1[0]
                    zmm10[0] = zmm10[0] * zmm9[0]
                    
                    if (cond:0_1)
                        zmm7 = *(rcx_13 + 0x1c)
                    else
                        zmm7 = *(rcx_13 + 0x10)
                    
                    if (zmm12[0] >= zmm5_1[0])
                        zmm8 = *(rcx_13 + 0x20)
                    else
                        zmm8 = *(rcx_13 + 0x14)
                    
                    if (zmm10[0] >= zmm5_1[0])
                        zmm0_1 = *(rcx_13 + 0x24)
                    else
                        zmm0_1 = *(rcx_13 + 0x18)
                    
                    zmm7[0] = zmm7[0] * zmm3_1[0]
                    zmm9[0] = zmm9[0] * zmm0_1[0]
                    void* rcx_14 = *arg4
                    zmm8[0] = zmm8[0] * zmm4_1[0]
                    float var_1a8_1 = zmm7[0]
                    void* rax_23 = *(rcx_14 + 0x10)
                    float var_1a4_1 = zmm8[0]
                    float var_1a0_1 = zmm9[0]
                    zmm3_1 = *(rax_23 + 0x10)
                    zmm3_1[0] = zmm3_1[0] f* *(rcx_14 + 0x28)
                    zmm0_1 = *(rax_23 + 0x18)
                    zmm0_1[0] = zmm0_1[0] f* *(rcx_14 + 0x30)
                    float zmm2_1[0x4] = *(rax_23 + 0x14)
                    zmm2_1[0] = zmm2_1[0] f* *(rcx_14 + 0x2c)
                    int128_t* rax_24 = arg4[1]
                    float temp0_5[0x4] = _mm_unpacklo_ps(zmm3_1, zmm0_1[0].q)
                    float temp0_6[0x4] = _mm_unpacklo_ps(zmm2_1, zmm5_1[0].q)
                    zmm5_1 = *rax_24
                    float temp0_7[0x4] = _mm_unpacklo_ps(temp0_5, temp0_6[0].q)
                    float temp0_8[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                    float temp0_9[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                    float temp0_11[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), temp0_9)
                    float temp0_13[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xd2), temp0_8)
                    float temp0_14[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    float temp0_15[0x4] = _mm_sub_ps(temp0_13, temp0_11)
                    float temp0_16[0x4] = _mm_add_ps(temp0_15, temp0_15)
                    float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_16)
                    float temp0_19[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xc9), temp0_9)
                    float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xd2)
                    float temp0_21[0x4] = _mm_add_ps(temp0_17, temp0_7)
                    float temp0_25[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_20, temp0_8), temp0_19), temp0_21), 
                        rax_24[1])
                    zmm7[0] = zmm7[0] - temp0_25[0]
                    float var_198_1 = temp0_25[0]
                    float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
                    zmm8[0] = zmm8[0] - temp0_26[0]
                    float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
                    zmm9[0] = zmm9[0] - temp0_27[0]
                    float var_190_1 = temp0_27[0]
                    float var_200 = zmm7[0]
                    zmm7[0] = zmm7[0] * zmm11[0]
                    float var_194_1 = temp0_26[0]
                    float var_1fc_1 = zmm8[0]
                    zmm8[0] = zmm8[0] * zmm12[0]
                    zmm12 = rdi_5[6]
                    zmm10[0] = zmm10[0] * zmm9[0]
                    zmm12[0] = zmm12[0] * 0.00999999978f
                    zmm7[0] = zmm7[0] + zmm8[0]
                    float var_1f8_3 = zmm9[0]
                    zmm0_1 = __andps_xmmxud_memxud(zmm12, data_142d3f770)
                    zmm7[0] = zmm7[0] + zmm10[0]
                    float temp0_29[0x4] = _mm_min_ss(zmm7[0], zmm13_1)
                    zmm13_1 = temp0_29[0]
                    temp0_29[0] = temp0_29[0] - zmm12[0]
                    
                    if (__andps_xmmxud_memxud(temp0_29, data_142d3f770)[0] <= zmm0_1[0])
                        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm14_1, 
                            zmm15_1 = sub_14154a2a0(*r14, *r15, rdi_5, arg5, arg6, var_178, arg8)
                        rdi_1 = var_230
                        rsi_1 = 0
                        break
                    
                    if (not(zmm13_1 < zmm12[0]))
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
                        int32_t rax_35 = (r13_2 + 1).d
                        var_120_1[2] = zmm12[0]
                        var_130[3].q = zmm0_1.q
                        var_100_1:4.b = 0
                        int32_t var_1bc_1 = r13_2.d
                        r14[1].d = rax_35
                        
                        if (rax_35 s> *(r14 + 0xc))
                            sub_14083a7e0(r14)
                        
                        int64_t rcx_16 = *r14
                        int64_t rdx_12 = r13_2 * 3
                        *(rcx_16 + (rdx_12 << 2)) = var_1a8_1.q
                        *(rcx_16 + (rdx_12 << 2) + 8) = var_1a0_1
                        int64_t r13_3 = sx.q(r15[1].d)
                        int32_t rax_37 = (r13_3 + 1).d
                        r15[1].d = rax_37
                        
                        if (rax_37 s> *(r15 + 0xc))
                            sub_14083a7e0(r15)
                        
                        int64_t rcx_18 = *r15
                        int64_t rdx_15 = r13_3 * 3
                        var_228_1.d = 0
                        *(rcx_18 + (rdx_15 << 2)) = var_198_1.q
                        *(rcx_18 + (rdx_15 << 2) + 8) = var_190_1
                        rdi_5[0xd].b = 1
                        
                        if (r12 s< 0 && r12 != 0)
                            sub_1405c5570(&var_230, 0)
                        
                        sub_1415c5980(&var_220, var_238_1, &var_200, &var_230)
                        int64_t r13_4 = sx.q(var_218.d)
                        int32_t r8_10 = var_228_1.d
                        int32_t rax_39 = r8_10 + r13_4.d
                        var_218.d = rax_39
                        
                        if (rax_39 s> var_218:4.d)
                            sub_1407c3b60(&var_220)
                            r8_10 = var_228_1.d
                        
                        if (r8_10 s>= 3)
                            int64_t rdi_6 = 0
                            int64_t rax_40 = sx.q(r8_10)
                            
                            if (r8_10 s> 0)
                                void* r14_1 = r13_4 * 0x38
                                int32_t rbx_2 = r13_4.d
                                int32_t rsi_3 = 1 - r13_4.d
                                int32_t var_1b4_1 = rsi_3
                                
                                do
                                    int64_t* rdx_18 = var_230
                                    int64_t rcx_22 = var_220
                                    int64_t r12_1 = sx.q(rdx_18[rdi_6].d)
                                    int64_t r11_7 = sx.q(*(&rdx_18[rdi_6] + 4))
                                    int32_t* r9_5 = r14_1 + rcx_22
                                    int64_t r10_8 = r12_1 * 0x38 + rcx_22
                                    int32_t rsi_4 = rbx_2 + 1
                                    
                                    if (rsi_3 + rbx_2 s>= r8_10)
                                        rsi_4 = r13_4.d
                                    
                                    int64_t r8_11 = *r15
                                    int32_t rax_45 = rbx_2
                                    
                                    if (rbx_2 s<= r13_4.d)
                                        rax_45 = r8_10 + r13_4.d
                                    
                                    int64_t rdx_22 = *arg1
                                    int32_t rax_48 = *(r10_8 + (r11_7 << 2))
                                    int64_t rax_50 =
                                        sx.q(*(r10_8 + (sx.q((r11_7 + 1).d s% 3) << 2)))
                                    int32_t var_1c0_1 = rax_50.d
                                    int64_t rcx_25 = rax_50 * 3
                                    zmm10 = *(rdx_22 + (rcx_25 << 2))
                                    zmm10[0] = zmm10[0] f- *(r8_11 + (rcx_25 << 2))
                                    zmm6 = *(rdx_22 + (rcx_25 << 2) + 4)
                                    zmm6[0] = zmm6[0] f- *(r8_11 + (rcx_25 << 2) + 4)
                                    zmm11 = *(rdx_22 + (rcx_25 << 2) + 8)
                                    zmm11[0] = zmm11[0] f- *(r8_11 + (rcx_25 << 2) + 8)
                                    int64_t rcx_26 = sx.q(rax_48) * 3
                                    zmm2_1 = *(rdx_22 + (rcx_26 << 2) + 8)
                                    zmm2_1[0] = zmm2_1[0] f- *(r8_11 + (rcx_26 << 2) + 8)
                                    zmm5_1 = *(rdx_22 + (rcx_26 << 2))
                                    zmm7 = *(rdx_22 + (rdx_12 << 2) + 4)
                                    zmm7[0] = zmm7[0] f- *(r8_11 + (rdx_12 << 2) + 4)
                                    zmm1_1 = *(rdx_22 + (rdx_12 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_11 + (rdx_12 << 2) + 8)
                                    zmm3_1 = *(rdx_22 + (rdx_12 << 2))
                                    zmm2_1[0] = zmm2_1[0] - zmm11[0]
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_11 + (rdx_12 << 2))
                                    zmm4_1 = *(rdx_22 + (rcx_26 << 2) + 4)
                                    zmm7[0] = zmm7[0] - zmm6[0]
                                    zmm5_1[0] = zmm5_1[0] f- *(r8_11 + (rcx_26 << 2))
                                    zmm4_1[0] = zmm4_1[0] f- *(r8_11 + (rcx_26 << 2) + 4)
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
                                        goto label_1415bb638
                                    
                                    float var_210_1
                                    float var_208_1
                                    
                                    if (zmm3_1[0] f>= zmm14.d)
                                        zmm4_1 = 0x3f000000
                                        float temp0_32[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                                        zmm2_1 = 0x3f000000
                                        zmm3_1[0] = zmm3_1[0] * 0.5f
                                        temp0_32[0] = temp0_32[0] * temp0_32[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_32[0]
                                        zmm2_1[0] = 0.5f - zmm3_1[0]
                                        temp0_32[0] = temp0_32[0] * zmm2_1[0]
                                        temp0_32[0] = temp0_32[0] + temp0_32[0]
                                        temp0_32[0] = temp0_32[0] * temp0_32[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_32[0]
                                        zmm4_1[0] = 0.5f - zmm3_1[0]
                                        temp0_32[0] = temp0_32[0] * zmm4_1[0]
                                        temp0_32[0] = temp0_32[0] + temp0_32[0]
                                        zmm1_1[0] = zmm1_1[0] * temp0_32[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_32[0]
                                        zmm7[0] = zmm7[0] * temp0_32[0]
                                    label_1415bb638:
                                        var_208_1 = zmm7[0]
                                        float var_20c_2 = zmm3_1[0]
                                        var_210_1 = zmm1_1[0]
                                    else
                                        var_210_1 = data_143dbb1f8[0]
                                        var_208_1 = data_143dbb200[0]
                                        float var_20c_1 = data_143dbb1fc[0]
                                    
                                    *(r9_5 + 0xc) = var_210_1.q
                                    r9_5[5] = var_208_1
                                    zmm0_1 = r9_5[4]
                                    zmm2_1 = r9_5[3]
                                    zmm1_1 = r9_5[5]
                                    zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                                    float rax_53
                                    
                                    if (zmm2_1[0] f>= zmm15.d)
                                        *r9_5 = var_1c0_1
                                        r9_5[1] = rax_48
                                        r9_5[2] = var_1bc_1
                                        r9_5[8] = rax_45 - 1
                                        rax_53.b = 1
                                        r9_5[7] = r12_1.d
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
                                        rax_53.b = 0
                                    
                                    *(r10_8 + (r11_7 << 2) + 0x1c) = rbx_2
                                    *(r10_8 + (r11_7 << 2) + 0x28) = 0
                                    
                                    if (rax_53.b == 0)
                                        rbx_1 = var_1e0.q
                                        goto label_1415bb79a
                                    
                                    zmm0_1 = r9_5[6]
                                    r15 = arg2
                                    
                                    if (not(zmm0_1[0] < zmm12[0]) && not(zmm0_1[0] > zmm13_1))
                                        char rax_58
                                        rax_58, zmm12, zmm13_1, zmm14, zmm15 =
                                            sub_141743d50(r9_5, *arg1, *r15)
                                        
                                        if (rax_58 != 0)
                                            int32_t var_138_1 = rbx_2
                                            int64_t* var_140 = &var_220
                                            sub_14175ce20(&var_1e0, &var_140)
                                    
                                    r8_10 = var_228_1.d
                                    rbx_2 += 1
                                    rsi_3 = var_1b4_1
                                    r14_1 += 0x38
                                    rdi_6 += 1
                                while (rdi_6 s< rax_40)
                                
                                rsi_2 = var_1e0:8.q
                                rbx_1 = var_1e0.q
                                r14 = arg1
                            
                            r12 = var_228_1:4.d
                            zmm5_1 = zx.o(0)
                            goto label_1415bb781
            
        label_1415bb79a:
            rdi_1 = var_230
            goto label_1415bb7d0
    
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
        float (* rax_63)[0x4] = rbx_1
        
        if (((var_1d0 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_63 - rbx_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rbx_1)
else
    *arg5 = 0
    rsi_1 = 2
    *arg7 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg7[1].d = 0
    *arg8 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_1f8_1 = 0
    arg8[1].d = 0
    int32_t var_1f8_2 = 0

int64_t rcx_35 = var_220

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

__security_check_cookie(rax_1 ^ &var_278)
return zx.q(rsi_1)
