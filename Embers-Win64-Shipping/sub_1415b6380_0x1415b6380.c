// 函数: sub_1415b6380
// 地址: 0x1415b6380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int32_t r13 = 0
int64_t* r12 = arg4
int64_t* r15 = arg2
int64_t* r14 = arg1
uint64_t* var_250 = arg6
int64_t var_220
int64_t* var_258 = &var_220
float var_1f8 = 3.40282347e+38f
float* var_168 = arg5
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
uint128_t zmm13
float zmm14[0x4]
float zmm15[0x4]
rax_3, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
    sub_1416d9e30(arg1, arg2, arg3, arg4, var_258)
int32_t rdi_1

if (rax_3 != 0)
    int128_t var_1d8
    __builtin_memset(&var_1d8, 0, 0x18)
    float (* rdi_2)[0x4] = var_1d8:8.q
    int32_t i = 0
    float (* rbx_1)[0x4] = var_1d8.q
    int64_t* var_230
    int64_t var_1c8
    float zmm1_1[0x4]
    
    if (var_218.d s> 0)
        do
            char rax_5
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_220, *r14, *r15)
            
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
    
    float zmm0_1[0x4] = *rdx_4
    int64_t* rsi_1 = nullptr
    zmm1_1 = rdx_4[1]
    var_230 = nullptr
    float var_58_1[0x4] = zmm6
    float var_68_1[0x4] = zmm7
    float var_78_1[0x4] = zmm8
    float var_88_1[0x4] = zmm9
    float var_98_1[0x4] = zmm10
    float var_a8_1[0x4] = zmm11
    float var_b8_1[0x4] = zmm12
    uint128_t var_c8_1 = zmm13
    float var_130[0x4] = zmm0_1
    int64_t var_228_1 = 0
    float var_120_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    float var_d8_1[0x4] = zmm14
    float var_e8_1[0x4] = zmm15
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
    int512_t zmm14_1
    int512_t zmm15_1
    
    if (rcx_7 == 0)
    label_1415b6ecb:
        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
            sub_14154a2a0(*arg1, *arg2, &var_130, var_168, arg6, var_178, arg8)
        rdi_1 = 1
    else
        while (true)
            zmm1_1 = 0x80000000
            
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
                    r12 = arg4
                    rbx_1[i_2] = zmm1_1
                    zmm1_1 = 0x80000000
                
                rdi_2 -= 0x10
                var_1d8:8.q = rdi_2
                int32_t* rsi_5 = sx.q(rax_11) * 0x38 + var_220
                
                if (rsi_5[0xd].b != 0)
                label_1415b6e7b:
                    rcx_7 = (rdi_2 - rbx_1) s>> 4
                    
                    if (rcx_7 != 0)
                        rdx_5 += 1
                        r12 = arg4
                        continue
                else
                    float zmm4_1[0x4] = rsi_5[4] ^ zmm1_1
                    zmm15 = rsi_5[5]
                    zmm14 = rsi_5[3]
                    void* rax_23 = *arg3
                    zmm7 = zmm15 ^ zmm1_1
                    zmm11 = zmm14 ^ zmm1_1
                    zmm13 = zx.o(*(rax_23 + 0x10))
                    int32_t rax_24 = *(rax_23 + 0x18)
                    int128_t* rax_25 = *r12
                    uint64_t var_1a8_1 = zmm13.q
                    zmm8 = *(rax_25 + 4)
                    zmm9 = *(rax_25 + 8)
                    float zmm3_1[0x4] = *rax_25
                    float zmm2_1[0x4] = *(rax_25 + 0xc)
                    void* rax_26 = r12[1]
                    zmm4_1[0] = zmm4_1[0] * zmm9[0]
                    zmm4_1[0] = zmm4_1[0] * zmm3_1[0]
                    zmm7[0] = zmm7[0] * zmm8[0]
                    zmm11[0] = zmm11[0] * zmm9[0]
                    zmm7[0] = zmm7[0] - zmm4_1[0]
                    zmm7[0] = zmm7[0] * zmm3_1[0]
                    zmm11[0] = zmm11[0] - zmm7[0]
                    zmm11[0] = zmm11[0] * zmm8[0]
                    zmm7[0] = zmm7[0] + zmm7[0]
                    zmm4_1[0] = zmm4_1[0] - zmm11[0]
                    zmm11[0] = zmm11[0] + zmm11[0]
                    zmm7[0] = zmm7[0] * zmm9[0]
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
                    zmm4_1[0] = zmm4_1[0] * zmm8[0]
                    zmm7[0] = zmm7[0] + zmm11[0]
                    zmm4_1[0] = zmm4_1[0] * zmm2_1[0]
                    zmm11[0] = zmm11[0] - zmm7[0]
                    zmm4_1[0] = zmm4_1[0] - zmm11[0]
                    zmm4_1[0] = zmm4_1[0] + zmm7[0]
                    zmm4_1[0] = zmm4_1[0] + zmm7[0]
                    zmm11[0] = zmm11[0] + zmm4_1[0]
                    
                    if (zmm4_1[0] >= 0f)
                        zmm3_1 = *(rax_26 + 0x1c)
                    else
                        zmm3_1 = *(rax_26 + 0x10)
                    
                    if (zmm7[0] >= 0f)
                        zmm2_1 = *(rax_26 + 0x20)
                    else
                        zmm2_1 = *(rax_26 + 0x14)
                    
                    if (zmm11[0] >= 0f)
                        zmm0_1 = *(rax_26 + 0x24)
                    else
                        zmm0_1 = *(rax_26 + 0x18)
                    
                    float (* rax_27)[0x4] = r12[2]
                    zmm12 = rsi_5[6]
                    float temp0_5[0x4] = _mm_unpacklo_ps(zmm2_1, 0)
                    float temp0_6[0x4] = _mm_unpacklo_ps(zmm3_1, zmm0_1[0].q)
                    float zmm5_1[0x4] = *rax_27
                    float temp0_7[0x4] = _mm_unpacklo_ps(temp0_6, temp0_5[0].q)
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
                    zmm2_1 = var_1a8_1.d
                    float temp0_25[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_20, temp0_8), temp0_19), temp0_21), 
                        rax_27[1])
                    zmm2_1[0] = zmm2_1[0] - temp0_25[0]
                    float var_198_1 = temp0_25[0]
                    float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
                    float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
                    zmm3_1 = var_1a8_1:4.d
                    zmm3_1[0] = zmm3_1[0] - temp0_26[0]
                    float var_194_1 = temp0_26[0]
                    zmm0_1 = rax_24
                    zmm0_1[0] = zmm0_1[0] - temp0_27[0]
                    float var_190_1 = temp0_27[0]
                    zmm14[0] = zmm14[0] * zmm2_1[0]
                    float var_1ec_1 = zmm3_1[0]
                    zmm3_1[0] = zmm3_1[0] f* rsi_5[4]
                    zmm15[0] = zmm15[0] * zmm0_1[0]
                    zmm3_1[0] = zmm3_1[0] + zmm14[0]
                    float var_1e8_3 = zmm0_1[0]
                    float var_1f0 = zmm2_1[0]
                    zmm12[0] = zmm12[0] * 0.00999999978f
                    zmm3_1[0] = zmm3_1[0] + zmm15[0]
                    zmm0_1 = __andps_xmmxud_memxud(zmm12, data_142d3f770)
                    float temp0_29[0x4] = __minss_xmmss_memss(zmm3_1[0], var_1f8)
                    zmm14 = temp0_29
                    temp0_29[0] = temp0_29[0] - zmm12[0]
                    var_1f8 = zmm14[0]
                    
                    if (__andps_xmmxud_memxud(temp0_29, data_142d3f770)[0] <= zmm0_1[0])
                        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, 
                            zmm14_1, zmm15_1 =
                            sub_14154a2a0(*r14, *r15, rsi_5, var_168, arg6, var_178, arg8)
                        rsi_1 = var_230
                        rdi_1 = 0
                        break
                    
                    if (not(zmm14[0] < zmm12[0]))
                        int64_t r12_2 = sx.q(r14[1].d)
                        zmm0_1 = zx.o(*(rsi_5 + 0xc))
                        var_130[0] = *rsi_5
                        var_130[1] = rsi_5[1]
                        var_130[2] = rsi_5[2]
                        var_120_1[1] = rsi_5[5]
                        var_120_1[3] = rsi_5[7]
                        var_110_1[0] = rsi_5[8]
                        var_110_1[1] = rsi_5[9]
                        var_110_1[2] = rsi_5[0xa]
                        var_110_1[3] = rsi_5[0xb]
                        var_100_1.d = rsi_5[0xc]
                        int32_t rax_38 = (r12_2 + 1).d
                        var_120_1[2] = zmm12[0]
                        var_130[3].q = zmm0_1.q
                        var_100_1:4.b = 0
                        int32_t var_1b8_1 = r12_2.d
                        r14[1].d = rax_38
                        
                        if (rax_38 s> *(r14 + 0xc))
                            sub_14083a7e0(r14)
                        
                        int64_t rax_39 = *r14
                        int64_t rdx_10 = r12_2 * 3
                        *(rax_39 + (rdx_10 << 2)) = zmm13.q
                        *(rax_39 + (rdx_10 << 2) + 8) = rax_24
                        int64_t r14_1 = sx.q(r15[1].d)
                        int32_t rax_40 = (r14_1 + 1).d
                        r15[1].d = rax_40
                        
                        if (rax_40 s> *(r15 + 0xc))
                            sub_14083a7e0(r15)
                        
                        int64_t rcx_16 = *r15
                        int64_t rdx_12 = r14_1 * 3
                        var_228_1.d = 0
                        *(rcx_16 + (rdx_12 << 2)) = var_198_1.q
                        *(rcx_16 + (rdx_12 << 2) + 8) = var_190_1
                        rsi_5[0xd].b = 1
                        
                        if (r13 s< 0 && r13 != 0)
                            sub_1405c5570(&var_230, 0)
                        
                        sub_1415c5980(&var_220, var_238_1, &var_1f0, &var_230)
                        int64_t r13_1 = sx.q(var_218.d)
                        int32_t r8_10 = var_228_1.d
                        int32_t rax_42 = r8_10 + r13_1.d
                        var_218.d = rax_42
                        
                        if (rax_42 s> var_218:4.d)
                            sub_1407c3b60(&var_220)
                            r8_10 = var_228_1.d
                        
                        if (r8_10 s>= 3)
                            int64_t rsi_6 = 0
                            int64_t rax_43 = sx.q(r8_10)
                            
                            if (r8_10 s<= 0)
                                r14 = arg1
                            else
                                void* rdi_3 = r13_1 * 0x38
                                int32_t rbx_2 = r13_1.d
                                int32_t r11_7 = 1 - r13_1.d
                                int32_t var_1b0_1 = r11_7
                                
                                do
                                    int64_t* rdx_15 = var_230
                                    int64_t rcx_20 = var_220
                                    int64_t r12_3 = sx.q(rdx_15[rsi_6].d)
                                    int64_t r14_2 = sx.q(*(&rdx_15[rsi_6] + 4))
                                    int32_t* r9_5 = rdi_3 + rcx_20
                                    int64_t r10_8 = r12_3 * 0x38 + rcx_20
                                    int32_t r11_8 = rbx_2 + 1
                                    
                                    if (r11_7 + rbx_2 s>= r8_10)
                                        r11_8 = r13_1.d
                                    
                                    int64_t r8_11 = *r15
                                    int32_t rax_48 = rbx_2
                                    
                                    if (rbx_2 s<= r13_1.d)
                                        rax_48 = r8_10 + r13_1.d
                                    
                                    int32_t rax_50 = *(r10_8 + (r14_2 << 2))
                                    int64_t rdx_20 = *arg1
                                    int64_t rax_52 =
                                        sx.q(*(r10_8 + (sx.q((r14_2 + 1).d s% 3) << 2)))
                                    int32_t var_210_2 = rax_52.d
                                    int64_t rcx_23 = rax_52 * 3
                                    zmm10 = *(rdx_20 + (rcx_23 << 2))
                                    zmm10[0] = zmm10[0] f- *(r8_11 + (rcx_23 << 2))
                                    zmm6 = *(rdx_20 + (rcx_23 << 2) + 4)
                                    zmm6[0] = zmm6[0] f- *(r8_11 + (rcx_23 << 2) + 4)
                                    zmm11 = *(rdx_20 + (rcx_23 << 2) + 8)
                                    zmm11[0] = zmm11[0] f- *(r8_11 + (rcx_23 << 2) + 8)
                                    int64_t rcx_24 = sx.q(rax_50) * 3
                                    zmm2_1 = *(rdx_20 + (rcx_24 << 2) + 8)
                                    zmm2_1[0] = zmm2_1[0] f- *(r8_11 + (rcx_24 << 2) + 8)
                                    zmm5_1 = *(rdx_20 + (rcx_24 << 2))
                                    zmm7 = *(rdx_20 + (rdx_10 << 2) + 4)
                                    zmm7[0] = zmm7[0] f- *(r8_11 + (rdx_10 << 2) + 4)
                                    zmm1_1 = *(rdx_20 + (rdx_10 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_11 + (rdx_10 << 2) + 8)
                                    zmm3_1 = *(rdx_20 + (rdx_10 << 2))
                                    zmm2_1[0] = zmm2_1[0] - zmm11[0]
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_11 + (rdx_10 << 2))
                                    zmm4_1 = *(rdx_20 + (rcx_24 << 2) + 4)
                                    zmm7[0] = zmm7[0] - zmm6[0]
                                    zmm5_1[0] = zmm5_1[0] f- *(r8_11 + (rcx_24 << 2))
                                    zmm4_1[0] = zmm4_1[0] f- *(r8_11 + (rcx_24 << 2) + 4)
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
                                        goto label_1415b6d2c
                                    
                                    float var_20c_1
                                    float var_204_1
                                    
                                    if (zmm3_1[0] >= 9.99999994e-09f)
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
                                    label_1415b6d2c:
                                        var_204_1 = zmm7[0]
                                        float var_208_2 = zmm3_1[0]
                                        var_20c_1 = zmm1_1[0]
                                    else
                                        var_20c_1 = data_143dbb1f8[0]
                                        var_204_1 = data_143dbb200[0]
                                        float var_208_1 = data_143dbb1fc[0]
                                    
                                    *(r9_5 + 0xc) = var_20c_1.q
                                    r9_5[5] = var_204_1
                                    zmm0_1 = r9_5[4]
                                    zmm2_1 = r9_5[3]
                                    zmm1_1 = r9_5[5]
                                    zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                                    float rax_55
                                    
                                    if (zmm2_1[0] >= 9.99999975e-05f)
                                        *r9_5 = var_210_2
                                        r9_5[1] = rax_50
                                        r9_5[2] = var_1b8_1
                                        r9_5[8] = rax_48 - 1
                                        rax_55.b = 1
                                        r9_5[7] = r12_3.d
                                        r9_5[9] = r11_8
                                        r9_5[0xa] = r14_2.d
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
                                        rax_55.b = 0
                                    
                                    *(r10_8 + (r14_2 << 2) + 0x1c) = rbx_2
                                    *(r10_8 + (r14_2 << 2) + 0x28) = 0
                                    
                                    if (rax_55.b == 0)
                                        rbx_1 = var_1d8.q
                                        goto label_1415b6e94
                                    
                                    zmm0_1 = r9_5[6]
                                    r15 = arg2
                                    r14 = arg1
                                    
                                    if (not(zmm0_1[0] < zmm12[0]) && not(zmm0_1[0] > zmm14[0]))
                                        char rax_59
                                        rax_59, zmm12, zmm14 = sub_141743d50(r9_5, *r14, *r15)
                                        
                                        if (rax_59 != 0)
                                            int32_t var_138_1 = rbx_2
                                            int64_t* var_140 = &var_220
                                            sub_14175ce20(&var_1d8, &var_140)
                                    
                                    r8_10 = var_228_1.d
                                    rbx_2 += 1
                                    r11_7 = var_1b0_1
                                    rdi_3 += 0x38
                                    rsi_6 += 1
                                while (rsi_6 s< rax_43)
                                
                                rdi_2 = var_1d8:8.q
                                rbx_1 = var_1d8.q
                            
                            r13 = var_228_1:4.d
                            goto label_1415b6e7b
            
        label_1415b6e94:
            rsi_1 = var_230
            goto label_1415b6ecb
    
    zmm15_1.o = var_e8_1
    zmm14_1.o = var_d8_1
    zmm13_1.o = var_c8_1
    zmm12_1.o = var_b8_1
    zmm11_1.o = var_a8_1
    zmm10_1.o = var_98_1
    zmm9_1.o = var_88_1
    zmm8_1.o = var_78_1
    zmm7_1.o = var_68_1
    zmm6_1.o = var_58_1
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    if (rbx_1 != 0)
        float (* rax_64)[0x4] = rbx_1
        
        if (((var_1c8 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_64 - rbx_1 - 8 u> 0x1f)
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
    int32_t var_1e8_1 = 0
    int32_t var_1e8_2 = 0

int64_t rcx_33 = var_220

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

__security_check_cookie(rax_1 ^ &var_278)
return zx.q(rdi_1)
