// 函数: sub_141561dc0
// 地址: 0x141561dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t* r15 = arg2
int64_t* r14 = arg1
uint64_t* var_260 = arg6
int64_t var_230
int64_t* var_268 = &var_230
float* var_180 = arg5
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
    sub_141694b50(arg1, arg2, arg3, arg4, var_268)
int32_t rdi_1

if (rax_3 != 0)
    int32_t i = 0
    int128_t var_1f0
    __builtin_memset(&var_1f0, 0, 0x18)
    float (* rdi_2)[0x4] = var_1f0:8.q
    float (* rbx_1)[0x4] = var_1f0.q
    int64_t* var_240
    int32_t i_2
    int64_t var_1e0
    float zmm1_1[0x4]
    
    if (var_228.d s> 0)
        do
            char rax_5
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, zmm14, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_230, *r14, *r15)
            
            if (rax_5 != 0)
                i_2 = i
                var_240 = &var_230
                
                if (var_1e0 == rdi_2)
                    sub_141701fc0(&var_1f0, rdi_2, &var_240)
                    rdi_2 = var_1f0:8.q
                    rbx_1 = var_1f0.q
                else
                    *rdi_2 = var_240.o
                    rdi_2 = &rdi_2[1]
                    var_1f0:8.q = rdi_2
                
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
        while (i s< var_228.d)
    
    int64_t rcx_7 = (rdi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_7 == 0)
        rdx_4 = var_230
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_230
    
    int64_t* rsi_1 = nullptr
    int32_t r12_1 = 0
    uint128_t var_b8_1 = zmm12
    int128_t var_d8_1 = zmm14
    int128_t var_e8_1 = zmm15
    var_240 = nullptr
    i_2.q = 0
    zmm1_1 = rdx_4[1]
    float var_130[0x4] = *rdx_4
    float var_120_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    int64_t var_100_1 = rdx_4[3][0].q
    float var_110_1[0x4] = rdx_4[2]
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
    label_141562820:
        zmm6_3, zmm7_2, zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm12_1, zmm14_1, zmm15_1 =
            sub_14154a2a0(*arg1, *arg2, &var_130, var_180, arg6, var_190, arg8)
        rdi_1 = 1
    else
        zmm14 = 0x322bcc77
        zmm15 = 0x38d1b717
        
        while (true)
            if (rdx_5 s< 0x80)
                float rax_11 = (*rbx_1)[2]
                float var_248_1 = rax_11
                
                if (rcx_7 s>= 2)
                    zmm1_1 = rdi_2[-1]
                    int64_t i_3 = 0
                    int64_t i_4 = 0
                    rdi_2[-1] = *rbx_1
                    int64_t r11_4 = (&rdi_2[-1] - rbx_1) s>> 4
                    int64_t rsi_3 = (r11_4 - 1) s>> 1
                    
                    if (rsi_3 s> 0)
                        do
                            int64_t r9_1 = i_4 * 2
                            int64_t rcx_9 = r9_1 * 2
                            int64_t r8_7 = **(rbx_1 + (rcx_9 << 3) + 0x20)
                            i_4 = r9_1 + 1
                            
                            if ((*(sx.q((*rbx_1)[rcx_9 * 2 + 0xa]) * 0x38 + r8_7 + 0x18))[0] f<=
                                    *(sx.q((*rbx_1)[rcx_9 * 2 + 6]) * 0x38 + r8_7 + 0x18))
                                i_4 = r9_1 + 2
                            
                            rbx_1[i_3] = rbx_1[i_4]
                            i_3 = i_4
                        while (i_4 s< rsi_3)
                    
                    if (i_4 == rsi_3 && (r11_4.b & 1) == 0)
                        rbx_1[i_3] = rbx_1[r11_4 - 1]
                        i_3 = r11_4 - 1
                    
                    if (i_3 s> 0)
                        int64_t r11_6 = sx.q(_mm_bsrli_si128(zmm1_1, 8)[0]) * 0x38
                        int64_t i_1
                        
                        do
                            i_1 = (i_3 - 1) s>> 1
                            int64_t r9_3 = i_1 * 2
                            int64_t rdx_8 = **(rbx_1 + (r9_3 << 3))
                            
                            if ((*(r11_6 + rdx_8 + 0x18))[0] f>=
                                    *(sx.q((*rbx_1)[r9_3 * 2 + 2]) * 0x38 + rdx_8 + 0x18))
                                break
                            
                            rbx_1[i_3] = *(rbx_1 + (r9_3 << 3))
                            i_3 = i_1
                        while (i_1 s> 0)
                    
                    rax_11 = var_248_1
                    rbx_1[i_3] = zmm1_1
                
                rdi_2 -= 0x10
                var_1f0:8.q = rdi_2
                int32_t* rsi_5 = sx.q(rax_11) * 0x38 + var_230
                
                if (rsi_5[0xd].b != 0)
                label_1415627d1:
                    rcx_7 = (rdi_2 - rbx_1) s>> 4
                    
                    if (rcx_7 != 0)
                        rdx_5 += 1
                        continue
                else
                    float var_1b8
                    uint32_t zmm7_1[0x4] = sub_141758e70(*arg3, &var_1b8, &rsi_5[3], zx.o(0))
                    zmm12 = rsi_5[6]
                    void* rax_23 = arg4[1]
                    uint128_t zmm4_1 = zx.o(*(rax_23 + 0x10))
                    int32_t rax_24 = *(rax_23 + 0x18)
                    uint128_t zmm0_2 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                    float (* rax_25)[0x4] = arg4[2]
                    uint128_t zmm2_1 = _mm_unpacklo_ps(zmm0_2, 0)
                    uint128_t zmm6_1 = _mm_unpacklo_ps(zmm4_1, rax_24[0].q)
                    float zmm5_1[0x4] = *rax_25
                    zmm6_1 = _mm_unpacklo_ps(zmm6_1, zmm2_1.q)
                    zmm4_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                    float temp0_10[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9), temp0_10)
                    zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2), zmm4_1)
                    float temp0_15[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    zmm2_1 = _mm_sub_ps(zmm2_1, zmm0_2)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm2_1)
                    float temp0_18[0x4] = _mm_mul_ps(temp0_15, zmm2_1)
                    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9), temp0_10)
                    float temp0_21[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
                    float temp0_22[0x4] = _mm_add_ps(temp0_18, zmm6_1)
                    zmm2_1 = var_1b8
                    float temp0_26[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_21, zmm4_1), zmm0_2), temp0_22), 
                        rax_25[1])
                    zmm2_1.d = zmm2_1.d f- temp0_26[0]
                    float var_1a8_1 = temp0_26[0]
                    zmm0_2 = _mm_shuffle_ps(temp0_26, temp0_26, 0x55)
                    float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)
                    int32_t var_1b4
                    float zmm3_1[0x4] = var_1b4
                    zmm3_1[0] = zmm3_1[0] f- zmm0_2.d
                    int32_t var_1a4_1 = zmm0_2.d
                    int32_t var_1b0
                    zmm0_2.d = var_1b0.d f- temp0_28[0]
                    float var_1a0_1 = temp0_28[0]
                    int32_t var_178 = zmm2_1.d
                    zmm2_1.d = zmm2_1.d f* rsi_5[3]
                    float var_174_1 = zmm3_1[0]
                    zmm3_1[0] = zmm3_1[0] f* rsi_5[4]
                    int32_t var_170_1 = zmm0_2.d
                    zmm0_2.d = zmm0_2.d f* rsi_5[5]
                    zmm3_1[0] = zmm3_1[0] f+ zmm2_1.d
                    zmm3_1[0] = zmm3_1[0] f+ zmm0_2.d
                    zmm0_2.d = zmm12.d f* 0.00999999978f
                    float temp0_29[0x4] = _mm_min_ss(zmm3_1[0], zmm13_1)
                    zmm0_2 = _mm_and_ps(zmm0_2, zmm7_1)
                    zmm13_1 = temp0_29[0]
                    temp0_29[0] = temp0_29[0] f- zmm12.d
                    
                    if (_mm_and_ps(temp0_29, zmm7_1)[0] f<= zmm0_2.d)
                        zmm6_3, zmm7_2, zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm12_1, zmm14_1, 
                            zmm15_1 = sub_14154a2a0(*r14, *r15, rsi_5, var_180, arg6, var_190, arg8)
                        rsi_1 = var_240
                        rdi_1 = 0
                        break
                    
                    if (not(zmm13_1 f< zmm12.d))
                        int64_t r13_2 = sx.q(r14[1].d)
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
                        var_100_1.d = rsi_5[0xc]
                        var_100_1:4.b = rsi_5[0xd].b
                        int32_t rax_37 = (r13_2 + 1).d
                        var_120_1[2] = zmm12.d
                        var_130[3].q = zmm0_2.q
                        int32_t var_1cc_1 = r13_2.d
                        r14[1].d = rax_37
                        
                        if (rax_37 s> *(r14 + 0xc))
                            sub_14083a7e0(r14)
                        
                        int64_t rcx_16 = *r14
                        int64_t rdx_12 = r13_2 * 3
                        *(rcx_16 + (rdx_12 << 2)) = var_1b8.q
                        *(rcx_16 + (rdx_12 << 2) + 8) = var_1b0
                        int64_t r14_1 = sx.q(r15[1].d)
                        int32_t rax_39 = (r14_1 + 1).d
                        r15[1].d = rax_39
                        
                        if (rax_39 s> *(r15 + 0xc))
                            sub_14083a7e0(r15)
                        
                        int64_t rcx_18 = *r15
                        int64_t rdx_14 = r14_1 * 3
                        int32_t var_238 = 0
                        *(rcx_18 + (rdx_14 << 2)) = var_1a8_1.q
                        *(rcx_18 + (rdx_14 << 2) + 8) = var_1a0_1
                        rsi_5[0xd].b = 1
                        
                        if (r12_1 s< 0 && r12_1 != 0)
                            sub_1405c5570(&var_240, 0)
                        
                        sub_1415c5980(&var_230, var_248_1, &var_178, &var_240)
                        int64_t r13_3 = sx.q(var_228.d)
                        int32_t r8_11 = var_238
                        int32_t rax_41 = r8_11 + r13_3.d
                        var_228.d = rax_41
                        
                        if (rax_41 s> var_228:4.d)
                            sub_1407c3b60(&var_230)
                            r8_11 = var_238
                        
                        if (r8_11 s>= 3)
                            int64_t rsi_6 = 0
                            int64_t rax_42 = sx.q(r8_11)
                            
                            if (r8_11 s<= 0)
                                r14 = arg1
                            else
                                int64_t rdi_3 = r13_3 * 0x38
                                int32_t rbx_2 = r13_3.d
                                int32_t r11_7 = 1 - r13_3.d
                                int32_t var_1c4_1 = r11_7
                                
                                do
                                    int64_t* rdx_17 = var_240
                                    int64_t rcx_22 = var_230
                                    int64_t r12_2 = sx.q(rdx_17[rsi_6].d)
                                    int64_t r14_2 = sx.q(*(&rdx_17[rsi_6] + 4))
                                    int32_t* r9_5 = rcx_22 + rdi_3
                                    int64_t r10_8 = r12_2 * 0x38 + rcx_22
                                    int32_t r11_8 = rbx_2 + 1
                                    
                                    if (r11_7 + rbx_2 s>= r8_11)
                                        r11_8 = r13_3.d
                                    
                                    int64_t r8_12 = *r15
                                    int32_t rax_47 = rbx_2
                                    
                                    if (rbx_2 s<= r13_3.d)
                                        rax_47 = r8_11 + r13_3.d
                                    
                                    int32_t rax_49 = *(r10_8 + (r14_2 << 2))
                                    int64_t rdx_22 = *arg1
                                    int64_t rax_51 =
                                        sx.q(*(r10_8 + (sx.q((r14_2 + 1).d s% 3) << 2)))
                                    int32_t var_1d0_1 = rax_51.d
                                    int64_t rcx_25 = rax_51 * 3
                                    float zmm8_1 =
                                        *(rdx_22 + (rcx_25 << 2)) f- *(r8_12 + (rcx_25 << 2))
                                    float zmm6_2 = *(rdx_22 + (rcx_25 << 2) + 4) f-
                                        *(r8_12 + (rcx_25 << 2) + 4)
                                    float zmm9_1 = *(rdx_22 + (rcx_25 << 2) + 8) f-
                                        *(r8_12 + (rcx_25 << 2) + 8)
                                    int64_t rcx_26 = sx.q(rax_49) * 3
                                    zmm7_1 = *(rdx_22 + (rcx_26 << 2))
                                    zmm7_1[0] = zmm7_1[0] f- *(r8_12 + (rcx_26 << 2))
                                    float zmm5_2[0x4] = *(rdx_22 + (rcx_26 << 2) + 4)
                                    float zmm2_2[0x4] = *(rdx_22 + (rdx_12 << 2) + 4)
                                    zmm2_2[0] = zmm2_2[0] f- *(r8_12 + (rdx_12 << 2) + 4)
                                    zmm1_1 = *(rdx_22 + (rdx_12 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_12 + (rdx_12 << 2) + 8)
                                    float zmm4_2[0x4] = *(rdx_22 + (rdx_12 << 2))
                                    zmm7_1[0] = zmm7_1[0] f- zmm8_1
                                    zmm4_2[0] = zmm4_2[0] f- *(r8_12 + (rdx_12 << 2))
                                    zmm3_1 = *(rdx_22 + (rcx_26 << 2) + 8)
                                    zmm2_2[0] = zmm2_2[0] - zmm6_2
                                    zmm5_2[0] = zmm5_2[0] f- *(r8_12 + (rcx_26 << 2) + 4)
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_12 + (rcx_26 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] - zmm9_1
                                    zmm4_2[0] = zmm4_2[0] - zmm8_1
                                    zmm5_2[0] = zmm5_2[0] - zmm6_2
                                    zmm3_1[0] = zmm3_1[0] - zmm9_1
                                    float zmm10_1[0x4] = zmm1_1
                                    float zmm11_1[0x4] = zmm4_2
                                    zmm10_1[0] = zmm10_1[0] * zmm5_2[0]
                                    zmm2_2[0] = zmm2_2[0] * zmm3_1[0]
                                    zmm11_1[0] = zmm11_1[0] * zmm3_1[0]
                                    zmm10_1[0] = zmm10_1[0] - zmm2_2[0]
                                    zmm4_2[0] = zmm4_2[0] * zmm5_2[0]
                                    float zmm0_1[0x4] = zmm7_1
                                    zmm7_1[0] = zmm7_1[0] f* zmm2_2[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm1_1[0]
                                    zmm7_1[0] = zmm7_1[0] f- zmm4_2[0]
                                    zmm11_1[0] = zmm11_1[0] - zmm0_1[0]
                                    zmm10_1[0] = zmm10_1[0] * zmm10_1[0]
                                    zmm1_1 = zmm7_1
                                    zmm1_1[0] = zmm1_1[0] f* zmm7_1[0]
                                    zmm11_1[0] = zmm11_1[0] * zmm11_1[0]
                                    zmm11_1[0] = zmm11_1[0] + zmm10_1[0]
                                    zmm11_1[0] = zmm11_1[0] + zmm1_1[0]
                                    float var_220_1
                                    uint32_t var_218_1
                                    
                                    if (zmm11_1[0] != 1f)
                                        if (zmm11_1[0] f>= zmm14.d)
                                            zmm4_2 = 0x3f000000
                                            float temp0_33[0x4] =
                                                _mm_rsqrt_ss(zmm11_1[0], zmm11_1[0])
                                            zmm2_2 = 0x3f000000
                                            zmm11_1[0] = zmm11_1[0] * 0.5f
                                            temp0_33[0] = temp0_33[0] * temp0_33[0]
                                            zmm11_1[0] = zmm11_1[0] * temp0_33[0]
                                            zmm2_2[0] = 0.5f - zmm11_1[0]
                                            temp0_33[0] = temp0_33[0] * zmm2_2[0]
                                            temp0_33[0] = temp0_33[0] + temp0_33[0]
                                            temp0_33[0] = temp0_33[0] * temp0_33[0]
                                            zmm11_1[0] = zmm11_1[0] * temp0_33[0]
                                            zmm4_2[0] = 0.5f - zmm11_1[0]
                                            temp0_33[0] = temp0_33[0] * zmm4_2[0]
                                            temp0_33[0] = temp0_33[0] + temp0_33[0]
                                            zmm1_1 = temp0_33
                                            temp0_33[0] = temp0_33[0] * zmm10_1[0]
                                            temp0_33[0] = temp0_33[0] f* zmm7_1[0]
                                            var_220_1 = temp0_33[0]
                                            zmm1_1[0] = zmm1_1[0] * zmm11_1[0]
                                            var_218_1 = temp0_33[0]
                                        else
                                            zmm1_1 = data_143dbb1fc
                                            var_220_1 = data_143dbb1f8[0]
                                            var_218_1 = data_143dbb200[0]
                                        
                                        float var_21c_2 = zmm1_1[0]
                                    else
                                        var_220_1 = zmm10_1[0]
                                        float var_21c_1 = zmm11_1[0]
                                        var_218_1 = zmm7_1[0]
                                    
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
                                    uint32_t rax_54
                                    
                                    if (zmm2_2[0] f>= zmm15.d)
                                        *r9_5 = var_1d0_1
                                        r9_5[1] = rax_49
                                        r9_5[2] = var_1cc_1
                                        r9_5[8] = rax_47 - 1
                                        rax_54.b = 1
                                        r9_5[7] = r12_2.d
                                        r9_5[9] = r11_8
                                        r9_5[0xa] = r14_2.d
                                        r9_5[0xb] = 2
                                        r9_5[0xc] = 1
                                        r9_5[0xd].b = 0
                                        r9_5[6] = zmm6_2 f* r9_5[4] + zmm8_1 f* r9_5[3]
                                            + zmm9_1 f* r9_5[5]
                                    else
                                        rax_54.b = 0
                                    
                                    *(r10_8 + (r14_2 << 2) + 0x1c) = rbx_2
                                    *(r10_8 + (r14_2 << 2) + 0x28) = 0
                                    
                                    if (rax_54.b == 0)
                                        rbx_1 = var_1f0.q
                                        goto label_1415627e9
                                    
                                    zmm0_1 = r9_5[6]
                                    r15 = arg2
                                    r14 = arg1
                                    
                                    if (not(zmm0_1[0] f< zmm12.d) && not(zmm0_1[0] > zmm13_1))
                                        char rax_58
                                        rax_58, zmm12, zmm13_1, zmm14, zmm15 =
                                            sub_141743d50(r9_5, *r14, *r15)
                                        
                                        if (rax_58 != 0)
                                            int32_t var_138_1 = rbx_2
                                            int64_t* var_140 = &var_230
                                            sub_14175ce20(&var_1f0, &var_140)
                                    
                                    r8_11 = var_238
                                    rbx_2 += 1
                                    r11_7 = var_1c4_1
                                    rdi_3 += 0x38
                                    rsi_6 += 1
                                while (rsi_6 s< rax_42)
                                
                                rdi_2 = var_1f0:8.q
                                rbx_1 = var_1f0.q
                            
                            int32_t var_234
                            r12_1 = var_234
                            goto label_1415627d1
            
        label_1415627e9:
            rsi_1 = var_240
            goto label_141562820
    
    zmm15_1.o = var_e8_1
    zmm14_1.o = var_d8_1
    zmm12_1.o = var_b8_1
    zmm11_2.o = zmm11
    zmm10_2.o = zmm10
    zmm9_2.o = zmm9
    zmm8_2.o = zmm8
    zmm7_2.o = zmm7
    zmm6_3.o = zmm6
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    if (rbx_1 != 0)
        float (* rax_63)[0x4] = rbx_1
        
        if (((var_1e0 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_63 - rbx_1 - 8 u> 0x1f)
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
    int32_t var_1f8_1 = 0
    int32_t var_1f8_2 = 0

int64_t rcx_35 = var_230

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

__security_check_cookie(rax_1 ^ &var_288)
return zx.q(rdi_1)
