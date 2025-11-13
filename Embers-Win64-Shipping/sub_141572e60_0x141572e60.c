// 函数: sub_141572e60
// 地址: 0x141572e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t* r15 = arg2
int64_t* r12 = arg1
uint64_t* var_260 = arg6
int64_t var_230
int64_t* var_268 = &var_230
int32_t* var_190 = arg7
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
int128_t zmm14
int128_t zmm15
rax_3, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, zmm14, zmm15 =
    sub_1416a28b0(arg1, arg2, arg3, arg4, var_268)
int32_t rsi_1

if (rax_3 != 0)
    int32_t i = 0
    int128_t var_1f0
    __builtin_memset(&var_1f0, 0, 0x18)
    float (* r14_1)[0x4] = var_1f0:8.q
    float (* rdi_1)[0x4] = var_1f0.q
    int64_t* var_240
    int64_t var_1e0
    float zmm1_1[0x4]
    
    if (var_228.d s> 0)
        do
            char rax_5
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, zmm14, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_230, *r12, *r15)
            
            if (rax_5 != 0)
                int64_t var_238
                var_238.d = i
                var_240 = &var_230
                
                if (var_1e0 == r14_1)
                    sub_141701fc0(&var_1f0, r14_1, &var_240)
                    r14_1 = var_1f0:8.q
                    rdi_1 = var_1f0.q
                else
                    *r14_1 = var_240.o
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
    int32_t r13_1 = 0
    uint128_t var_b8_1 = zmm12
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
    int512_t zmm7_2
    int512_t zmm8_2
    int512_t zmm9_2
    int512_t zmm10_2
    int512_t zmm11_2
    int512_t zmm12_1
    int512_t zmm14_1
    int512_t zmm15_1
    
    if (rcx_7 == 0)
    label_14157391c:
        zmm6_3, zmm7_2, zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm12_1, zmm14_1, zmm15_1 =
            sub_14154a2a0(*arg1, *arg2, &var_128, arg5, arg6, var_190, arg8)
        rsi_1 = 1
    else
        zmm14 = 0x322bcc77
        zmm15 = 0x38d1b717
        
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
                var_1f0:8.q = r14_1
                int32_t* rsi_4 = sx.q(rax_11) * 0x38 + var_230
                
                if (rsi_4[0xd].b != 0)
                label_1415738ce:
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
                    uint32_t zmm10_1[0x4] = sub_141758e70(rcx_13, &var_16c, &var_178, zx.o(0))
                    float zmm8_1[0x4] = var_16c
                    zmm8_1[0] = zmm8_1[0] f* *(rbx_4 + 0x28)
                    void* rcx_14 = *arg4
                    int32_t var_168
                    float zmm9_1[0x4] = var_168
                    zmm9_1[0] = zmm9_1[0] f* *(rbx_4 + 0x2c)
                    void* rax_23 = *(rcx_14 + 0x10)
                    float zmm3_1[0x4] = *(rcx_14 + 0x28)
                    int32_t var_164
                    float zmm7_1[0x4] = var_164
                    zmm7_1[0] = zmm7_1[0] f* *(rbx_4 + 0x30)
                    zmm3_1[0] = zmm3_1[0] f* *(rax_23 + 0x10)
                    uint128_t zmm0_2
                    zmm0_2.d = (*(rax_23 + 0x18)).d f* *(rcx_14 + 0x30)
                    float zmm2_1[0x4] = *(rax_23 + 0x14)
                    zmm2_1[0] = zmm2_1[0] f* *(rcx_14 + 0x2c)
                    float (* rax_24)[0x4] = arg4[1]
                    float temp0_5[0x4] = _mm_unpacklo_ps(zmm3_1, zmm0_2.q)
                    float var_1b4_1 = zmm9_1[0]
                    float temp0_6[0x4] = _mm_unpacklo_ps(zmm2_1, 0)
                    float zmm5_1[0x4] = *rax_24
                    float temp0_7[0x4] = _mm_unpacklo_ps(temp0_5, temp0_6[0].q)
                    float temp0_8[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                    float temp0_9[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), temp0_9)
                    float temp0_13[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xd2), temp0_8)
                    float temp0_14[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    float var_1b8_1 = zmm8_1[0]
                    float var_1b0_1 = zmm7_1[0]
                    float temp0_15[0x4] = _mm_sub_ps(temp0_13, zmm0_2)
                    float temp0_16[0x4] = _mm_add_ps(temp0_15, temp0_15)
                    float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_16)
                    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xc9), temp0_9)
                    float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xd2)
                    float temp0_21[0x4] = _mm_add_ps(temp0_17, temp0_7)
                    float temp0_25[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_20, temp0_8), zmm0_2), temp0_21), 
                        rax_24[1])
                    zmm8_1[0] = zmm8_1[0] - temp0_25[0]
                    float var_1a8_1 = temp0_25[0]
                    zmm0_2 = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
                    zmm9_1[0] = zmm9_1[0] f- zmm0_2.d
                    float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
                    zmm7_1[0] = zmm7_1[0] - temp0_27[0]
                    int32_t var_1a4_1 = zmm0_2.d
                    float var_208 = zmm8_1[0]
                    zmm8_1[0] = zmm8_1[0] f* rsi_4[3]
                    float var_204_1 = zmm9_1[0]
                    zmm9_1[0] = zmm9_1[0] f* rsi_4[4]
                    float var_1a0_1 = temp0_27[0]
                    float var_200_3 = zmm7_1[0]
                    zmm9_1[0] = zmm9_1[0] + zmm8_1[0]
                    zmm12 = rsi_4[6]
                    zmm7_1[0] = zmm7_1[0] f* rsi_4[5]
                    zmm0_2.d = zmm12.d f* 0.00999999978f
                    zmm9_1[0] = zmm9_1[0] + zmm7_1[0]
                    zmm0_2 = _mm_and_ps(zmm0_2, zmm10_1)
                    float temp0_29[0x4] = _mm_min_ss(zmm9_1[0], zmm13_1)
                    zmm13_1 = temp0_29[0]
                    temp0_29[0] = temp0_29[0] f- zmm12.d
                    
                    if (_mm_and_ps(temp0_29, zmm10_1)[0] f<= zmm0_2.d)
                        zmm6_3, zmm7_2, zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm12_1, zmm14_1, 
                            zmm15_1 = sub_14154a2a0(*r12, *r15, rsi_4, arg5, arg6, var_190, arg8)
                        rbx_1 = var_240
                        rsi_1 = 0
                        break
                    
                    if (not(zmm13_1 f< zmm12.d))
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
                        int32_t rax_36 = (rbx_5 + 1).d
                        var_118_1[2] = zmm12.d
                        var_128[3].q = zmm0_2.q
                        float var_1c8_1 = rbx_5.d
                        r12[1].d = rax_36
                        
                        if (rax_36 s> *(r12 + 0xc))
                            sub_14083a7e0(r12)
                        
                        int64_t rcx_16 = *r12
                        int64_t rdx_12 = rbx_5 * 3
                        *(rcx_16 + (rdx_12 << 2)) = var_1b8_1.q
                        *(rcx_16 + (rdx_12 << 2) + 8) = var_1b0_1
                        int64_t rbx_6 = sx.q(r15[1].d)
                        int32_t rax_38 = (rbx_6 + 1).d
                        r15[1].d = rax_38
                        
                        if (rax_38 s> *(r15 + 0xc))
                            sub_14083a7e0(r15)
                        
                        int64_t rcx_18 = *r15
                        int64_t rdx_14 = rbx_6 * 3
                        var_238_1.d = 0
                        *(rcx_18 + (rdx_14 << 2)) = var_1a8_1.q
                        *(rcx_18 + (rdx_14 << 2) + 8) = var_1a0_1
                        rsi_4[0xd].b = 1
                        
                        if (r13_1 s< 0 && r13_1 != 0)
                            sub_1405c5570(&var_240, 0)
                        
                        sub_1415c5980(&var_230, var_248_1, &var_208, &var_240)
                        int32_t r8_11 = var_228.d
                        int64_t rbx_7 = sx.q(var_238_1.d)
                        int32_t var_214_1 = r8_11
                        int32_t rax_40 = r8_11 + rbx_7.d
                        var_228.d = rax_40
                        
                        if (rax_40 s> var_228:4.d)
                            sub_1407c3b60(&var_230)
                            r8_11 = var_214_1
                        
                        if (rbx_7.d s>= 3)
                            int64_t rsi_5 = 0
                            
                            if (rbx_7.d s> 0)
                                void* r14_2 = sx.q(r8_11) * 0x38
                                int32_t rdi_2 = 1 - r8_11
                                int32_t rbx_8 = r8_11
                                int32_t var_1c4_1 = rdi_2
                                
                                do
                                    int64_t* rdx_17 = var_240
                                    int64_t rcx_22 = var_230
                                    int64_t r13_2 = sx.q(rdx_17[rsi_5].d)
                                    int64_t r11_7 = sx.q(*(&rdx_17[rsi_5] + 4))
                                    int32_t* r9_5 = r14_2 + rcx_22
                                    int64_t r10_8 = r13_2 * 0x38 + rcx_22
                                    int32_t rdi_3 = rbx_8 + 1
                                    
                                    if (rdi_2 + rbx_8 s>= var_238_1.d)
                                        rdi_3 = r8_11
                                    
                                    int32_t rax_46 = *(r10_8 + (r11_7 << 2))
                                    int64_t r8_12 = *r15
                                    int32_t r12_1 = rbx_8
                                    
                                    if (rbx_8 s<= r8_11)
                                        r12_1 = rax_40
                                    
                                    int64_t rdx_21 = *arg1
                                    int64_t rax_48 =
                                        sx.q(*(r10_8 + (sx.q((r11_7 + 1).d s% 3) << 2)))
                                    int32_t var_1cc_1 = rax_48.d
                                    int64_t rcx_25 = rax_48 * 3
                                    zmm10_1 = *(rdx_21 + (rcx_25 << 2))
                                    zmm10_1[0] = zmm10_1[0] f- *(r8_12 + (rcx_25 << 2))
                                    float zmm6_2 = *(rdx_21 + (rcx_25 << 2) + 4) f-
                                        *(r8_12 + (rcx_25 << 2) + 4)
                                    float zmm11_1 = *(rdx_21 + (rcx_25 << 2) + 8) f-
                                        *(r8_12 + (rcx_25 << 2) + 8)
                                    int64_t rcx_26 = sx.q(rax_46) * 3
                                    float zmm2_2[0x4] = *(rdx_21 + (rcx_26 << 2) + 8)
                                    zmm2_2[0] = zmm2_2[0] f- *(r8_12 + (rcx_26 << 2) + 8)
                                    float zmm5_2[0x4] = *(rdx_21 + (rcx_26 << 2))
                                    zmm7_1 = *(rdx_21 + (rdx_12 << 2) + 4)
                                    zmm7_1[0] = zmm7_1[0] f- *(r8_12 + (rdx_12 << 2) + 4)
                                    zmm1_1 = *(rdx_21 + (rdx_12 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_12 + (rdx_12 << 2) + 8)
                                    zmm3_1 = *(rdx_21 + (rdx_12 << 2))
                                    zmm2_2[0] = zmm2_2[0] - zmm11_1
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_12 + (rdx_12 << 2))
                                    float zmm4_2 = *(rdx_21 + (rcx_26 << 2) + 4)
                                    zmm7_1[0] = zmm7_1[0] - zmm6_2
                                    zmm5_2[0] = zmm5_2[0] f- *(r8_12 + (rcx_26 << 2))
                                    zmm4_2 = zmm4_2 f- *(r8_12 + (rcx_26 << 2) + 4)
                                    zmm1_1[0] = zmm1_1[0] - zmm11_1
                                    zmm3_1[0] = zmm3_1[0] f- zmm10_1[0]
                                    zmm7_1[0] = zmm7_1[0] * zmm2_2[0]
                                    zmm5_2[0] = zmm5_2[0] f- zmm10_1[0]
                                    zmm4_2 = zmm4_2 - zmm6_2
                                    zmm3_1[0] = zmm3_1[0] * zmm2_2[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm5_2[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm4_2
                                    zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
                                    zmm7_1[0] = zmm7_1[0] * zmm5_2[0]
                                    zmm1_1[0] = zmm1_1[0] - zmm7_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm4_2
                                    zmm7_1[0] = zmm7_1[0] - zmm3_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm1_1[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm7_1[0]
                                    
                                    if (zmm3_1[0] == 1f)
                                        goto label_141573784
                                    
                                    float var_220_1
                                    float var_218_1
                                    
                                    if (zmm3_1[0] f>= zmm14.d)
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
                                        zmm7_1[0] = zmm7_1[0] * temp0_32[0]
                                    label_141573784:
                                        var_218_1 = zmm7_1[0]
                                        float var_21c_2 = zmm3_1[0]
                                        var_220_1 = zmm1_1[0]
                                    else
                                        var_220_1 = data_143dbb1f8[0]
                                        var_218_1 = data_143dbb200[0]
                                        float var_21c_1 = data_143dbb1fc[0]
                                    
                                    *(r9_5 + 0xc) = var_220_1.q
                                    r9_5[5] = var_218_1
                                    zmm0_1 = r9_5[4]
                                    zmm2_2 = r9_5[3]
                                    zmm1_1 = r9_5[5]
                                    zmm2_2[0] = zmm2_2[0] * zmm2_2[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_2[0] = zmm2_2[0] + zmm0_1[0]
                                    zmm2_2[0] = zmm2_2[0] + zmm1_1[0]
                                    float rax_51
                                    
                                    if (zmm2_2[0] f>= zmm15.d)
                                        *r9_5 = var_1cc_1
                                        r9_5[1] = rax_46
                                        r9_5[2] = var_1c8_1
                                        rax_51.b = 1
                                        r9_5[7] = r13_2.d
                                        r9_5[8] = r12_1 - 1
                                        r9_5[9] = rdi_3
                                        r9_5[0xa] = r11_7.d
                                        r9_5[0xb] = 2
                                        r9_5[0xc] = 1
                                        zmm6_2 = zmm6_2 f* r9_5[4]
                                        zmm10_1[0] = zmm10_1[0] f* r9_5[3]
                                        r9_5[0xd].b = 0
                                        r9_5[6] = zmm6_2 f+ zmm10_1[0] + zmm11_1 f* r9_5[5]
                                    else
                                        rax_51.b = 0
                                    
                                    *(r10_8 + (r11_7 << 2) + 0x1c) = rbx_8
                                    *(r10_8 + (r11_7 << 2) + 0x28) = 0
                                    
                                    if (rax_51.b == 0)
                                        rdi_1 = var_1f0.q
                                        goto label_1415738e5
                                    
                                    zmm0_1 = r9_5[6]
                                    r15 = arg2
                                    r12 = arg1
                                    
                                    if (not(zmm0_1[0] f< zmm12.d) && not(zmm0_1[0] > zmm13_1))
                                        char rax_54
                                        rax_54, zmm12, zmm13_1, zmm14, zmm15 =
                                            sub_141743d50(r9_5, *r12, *r15)
                                        
                                        if (rax_54 != 0)
                                            int32_t var_130_1 = rbx_8
                                            int64_t* var_138 = &var_230
                                            sub_14175ce20(&var_1f0, &var_138)
                                    
                                    r8_11 = var_214_1
                                    rbx_8 += 1
                                    rdi_2 = var_1c4_1
                                    r14_2 += 0x38
                                    rsi_5 += 1
                                while (rsi_5 s< rbx_7)
                                
                                r14_1 = var_1f0:8.q
                                rdi_1 = var_1f0.q
                            
                            r13_1 = var_238_1:4.d
                            goto label_1415738ce
            
        label_1415738e5:
            rbx_1 = var_240
            goto label_14157391c
    
    zmm15_1.o = var_e8_1
    zmm14_1.o = var_d8_1
    zmm12_1.o = var_b8_1
    zmm11_2.o = zmm11
    zmm10_2.o = zmm10
    zmm9_2.o = zmm9
    zmm8_2.o = zmm8
    zmm7_2.o = zmm7
    zmm6_3.o = zmm6
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    if (rdi_1 != 0)
        float (* rax_59)[0x4] = rdi_1
        
        if (((var_1e0 - rdi_1) & 0xfffffffffffffff0) u>= 0x1000)
            rdi_1 = *(rdi_1 - 8)
            
            if (rax_59 - rdi_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rdi_1)
else
    *arg5 = 0
    int32_t var_200_1 = 0
    *arg7 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg7[1].d = 0
    *arg8 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_200_2 = 0
    rsi_1 = 2
    arg8[1].d = 0

int64_t rcx_35 = var_230

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

__security_check_cookie(rax_1 ^ &var_288)
return zx.q(rsi_1)
