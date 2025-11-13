// 函数: sub_141566860
// 地址: 0x141566860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int64_t* r15 = arg1
int64_t* r12 = arg2
int32_t r14 = 0
uint64_t* var_270 = arg8
float var_21c = 3.40282347e+38f
int32_t* var_198 = arg9
int32_t var_254 = 0
int64_t var_238 = 0
int64_t var_230 = 0
char rax_2
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13[0x4]
rax_2, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 =
    sub_1416987b0(r15, arg2, arg3, arg4, &var_238)
int32_t rsi_1

if (rax_2 != 0)
    int128_t var_1f8
    __builtin_memset(&var_1f8, 0, 0x18)
    float (* rsi_2)[0x4] = var_1f8:8.q
    int32_t i = 0
    float (* rbx_1)[0x4] = var_1f8.q
    int64_t* var_250
    int64_t var_1e8
    float zmm1_1[0x4]
    
    if (var_230.d s> 0)
        do
            char rax_4
            rax_4, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, arg5, arg6 =
                sub_141743d50(sx.q(i) * 0x38 + var_238, *r15, *r12)
            
            if (rax_4 != 0)
                int64_t var_248
                var_248.d = i
                var_250 = &var_238
                
                if (var_1e8 == rsi_2)
                    sub_141701fc0(&var_1f8, rsi_2, &var_250)
                    rsi_2 = var_1f8:8.q
                    rbx_1 = var_1f8.q
                else
                    *rsi_2 = var_250.o
                    rsi_2 = &rsi_2[1]
                    var_1f8:8.q = rsi_2
                
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
        while (i s< var_230.d)
    
    int64_t rcx_9 = (rsi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_9 == 0)
        rdx_4 = var_238
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_238
    
    float zmm0_1[0x4] = *rdx_4
    int64_t* rdi_1 = nullptr
    zmm1_1 = rdx_4[1]
    var_250 = nullptr
    float var_58_1[0x4] = zmm6
    float var_68_1[0x4] = zmm7
    float var_78_1[0x4] = zmm8
    float var_88_1[0x4] = zmm9
    float var_98_1[0x4] = zmm10
    float var_a8_1[0x4] = zmm11
    float var_b8_1[0x4] = zmm12
    float var_c8_1[0x4] = zmm13
    float var_128[0x4] = zmm0_1
    int64_t var_248_1 = 0
    float var_118_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    float var_d8_1[0x4] = arg5
    float var_e8_1[0x4] = arg6
    int64_t var_f8_1 = rdx_4[3][0].q
    float var_108_1[0x4] = rdx_4[2]
    int512_t zmm6_1
    int512_t zmm7_1
    int512_t zmm8_1
    int512_t zmm9_1
    int512_t zmm10_1
    int512_t zmm11_1
    int512_t zmm12_1
    int512_t zmm13_1
    int512_t zmm14
    int512_t zmm15
    
    if (rcx_9 == 0)
    label_1415674dc:
        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14, zmm15 =
            sub_14154a2a0(*r15, *r12, &var_128, arg7, arg8, var_198, arg10)
        rsi_1 = 1
    else
        zmm6 = 0x80000000
        zmm7 = zx.o(0)
        
        while (true)
            if (rdx_5 s< 0x80)
                int64_t r13_1 = sx.q((*rbx_1)[2])
                int32_t var_240_1 = r13_1.d
                
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
                    
                    r14 = var_254
                    rbx_1[i_2] = zmm1_1
                
                rsi_2 -= 0x10
                int32_t* rdi_5 = r13_1 * 0x38 + var_238
                var_1f8:8.q = rsi_2
                
                if (rdi_5[0xd].b != 0)
                    goto label_141567460
                
                arg5 = rdi_5[4]
                zmm13 = rdi_5[3]
                arg6 = rdi_5[5]
                void* rax_20 = *arg3
                float zmm4_1[0x4] = *(rax_20 + 0x1c)
                float zmm3_1[0x4] = *(rax_20 + 0x20)
                float zmm5_1[0x4] = *(rax_20 + 0x24)
                zmm4_1[0] = zmm4_1[0] * zmm13[0]
                arg5[0] = arg5[0] * zmm3_1[0]
                arg6[0] = arg6[0] * zmm5_1[0]
                zmm4_1[0] = zmm4_1[0] + arg5[0]
                zmm4_1[0] = zmm4_1[0] + arg6[0]
                int32_t var_254_1
                int32_t* r14_3
                float zmm2_1[0x4]
                
                if (zmm4_1[0] < zmm7[0])
                    int32_t rax_21 = *(rax_20 + 0x18)
                    var_254_1 = r14 | 2
                    int64_t var_208
                    r14_3 = &var_208
                    var_208 = *(rax_20 + 0x10)
                    int32_t var_200_3 = rax_21
                else
                    zmm2_1 = *(rax_20 + 0x28)
                    var_254_1 = r14 | 1
                    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                    float var_180
                    r14_3 = &var_180
                    zmm2_1[0] = zmm2_1[0] * zmm3_1[0]
                    zmm2_1[0] = zmm2_1[0] f+ *(rax_20 + 0x10)
                    zmm2_1[0] = zmm2_1[0] * zmm5_1[0]
                    zmm2_1[0] = zmm2_1[0] f+ *(rax_20 + 0x14)
                    zmm2_1[0] = zmm2_1[0] f+ *(rax_20 + 0x18)
                    var_180 = zmm2_1[0]
                    float var_17c_1 = zmm2_1[0]
                    float var_178_1 = zmm2_1[0]
                
                int32_t rax_22 = r14_3[2]
                zmm4_1 = arg5 ^ zmm6
                int64_t var_1c0_1 = *r14_3
                int32_t rcx_16 = var_254_1 & 0xfffffffd
                zmm7 = arg6 ^ zmm6
                zmm10 = zmm7
                zmm11 = zmm13 ^ zmm6
                
                if ((var_254_1.b & 2) == 0)
                    rcx_16 = var_254_1
                
                int32_t rdx_11 = rcx_16 & 0xfffffffe
                
                if ((rcx_16.b & 1) == 0)
                    rdx_11 = rcx_16
                
                var_254 = rdx_11
                int128_t* rax_25 = *arg4
                zmm8 = *(rax_25 + 4)
                zmm9 = *(rax_25 + 8)
                zmm3_1 = *rax_25
                zmm2_1 = *(rax_25 + 0xc)
                void* rax_26 = arg4[1]
                zmm4_1[0] = zmm4_1[0] * zmm9[0]
                zmm4_1[0] = zmm4_1[0] * zmm3_1[0]
                zmm10[0] = zmm10[0] * zmm8[0]
                zmm11[0] = zmm11[0] * zmm9[0]
                zmm10[0] = zmm10[0] - zmm4_1[0]
                zmm7[0] = zmm7[0] * zmm3_1[0]
                zmm11[0] = zmm11[0] - zmm7[0]
                zmm11[0] = zmm11[0] * zmm8[0]
                zmm10[0] = zmm10[0] + zmm10[0]
                zmm4_1[0] = zmm4_1[0] - zmm11[0]
                zmm11[0] = zmm11[0] + zmm11[0]
                zmm10[0] = zmm10[0] * zmm9[0]
                zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
                zmm11[0] = zmm11[0] * zmm2_1[0]
                zmm11[0] = zmm11[0] + zmm4_1[0]
                zmm4_1[0] = zmm4_1[0] * zmm3_1[0]
                zmm11[0] = zmm11[0] * zmm9[0]
                zmm10[0] = zmm10[0] - zmm4_1[0]
                zmm11[0] = zmm11[0] * zmm3_1[0]
                zmm10[0] = zmm10[0] * zmm2_1[0]
                zmm10[0] = zmm10[0] * zmm8[0]
                zmm10[0] = zmm10[0] + zmm11[0]
                zmm4_1[0] = zmm4_1[0] * zmm8[0]
                zmm10[0] = zmm10[0] + zmm11[0]
                zmm4_1[0] = zmm4_1[0] * zmm2_1[0]
                zmm11[0] = zmm11[0] - zmm10[0]
                zmm4_1[0] = zmm4_1[0] - zmm11[0]
                zmm4_1[0] = zmm4_1[0] + zmm7[0]
                zmm7 = zx.o(0)
                zmm4_1[0] = zmm4_1[0] + zmm10[0]
                zmm11[0] = zmm11[0] + zmm4_1[0]
                
                if (zmm4_1[0] >= 0f)
                    zmm3_1 = *(rax_26 + 0x1c)
                else
                    zmm3_1 = *(rax_26 + 0x10)
                
                if (zmm10[0] >= 0f)
                    zmm2_1 = *(rax_26 + 0x20)
                else
                    zmm2_1 = *(rax_26 + 0x14)
                
                if (zmm11[0] >= 0f)
                    zmm0_1 = *(rax_26 + 0x24)
                else
                    zmm0_1 = *(rax_26 + 0x18)
                
                float (* rax_27)[0x4] = arg4[2]
                zmm12 = rdi_5[6]
                float temp0_5[0x4] = _mm_unpacklo_ps(zmm3_1, zmm0_1[0].q)
                float temp0_6[0x4] = _mm_unpacklo_ps(zmm2_1, 0)
                zmm5_1 = *rax_27
                float temp0_7[0x4] = _mm_unpacklo_ps(temp0_5, temp0_6[0].q)
                float temp0_8[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                float temp0_9[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), temp0_9)
                float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xd2), temp0_8)
                float temp0_14[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                float temp0_15[0x4] = _mm_sub_ps(temp0_13, temp0_11)
                float temp0_16[0x4] = _mm_add_ps(temp0_15, temp0_15)
                float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_16)
                float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xc9), temp0_9)
                float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xd2)
                float temp0_21[0x4] = _mm_add_ps(temp0_17, temp0_7)
                zmm2_1 = var_1c0_1.d
                float temp0_25[0x4] = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_20, temp0_8), temp0_19), temp0_21), 
                    rax_27[1])
                zmm2_1[0] = zmm2_1[0] - temp0_25[0]
                float var_1b0_1 = temp0_25[0]
                float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
                float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
                zmm3_1 = var_1c0_1:4.d
                zmm3_1[0] = zmm3_1[0] - temp0_26[0]
                float var_1ac_1 = temp0_26[0]
                zmm0_1 = rax_22
                zmm0_1[0] = zmm0_1[0] - temp0_27[0]
                zmm13[0] = zmm13[0] * zmm2_1[0]
                float var_1a8_1 = temp0_27[0]
                float var_16c_1 = zmm3_1[0]
                zmm3_1[0] = zmm3_1[0] * arg5[0]
                float var_168_1 = zmm0_1[0]
                zmm0_1[0] = zmm0_1[0] * arg6[0]
                zmm13[0] = zmm13[0] + zmm3_1[0]
                float var_170 = zmm2_1[0]
                zmm13[0] = zmm13[0] + zmm0_1[0]
                zmm12[0] = zmm12[0] * 0.00999999978f
                zmm13 = __minss_xmmss_memss(zmm13[0], var_21c)
                zmm0_1 = __andps_xmmxud_memxud(zmm12, data_142d3f770)
                var_21c = zmm13[0]
                zmm13[0] = zmm13[0] - zmm12[0]
                
                if (__andps_xmmxud_memxud(zmm13, data_142d3f770)[0] <= zmm0_1[0])
                    zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14, 
                        zmm15 = sub_14154a2a0(*r15, *r12, rdi_5, arg7, arg8, var_198, arg10)
                    rdi_1 = var_250
                    rsi_1 = 0
                    break
                
                if (not(zmm13[0] < zmm12[0]))
                    int64_t r13_2 = sx.q(r15[1].d)
                    zmm0_1 = zx.o(*(rdi_5 + 0xc))
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
                    int32_t rax_38 = (r13_2 + 1).d
                    var_118_1[2] = zmm12[0]
                    var_128[3].q = zmm0_1.q
                    var_f8_1:4.b = 0
                    int32_t var_1d4_1 = r13_2.d
                    r15[1].d = rax_38
                    
                    if (rax_38 s> *(r15 + 0xc))
                        sub_14083a7e0(r15)
                    
                    int64_t rcx_19 = *r15
                    int32_t rax_39 = r14_3[2]
                    int64_t rdx_14 = r13_2 * 3
                    *(rcx_19 + (rdx_14 << 2)) = *r14_3
                    *(rcx_19 + (rdx_14 << 2) + 8) = rax_39
                    int64_t r14_5 = sx.q(r12[1].d)
                    int32_t rax_40 = (r14_5 + 1).d
                    r12[1].d = rax_40
                    
                    if (rax_40 s> *(r12 + 0xc))
                        sub_14083a7e0(r12)
                    
                    int64_t rcx_21 = *r12
                    int64_t rdx_16 = r14_5 * 3
                    var_248_1.d = 0
                    *(rcx_21 + (rdx_16 << 2)) = var_1b0_1.q
                    *(rcx_21 + (rdx_16 << 2) + 8) = var_1a8_1
                    int32_t rax_42 = var_248_1:4.d
                    rdi_5[0xd].b = 1
                    
                    if (rax_42 s< 0 && rax_42 != 0)
                        sub_1405c5570(&var_250, 0)
                    
                    sub_1415c5980(&var_238, var_240_1, &var_170, &var_250)
                    int64_t r13_3 = sx.q(var_230.d)
                    int32_t r8_10 = var_248_1.d
                    int32_t rax_43 = r8_10 + r13_3.d
                    var_230.d = rax_43
                    
                    if (rax_43 s> var_230:4.d)
                        sub_1407c3b60(&var_238)
                        r8_10 = var_248_1.d
                    
                    if (r8_10 s>= 3)
                        int64_t rdi_6 = 0
                        char var_258_1 = 0
                        uint64_t var_140_1 = sx.q(r8_10)
                        uint64_t rax_44
                        
                        if (r8_10 s<= 0)
                            rax_44.b = 0
                        else
                            void* rsi_3 = r13_3 * 0x38
                            int32_t rbx_2 = r13_3.d
                            int32_t r11_7 = 1 - r13_3.d
                            int32_t var_1cc_1 = r11_7
                            
                            while (true)
                                int64_t* rdx_19 = var_250
                                int64_t rcx_25 = var_238
                                int64_t r15_1 = sx.q(rdx_19[rdi_6].d)
                                int64_t r14_6 = sx.q(*(&rdx_19[rdi_6] + 4))
                                int32_t* r9_5 = rsi_3 + rcx_25
                                int64_t r10_8 = r15_1 * 0x38 + rcx_25
                                int32_t r11_8 = rbx_2 + 1
                                
                                if (r11_7 + rbx_2 s>= r8_10)
                                    r11_8 = r13_3.d
                                
                                int64_t r8_11 = *r12
                                int32_t rax_49 = rbx_2
                                
                                if (rbx_2 s<= r13_3.d)
                                    rax_49 = r8_10 + r13_3.d
                                
                                int32_t rax_51 = *(r10_8 + (r14_6 << 2))
                                int64_t rdx_24 = *arg1
                                int64_t rax_53 = sx.q(*(r10_8 + (sx.q((r14_6 + 1).d s% 3) << 2)))
                                int32_t var_1d8_1 = rax_53.d
                                int64_t rcx_28 = rax_53 * 3
                                zmm10 = *(rdx_24 + (rcx_28 << 2))
                                zmm10[0] = zmm10[0] f- *(r8_11 + (rcx_28 << 2))
                                zmm6 = *(rdx_24 + (rcx_28 << 2) + 4)
                                zmm6[0] = zmm6[0] f- *(r8_11 + (rcx_28 << 2) + 4)
                                zmm11 = *(rdx_24 + (rcx_28 << 2) + 8)
                                zmm11[0] = zmm11[0] f- *(r8_11 + (rcx_28 << 2) + 8)
                                int64_t rcx_29 = sx.q(rax_51) * 3
                                zmm2_1 = *(rdx_24 + (rcx_29 << 2) + 8)
                                zmm2_1[0] = zmm2_1[0] f- *(r8_11 + (rcx_29 << 2) + 8)
                                zmm5_1 = *(rdx_24 + (rcx_29 << 2))
                                zmm7 = *(rdx_24 + (rdx_14 << 2) + 4)
                                zmm7[0] = zmm7[0] f- *(r8_11 + (rdx_14 << 2) + 4)
                                zmm1_1 = *(rdx_24 + (rdx_14 << 2) + 8)
                                zmm1_1[0] = zmm1_1[0] f- *(r8_11 + (rdx_14 << 2) + 8)
                                zmm3_1 = *(rdx_24 + (rdx_14 << 2))
                                zmm2_1[0] = zmm2_1[0] - zmm11[0]
                                zmm3_1[0] = zmm3_1[0] f- *(r8_11 + (rdx_14 << 2))
                                zmm4_1 = *(rdx_24 + (rcx_29 << 2) + 4)
                                zmm7[0] = zmm7[0] - zmm6[0]
                                zmm5_1[0] = zmm5_1[0] f- *(r8_11 + (rcx_29 << 2))
                                zmm4_1[0] = zmm4_1[0] f- *(r8_11 + (rcx_29 << 2) + 4)
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
                                    goto label_1415672fb
                                
                                float var_228_1
                                float var_220_1
                                
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
                                label_1415672fb:
                                    var_220_1 = zmm7[0]
                                    float var_224_2 = zmm3_1[0]
                                    var_228_1 = zmm1_1[0]
                                else
                                    var_228_1 = data_143dbb1f8[0]
                                    var_220_1 = data_143dbb200[0]
                                    float var_224_1 = data_143dbb1fc[0]
                                
                                *(r9_5 + 0xc) = var_228_1.q
                                r9_5[5] = var_220_1
                                zmm0_1 = r9_5[4]
                                zmm2_1 = r9_5[3]
                                zmm1_1 = r9_5[5]
                                zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                                
                                if (zmm2_1[0] >= 9.99999975e-05f)
                                    *r9_5 = var_1d8_1
                                    r9_5[1] = rax_51
                                    r9_5[2] = var_1d4_1
                                    r9_5[8] = rax_49 - 1
                                    rax_44.b = 1
                                    r9_5[7] = r15_1.d
                                    r9_5[9] = r11_8
                                    r9_5[0xa] = r14_6.d
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
                                    rax_44.b = 0
                                
                                r12 = arg2
                                r15 = arg1
                                *(r10_8 + (r14_6 << 2) + 0x1c) = rbx_2
                                *(r10_8 + (r14_6 << 2) + 0x28) = 0
                                
                                if (rax_44.b == 0)
                                    rsi_2 = var_1f8:8.q
                                    rax_44.b = 1
                                    rbx_1 = var_1f8.q
                                    zmm7 = zx.o(0)
                                    break
                                
                                zmm0_1 = r9_5[6]
                                
                                if (not(zmm0_1[0] < zmm12[0]) && not(zmm0_1[0] > zmm13[0]))
                                    char rax_59
                                    rax_59, zmm12, zmm13 = sub_141743d50(r9_5, *r15, *r12)
                                    
                                    if (rax_59 != 0)
                                        int32_t var_130_1 = rbx_2
                                        int64_t* var_138 = &var_238
                                        sub_14175ce20(&var_1f8, &var_138)
                                
                                r8_10 = var_248_1.d
                                rbx_2 += 1
                                r11_7 = var_1cc_1
                                rsi_3 += 0x38
                                rdi_6 += 1
                                
                                if (rdi_6 s>= var_140_1)
                                    rsi_2 = var_1f8:8.q
                                    zmm7 = zx.o(0)
                                    rbx_1 = var_1f8.q
                                    rax_44 = zx.q(var_258_1)
                                    break
                        
                        if (rax_44.b == 0)
                            zmm6 = 0x80000000
                        label_141567460:
                            rcx_9 = (rsi_2 - rbx_1) s>> 4
                            
                            if (rcx_9 != 0)
                                r14 = var_254
                                rdx_5 += 1
                                continue
            
            rdi_1 = var_250
            goto label_1415674dc
    
    zmm15.o = var_e8_1
    zmm14.o = var_d8_1
    zmm13_1.o = var_c8_1
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
        float (* rax_66)[0x4] = rbx_1
        
        if (((var_1e8 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_66 - rbx_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rbx_1)
else
    *arg7 = 0
    rsi_1 = 2
    *arg9 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg9[1].d = 0
    *arg10 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_200_1 = 0
    arg10[1].d = 0
    int32_t var_200_2 = 0

int64_t rcx_38 = var_238

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

__security_check_cookie(rax_1 ^ &var_298)
return zx.q(rsi_1)
