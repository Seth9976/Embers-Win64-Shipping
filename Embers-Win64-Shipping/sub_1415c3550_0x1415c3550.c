// 函数: sub_1415c3550
// 地址: 0x1415c3550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t* r15 = arg2
int64_t* r12 = arg1
uint64_t* var_260 = arg6
int64_t var_230
int64_t* var_268 = &var_230
float var_20c = 3.40282347e+38f
int32_t* var_190 = arg7
var_230 = 0
int64_t var_228 = 0
char rax_3
int128_t zmm6
float zmm7[0x4]
int128_t zmm8
int128_t zmm9
int128_t zmm10
int128_t zmm11
float zmm12[0x4]
float zmm13[0x4]
int128_t zmm14
int128_t zmm15
rax_3, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
    sub_1416e4940(arg1, arg2, arg3, arg4, var_268)
int32_t rsi_1

if (rax_3 != 0)
    int32_t i = 0
    int128_t var_1e8
    __builtin_memset(&var_1e8, 0, 0x18)
    float (* r14_1)[0x4] = var_1e8:8.q
    float (* rdi_1)[0x4] = var_1e8.q
    int64_t* var_240
    int64_t var_1d8
    float zmm1_1[0x4]
    
    if (var_228.d s> 0)
        do
            char rax_5
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_230, *r12, *r15)
            
            if (rax_5 != 0)
                int64_t var_238
                var_238.d = i
                var_240 = &var_230
                
                if (var_1d8 == r14_1)
                    sub_141701fc0(&var_1e8, r14_1, &var_240)
                    r14_1 = var_1e8:8.q
                    rdi_1 = var_1e8.q
                else
                    *r14_1 = var_240.o
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
    float var_68_1[0x4] = zmm7
    int32_t r13_1 = 0
    float var_b8_1[0x4] = zmm12
    float var_c8_1[0x4] = zmm13
    int128_t var_d8_1 = zmm14
    int128_t var_e8_1 = zmm15
    var_240 = nullptr
    int64_t var_238_1 = 0
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
    int512_t zmm14_1
    int512_t zmm15_1
    
    if (rcx_7 == 0)
    label_1415c411c:
        zmm6_3, zmm7_1, zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
            sub_14154a2a0(*arg1, *arg2, &var_128, arg5, arg6, var_190, arg8)
        rsi_1 = 1
    else
        zmm7 = zx.o(0)
        
        while (true)
            if (rdx_5 s< 0x80)
                float rax_11 = (*rdi_1)[2]
                float var_248_1 = rax_11
                
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
                    
                    rax_11 = var_248_1
                    rdi_1[i_2] = zmm1_1
                
                r14_1 -= 0x10
                var_1e8:8.q = r14_1
                int32_t* rsi_4 = sx.q(rax_11) * 0x38 + var_230
                
                if (rsi_4[0xd].b != 0)
                label_1415c40cf:
                    rcx_7 = (r14_1 - rdi_1) s>> 4
                    
                    if (rcx_7 != 0)
                        rdx_5 += 1
                        continue
                else
                    void* rbx_4 = *arg3
                    float zmm0_1[0x4] = *(rbx_4 + 0x28)
                    zmm0_1[0] = zmm0_1[0] f* rsi_4[3]
                    void* rcx_13 = *(rbx_4 + 0x10)
                    zmm1_1 = *(rbx_4 + 0x2c)
                    zmm1_1[0] = zmm1_1[0] f* rsi_4[4]
                    float var_178 = zmm0_1[0]
                    zmm0_1 = *(rbx_4 + 0x30)
                    zmm0_1[0] = zmm0_1[0] f* rsi_4[5]
                    float var_174_1 = zmm1_1[0]
                    float var_170_1 = zmm0_1[0]
                    float var_16c
                    uint128_t zmm6_1 = sub_141758e70(rcx_13, &var_16c, &var_178, zmm7)
                    uint128_t zmm4_1 = rsi_4[4]
                    zmm7 = rsi_4[5]
                    uint128_t zmm11_1 = rsi_4[3] ^ zmm6_1
                    zmm13 = var_16c
                    float zmm5_1[0x4] = zmm11_1
                    float (* rax_23)[0x4] = arg4[2]
                    zmm13[0] = zmm13[0] f* *(rbx_4 + 0x28)
                    int32_t var_168
                    zmm14.d = var_168.d f* *(rbx_4 + 0x2c)
                    float zmm8_1[0x4] = (*rax_23)[1]
                    float zmm9_1[0x4] = (*rax_23)[2]
                    float zmm3_1[0x4] = *rax_23
                    float zmm2_1[0x4] = (*rax_23)[3]
                    int32_t var_164
                    zmm15.d = var_164.d f* *(rbx_4 + 0x30)
                    void* rax_24 = *arg4
                    int32_t var_220_1 = zmm4_1.d
                    zmm4_1 ^= zmm6_1
                    zmm5_1[0] = zmm5_1[0] * zmm9_1[0]
                    uint128_t zmm0_2
                    zmm0_2.d = zmm4_1.d f* zmm9_1[0]
                    float var_21c_1 = zmm7[0]
                    zmm7 ^= zmm6_1
                    float var_1b8_1 = zmm13[0]
                    zmm6_1.d = zmm4_1.d f* zmm3_1[0]
                    zmm7[0] = zmm7[0] * zmm8_1[0]
                    int32_t var_1b4_1 = zmm14.d
                    int32_t var_1b0_1 = zmm15.d
                    zmm7[0] = zmm7[0] f- zmm0_2.d
                    zmm0_2.d = zmm7.d f* zmm3_1[0]
                    zmm5_1[0] = zmm5_1[0] f- zmm0_2.d
                    zmm0_2.d = zmm11_1.d f* zmm8_1[0]
                    zmm7[0] = zmm7[0] + zmm7[0]
                    zmm6_1.d = zmm6_1.d f- zmm0_2.d
                    zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                    zmm12 = zmm7
                    zmm12[0] = zmm12[0] * zmm9_1[0]
                    zmm6_1.d = zmm6_1.d f+ zmm6_1.d
                    zmm5_1[0] = zmm5_1[0] * zmm2_1[0]
                    zmm5_1[0] = zmm5_1[0] f+ zmm4_1.d
                    zmm0_2.d = zmm6_1.d f* zmm3_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm9_1[0]
                    zmm12[0] = zmm12[0] f- zmm0_2.d
                    zmm4_1.d = zmm5_1.d f* zmm3_1[0]
                    zmm7[0] = zmm7[0] * zmm2_1[0]
                    zmm0_2.d = zmm7.d f* zmm8_1[0]
                    zmm12[0] = zmm12[0] + zmm5_1[0]
                    float zmm1_2[0x4] = zmm6_1
                    zmm1_2[0] = zmm1_2[0] * zmm2_1[0]
                    zmm7[0] = zmm7[0] f+ zmm11_1.d
                    zmm4_1.d = zmm4_1.d f- zmm0_2.d
                    zmm6_1.d = zmm6_1.d f* zmm8_1[0]
                    zmm1_2[0] = zmm1_2[0] + zmm7[0]
                    zmm6_1.d = zmm6_1.d f- zmm5_1[0]
                    zmm4_1.d = zmm4_1.d f+ zmm1_2[0]
                    zmm6_1.d = zmm6_1.d f+ zmm7[0]
                    zmm7 = zx.o(0)
                    
                    if (zmm6_1.d f>= 0f)
                        zmm3_1 = *(rax_24 + 0x1c)
                    else
                        zmm3_1 = *(rax_24 + 0x10)
                    
                    if (zmm12[0] >= 0f)
                        zmm2_1 = *(rax_24 + 0x20)
                    else
                        zmm2_1 = *(rax_24 + 0x14)
                    
                    if (zmm4_1.d f>= 0f)
                        zmm0_2 = *(rax_24 + 0x24)
                    else
                        zmm0_2 = *(rax_24 + 0x18)
                    
                    float (* rax_25)[0x4] = arg4[1]
                    zmm12 = rsi_4[6]
                    zmm6_1 = _mm_unpacklo_ps(zmm3_1, zmm0_2.q)
                    float temp0_6[0x4] = _mm_unpacklo_ps(zmm2_1, 0)
                    zmm5_1 = *rax_25
                    zmm6_1 = _mm_unpacklo_ps(zmm6_1, temp0_6[0].q)
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
                    float temp0_25[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_20, zmm4_1), zmm0_2), temp0_21), 
                        rax_25[1])
                    zmm13[0] = zmm13[0] - temp0_25[0]
                    float var_1a8_1 = temp0_25[0]
                    zmm0_2 = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
                    zmm14.d = zmm14.d f- zmm0_2.d
                    int32_t var_1a4_1 = zmm0_2.d
                    float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
                    zmm15.d = zmm15.d f- temp0_27[0]
                    float var_200 = zmm13[0]
                    zmm13[0] = zmm13[0] f* rsi_4[3]
                    zmm0_2.d = var_220_1.d f* zmm14.d
                    float var_1a0_1 = temp0_27[0]
                    int32_t var_1fc_1 = zmm14.d
                    zmm13[0] = zmm13[0] f+ zmm0_2.d
                    int32_t var_1f8_3 = zmm15.d
                    zmm0_2.d = var_21c_1.d f* zmm15.d
                    zmm13[0] = zmm13[0] f+ zmm0_2.d
                    zmm0_2.d = zmm12.d f* 0.00999999978f
                    zmm13 = __minss_xmmss_memss(zmm13[0], var_20c)
                    zmm0_2 = __andps_xmmxud_memxud(zmm0_2, data_142d3f770)
                    var_20c = zmm13[0]
                    zmm13[0] = zmm13[0] - zmm12[0]
                    
                    if (__andps_xmmxud_memxud(zmm13, data_142d3f770)[0] f<= zmm0_2.d)
                        zmm6_3, zmm7_1, zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm12_1, zmm13_1, 
                            zmm14_1, zmm15_1 =
                            sub_14154a2a0(*r12, *r15, rsi_4, arg5, arg6, var_190, arg8)
                        rbx_1 = var_240
                        rsi_1 = 0
                        break
                    
                    if (not(zmm13[0] < zmm12[0]))
                        int64_t rbx_5 = sx.q(r12[1].d)
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
                        int32_t rax_37 = (rbx_5 + 1).d
                        var_118_1[2] = zmm12[0]
                        var_128[3].q = zmm0_2.q
                        int32_t var_220_2 = rbx_5.d
                        r12[1].d = rax_37
                        
                        if (rax_37 s> *(r12 + 0xc))
                            sub_14083a7e0(r12)
                        
                        int64_t rcx_16 = *r12
                        int64_t rdx_11 = rbx_5 * 3
                        *(rcx_16 + (rdx_11 << 2)) = var_1b8_1.q
                        *(rcx_16 + (rdx_11 << 2) + 8) = var_1b0_1
                        int64_t rbx_6 = sx.q(r15[1].d)
                        int32_t rax_39 = (rbx_6 + 1).d
                        r15[1].d = rax_39
                        
                        if (rax_39 s> *(r15 + 0xc))
                            sub_14083a7e0(r15)
                        
                        int64_t rcx_18 = *r15
                        int64_t rdx_13 = rbx_6 * 3
                        var_238_1.d = 0
                        *(rcx_18 + (rdx_13 << 2)) = var_1a8_1.q
                        *(rcx_18 + (rdx_13 << 2) + 8) = var_1a0_1
                        rsi_4[0xd].b = 1
                        
                        if (r13_1 s< 0 && r13_1 != 0)
                            sub_1405c5570(&var_240, 0)
                        
                        sub_1415c5980(&var_230, var_248_1, &var_200, &var_240)
                        int64_t r13_2 = sx.q(var_228.d)
                        int32_t r8_11 = var_238_1.d
                        int32_t rax_41 = r8_11 + r13_2.d
                        var_228.d = rax_41
                        
                        if (rax_41 s> var_228:4.d)
                            sub_1407c3b60(&var_230)
                            r8_11 = var_238_1.d
                        
                        if (r8_11 s>= 3)
                            int64_t rsi_5 = 0
                            int64_t rax_42 = sx.q(r8_11)
                            
                            if (r8_11 s> 0)
                                void* rdi_2 = r13_2 * 0x38
                                int32_t rbx_7 = r13_2.d
                                int32_t r11_7 = 1 - r13_2.d
                                int32_t var_1c4_1 = r11_7
                                
                                do
                                    int64_t* rdx_16 = var_240
                                    int64_t rcx_22 = var_230
                                    int64_t r12_1 = sx.q(rdx_16[rsi_5].d)
                                    int64_t r14_2 = sx.q(*(&rdx_16[rsi_5] + 4))
                                    int32_t* r9_5 = rdi_2 + rcx_22
                                    int64_t r10_8 = r12_1 * 0x38 + rcx_22
                                    int32_t r11_8 = rbx_7 + 1
                                    
                                    if (r11_7 + rbx_7 s>= r8_11)
                                        r11_8 = r13_2.d
                                    
                                    int64_t r8_12 = *r15
                                    int32_t rax_47 = rbx_7
                                    
                                    if (rbx_7 s<= r13_2.d)
                                        rax_47 = r8_11 + r13_2.d
                                    
                                    int32_t rax_49 = *(r10_8 + (r14_2 << 2))
                                    int64_t rdx_21 = *arg1
                                    int64_t rax_51 =
                                        sx.q(*(r10_8 + (sx.q((r14_2 + 1).d s% 3) << 2)))
                                    int32_t var_21c_2 = rax_51.d
                                    int64_t rcx_25 = rax_51 * 3
                                    float zmm10_1[0x4] = *(rdx_21 + (rcx_25 << 2))
                                    zmm10_1[0] = zmm10_1[0] f- *(r8_12 + (rcx_25 << 2))
                                    float zmm6_2 = *(rdx_21 + (rcx_25 << 2) + 4) f-
                                        *(r8_12 + (rcx_25 << 2) + 4)
                                    zmm11_1.d = (*(rdx_21 + (rcx_25 << 2) + 8)).d f-
                                        *(r8_12 + (rcx_25 << 2) + 8)
                                    int64_t rcx_26 = sx.q(rax_49) * 3
                                    float zmm2_2[0x4] = *(rdx_21 + (rcx_26 << 2) + 8)
                                    zmm2_2[0] = zmm2_2[0] f- *(r8_12 + (rcx_26 << 2) + 8)
                                    float zmm5_2[0x4] = *(rdx_21 + (rcx_26 << 2))
                                    zmm7 = *(rdx_21 + (rdx_11 << 2) + 4)
                                    zmm7[0] = zmm7[0] f- *(r8_12 + (rdx_11 << 2) + 4)
                                    zmm1_1 = *(rdx_21 + (rdx_11 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_12 + (rdx_11 << 2) + 8)
                                    zmm3_1 = *(rdx_21 + (rdx_11 << 2))
                                    zmm2_2[0] = zmm2_2[0] f- zmm11_1.d
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_12 + (rdx_11 << 2))
                                    float zmm4_2 = *(rdx_21 + (rcx_26 << 2) + 4)
                                    zmm7[0] = zmm7[0] - zmm6_2
                                    zmm5_2[0] = zmm5_2[0] f- *(r8_12 + (rcx_26 << 2))
                                    zmm4_2 = zmm4_2 f- *(r8_12 + (rcx_26 << 2) + 4)
                                    zmm1_1[0] = zmm1_1[0] f- zmm11_1.d
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
                                        goto label_1415c3f7b
                                    
                                    float var_218_1
                                    float var_210_1
                                    
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
                                    label_1415c3f7b:
                                        var_210_1 = zmm7[0]
                                        float var_214_2 = zmm3_1[0]
                                        var_218_1 = zmm1_1[0]
                                    else
                                        var_218_1 = data_143dbb1f8[0]
                                        var_210_1 = data_143dbb200[0]
                                        float var_214_1 = data_143dbb1fc[0]
                                    
                                    *(r9_5 + 0xc) = var_218_1.q
                                    r9_5[5] = var_210_1
                                    zmm0_1 = r9_5[4]
                                    zmm2_2 = r9_5[3]
                                    zmm1_1 = r9_5[5]
                                    zmm2_2[0] = zmm2_2[0] * zmm2_2[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_2[0] = zmm2_2[0] + zmm0_1[0]
                                    zmm2_2[0] = zmm2_2[0] + zmm1_1[0]
                                    float rax_54
                                    
                                    if (zmm2_2[0] >= 9.99999975e-05f)
                                        *r9_5 = var_21c_2
                                        r9_5[1] = rax_49
                                        r9_5[2] = var_220_2
                                        r9_5[8] = rax_47 - 1
                                        rax_54.b = 1
                                        r9_5[7] = r12_1.d
                                        r9_5[9] = r11_8
                                        r9_5[0xa] = r14_2.d
                                        r9_5[0xb] = 2
                                        r9_5[0xc] = 1
                                        zmm6_2 = zmm6_2 f* r9_5[4]
                                        zmm10_1[0] = zmm10_1[0] f* r9_5[3]
                                        zmm11_1.d = zmm11_1.d f* r9_5[5]
                                        r9_5[0xd].b = 0
                                        r9_5[6] = zmm6_2 + zmm10_1[0] f+ zmm11_1.d
                                    else
                                        rax_54.b = 0
                                    
                                    *(r10_8 + (r14_2 << 2) + 0x1c) = rbx_7
                                    *(r10_8 + (r14_2 << 2) + 0x28) = 0
                                    
                                    if (rax_54.b == 0)
                                        rdi_1 = var_1e8.q
                                        goto label_1415c40e6
                                    
                                    zmm0_1 = r9_5[6]
                                    r15 = arg2
                                    r12 = arg1
                                    
                                    if (not(zmm0_1[0] < zmm12[0]) && not(zmm0_1[0] > zmm13[0]))
                                        char rax_58
                                        rax_58, zmm12, zmm13 = sub_141743d50(r9_5, *r12, *r15)
                                        
                                        if (rax_58 != 0)
                                            int32_t var_130_1 = rbx_7
                                            int64_t* var_138 = &var_230
                                            sub_14175ce20(&var_1e8, &var_138)
                                    
                                    r8_11 = var_238_1.d
                                    rbx_7 += 1
                                    r11_7 = var_1c4_1
                                    rdi_2 += 0x38
                                    rsi_5 += 1
                                while (rsi_5 s< rax_42)
                                
                                r14_1 = var_1e8:8.q
                                zmm7 = zx.o(0)
                                rdi_1 = var_1e8.q
                            
                            r13_1 = var_238_1:4.d
                            goto label_1415c40cf
            
        label_1415c40e6:
            rbx_1 = var_240
            goto label_1415c411c
    
    zmm15_1.o = var_e8_1
    zmm14_1.o = var_d8_1
    zmm13_1.o = var_c8_1
    zmm12_1.o = var_b8_1
    zmm11_2.o = zmm11
    zmm10_2.o = zmm10
    zmm9_2.o = zmm9
    zmm8_2.o = zmm8
    zmm7_1.o = var_68_1
    zmm6_3.o = zmm6
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    if (rdi_1 != 0)
        float (* rax_63)[0x4] = rdi_1
        
        if (((var_1d8 - rdi_1) & 0xfffffffffffffff0) u>= 0x1000)
            rdi_1 = *(rdi_1 - 8)
            
            if (rax_63 - rdi_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rdi_1)
else
    *arg5 = 0
    int32_t var_1f8_1 = 0
    *arg7 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg7[1].d = 0
    *arg8 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_1f8_2 = 0
    rsi_1 = 2
    arg8[1].d = 0

int64_t rcx_35 = var_230

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

__security_check_cookie(rax_1 ^ &var_288)
return zx.q(rsi_1)
