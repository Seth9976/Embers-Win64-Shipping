// 函数: sub_14157f400
// 地址: 0x14157f400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t* r12 = arg2
int64_t* r13 = arg1
uint64_t* var_260 = arg8
int64_t var_230
int64_t* var_268 = &var_230
float var_214 = 3.40282347e+38f
int32_t* var_188 = arg9
var_230 = 0
int64_t var_228 = 0
char rax_3
float zmm6[0x4]
int128_t zmm7
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
uint128_t zmm12
int128_t zmm13
rax_3, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 =
    sub_1416ac9b0(arg1, arg2, arg3, arg4, var_268)
int32_t rsi_1

if (rax_3 != 0)
    int32_t i = 0
    int128_t var_1e8
    __builtin_memset(&var_1e8, 0, 0x18)
    float (* r14_1)[0x4] = var_1e8:8.q
    float (* rdi_1)[0x4] = var_1e8.q
    int64_t* var_248
    int64_t var_1d8
    float zmm1_1[0x4]
    
    if (var_228.d s> 0)
        do
            char rax_5
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, arg5, arg6 =
                sub_141743d50(sx.q(i) * 0x38 + var_230, *r13, *r12)
            
            if (rax_5 != 0)
                int64_t var_240
                var_240.d = i
                var_248 = &var_230
                
                if (var_1d8 == r14_1)
                    sub_141701fc0(&var_1e8, r14_1, &var_248)
                    r14_1 = var_1e8:8.q
                    rdi_1 = var_1e8.q
                else
                    *r14_1 = var_248.o
                    r14_1 = &r14_1[1]
                    var_1e8:8.q = r14_1
                
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
    float var_58_1[0x4] = zmm6
    int128_t var_68_1 = zmm7
    float var_78_1[0x4] = zmm8
    float var_88_1[0x4] = zmm9
    float var_98_1[0x4] = zmm10
    float var_a8_1[0x4] = zmm11
    uint128_t var_b8_1 = zmm12
    int128_t var_c8_1 = zmm13
    int128_t var_d8_1 = arg5
    float var_e8_1[0x4] = arg6
    var_248 = nullptr
    int64_t var_240_1 = 0
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
    int512_t zmm15
    
    if (rcx_7 == 0)
    label_14157ff94:
        zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14, zmm15 =
            sub_14154a2a0(*arg1, *arg2, &var_128, arg7, arg8, var_188, arg10)
        rsi_1 = 1
    else
        while (true)
            zmm1_1 = 0x80000000
            
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
                    zmm1_1 = 0x80000000
                
                r14_1 -= 0x10
                int32_t* rsi_4 = r15_1 * 0x38 + var_230
                var_1e8:8.q = r14_1
                
                if (rsi_4[0xd].b != 0)
                label_14157ff47:
                    rcx_7 = (r14_1 - rdi_1) s>> 4
                    
                    if (rcx_7 != 0)
                        rdx_5 += 1
                        continue
                else
                    float zmm3_1[0x4] = rsi_4[3] ^ zmm1_1
                    zmm7 = rsi_4[4] ^ zmm1_1
                    void* rcx_13 = *arg3
                    zmm12 = rsi_4[5] ^ zmm1_1
                    void* rbx_4 = arg4[1]
                    void* rax_21 = *(rcx_13 + 0x10)
                    arg5.d = (*(rcx_13 + 0x28)).d f* *(rax_21 + 0x10)
                    arg6 = *(rax_21 + 0x14)
                    zmm13 = *(rax_21 + 0x18)
                    int128_t* rax_22 = *arg4
                    arg6[0] = arg6[0] f* *(rcx_13 + 0x2c)
                    zmm13.d = zmm13.d f* *(rcx_13 + 0x30)
                    void* rcx_14 = *(rbx_4 + 0x10)
                    zmm9 = *(rax_22 + 4)
                    float zmm5_1[0x4] = *(rax_22 + 8)
                    zmm8 = *rax_22
                    float zmm4_1 = *(rax_22 + 0xc)
                    zmm5_1[0] = zmm5_1[0] * zmm3_1[0]
                    zmm5_1[0] = zmm5_1[0] f* zmm7.d
                    zmm8[0] = zmm8[0] f* zmm7.d
                    zmm9[0] = zmm9[0] f* zmm12.d
                    int32_t var_1b0_1 = arg5.d
                    float var_1ac_1 = arg6[0]
                    zmm9[0] = zmm9[0] - zmm5_1[0]
                    int32_t var_1a8_1 = zmm13.d
                    zmm8[0] = zmm8[0] f* zmm12.d
                    zmm9[0] = zmm9[0] + zmm9[0]
                    zmm5_1[0] = zmm5_1[0] - zmm8[0]
                    zmm9[0] = zmm9[0] * zmm3_1[0]
                    zmm8[0] = zmm8[0] - zmm9[0]
                    zmm9[0] = zmm9[0] * zmm4_1
                    zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                    zmm9[0] = zmm9[0] + zmm3_1[0]
                    zmm9[0] = zmm9[0] * zmm5_1[0]
                    zmm8[0] = zmm8[0] + zmm8[0]
                    zmm9[0] = zmm9[0] * zmm9[0]
                    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                    zmm8[0] = zmm8[0] * zmm9[0]
                    zmm8[0] = zmm8[0] - zmm5_1[0]
                    zmm8[0] = zmm8[0] * zmm8[0]
                    zmm8[0] = zmm8[0] * zmm4_1
                    zmm8[0] = zmm8[0] + zmm9[0]
                    zmm9[0] = zmm9[0] - zmm8[0]
                    zmm5_1[0] = zmm5_1[0] * zmm8[0]
                    zmm5_1[0] = zmm5_1[0] * zmm4_1
                    zmm8[0] = zmm8[0] f+ zmm12.d
                    zmm8[0] = zmm8[0] f* *(rbx_4 + 0x28)
                    zmm5_1[0] = zmm5_1[0] - zmm9[0]
                    zmm5_1[0] = zmm5_1[0] f+ zmm7.d
                    float var_170 = zmm8[0]
                    zmm5_1[0] = zmm5_1[0] + zmm8[0]
                    zmm9[0] = zmm9[0] + zmm5_1[0]
                    zmm5_1[0] = zmm5_1[0] f* *(rbx_4 + 0x30)
                    zmm9[0] = zmm9[0] f* *(rbx_4 + 0x2c)
                    float var_168_1 = zmm5_1[0]
                    float var_16c_1 = zmm9[0]
                    float var_164
                    sub_141758e70(rcx_14, &var_164, &var_170, zx.o(0))
                    zmm3_1 = var_164
                    zmm3_1[0] = zmm3_1[0] f* *(rbx_4 + 0x28)
                    int32_t var_160
                    float zmm2_2[0x4] = var_160
                    zmm2_2[0] = zmm2_2[0] f* *(rbx_4 + 0x2c)
                    float (* rax_23)[0x4] = arg4[2]
                    int32_t var_15c
                    uint128_t zmm0_2
                    zmm0_2.d = var_15c.d f* *(rbx_4 + 0x30)
                    float zmm5_2[0x4] = *rax_23
                    zmm12 = rsi_4[6]
                    float temp0_5[0x4] = _mm_unpacklo_ps(zmm2_2, 0)
                    float temp0_6[0x4] = _mm_unpacklo_ps(zmm3_1, zmm0_2.q)
                    float temp0_7[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                    float temp0_8[0x4] = _mm_unpacklo_ps(temp0_6, temp0_5[0].q)
                    float temp0_9[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
                    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xc9), temp0_9)
                    float temp0_13[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xd2), temp0_7)
                    float temp0_14[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
                    float temp0_15[0x4] = _mm_sub_ps(temp0_13, zmm0_2)
                    float temp0_16[0x4] = _mm_add_ps(temp0_15, temp0_15)
                    float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_16)
                    float temp0_19[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xd2), temp0_7)
                    zmm0_2 = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
                    float temp0_21[0x4] = _mm_add_ps(temp0_17, temp0_8)
                    float temp0_25[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(temp0_19, _mm_mul_ps(zmm0_2, temp0_9)), temp0_21), 
                        rax_23[1])
                    arg5.d = arg5.d f- temp0_25[0]
                    float var_1a0_1 = temp0_25[0]
                    zmm0_2 = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
                    arg6[0] = arg6[0] f- zmm0_2.d
                    float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
                    zmm13.d = zmm13.d f- temp0_27[0]
                    float var_198_1 = temp0_27[0]
                    int32_t var_19c_1 = zmm0_2.d
                    zmm0_2.d = zmm12.d f* 0.00999999978f
                    float var_1fc_1 = arg6[0]
                    arg6[0] = arg6[0] f* rsi_4[4]
                    zmm0_2 = __andps_xmmxud_memxud(zmm0_2, data_142d3f770)
                    int32_t var_200 = arg5.d
                    arg5.d = arg5.d f* rsi_4[3]
                    int32_t var_1f8_3 = zmm13.d
                    zmm13.d = zmm13.d f* rsi_4[5]
                    arg6[0] = arg6[0] f+ arg5.d
                    arg6[0] = arg6[0] f+ zmm13.d
                    arg6 = __minss_xmmss_memss(arg6[0], var_214)
                    var_214 = arg6[0]
                    arg6[0] = arg6[0] f- zmm12.d
                    
                    if (__andps_xmmxud_memxud(arg6, data_142d3f770)[0] f<= zmm0_2.d)
                        zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14, 
                            zmm15 = sub_14154a2a0(*r13, *r12, rsi_4, arg7, arg8, var_188, arg10)
                        rbx_1 = var_248
                        rsi_1 = 0
                        break
                    
                    if (not(arg6[0] f< zmm12.d))
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
                        int32_t rax_35 = (rbx_5 + 1).d
                        var_118_1[2] = zmm12.d
                        var_128[3].q = zmm0_2.q
                        int32_t var_1c0_1 = rbx_5.d
                        r13[1].d = rax_35
                        
                        if (rax_35 s> *(r13 + 0xc))
                            sub_14083a7e0(r13)
                        
                        int64_t rcx_16 = *r13
                        int64_t r15_3 = rbx_5 * 3
                        *(rcx_16 + (r15_3 << 2)) = var_1b0_1.q
                        *(rcx_16 + (r15_3 << 2) + 8) = var_1a8_1
                        int64_t rbx_6 = sx.q(r12[1].d)
                        int32_t rax_37 = (rbx_6 + 1).d
                        r12[1].d = rax_37
                        
                        if (rax_37 s> *(r12 + 0xc))
                            sub_14083a7e0(r12)
                        
                        int64_t rcx_18 = *r12
                        int64_t rdx_12 = rbx_6 * 3
                        var_240_1.d = 0
                        *(rcx_18 + (rdx_12 << 2)) = var_1a0_1.q
                        *(rcx_18 + (rdx_12 << 2) + 8) = var_198_1
                        int32_t rax_39 = var_240_1:4.d
                        rsi_4[0xd].b = 1
                        
                        if (rax_39 s< 0 && rax_39 != 0)
                            sub_1405c5570(&var_248, 0)
                        
                        sub_1415c5980(&var_230, var_238_1, &var_200, &var_248)
                        int32_t r8_11 = var_228.d
                        int32_t r11_7 = var_240_1.d
                        int32_t var_238_2 = r8_11
                        int32_t rax_40 = r8_11 + r11_7
                        var_228.d = rax_40
                        
                        if (rax_40 s> var_228:4.d)
                            sub_1407c3b60(&var_230)
                            r8_11 = var_238_2
                            r11_7 = var_240_1.d
                        
                        if (r11_7 s>= 3)
                            int64_t rsi_5 = 0
                            int64_t rax_41 = sx.q(r11_7)
                            
                            if (r11_7 s> 0)
                                void* r12_1 = sx.q(r8_11) * 0x38
                                int32_t r14_2 = 1 - r8_11
                                int32_t rbx_7 = r8_11
                                int32_t var_1b8_1 = r14_2
                                
                                do
                                    int64_t* rdx_15 = var_248
                                    int32_t r13_1 = rbx_7 + 1
                                    int64_t rcx_22 = var_230
                                    int64_t rax_43 = sx.q(rdx_15[rsi_5].d)
                                    int64_t rdi_2 = sx.q(*(&rdx_15[rsi_5] + 4))
                                    int32_t* r9_5 = r12_1 + rcx_22
                                    float var_1bc_1 = rax_43.d
                                    int64_t r10_8 = rax_43 * 0x38 + rcx_22
                                    
                                    if (r14_2 + rbx_7 s>= r11_7)
                                        r13_1 = r8_11
                                    
                                    int32_t r11_8 = rbx_7
                                    
                                    if (rbx_7 s<= r8_11)
                                        r11_8 = rax_40
                                    
                                    int64_t r8_12 = *arg2
                                    int64_t rdx_19 = *arg1
                                    int32_t rax_49 = *(r10_8 + (rdi_2 << 2))
                                    zmm6 = *(rdx_19 + (r15_3 << 2) + 4)
                                    zmm6[0] = zmm6[0] f- *(r8_12 + (r15_3 << 2) + 4)
                                    zmm1_1 = *(rdx_19 + (r15_3 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_12 + (r15_3 << 2) + 8)
                                    int64_t rax_51 =
                                        sx.q(*(r10_8 + (sx.q((rdi_2 + 1).d s% 3) << 2)))
                                    zmm3_1 = *(rdx_19 + (r15_3 << 2))
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_12 + (r15_3 << 2))
                                    int32_t var_1c4_1 = rax_51.d
                                    int64_t rcx_25 = rax_51 * 3
                                    zmm10 = *(rdx_19 + (rcx_25 << 2))
                                    zmm10[0] = zmm10[0] f- *(r8_12 + (rcx_25 << 2))
                                    zmm7.d = (*(rdx_19 + (rcx_25 << 2) + 4)).d f-
                                        *(r8_12 + (rcx_25 << 2) + 4)
                                    zmm11 = *(rdx_19 + (rcx_25 << 2) + 8)
                                    zmm11[0] = zmm11[0] f- *(r8_12 + (rcx_25 << 2) + 8)
                                    int64_t rcx_26 = sx.q(rax_49) * 3
                                    float zmm2_1[0x4] = *(rdx_19 + (rcx_26 << 2) + 8)
                                    zmm3_1[0] = zmm3_1[0] - zmm10[0]
                                    zmm2_1[0] = zmm2_1[0] f- *(r8_12 + (rcx_26 << 2) + 8)
                                    zmm5_1 = *(rdx_19 + (rcx_26 << 2))
                                    zmm6[0] = zmm6[0] f- zmm7.d
                                    zmm4_1 = *(rdx_19 + (rcx_26 << 2) + 4)
                                    zmm1_1[0] = zmm1_1[0] - zmm11[0]
                                    zmm5_1[0] = zmm5_1[0] f- *(r8_12 + (rcx_26 << 2))
                                    zmm4_1 = zmm4_1 f- *(r8_12 + (rcx_26 << 2) + 4)
                                    zmm2_1[0] = zmm2_1[0] - zmm11[0]
                                    zmm5_1[0] = zmm5_1[0] - zmm10[0]
                                    zmm4_1 = zmm4_1 f- zmm7.d
                                    zmm6[0] = zmm6[0] * zmm2_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm2_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm5_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm4_1
                                    zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
                                    zmm6[0] = zmm6[0] * zmm5_1[0]
                                    zmm1_1[0] = zmm1_1[0] - zmm6[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm4_1
                                    zmm6[0] = zmm6[0] - zmm3_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm6[0] = zmm6[0] * zmm6[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm1_1[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm6[0]
                                    
                                    if (zmm3_1[0] == 1f)
                                        goto label_14157fdfc
                                    
                                    float var_220_1
                                    float var_218_1
                                    
                                    if (zmm3_1[0] >= 9.99999994e-09f)
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
                                        temp0_32[0] = temp0_32[0] * (0.5f - zmm3_1[0])
                                        temp0_32[0] = temp0_32[0] + temp0_32[0]
                                        zmm1_1[0] = zmm1_1[0] * temp0_32[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_32[0]
                                        zmm6[0] = zmm6[0] * temp0_32[0]
                                    label_14157fdfc:
                                        var_218_1 = zmm6[0]
                                        float var_21c_2 = zmm3_1[0]
                                        var_220_1 = zmm1_1[0]
                                    else
                                        var_220_1 = data_143dbb1f8[0]
                                        var_218_1 = data_143dbb200[0]
                                        float var_21c_1 = data_143dbb1fc[0]
                                    
                                    *(r9_5 + 0xc) = var_220_1.q
                                    r9_5[5] = var_218_1
                                    float zmm0_1[0x4] = r9_5[4]
                                    zmm2_1 = r9_5[3]
                                    zmm1_1 = r9_5[5]
                                    zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                                    float rax_53
                                    
                                    if (zmm2_1[0] >= 9.99999975e-05f)
                                        *r9_5 = var_1c4_1
                                        r9_5[1] = rax_49
                                        r9_5[2] = var_1c0_1
                                        r9_5[7] = var_1bc_1
                                        rax_53.b = 1
                                        r9_5[8] = r11_8 - 1
                                        r9_5[9] = r13_1
                                        r9_5[0xa] = rdi_2.d
                                        r9_5[0xb] = 2
                                        r9_5[0xc] = 1
                                        zmm7.d = zmm7.d f* r9_5[4]
                                        zmm10[0] = zmm10[0] f* r9_5[3]
                                        zmm11[0] = zmm11[0] f* r9_5[5]
                                        r9_5[0xd].b = 0
                                        zmm7.d = zmm7.d f+ zmm10[0]
                                        zmm7.d = zmm7.d f+ zmm11[0]
                                        r9_5[6] = zmm7.d
                                    else
                                        rax_53.b = 0
                                    
                                    *(r10_8 + (rdi_2 << 2) + 0x1c) = rbx_7
                                    *(r10_8 + (rdi_2 << 2) + 0x28) = 0
                                    
                                    if (rax_53.b == 0)
                                        rdi_1 = var_1e8.q
                                        goto label_14157ff5e
                                    
                                    zmm0_1 = r9_5[6]
                                    r13 = arg1
                                    
                                    if (not(zmm0_1[0] f< zmm12.d) && not(zmm0_1[0] > arg6[0]))
                                        char rax_58
                                        rax_58, zmm12, arg6 = sub_141743d50(r9_5, *r13, *arg2)
                                        
                                        if (rax_58 != 0)
                                            int32_t var_130_1 = rbx_7
                                            int64_t* var_138 = &var_230
                                            sub_14175ce20(&var_1e8, &var_138)
                                    
                                    r8_11 = var_238_2
                                    rbx_7 += 1
                                    r11_7 = var_240_1.d
                                    r12_1 += 0x38
                                    r14_2 = var_1b8_1
                                    rsi_5 += 1
                                while (rsi_5 s< rax_41)
                                
                                r14_1 = var_1e8:8.q
                                rdi_1 = var_1e8.q
                                r12 = arg2
                            
                            goto label_14157ff47
            
        label_14157ff5e:
            rbx_1 = var_248
            goto label_14157ff94
    
    zmm15.o = var_e8_1
    zmm14.o = var_d8_1
    zmm13_1.o = var_c8_1
    zmm12_1.o = var_b8_1
    zmm11_1.o = var_a8_1
    zmm10_1.o = var_98_1
    zmm9_1.o = var_88_1
    zmm8_1.o = var_78_1
    zmm7_1.o = var_68_1
    zmm6_2.o = var_58_1
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    if (rdi_1 != 0)
        float (* rax_64)[0x4] = rdi_1
        
        if (((var_1d8 - rdi_1) & 0xfffffffffffffff0) u>= 0x1000)
            rdi_1 = *(rdi_1 - 8)
            
            if (rax_64 - rdi_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rdi_1)
else
    *arg7 = 0
    int32_t var_1f8_1 = 0
    *arg9 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg9[1].d = 0
    *arg10 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_1f8_2 = 0
    rsi_1 = 2
    arg10[1].d = 0

int64_t rcx_35 = var_230

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

__security_check_cookie(rax_1 ^ &var_288)
return zx.q(rsi_1)
