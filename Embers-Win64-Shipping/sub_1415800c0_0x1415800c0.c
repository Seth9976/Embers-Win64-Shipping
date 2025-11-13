// 函数: sub_1415800c0
// 地址: 0x1415800c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t* r12 = arg2
int64_t* r15 = arg1
uint64_t* var_260 = arg6
int64_t var_230
int64_t* var_268 = &var_230
float* var_198 = arg5
int32_t* var_1a8 = arg7
var_230 = 0
int64_t var_228 = 0
char rax_3
int128_t zmm6
int128_t zmm7
int128_t zmm8
int128_t zmm9
int128_t zmm10
int128_t zmm11
int128_t zmm12
int128_t zmm14
int128_t zmm15
rax_3, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
    sub_1416ad3c0(arg1, arg2, arg3, arg4, var_268)
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
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_230, *r15, *r12)
            
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
    int32_t r13_1 = 0
    var_240 = nullptr
    i_2.q = 0
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
    int512_t zmm10_2
    int512_t zmm11_2
    int512_t zmm12_2
    int512_t zmm14_2
    int512_t zmm15_2
    
    if (rcx_7 == 0)
    label_141580af8:
        zmm6_4, zmm7_3, zmm8_3, zmm9_3, zmm10_2, zmm11_2, zmm12_2, zmm14_2, zmm15_2 =
            sub_14154a2a0(*arg1, *arg2, &var_128, var_198, arg6, var_1a8, arg8)
        rdi_1 = 1
    else
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
                label_141580aac:
                    rcx_7 = (rdi_2 - rbx_1) s>> 4
                    
                    if (rcx_7 != 0)
                        rdx_5 += 1
                        continue
                else
                    float var_1c0
                    int128_t zmm9_1 = sub_141758e70(*arg3, &var_1c0, &rsi_5[3], zx.o(0))
                    int128_t zmm6_1 = rsi_5[4]
                    int128_t zmm7_1 = rsi_5[5]
                    int32_t var_190 = (rsi_5[3] ^ zmm9_1).d
                    int32_t var_18c_1 = (zmm6_1 ^ zmm9_1).d
                    int32_t var_188_1 = (zmm7_1 ^ zmm9_1).d
                    float var_138[0x4]
                    float* rax_23
                    int32_t zmm6_2
                    float zmm7_2
                    float zmm8_2
                    uint32_t zmm10_1[0x4]
                    uint32_t zmm13_1
                    int32_t zmm14_1
                    int32_t zmm15_1
                    rax_23, zmm6_2, zmm7_2, zmm8_2, zmm10_1, zmm13_1, zmm14_1, zmm15_1 =
                        sub_1417092b0(arg4, &var_138, &var_190)
                    int32_t var_1bc
                    uint32_t zmm2_1[0x4] = var_1bc
                    uint32_t zmm1_3[0x4] = var_1c0
                    uint128_t zmm12_1 = rsi_5[6]
                    uint128_t zmm9_2 = zx.o(*rax_23)
                    int32_t rax_24 = rax_23[2]
                    zmm1_3[0] = zmm1_3[0] f- zmm9_2.d
                    uint128_t zmm0_3 = _mm_shuffle_ps(zmm9_2, zmm9_2, 0x55)
                    zmm2_1[0] = zmm2_1[0] f- zmm0_3.d
                    int32_t var_1b8
                    zmm0_3.d = var_1b8.d f- rax_24
                    uint32_t var_180 = zmm1_3[0]
                    zmm1_3[0] = zmm1_3[0] f* zmm8_2
                    uint32_t var_17c_1 = zmm2_1[0]
                    zmm2_1[0] = zmm2_1[0] f* zmm6_2
                    int32_t var_178_1 = zmm0_3.d
                    zmm0_3.d = zmm0_3.d f* zmm7_2
                    zmm2_1[0] = zmm2_1[0] f+ zmm1_3[0]
                    zmm2_1[0] = zmm2_1[0] f+ zmm0_3.d
                    zmm0_3.d = zmm12_1.d f* 0.00999999978f
                    zmm2_1 = _mm_min_ss(zmm2_1[0], zmm13_1)
                    zmm0_3 = _mm_and_ps(zmm0_3, zmm10_1)
                    zmm13_1 = zmm2_1[0]
                    zmm2_1[0] = zmm2_1[0] f- zmm12_1.d
                    
                    if (_mm_and_ps(zmm2_1, zmm10_1)[0] f<= zmm0_3.d)
                        zmm6_4, zmm7_3, zmm8_3, zmm9_3, zmm10_2, zmm11_2, zmm12_2, zmm14_2, 
                            zmm15_2 = sub_14154a2a0(*r15, *r12, rsi_5, var_198, arg6, var_1a8, arg8)
                        rsi_1 = var_240
                        rdi_1 = 0
                        break
                    
                    if (not(zmm13_1 f< zmm12_1.d))
                        int64_t r14_2 = sx.q(r15[1].d)
                        zmm0_3 = zx.o(*(rsi_5 + 0xc))
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
                        int32_t rax_36 = (r14_2 + 1).d
                        var_118_1[2] = zmm12_1.d
                        var_128[3].q = zmm0_3.q
                        int32_t var_1d0_1 = r14_2.d
                        r15[1].d = rax_36
                        
                        if (rax_36 s> *(r15 + 0xc))
                            sub_14083a7e0(r15)
                        
                        int64_t rcx_16 = *r15
                        int64_t rdx_12 = r14_2 * 3
                        *(rcx_16 + (rdx_12 << 2)) = var_1c0.q
                        *(rcx_16 + (rdx_12 << 2) + 8) = var_1b8
                        int64_t r14_3 = sx.q(r12[1].d)
                        int32_t rax_38 = (r14_3 + 1).d
                        r12[1].d = rax_38
                        
                        if (rax_38 s> *(r12 + 0xc))
                            sub_14083a7e0(r12)
                        
                        int64_t rax_39 = *r12
                        int64_t rcx_18 = r14_3 * 3
                        int32_t var_238 = 0
                        *(rax_39 + (rcx_18 << 2)) = zmm9_2.q
                        *(rax_39 + (rcx_18 << 2) + 8) = rax_24
                        rsi_5[0xd].b = 1
                        
                        if (r13_1 s< 0 && r13_1 != 0)
                            sub_1405c5570(&var_240, 0)
                        
                        sub_1415c5980(&var_230, var_248_1, &var_180, &var_240)
                        int64_t r13_2 = sx.q(var_228.d)
                        int32_t r8_12 = var_238
                        int32_t rax_40 = r8_12 + r13_2.d
                        var_228.d = rax_40
                        
                        if (rax_40 s> var_228:4.d)
                            sub_1407c3b60(&var_230)
                            r8_12 = var_238
                        
                        if (r8_12 s>= 3)
                            int64_t rax_41 = sx.q(r8_12)
                            int64_t rsi_6 = 0
                            
                            if (r8_12 s> 0)
                                void* rdi_3 = r13_2 * 0x38
                                int32_t rbx_2 = r13_2.d
                                int32_t r11_7 = 1 - r13_2.d
                                int32_t var_1c8_1 = r11_7
                                
                                do
                                    int64_t* rdx_17 = var_240
                                    int64_t rcx_22 = var_230
                                    int64_t r15_1 = sx.q(rdx_17[rsi_6].d)
                                    int64_t r14_4 = sx.q(*(&rdx_17[rsi_6] + 4))
                                    int32_t* r9_5 = rdi_3 + rcx_22
                                    int64_t r10_8 = r15_1 * 0x38 + rcx_22
                                    int32_t r11_8 = rbx_2 + 1
                                    
                                    if (r11_7 + rbx_2 s>= r8_12)
                                        r11_8 = r13_2.d
                                    
                                    int64_t r8_13 = *r12
                                    int32_t rax_46 = rbx_2
                                    
                                    if (rbx_2 s<= r13_2.d)
                                        rax_46 = r8_12 + r13_2.d
                                    
                                    int32_t rax_48 = *(r10_8 + (r14_4 << 2))
                                    int64_t rdx_22 = *arg1
                                    int64_t rax_50 =
                                        sx.q(*(r10_8 + (sx.q((r14_4 + 1).d s% 3) << 2)))
                                    int32_t var_220_2 = rax_50.d
                                    int64_t rcx_25 = rax_50 * 3
                                    zmm7_2 = *(rdx_22 + (rcx_25 << 2)) f- *(r8_13 + (rcx_25 << 2))
                                    float zmm6_3 = *(rdx_22 + (rcx_25 << 2) + 4) f-
                                        *(r8_13 + (rcx_25 << 2) + 4)
                                    zmm8_2 = *(rdx_22 + (rcx_25 << 2) + 8) f-
                                        *(r8_13 + (rcx_25 << 2) + 8)
                                    int64_t rcx_26 = sx.q(rax_48) * 3
                                    float zmm2_2[0x4] = *(rdx_22 + (rcx_26 << 2) + 8)
                                    zmm2_2[0] = zmm2_2[0] f- *(r8_13 + (rcx_26 << 2) + 8)
                                    float zmm5_1[0x4] = *(rdx_22 + (rcx_26 << 2))
                                    zmm9_2.d = (*(rdx_22 + (rdx_12 << 2) + 4)).d f-
                                        *(r8_13 + (rdx_12 << 2) + 4)
                                    zmm1_1 = *(rdx_22 + (rdx_12 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_13 + (rdx_12 << 2) + 8)
                                    float zmm3_1[0x4] = *(rdx_22 + (rdx_12 << 2))
                                    zmm2_2[0] = zmm2_2[0] - zmm8_2
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_13 + (rdx_12 << 2))
                                    float zmm4_1 = *(rdx_22 + (rcx_26 << 2) + 4)
                                    zmm9_2.d = zmm9_2.d f- zmm6_3
                                    zmm5_1[0] = zmm5_1[0] f- *(r8_13 + (rcx_26 << 2))
                                    zmm4_1 = zmm4_1 f- *(r8_13 + (rcx_26 << 2) + 4)
                                    zmm1_1[0] = zmm1_1[0] - zmm8_2
                                    zmm3_1[0] = zmm3_1[0] - zmm7_2
                                    float zmm0_1[0x4] = zmm9_2
                                    zmm0_1[0] = zmm0_1[0] * zmm2_2[0]
                                    zmm5_1[0] = zmm5_1[0] - zmm7_2
                                    zmm10_1 = zmm1_1
                                    zmm4_1 = zmm4_1 - zmm6_3
                                    zmm3_1[0] = zmm3_1[0] * zmm2_2[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm5_1[0]
                                    zmm10_1[0] = zmm10_1[0] f* zmm4_1
                                    zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
                                    zmm9_2.d = zmm9_2.d f* zmm5_1[0]
                                    zmm10_1[0] = zmm10_1[0] f- zmm0_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm4_1
                                    zmm9_2.d = zmm9_2.d f- zmm3_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                                    zmm0_1 = zmm10_1
                                    zmm0_1[0] = zmm0_1[0] f* zmm10_1[0]
                                    zmm1_1 = zmm9_2
                                    zmm1_1[0] = zmm1_1[0] f* zmm9_2.d
                                    zmm3_1[0] = zmm3_1[0] + zmm0_1[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm1_1[0]
                                    uint32_t var_21c_1
                                    float var_214_1
                                    
                                    if (zmm3_1[0] != 1f)
                                        if (zmm3_1[0] f>= zmm14_1)
                                            float temp0_10[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                                            zmm2_2 = 0x3f000000
                                            zmm3_1[0] = zmm3_1[0] * 0.5f
                                            temp0_10[0] = temp0_10[0] * temp0_10[0]
                                            zmm3_1[0] = zmm3_1[0] * temp0_10[0]
                                            zmm2_2[0] = 0.5f - zmm3_1[0]
                                            temp0_10[0] = temp0_10[0] * zmm2_2[0]
                                            temp0_10[0] = temp0_10[0] + temp0_10[0]
                                            temp0_10[0] = temp0_10[0] * temp0_10[0]
                                            zmm3_1[0] = zmm3_1[0] * temp0_10[0]
                                            temp0_10[0] = temp0_10[0] * (0.5f - zmm3_1[0])
                                            temp0_10[0] = temp0_10[0] + temp0_10[0]
                                            zmm1_1 = temp0_10
                                            temp0_10[0] = temp0_10[0] f* zmm10_1[0]
                                            temp0_10[0] = temp0_10[0] f* zmm9_2.d
                                            var_21c_1 = temp0_10[0]
                                            zmm1_1[0] = zmm1_1[0] * zmm3_1[0]
                                            var_214_1 = temp0_10[0]
                                        else
                                            zmm1_1 = data_143dbb1fc
                                            var_21c_1 = data_143dbb1f8[0]
                                            var_214_1 = data_143dbb200[0]
                                        
                                        float var_218_2 = zmm1_1[0]
                                    else
                                        var_21c_1 = zmm10_1[0]
                                        float var_218_1 = zmm3_1[0]
                                        var_214_1 = zmm9_2.d
                                    
                                    *(r9_5 + 0xc) = var_21c_1.q
                                    r9_5[5] = var_214_1
                                    zmm0_1 = r9_5[4]
                                    zmm2_2 = r9_5[3]
                                    zmm1_1 = r9_5[5]
                                    zmm2_2[0] = zmm2_2[0] * zmm2_2[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_2[0] = zmm2_2[0] + zmm0_1[0]
                                    zmm2_2[0] = zmm2_2[0] + zmm1_1[0]
                                    float rax_53
                                    
                                    if (zmm2_2[0] f>= zmm15_1)
                                        *r9_5 = var_220_2
                                        r9_5[1] = rax_48
                                        r9_5[2] = var_1d0_1
                                        r9_5[8] = rax_46 - 1
                                        rax_53.b = 1
                                        r9_5[7] = r15_1.d
                                        r9_5[9] = r11_8
                                        r9_5[0xa] = r14_4.d
                                        r9_5[0xb] = 2
                                        r9_5[0xc] = 1
                                        r9_5[0xd].b = 0
                                        r9_5[6] = zmm6_3 f* r9_5[4] + zmm7_2 f* r9_5[3]
                                            + zmm8_2 f* r9_5[5]
                                    else
                                        rax_53.b = 0
                                    
                                    *(r10_8 + (r14_4 << 2) + 0x1c) = rbx_2
                                    *(r10_8 + (r14_4 << 2) + 0x28) = 0
                                    
                                    if (rax_53.b == 0)
                                        rbx_1 = var_1f0.q
                                        goto label_141580ac1
                                    
                                    zmm0_1 = r9_5[6]
                                    r12 = arg2
                                    r15 = arg1
                                    
                                    if (not(zmm0_1[0] f< zmm12_1.d) && not(zmm0_1[0] f> zmm13_1))
                                        char rax_57
                                        rax_57, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
                                            sub_141743d50(r9_5, *r15, *r12)
                                        
                                        if (rax_57 != 0)
                                            int32_t var_140_1 = rbx_2
                                            int64_t* var_148 = &var_230
                                            sub_14175ce20(&var_1f0, &var_148)
                                    
                                    r8_12 = var_238
                                    rbx_2 += 1
                                    r11_7 = var_1c8_1
                                    rdi_3 += 0x38
                                    rsi_6 += 1
                                while (rsi_6 s< rax_41)
                                
                                rdi_2 = var_1f0:8.q
                                rbx_1 = var_1f0.q
                            
                            int32_t var_234
                            r13_1 = var_234
                            goto label_141580aac
            
        label_141580ac1:
            rsi_1 = var_240
            goto label_141580af8
    
    zmm15_2.o = zmm15
    zmm14_2.o = zmm14
    zmm12_2.o = zmm12
    zmm11_2.o = zmm11
    zmm10_2.o = zmm10
    zmm9_3.o = zmm9
    zmm8_3.o = zmm8
    zmm7_3.o = zmm7
    zmm6_4.o = zmm6
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    if (rbx_1 != 0)
        float (* rax_62)[0x4] = rbx_1
        
        if (((var_1e0 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_62 - rbx_1 - 8 u> 0x1f)
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
