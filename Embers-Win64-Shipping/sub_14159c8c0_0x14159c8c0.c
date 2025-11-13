// 函数: sub_14159c8c0
// 地址: 0x14159c8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t* r14 = arg1
int32_t r15 = 0
int64_t* r12 = arg2
uint64_t* var_260 = arg6
int64_t var_230
int64_t* var_268 = &var_230
int32_t* var_1a8 = arg7
var_230 = 0
int64_t var_228 = 0
char rax_2
float zmm6[0x4]
float zmm7[0x4]
int128_t zmm8
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
int128_t zmm12
int128_t zmm13
int128_t zmm15
rax_2, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm15 =
    sub_1416c4810(r14, arg2, arg3, arg4, var_268)
int32_t rsi_1

if (rax_2 != 0)
    int128_t var_1f0
    __builtin_memset(&var_1f0, 0, 0x18)
    float (* rsi_2)[0x4] = var_1f0:8.q
    int32_t i = 0
    float (* rbx_1)[0x4] = var_1f0.q
    int64_t* var_248
    int64_t var_1e0
    float zmm1_1[0x4]
    
    if (var_228.d s> 0)
        do
            char rax_4
            rax_4, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_230, *r14, *r12)
            
            if (rax_4 != 0)
                int64_t var_240
                var_240.d = i
                var_248 = &var_230
                
                if (var_1e0 == rsi_2)
                    sub_141701fc0(&var_1f0, rsi_2, &var_248)
                    rsi_2 = var_1f0:8.q
                    rbx_1 = var_1f0.q
                else
                    *rsi_2 = var_248.o
                    rsi_2 = &rsi_2[1]
                    var_1f0:8.q = rsi_2
                
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
        while (i s< var_228.d)
    
    int64_t rcx_9 = (rsi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_9 == 0)
        rdx_4 = var_230
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_230
    
    float zmm0_1[0x4] = *rdx_4
    int64_t* rdi_1 = nullptr
    zmm1_1 = rdx_4[1]
    var_248 = nullptr
    float var_58_1[0x4] = zmm6
    float var_68_1[0x4] = zmm7
    int128_t var_78_1 = zmm8
    float var_88_1[0x4] = zmm9
    float var_98_1[0x4] = zmm10
    float var_a8_1[0x4] = zmm11
    float var_128[0x4] = zmm0_1
    int64_t var_240_1 = 0
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
    int512_t zmm12_2
    int512_t zmm13_2
    int512_t zmm15_2
    
    if (rcx_9 == 0)
    label_14159d313:
        zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_2, zmm13_2, zmm15_2 =
            sub_14154a2a0(*arg1, *arg2, &var_128, arg5, arg6, var_1a8, arg8)
        rsi_1 = 1
    else
        float zmm2_1[0x4] = 0x80000000
        
        while (true)
            if (rdx_5 s< 0x80)
                int64_t r13_1 = sx.q((*rbx_1)[2])
                int32_t var_238_1 = r13_1.d
                
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
                    
                    r14 = arg1
                    rbx_1[i_2] = zmm1_1
                
                rsi_2 -= 0x10
                int32_t* rdi_5 = r13_1 * 0x38 + var_230
                var_1f0:8.q = rsi_2
                
                if (rdi_5[0xd].b != 0)
                label_14159d2c2:
                    rcx_9 = (rsi_2 - rbx_1) s>> 4
                    
                    if (rcx_9 != 0)
                        r14 = arg1
                        rdx_5 += 1
                        continue
                else
                    zmm11 = rdi_5[3]
                    void* rax_20 = *arg3
                    
                    if (zmm11[0] >= 0f)
                        zmm9 = *(rax_20 + 0x1c)
                    else
                        zmm9 = *(rax_20 + 0x10)
                    
                    float var_1c0_1 = zmm9[0]
                    
                    if (0f f<= rdi_5[4])
                        zmm8 = *(rax_20 + 0x20)
                    else
                        zmm8 = *(rax_20 + 0x14)
                    
                    int32_t var_1bc_1 = zmm8.d
                    
                    if (0f f<= rdi_5[5])
                        zmm10 = *(rax_20 + 0x24)
                    else
                        zmm10 = *(rax_20 + 0x18)
                    
                    zmm7 = rdi_5[4]
                    zmm6 = rdi_5[5]
                    float var_1b8_1 = zmm10[0]
                    float var_190 = (zmm11 ^ zmm2_1)[0]
                    float var_18c_1 = (zmm7 ^ zmm2_1)[0]
                    float var_188_1 = (zmm6 ^ zmm2_1)[0]
                    float var_138[0x4]
                    float* rax_21
                    float zmm6_1
                    float zmm14_1
                    int32_t zmm15_1
                    rax_21, zmm6_1, zmm7, zmm8, zmm9, zmm10, zmm11, zmm14_1, zmm15_1 =
                        sub_14170a370(arg4, &var_138, &var_190)
                    uint128_t zmm13_1 = rdi_5[6]
                    uint128_t zmm12_1 = zx.o(*rax_21)
                    int32_t r13_2 = rax_21[2]
                    zmm9[0] = zmm9[0] f- zmm12_1.d
                    zmm10[0] = zmm10[0] f- r13_2
                    zmm8.d = zmm8.d f- _mm_shuffle_ps(zmm12_1, zmm12_1, 0x55).d
                    uint128_t zmm0_2
                    zmm0_2.d = zmm13_1.d f* 0.00999999978f
                    zmm11[0] = zmm11[0] * zmm9[0]
                    zmm0_2 = __andps_xmmxud_memxud(zmm0_2, data_142d3f770)
                    zmm7[0] = zmm7[0] f* zmm8.d
                    zmm6_1 = zmm6_1 * zmm10[0]
                    zmm7[0] = zmm7[0] + zmm11[0]
                    float var_180 = zmm9[0]
                    int32_t var_17c_1 = zmm8.d
                    float var_178_1 = zmm10[0]
                    zmm7[0] = zmm7[0] + zmm6_1
                    float temp0_7[0x4] = _mm_min_ss(zmm7[0], zmm14_1)
                    zmm14_1 = temp0_7[0]
                    temp0_7[0] = temp0_7[0] f- zmm13_1.d
                    
                    if (__andps_xmmxud_memxud(temp0_7, data_142d3f770)[0] f<= zmm0_2.d)
                        zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_2, zmm13_2, 
                            zmm15_2 = sub_14154a2a0(*r14, *r12, rdi_5, arg5, arg6, var_1a8, arg8)
                        rdi_1 = var_248
                        rsi_1 = 0
                        break
                    
                    if (not(zmm14_1 f< zmm13_1.d))
                        int32_t rcx_16 = r14[1].d
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
                        var_f8_1.d = rdi_5[0xc]
                        var_118_1[2] = zmm13_1.d
                        var_128[3].q = zmm0_2.q
                        var_f8_1:4.b = 0
                        int32_t var_214_1 = rcx_16
                        r14[1].d = rcx_16 + 1
                        
                        if (rcx_16 + 1 s> *(r14 + 0xc))
                            sub_14083a7e0(r14)
                            rcx_16 = var_214_1
                        
                        int64_t rcx_18 = *r14
                        int64_t rdx_11 = sx.q(rcx_16) * 3
                        *(rcx_18 + (rdx_11 << 2)) = var_1c0_1.q
                        *(rcx_18 + (rdx_11 << 2) + 8) = var_1b8_1
                        int64_t r14_2 = sx.q(r12[1].d)
                        int32_t rax_35 = (r14_2 + 1).d
                        r12[1].d = rax_35
                        
                        if (rax_35 s> *(r12 + 0xc))
                            sub_14083a7e0(r12)
                        
                        int64_t rax_36 = *r12
                        int64_t rcx_20 = r14_2 * 3
                        var_240_1.d = 0
                        *(rax_36 + (rcx_20 << 2)) = zmm12_1.q
                        *(rax_36 + (rcx_20 << 2) + 8) = r13_2
                        rdi_5[0xd].b = 1
                        
                        if (r15 s< 0 && r15 != 0)
                            sub_1405c5570(&var_248, 0)
                        
                        sub_1415c5980(&var_230, var_238_1, &var_180, &var_248)
                        int64_t r13_3 = sx.q(var_228.d)
                        int32_t r8_11 = var_240_1.d
                        int32_t rax_37 = r8_11 + r13_3.d
                        var_228.d = rax_37
                        
                        if (rax_37 s> var_228:4.d)
                            sub_1407c3b60(&var_230)
                            r8_11 = var_240_1.d
                        
                        if (r8_11 s>= 3)
                            int64_t rdi_6 = 0
                            int64_t rax_38 = sx.q(r8_11)
                            
                            if (r8_11 s> 0)
                                void* rsi_3 = r13_3 * 0x38
                                int32_t rbx_2 = r13_3.d
                                int32_t r11_7 = 1 - r13_3.d
                                int32_t var_1c8_1 = r11_7
                                
                                do
                                    int64_t* rdx_15 = var_248
                                    int64_t rcx_24 = var_230
                                    int64_t r15_1 = sx.q(rdx_15[rdi_6].d)
                                    int64_t r14_3 = sx.q(*(&rdx_15[rdi_6] + 4))
                                    int32_t* r9_5 = rsi_3 + rcx_24
                                    int64_t r10_8 = r15_1 * 0x38 + rcx_24
                                    int32_t r11_8 = rbx_2 + 1
                                    
                                    if (r11_7 + rbx_2 s>= r8_11)
                                        r11_8 = r13_3.d
                                    
                                    int64_t r8_12 = *r12
                                    int32_t rax_43 = rbx_2
                                    
                                    if (rbx_2 s<= r13_3.d)
                                        rax_43 = r8_11 + r13_3.d
                                    
                                    int64_t rdx_19 = *arg1
                                    int32_t rax_46 = *(r10_8 + (r14_3 << 2))
                                    int64_t rax_48 =
                                        sx.q(*(r10_8 + (sx.q((r14_3 + 1).d s% 3) << 2)))
                                    int32_t var_1d0_1 = rax_48.d
                                    int64_t rcx_27 = rax_48 * 3
                                    zmm7 = *(rdx_19 + (rcx_27 << 2))
                                    zmm7[0] = zmm7[0] f- *(r8_12 + (rcx_27 << 2))
                                    zmm6 = *(rdx_19 + (rcx_27 << 2) + 4)
                                    zmm6[0] = zmm6[0] f- *(r8_12 + (rcx_27 << 2) + 4)
                                    zmm8.d = (*(rdx_19 + (rcx_27 << 2) + 8)).d f-
                                        *(r8_12 + (rcx_27 << 2) + 8)
                                    int64_t rcx_28 = sx.q(rax_46) * 3
                                    zmm2_1 = *(rdx_19 + (rcx_28 << 2) + 8)
                                    zmm2_1[0] = zmm2_1[0] f- *(r8_12 + (rcx_28 << 2) + 8)
                                    float zmm5_1[0x4] = *(rdx_19 + (rcx_28 << 2))
                                    zmm9 = *(rdx_19 + (rdx_11 << 2) + 4)
                                    zmm9[0] = zmm9[0] f- *(r8_12 + (rdx_11 << 2) + 4)
                                    zmm1_1 = *(rdx_19 + (rdx_11 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_12 + (rdx_11 << 2) + 8)
                                    float zmm3_1[0x4] = *(rdx_19 + (rdx_11 << 2))
                                    zmm2_1[0] = zmm2_1[0] f- zmm8.d
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_12 + (rdx_11 << 2))
                                    float zmm4_1 = *(rdx_19 + (rcx_28 << 2) + 4)
                                    zmm9[0] = zmm9[0] - zmm6[0]
                                    zmm5_1[0] = zmm5_1[0] f- *(r8_12 + (rcx_28 << 2))
                                    zmm4_1 = zmm4_1 f- *(r8_12 + (rcx_28 << 2) + 4)
                                    zmm1_1[0] = zmm1_1[0] f- zmm8.d
                                    zmm3_1[0] = zmm3_1[0] - zmm7[0]
                                    zmm9[0] = zmm9[0] * zmm2_1[0]
                                    zmm5_1[0] = zmm5_1[0] - zmm7[0]
                                    zmm10 = zmm1_1
                                    zmm4_1 = zmm4_1 - zmm6[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm2_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm5_1[0]
                                    zmm10[0] = zmm10[0] * zmm4_1
                                    zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
                                    zmm9[0] = zmm9[0] * zmm5_1[0]
                                    zmm10[0] = zmm10[0] - zmm9[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm4_1
                                    zmm9[0] = zmm9[0] - zmm3_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                                    zmm10[0] = zmm10[0] * zmm10[0]
                                    zmm9[0] = zmm9[0] * zmm9[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm10[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm9[0]
                                    float var_220_1
                                    float var_218_1
                                    
                                    if (zmm3_1[0] != 1f)
                                        if (zmm3_1[0] f>= zmm15_1)
                                            float temp0_10[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                                            zmm2_1 = 0x3f000000
                                            zmm3_1[0] = zmm3_1[0] * 0.5f
                                            temp0_10[0] = temp0_10[0] * temp0_10[0]
                                            zmm3_1[0] = zmm3_1[0] * temp0_10[0]
                                            zmm2_1[0] = 0.5f - zmm3_1[0]
                                            temp0_10[0] = temp0_10[0] * zmm2_1[0]
                                            temp0_10[0] = temp0_10[0] + temp0_10[0]
                                            temp0_10[0] = temp0_10[0] * temp0_10[0]
                                            zmm3_1[0] = zmm3_1[0] * temp0_10[0]
                                            temp0_10[0] = temp0_10[0] * (0.5f - zmm3_1[0])
                                            temp0_10[0] = temp0_10[0] + temp0_10[0]
                                            zmm1_1 = temp0_10
                                            temp0_10[0] = temp0_10[0] * zmm10[0]
                                            temp0_10[0] = temp0_10[0] * zmm9[0]
                                            var_220_1 = temp0_10[0]
                                            zmm1_1[0] = zmm1_1[0] * zmm3_1[0]
                                            var_218_1 = temp0_10[0]
                                        else
                                            zmm1_1 = data_143dbb1fc
                                            var_220_1 = data_143dbb1f8[0]
                                            var_218_1 = data_143dbb200[0]
                                        
                                        float var_21c_2 = zmm1_1[0]
                                    else
                                        var_220_1 = zmm10[0]
                                        float var_21c_1 = zmm3_1[0]
                                        var_218_1 = zmm9[0]
                                    
                                    *(r9_5 + 0xc) = var_220_1.q
                                    r9_5[5] = var_218_1
                                    zmm0_1 = r9_5[4]
                                    zmm2_1 = r9_5[3]
                                    zmm1_1 = r9_5[5]
                                    zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                                    float rax_51
                                    
                                    if (zmm2_1[0] >= 9.99999975e-05f)
                                        *r9_5 = var_1d0_1
                                        r9_5[1] = rax_46
                                        r9_5[2] = var_214_1
                                        r9_5[8] = rax_43 - 1
                                        rax_51.b = 1
                                        r9_5[7] = r15_1.d
                                        r9_5[9] = r11_8
                                        r9_5[0xa] = r14_3.d
                                        r9_5[0xb] = 2
                                        r9_5[0xc] = 1
                                        zmm6[0] = zmm6[0] f* r9_5[4]
                                        zmm7[0] = zmm7[0] f* r9_5[3]
                                        zmm8.d = zmm8.d f* r9_5[5]
                                        r9_5[0xd].b = 0
                                        zmm6[0] = zmm6[0] + zmm7[0]
                                        zmm6[0] = zmm6[0] f+ zmm8.d
                                        r9_5[6] = zmm6[0]
                                    else
                                        rax_51.b = 0
                                    
                                    *(r10_8 + (r14_3 << 2) + 0x1c) = rbx_2
                                    *(r10_8 + (r14_3 << 2) + 0x28) = 0
                                    
                                    if (rax_51.b == 0)
                                        rbx_1 = var_1f0.q
                                        goto label_14159d2dc
                                    
                                    zmm0_1 = r9_5[6]
                                    r12 = arg2
                                    
                                    if (not(zmm0_1[0] f< zmm13_1.d) && not(zmm0_1[0] > zmm14_1))
                                        char rax_56
                                        rax_56, zmm13_1, zmm14_1, zmm15_1 =
                                            sub_141743d50(r9_5, *arg1, *r12)
                                        
                                        if (rax_56 != 0)
                                            int32_t var_140_1 = rbx_2
                                            int64_t* var_148 = &var_230
                                            sub_14175ce20(&var_1f0, &var_148)
                                    
                                    r8_11 = var_240_1.d
                                    rbx_2 += 1
                                    r11_7 = var_1c8_1
                                    rsi_3 += 0x38
                                    rdi_6 += 1
                                while (rdi_6 s< rax_38)
                                
                                rsi_2 = var_1f0:8.q
                                rbx_1 = var_1f0.q
                            
                            zmm2_1 = 0x80000000
                            r15 = var_240_1:4.d
                            goto label_14159d2c2
            
        label_14159d2dc:
            rdi_1 = var_248
            goto label_14159d313
    
    zmm15_2.o = zmm15
    zmm13_2.o = zmm13
    zmm12_2.o = zmm12
    zmm11_1.o = var_a8_1
    zmm10_1.o = var_98_1
    zmm9_1.o = var_88_1
    zmm8_1.o = var_78_1
    zmm7_1.o = var_68_1
    zmm6_2.o = var_58_1
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    if (rbx_1 != 0)
        float (* rax_61)[0x4] = rbx_1
        
        if (((var_1e0 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_61 - rbx_1 - 8 u> 0x1f)
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

int64_t rcx_37 = var_230

if (rcx_37 != 0)
    sub_140a74f90(rcx_37)

__security_check_cookie(rax_1 ^ &var_288)
return zx.q(rsi_1)
