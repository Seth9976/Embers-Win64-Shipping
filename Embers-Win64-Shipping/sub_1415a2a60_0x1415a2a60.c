// 函数: sub_1415a2a60
// 地址: 0x1415a2a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int64_t* r13 = arg1
int64_t* r12 = arg2
int32_t r14 = 0
uint64_t* var_280 = arg6
int32_t* var_1d0 = arg7
int32_t var_264 = 0
int64_t var_248 = 0
int64_t var_240 = 0
char rax_2
uint128_t zmm6
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
uint128_t zmm10
int128_t zmm11
int128_t zmm12
int128_t zmm14
int128_t zmm15
rax_2, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
    sub_1416c9890(r13, arg2, arg3, arg4, &var_248)
int32_t rsi_1

if (rax_2 != 0)
    int128_t var_208
    __builtin_memset(&var_208, 0, 0x18)
    float (* rsi_2)[0x4] = var_208:8.q
    int32_t i = 0
    float (* rbx_1)[0x4] = var_208.q
    int64_t* var_260
    int64_t var_1f8
    float zmm1_1[0x4]
    
    if (var_240.d s> 0)
        do
            char rax_4
            rax_4, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_248, *r13, *r12)
            
            if (rax_4 != 0)
                int64_t var_258
                var_258.d = i
                var_260 = &var_248
                
                if (var_1f8 == rsi_2)
                    sub_141701fc0(&var_208, rsi_2, &var_260)
                    rsi_2 = var_208:8.q
                    rbx_1 = var_208.q
                else
                    *rsi_2 = var_260.o
                    rsi_2 = &rsi_2[1]
                    var_208:8.q = rsi_2
                
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
        while (i s< var_240.d)
    
    int64_t rcx_9 = (rsi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_9 == 0)
        rdx_4 = var_248
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_248
    
    float zmm0_1[0x4] = *rdx_4
    int64_t* rdi_1 = nullptr
    zmm1_1 = rdx_4[1]
    var_260 = nullptr
    uint128_t var_58_1 = zmm6
    float var_68_1[0x4] = zmm7
    float var_78_1[0x4] = zmm8
    float var_88_1[0x4] = zmm9
    uint128_t var_98_1 = zmm10
    float var_128[0x4] = zmm0_1
    int64_t var_258_1 = 0
    float var_118_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    int64_t var_f8_1 = rdx_4[3][0].q
    float var_108_1[0x4] = rdx_4[2]
    int512_t zmm6_2
    int512_t zmm7_1
    int512_t zmm8_1
    int512_t zmm9_1
    int512_t zmm10_1
    int512_t zmm11_2
    int512_t zmm12_2
    int512_t zmm14_2
    int512_t zmm15_2
    
    if (rcx_9 == 0)
    label_1415a35a4:
        zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_2, zmm12_2, zmm14_2, zmm15_2 =
            sub_14154a2a0(*arg1, *r12, &var_128, arg5, arg6, var_1d0, arg8)
        rsi_1 = 1
    else
        zmm6 = zx.o(0)
        zmm10 = 0x80000000
        
        while (true)
            if (rdx_5 s< 0x80)
                int64_t r15_1 = sx.q((*rbx_1)[2])
                int32_t var_238_1 = r15_1.d
                
                if (rcx_9 s>= 2)
                    zmm1_1 = rsi_2[-1]
                    int64_t i_2 = 0
                    int64_t i_3 = 0
                    rsi_2[-1] = *rbx_1
                    int64_t r11_4 = (&rsi_2[-1] - rbx_1) s>> 4
                    int64_t rdi_3 = (r11_4 - 1) s>> 1
                    
                    if (rdi_3 s> 0)
                        do
                            int64_t r9_1 = i_3 * 2
                            int64_t rcx_11 = r9_1 * 2
                            int64_t r8_7 = **(rbx_1 + (rcx_11 << 3) + 0x20)
                            i_3 = r9_1 + 1
                            
                            if ((*(sx.q((*rbx_1)[rcx_11 * 2 + 0xa]) * 0x38 + r8_7 + 0x18))[0] f<=
                                    *(sx.q((*rbx_1)[rcx_11 * 2 + 6]) * 0x38 + r8_7 + 0x18))
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
                    
                    r14 = var_264
                    rbx_1[i_2] = zmm1_1
                
                rsi_2 -= 0x10
                int32_t* rdi_5 = r15_1 * 0x38 + var_248
                var_208:8.q = rsi_2
                char r15_2 = rdi_5[0xd].b
                
                if (r15_2 != 0)
                    goto label_1415a3520
                
                zmm7 = rdi_5[4]
                zmm8 = rdi_5[3]
                zmm9 = rdi_5[5]
                void* rax_20 = *arg3
                float zmm3_1[0x4] = *(rax_20 + 0x1c)
                float zmm4_1 = *(rax_20 + 0x20)
                float zmm5_1[0x4] = *(rax_20 + 0x24)
                zmm3_1[0] = zmm3_1[0] * zmm8[0]
                zmm7[0] = zmm7[0] * zmm4_1
                zmm9[0] = zmm9[0] * zmm5_1[0]
                zmm3_1[0] = zmm3_1[0] + zmm7[0]
                zmm3_1[0] = zmm3_1[0] + zmm9[0]
                int32_t var_264_1
                int32_t* r14_3
                
                if (zmm3_1[0] f< zmm6.d)
                    int32_t rax_21 = *(rax_20 + 0x18)
                    var_264_1 = r14 | 2
                    int64_t var_168
                    r14_3 = &var_168
                    var_168 = *(rax_20 + 0x10)
                    int32_t var_160_1 = rax_21
                else
                    zmm0_1 = *(rax_20 + 0x28)
                    zmm3_1[0] = zmm3_1[0] * zmm0_1[0]
                    var_264_1 = r14 | 1
                    float var_1b8
                    r14_3 = &var_1b8
                    zmm4_1 = zmm4_1 * zmm0_1[0]
                    zmm3_1[0] = zmm3_1[0] f+ *(rax_20 + 0x10)
                    zmm5_1[0] = zmm5_1[0] * zmm0_1[0]
                    zmm4_1 = zmm4_1 f+ *(rax_20 + 0x14)
                    zmm5_1[0] = zmm5_1[0] f+ *(rax_20 + 0x18)
                    var_1b8 = zmm3_1[0]
                    float var_1b4_1 = zmm4_1
                    float var_1b0_1 = zmm5_1[0]
                
                int32_t rax_22 = r14_3[2]
                *r14_3
                int32_t rcx_16 = var_264_1 & 0xfffffffd
                float var_1ac = (zmm8 ^ zmm10)[0]
                
                if ((var_264_1.b & 2) == 0)
                    rcx_16 = var_264_1
                
                float var_1a8_1 = (zmm7 ^ zmm10)[0]
                int32_t rdx_11 = rcx_16 & 0xfffffffe
                float var_1a4_1 = (zmm9 ^ zmm10)[0]
                
                if ((rcx_16.b & 1) == 0)
                    rdx_11 = rcx_16
                
                var_264 = rdx_11
                float var_138[0x4]
                float* rax_25
                float zmm6_1[0x4]
                uint32_t zmm11_1[0x4]
                float zmm13_1
                int32_t zmm14_1
                int32_t zmm15_1
                rax_25, zmm6_1, zmm7, zmm8, zmm9, zmm11_1, zmm13_1, zmm14_1, zmm15_1 =
                    sub_14170a5e0(arg4, &var_138, &var_1ac)
                uint128_t zmm12_1 = rdi_5[6]
                float temp0_5[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
                zmm10 = zx.o(*rax_25)
                int32_t rax_26 = rax_25[2]
                zmm6_1[0] = zmm6_1[0] f- zmm10.d
                uint128_t zmm0_2 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
                temp0_5[0] = temp0_5[0] f- zmm0_2.d
                zmm0_2.d = rax_22.d f- rax_26
                float var_1a0 = zmm6_1[0]
                zmm6_1[0] = zmm6_1[0] * zmm8[0]
                float var_19c_1 = temp0_5[0]
                temp0_5[0] = temp0_5[0] * zmm7[0]
                int32_t var_198_1 = zmm0_2.d
                zmm0_2.d = zmm0_2.d f* zmm9[0]
                zmm6_1[0] = zmm6_1[0] + temp0_5[0]
                zmm6_1[0] = zmm6_1[0] f+ zmm0_2.d
                zmm0_2.d = zmm12_1.d f* 0.00999999978f
                float temp0_7[0x4] = _mm_min_ss(zmm6_1[0], zmm13_1)
                zmm0_2 = _mm_and_ps(zmm0_2, zmm11_1)
                zmm13_1 = temp0_7[0]
                temp0_7[0] = temp0_7[0] f- zmm12_1.d
                
                if (_mm_and_ps(temp0_7, zmm11_1)[0] f<= zmm0_2.d)
                    zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_2, zmm12_2, zmm14_2, zmm15_2 =
                        sub_14154a2a0(*r13, *r12, rdi_5, arg5, arg6, var_1d0, arg8)
                    rdi_1 = var_260
                    rsi_1 = 0
                    break
                
                if (not(zmm13_1 f< zmm12_1.d))
                    zmm0_2 = zx.o(*(rdi_5 + 0xc))
                    var_128[0] = *rdi_5
                    var_128[1] = rdi_5[1]
                    var_128[2] = rdi_5[2]
                    var_118_1[1] = rdi_5[5]
                    var_118_1[3] = rdi_5[7]
                    var_108_1[0] = rdi_5[8]
                    var_108_1[1] = rdi_5[9]
                    var_108_1[2] = rdi_5[0xa]
                    var_108_1[3] = rdi_5[0xb]
                    var_f8_1:4.b = r15_2
                    int64_t r15_3 = sx.q(r13[1].d)
                    var_f8_1.d = rdi_5[0xc]
                    var_118_1[2] = zmm12_1.d
                    var_128[3].q = zmm0_2.q
                    int32_t rax_37 = (r15_3 + 1).d
                    int32_t var_1e8_1 = r15_3.d
                    r13[1].d = rax_37
                    
                    if (rax_37 s> *(r13 + 0xc))
                        sub_14083a7e0(r13)
                    
                    int64_t rcx_19 = *r13
                    int64_t rdx_14 = r15_3 * 3
                    int32_t rax_38 = r14_3[2]
                    *(rcx_19 + (rdx_14 << 2)) = zmm6_1.q
                    *(rcx_19 + (rdx_14 << 2) + 8) = rax_38
                    int64_t r14_5 = sx.q(r12[1].d)
                    int32_t rax_39 = (r14_5 + 1).d
                    r12[1].d = rax_39
                    
                    if (rax_39 s> *(r12 + 0xc))
                        sub_14083a7e0(r12)
                    
                    int64_t rax_40 = *r12
                    int64_t rcx_21 = r14_5 * 3
                    var_258_1.d = 0
                    *(rax_40 + (rcx_21 << 2)) = zmm10.q
                    *(rax_40 + (rcx_21 << 2) + 8) = rax_26
                    int32_t rax_41 = var_258_1:4.d
                    rdi_5[0xd].b = 1
                    
                    if (rax_41 s< 0 && rax_41 != 0)
                        sub_1405c5570(&var_260, 0)
                    
                    sub_1415c5980(&var_248, var_238_1, &var_1a0, &var_260)
                    int64_t r13_1 = sx.q(var_240.d)
                    int32_t r8_11 = var_258_1.d
                    int32_t rax_42 = r8_11 + r13_1.d
                    var_240.d = rax_42
                    
                    if (rax_42 s> var_240:4.d)
                        sub_1407c3b60(&var_248)
                        r8_11 = var_258_1.d
                    
                    if (r8_11 s>= 3)
                        int64_t rdi_6 = 0
                        char var_268_1 = 0
                        int64_t var_170_1 = sx.q(r8_11)
                        int64_t rax_43
                        
                        if (r8_11 s<= 0)
                            rax_43.b = 0
                        else
                            int64_t rsi_3 = r13_1 * 0x38
                            int32_t rbx_2 = r13_1.d
                            int32_t r11_7 = 1 - r13_1.d
                            int32_t var_1e0_1 = r11_7
                            
                            while (true)
                                int64_t* rdx_19 = var_260
                                int64_t rcx_25 = var_248
                                int64_t r15_4 = sx.q(rdx_19[rdi_6].d)
                                int64_t r14_6 = sx.q(*(&rdx_19[rdi_6] + 4))
                                int32_t* r9_5 = rcx_25 + rsi_3
                                void* r10_8 = r15_4 * 0x38 + rcx_25
                                int32_t r11_8 = rbx_2 + 1
                                
                                if (r11_7 + rbx_2 s>= r8_11)
                                    r11_8 = r13_1.d
                                
                                int64_t r8_12 = *r12
                                int32_t rax_48 = rbx_2
                                
                                if (rbx_2 s<= r13_1.d)
                                    rax_48 = r8_11 + r13_1.d
                                
                                int64_t rdx_23 = *arg1
                                int32_t rax_51 = *(r10_8 + (r14_6 << 2))
                                int64_t rax_53 = sx.q(*(r10_8 + (sx.q((r14_6 + 1).d s% 3) << 2)))
                                int32_t var_238_2 = rax_53.d
                                int64_t rcx_28 = rax_53 * 3
                                zmm10.d = (*(rdx_23 + (rcx_28 << 2))).d f- *(r8_12 + (rcx_28 << 2))
                                zmm6.d = (*(rdx_23 + (rcx_28 << 2) + 4)).d f-
                                    *(r8_12 + (rcx_28 << 2) + 4)
                                zmm11_1 = *(rdx_23 + (rcx_28 << 2) + 8)
                                zmm11_1[0] = zmm11_1[0] f- *(r8_12 + (rcx_28 << 2) + 8)
                                int64_t rcx_29 = sx.q(rax_51) * 3
                                float zmm2_1[0x4] = *(rdx_23 + (rcx_29 << 2) + 8)
                                zmm2_1[0] = zmm2_1[0] f- *(r8_12 + (rcx_29 << 2) + 8)
                                zmm5_1 = *(rdx_23 + (rcx_29 << 2))
                                zmm7 = *(rdx_23 + (rdx_14 << 2) + 4)
                                zmm7[0] = zmm7[0] f- *(r8_12 + (rdx_14 << 2) + 4)
                                zmm1_1 = *(rdx_23 + (rdx_14 << 2) + 8)
                                zmm1_1[0] = zmm1_1[0] f- *(r8_12 + (rdx_14 << 2) + 8)
                                zmm3_1 = *(rdx_23 + (rdx_14 << 2))
                                zmm2_1[0] = zmm2_1[0] f- zmm11_1[0]
                                zmm3_1[0] = zmm3_1[0] f- *(r8_12 + (rdx_14 << 2))
                                zmm4_1 = *(rdx_23 + (rcx_29 << 2) + 4)
                                zmm7[0] = zmm7[0] f- zmm6.d
                                zmm5_1[0] = zmm5_1[0] f- *(r8_12 + (rcx_29 << 2))
                                zmm4_1 = zmm4_1 f- *(r8_12 + (rcx_29 << 2) + 4)
                                zmm1_1[0] = zmm1_1[0] f- zmm11_1[0]
                                zmm3_1[0] = zmm3_1[0] f- zmm10.d
                                zmm7[0] = zmm7[0] * zmm2_1[0]
                                zmm5_1[0] = zmm5_1[0] f- zmm10.d
                                zmm4_1 = zmm4_1 f- zmm6.d
                                zmm3_1[0] = zmm3_1[0] * zmm2_1[0]
                                zmm1_1[0] = zmm1_1[0] * zmm5_1[0]
                                zmm1_1[0] = zmm1_1[0] * zmm4_1
                                zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
                                zmm7[0] = zmm7[0] * zmm5_1[0]
                                zmm1_1[0] = zmm1_1[0] - zmm7[0]
                                zmm3_1[0] = zmm3_1[0] * zmm4_1
                                zmm7[0] = zmm7[0] - zmm3_1[0]
                                zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                                zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                zmm7[0] = zmm7[0] * zmm7[0]
                                zmm3_1[0] = zmm3_1[0] + zmm1_1[0]
                                zmm3_1[0] = zmm3_1[0] + zmm7[0]
                                
                                if (zmm3_1[0] == 1f)
                                    goto label_1415a33a9
                                
                                float var_234_1
                                float var_22c_1
                                
                                if (zmm3_1[0] f>= zmm14_1)
                                    float temp0_11[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                                    zmm2_1 = 0x3f000000
                                    zmm3_1[0] = zmm3_1[0] * 0.5f
                                    temp0_11[0] = temp0_11[0] * temp0_11[0]
                                    zmm3_1[0] = zmm3_1[0] * temp0_11[0]
                                    zmm2_1[0] = 0.5f - zmm3_1[0]
                                    temp0_11[0] = temp0_11[0] * zmm2_1[0]
                                    temp0_11[0] = temp0_11[0] + temp0_11[0]
                                    temp0_11[0] = temp0_11[0] * temp0_11[0]
                                    zmm3_1[0] = zmm3_1[0] * temp0_11[0]
                                    temp0_11[0] = temp0_11[0] * (0.5f - zmm3_1[0])
                                    temp0_11[0] = temp0_11[0] + temp0_11[0]
                                    zmm1_1[0] = zmm1_1[0] * temp0_11[0]
                                    zmm3_1[0] = zmm3_1[0] * temp0_11[0]
                                    zmm7[0] = zmm7[0] * temp0_11[0]
                                label_1415a33a9:
                                    var_22c_1 = zmm7[0]
                                    float var_230_2 = zmm3_1[0]
                                    var_234_1 = zmm1_1[0]
                                else
                                    var_234_1 = data_143dbb1f8[0]
                                    var_22c_1 = data_143dbb200[0]
                                    float var_230_1 = data_143dbb1fc[0]
                                
                                *(r9_5 + 0xc) = var_234_1.q
                                r9_5[5] = var_22c_1
                                zmm0_1 = r9_5[4]
                                zmm2_1 = r9_5[3]
                                zmm1_1 = r9_5[5]
                                zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                                
                                if (zmm2_1[0] f>= zmm15_1)
                                    *r9_5 = var_238_2
                                    r9_5[1] = rax_51
                                    r9_5[2] = var_1e8_1
                                    r9_5[8] = rax_48 - 1
                                    rax_43.b = 1
                                    r9_5[7] = r15_4.d
                                    r9_5[9] = r11_8
                                    r9_5[0xa] = r14_6.d
                                    r9_5[0xb] = 2
                                    r9_5[0xc] = 1
                                    zmm6.d = zmm6.d f* r9_5[4]
                                    zmm10.d = zmm10.d f* r9_5[3]
                                    zmm11_1[0] = zmm11_1[0] f* r9_5[5]
                                    r9_5[0xd].b = 0
                                    zmm6.d = zmm6.d f+ zmm10.d
                                    zmm6.d = zmm6.d f+ zmm11_1[0]
                                    r9_5[6] = zmm6.d
                                else
                                    rax_43.b = 0
                                
                                r12 = arg2
                                *(r10_8 + (r14_6 << 2) + 0x1c) = rbx_2
                                *(r10_8 + (r14_6 << 2) + 0x28) = 0
                                
                                if (rax_43.b == 0)
                                    rsi_2 = var_208:8.q
                                    rax_43.b = 1
                                    rbx_1 = var_208.q
                                    break
                                
                                zmm0_1 = r9_5[6]
                                
                                if (not(zmm0_1[0] f< zmm12_1.d) && not(zmm0_1[0] > zmm13_1))
                                    char rax_60
                                    rax_60, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
                                        sub_141743d50(r9_5, *arg1, *r12)
                                    
                                    if (rax_60 != 0)
                                        int32_t var_140_1 = rbx_2
                                        int64_t* var_148 = &var_248
                                        sub_14175ce20(&var_208, &var_148)
                                
                                r8_11 = var_258_1.d
                                rbx_2 += 1
                                r11_7 = var_1e0_1
                                rsi_3 += 0x38
                                rdi_6 += 1
                                
                                if (rdi_6 s>= var_170_1)
                                    rsi_2 = var_208:8.q
                                    rbx_1 = var_208.q
                                    rax_43 = zx.q(var_268_1)
                                    break
                        
                        if (rax_43.b == 0)
                            zmm10 = 0x80000000
                            zmm6 = zx.o(0)
                            r13 = arg1
                        label_1415a3520:
                            rcx_9 = (rsi_2 - rbx_1) s>> 4
                            
                            if (rcx_9 != 0)
                                r14 = var_264
                                rdx_5 += 1
                                continue
            
            rdi_1 = var_260
            goto label_1415a35a4
    
    zmm15_2.o = zmm15
    zmm14_2.o = zmm14
    zmm12_2.o = zmm12
    zmm11_2.o = zmm11
    zmm10_1.o = var_98_1
    zmm9_1.o = var_88_1
    zmm8_1.o = var_78_1
    zmm7_1.o = var_68_1
    zmm6_2.o = var_58_1
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    if (rbx_1 != 0)
        float (* rax_68)[0x4] = rbx_1
        
        if (((var_1f8 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_68 - rbx_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rbx_1)
else
    *arg5 = 0
    rsi_1 = 2
    *arg7 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg7[1].d = 0
    *arg8 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_210_1 = 0
    arg8[1].d = 0
    int32_t var_210_2 = 0

int64_t rcx_38 = var_248

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

__security_check_cookie(rax_1 ^ &var_2a8)
return zx.q(rsi_1)
