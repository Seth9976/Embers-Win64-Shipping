// 函数: sub_1415862f0
// 地址: 0x1415862f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int64_t* r12 = arg2
int64_t* r15 = arg1
uint64_t* var_280 = arg6
int64_t var_250
int64_t* var_288 = &var_250
int32_t* var_1c8 = arg7
var_250 = 0
int64_t var_248 = 0
char rax_3
int128_t zmm6
int128_t zmm7
int128_t zmm8
int128_t zmm9
int128_t zmm10
int128_t zmm11
uint128_t zmm12
int128_t zmm13
int128_t zmm15
rax_3, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm15 =
    sub_1416b2440(arg1, arg2, arg3, arg4, var_288)
int32_t rsi_1

if (rax_3 != 0)
    int32_t i = 0
    int128_t var_210
    __builtin_memset(&var_210, 0, 0x18)
    float (* r14_1)[0x4] = var_210:8.q
    float (* rdi_1)[0x4] = var_210.q
    int64_t* var_260
    int64_t var_200
    float zmm1_1[0x4]
    
    if (var_248.d s> 0)
        do
            char rax_5
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_250, *r15, *r12)
            
            if (rax_5 != 0)
                int64_t var_258
                var_258.d = i
                var_260 = &var_250
                
                if (var_200 == r14_1)
                    sub_141701fc0(&var_210, r14_1, &var_260)
                    r14_1 = var_210:8.q
                    rdi_1 = var_210.q
                else
                    *r14_1 = var_260.o
                    r14_1 = &r14_1[1]
                    var_210:8.q = r14_1
                
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
        while (i s< var_248.d)
    
    int64_t rcx_7 = (r14_1 - rdi_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_7 == 0)
        rdx_4 = var_250
    else
        rdx_4 = sx.q((*rdi_1)[2]) * 0x38 + var_250
    
    int64_t* rbx_1 = nullptr
    int32_t r13_1 = 0
    uint128_t var_b8_1 = zmm12
    var_260 = nullptr
    int64_t var_258_1 = 0
    zmm1_1 = rdx_4[1]
    float var_130[0x4] = *rdx_4
    float var_120_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    int64_t var_100_1 = rdx_4[3][0].q
    float var_110_1[0x4] = rdx_4[2]
    int512_t zmm6_4
    int512_t zmm7_3
    int512_t zmm8_3
    int512_t zmm9_3
    int512_t zmm10_3
    int512_t zmm11_3
    int512_t zmm12_1
    int512_t zmm13_2
    int512_t zmm15_2
    
    if (rcx_7 == 0)
    label_141586d6a:
        zmm6_4, zmm7_3, zmm8_3, zmm9_3, zmm10_3, zmm11_3, zmm12_1, zmm13_2, zmm15_2 =
            sub_14154a2a0(*arg1, *arg2, &var_130, arg5, arg6, var_1c8, arg8)
        rsi_1 = 1
    else
        zmm12 = 0x80000000
        
        while (true)
            if (rdx_5 s< 0x80)
                float rax_11 = (*rdi_1)[2]
                float var_268_1 = rax_11
                
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
                    
                    rax_11 = var_268_1
                    rdi_1[i_2] = zmm1_1
                
                r14_1 -= 0x10
                var_210:8.q = r14_1
                int32_t* rsi_4 = sx.q(rax_11) * 0x38 + var_250
                
                if (rsi_4[0xd].b != 0)
                label_141586d1c:
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
                    float var_1b0 = zmm0_1[0]
                    zmm0_1 = *(rbx_4 + 0x30)
                    zmm0_1[0] = zmm0_1[0] f* rsi_4[5]
                    float var_1ac_1 = zmm1_1[0]
                    float var_1a8_1 = zmm0_1[0]
                    float var_1a4
                    sub_141758e70(rcx_13, &var_1a4, &var_1b0, zx.o(0))
                    int128_t zmm6_1 = rsi_4[5]
                    float zmm11_1 = var_1a4 f* *(rbx_4 + 0x28)
                    int128_t zmm1_2 = rsi_4[4] ^ zmm12
                    float var_1a0
                    float zmm9_1 = var_1a0 f* *(rbx_4 + 0x2c)
                    float var_19c
                    float zmm10_1 = var_19c f* *(rbx_4 + 0x30)
                    int32_t var_198 = (rsi_4[3] ^ zmm12).d
                    int32_t var_190_1 = (zmm6_1 ^ zmm12).d
                    float var_1dc_1 = zmm9_1
                    int32_t var_194_1 = zmm1_2.d
                    float var_140[0x4]
                    float* rax_23
                    float zmm6_2
                    float zmm7_2[0x4]
                    float zmm8_2[0x4]
                    float zmm9_2[0x4]
                    float zmm10_2
                    float zmm11_2
                    float zmm14_1
                    int32_t zmm15_1
                    rax_23, zmm6_2, zmm7_2, zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm14_1, zmm15_1 =
                        sub_141716230(arg4, &var_140, &var_198)
                    uint128_t zmm13_1 = rsi_4[6]
                    zmm12 = zx.o(*rax_23)
                    float rax_24 = rax_23[2]
                    zmm11_2 = zmm11_2 f- zmm12.d
                    zmm10_2 = zmm10_2 - rax_24
                    uint128_t zmm0_3 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                    zmm9_2[0] = zmm9_2[0] f- zmm0_3.d
                    zmm7_2[0] = zmm7_2[0] * zmm11_2
                    zmm0_3.d = zmm13_1.d f* 0.00999999978f
                    zmm8_2[0] = zmm8_2[0] * zmm9_2[0]
                    zmm0_3 = __andps_xmmxud_memxud(zmm0_3, data_142d3f770)
                    float var_180_1 = zmm10_2
                    zmm8_2[0] = zmm8_2[0] + zmm7_2[0]
                    float var_188 = zmm11_2
                    float var_184_1 = zmm9_2[0]
                    zmm8_2[0] = zmm8_2[0] + zmm10_2 * zmm6_2
                    float temp0_7[0x4] = _mm_min_ss(zmm8_2[0], zmm14_1)
                    zmm14_1 = temp0_7[0]
                    temp0_7[0] = temp0_7[0] f- zmm13_1.d
                    
                    if (__andps_xmmxud_memxud(temp0_7, data_142d3f770)[0] f<= zmm0_3.d)
                        zmm6_4, zmm7_3, zmm8_3, zmm9_3, zmm10_3, zmm11_3, zmm12_1, zmm13_2, 
                            zmm15_2 = sub_14154a2a0(*r15, *r12, rsi_4, arg5, arg6, var_1c8, arg8)
                        rbx_1 = var_260
                        rsi_1 = 0
                        break
                    
                    if (not(zmm14_1 f< zmm13_1.d))
                        int64_t rbx_5 = sx.q(r15[1].d)
                        zmm0_3 = zx.o(*(rsi_4 + 0xc))
                        var_130[0] = *rsi_4
                        var_130[1] = rsi_4[1]
                        var_130[2] = rsi_4[2]
                        var_120_1[1] = rsi_4[5]
                        var_120_1[3] = rsi_4[7]
                        var_110_1[0] = rsi_4[8]
                        var_110_1[1] = rsi_4[9]
                        var_110_1[2] = rsi_4[0xa]
                        var_110_1[3] = rsi_4[0xb]
                        var_100_1.d = rsi_4[0xc]
                        var_100_1:4.b = rsi_4[0xd].b
                        int32_t rax_36 = (rbx_5 + 1).d
                        var_120_1[2] = zmm13_1.d
                        var_130[3].q = zmm0_3.q
                        int32_t var_1f0_1 = rbx_5.d
                        r15[1].d = rax_36
                        
                        if (rax_36 s> *(r15 + 0xc))
                            sub_14083a7e0(r15)
                        
                        int64_t rcx_16 = *r15
                        int64_t rdx_12 = rbx_5 * 3
                        *(rcx_16 + (rdx_12 << 2)) = zmm11_1.q
                        *(rcx_16 + (rdx_12 << 2) + 8) = zmm10_1
                        int64_t rbx_6 = sx.q(r12[1].d)
                        int32_t rax_38 = (rbx_6 + 1).d
                        r12[1].d = rax_38
                        
                        if (rax_38 s> *(r12 + 0xc))
                            sub_14083a7e0(r12)
                        
                        int64_t rax_39 = *r12
                        int64_t rcx_18 = rbx_6 * 3
                        var_258_1.d = 0
                        *(rax_39 + (rcx_18 << 2)) = zmm12.q
                        *(rax_39 + (rcx_18 << 2) + 8) = rax_24
                        rsi_4[0xd].b = 1
                        
                        if (r13_1 s< 0 && r13_1 != 0)
                            sub_1405c5570(&var_260, 0)
                        
                        sub_1415c5980(&var_250, var_268_1, &var_188, &var_260)
                        int64_t r13_2 = sx.q(var_248.d)
                        int32_t r8_12 = var_258_1.d
                        int32_t rax_40 = r8_12 + r13_2.d
                        var_248.d = rax_40
                        
                        if (rax_40 s> var_248:4.d)
                            sub_1407c3b60(&var_250)
                            r8_12 = var_258_1.d
                        
                        if (r8_12 s>= 3)
                            int64_t rsi_5 = 0
                            int64_t rax_41 = sx.q(r8_12)
                            
                            if (r8_12 s> 0)
                                void* rdi_2 = r13_2 * 0x38
                                int32_t rbx_7 = r13_2.d
                                int32_t r11_7 = 1 - r13_2.d
                                int32_t var_1e8_1 = r11_7
                                
                                do
                                    int64_t* rdx_17 = var_260
                                    int64_t rcx_22 = var_250
                                    int64_t r15_1 = sx.q(rdx_17[rsi_5].d)
                                    int64_t r14_2 = sx.q(*(&rdx_17[rsi_5] + 4))
                                    int32_t* r9_5 = rdi_2 + rcx_22
                                    int64_t r10_8 = r15_1 * 0x38 + rcx_22
                                    int32_t r11_8 = rbx_7 + 1
                                    
                                    if (r11_7 + rbx_7 s>= r8_12)
                                        r11_8 = r13_2.d
                                    
                                    int64_t r8_13 = *r12
                                    int32_t rax_46 = rbx_7
                                    
                                    if (rbx_7 s<= r13_2.d)
                                        rax_46 = r8_12 + r13_2.d
                                    
                                    int32_t rax_48 = *(r10_8 + (r14_2 << 2))
                                    int64_t rdx_22 = *arg1
                                    int64_t rax_50 =
                                        sx.q(*(r10_8 + (sx.q((r14_2 + 1).d s% 3) << 2)))
                                    int32_t var_240_2 = rax_50.d
                                    int64_t rcx_25 = rax_50 * 3
                                    zmm10_2 = *(rdx_22 + (rcx_25 << 2)) f- *(r8_13 + (rcx_25 << 2))
                                    float zmm6_3 = *(rdx_22 + (rcx_25 << 2) + 4) f-
                                        *(r8_13 + (rcx_25 << 2) + 4)
                                    zmm11_2 = *(rdx_22 + (rcx_25 << 2) + 8) f-
                                        *(r8_13 + (rcx_25 << 2) + 8)
                                    int64_t rcx_26 = sx.q(rax_48) * 3
                                    float zmm2_1[0x4] = *(rdx_22 + (rcx_26 << 2) + 8)
                                    zmm2_1[0] = zmm2_1[0] f- *(r8_13 + (rcx_26 << 2) + 8)
                                    float zmm5_1[0x4] = *(rdx_22 + (rcx_26 << 2))
                                    zmm7_2 = *(rdx_22 + (rdx_12 << 2) + 4)
                                    zmm7_2[0] = zmm7_2[0] f- *(r8_13 + (rdx_12 << 2) + 4)
                                    zmm1_1 = *(rdx_22 + (rdx_12 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_13 + (rdx_12 << 2) + 8)
                                    float zmm3_1[0x4] = *(rdx_22 + (rdx_12 << 2))
                                    zmm2_1[0] = zmm2_1[0] - zmm11_2
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_13 + (rdx_12 << 2))
                                    float zmm4_1 = *(rdx_22 + (rcx_26 << 2) + 4)
                                    zmm7_2[0] = zmm7_2[0] - zmm6_3
                                    zmm5_1[0] = zmm5_1[0] f- *(r8_13 + (rcx_26 << 2))
                                    zmm4_1 = zmm4_1 f- *(r8_13 + (rcx_26 << 2) + 4)
                                    zmm1_1[0] = zmm1_1[0] - zmm11_2
                                    zmm3_1[0] = zmm3_1[0] - zmm10_2
                                    zmm7_2[0] = zmm7_2[0] * zmm2_1[0]
                                    zmm5_1[0] = zmm5_1[0] - zmm10_2
                                    zmm4_1 = zmm4_1 - zmm6_3
                                    zmm3_1[0] = zmm3_1[0] * zmm2_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm5_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm4_1
                                    zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
                                    zmm7_2[0] = zmm7_2[0] * zmm5_1[0]
                                    zmm1_1[0] = zmm1_1[0] - zmm7_2[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm4_1
                                    zmm7_2[0] = zmm7_2[0] - zmm3_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm7_2[0] = zmm7_2[0] * zmm7_2[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm1_1[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm7_2[0]
                                    
                                    if (zmm3_1[0] == 1f)
                                        goto label_141586bca
                                    
                                    float var_23c_1
                                    float var_234_1
                                    
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
                                        zmm1_1[0] = zmm1_1[0] * temp0_10[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_10[0]
                                        zmm7_2[0] = zmm7_2[0] * temp0_10[0]
                                    label_141586bca:
                                        var_234_1 = zmm7_2[0]
                                        float var_238_2 = zmm3_1[0]
                                        var_23c_1 = zmm1_1[0]
                                    else
                                        var_23c_1 = data_143dbb1f8[0]
                                        var_234_1 = data_143dbb200[0]
                                        float var_238_1 = data_143dbb1fc[0]
                                    
                                    *(r9_5 + 0xc) = var_23c_1.q
                                    r9_5[5] = var_234_1
                                    zmm0_1 = r9_5[4]
                                    zmm2_1 = r9_5[3]
                                    zmm1_1 = r9_5[5]
                                    zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                                    float rax_53
                                    
                                    if (zmm2_1[0] >= 9.99999975e-05f)
                                        *r9_5 = var_240_2
                                        r9_5[1] = rax_48
                                        r9_5[2] = var_1f0_1
                                        r9_5[8] = rax_46 - 1
                                        rax_53.b = 1
                                        r9_5[7] = r15_1.d
                                        r9_5[9] = r11_8
                                        r9_5[0xa] = r14_2.d
                                        r9_5[0xb] = 2
                                        r9_5[0xc] = 1
                                        r9_5[0xd].b = 0
                                        r9_5[6] = zmm6_3 f* r9_5[4] + zmm10_2 f* r9_5[3]
                                            + zmm11_2 f* r9_5[5]
                                    else
                                        rax_53.b = 0
                                    
                                    *(r10_8 + (r14_2 << 2) + 0x1c) = rbx_7
                                    *(r10_8 + (r14_2 << 2) + 0x28) = 0
                                    
                                    if (rax_53.b == 0)
                                        rdi_1 = var_210.q
                                        goto label_141586d33
                                    
                                    zmm0_1 = r9_5[6]
                                    r12 = arg2
                                    r15 = arg1
                                    
                                    if (not(zmm0_1[0] f< zmm13_1.d) && not(zmm0_1[0] > zmm14_1))
                                        char rax_57
                                        rax_57, zmm13_1, zmm14_1, zmm15_1 =
                                            sub_141743d50(r9_5, *r15, *r12)
                                        
                                        if (rax_57 != 0)
                                            int32_t var_148_1 = rbx_7
                                            int64_t* var_150 = &var_250
                                            sub_14175ce20(&var_210, &var_150)
                                    
                                    r8_12 = var_258_1.d
                                    rbx_7 += 1
                                    r11_7 = var_1e8_1
                                    rdi_2 += 0x38
                                    rsi_5 += 1
                                while (rsi_5 s< rax_41)
                                
                                r14_1 = var_210:8.q
                                rdi_1 = var_210.q
                            
                            zmm12 = 0x80000000
                            r13_1 = var_258_1:4.d
                            goto label_141586d1c
            
        label_141586d33:
            rbx_1 = var_260
            goto label_141586d6a
    
    zmm15_2.o = zmm15
    zmm13_2.o = zmm13
    zmm12_1.o = var_b8_1
    zmm11_3.o = zmm11
    zmm10_3.o = zmm10
    zmm9_3.o = zmm9
    zmm8_3.o = zmm8
    zmm7_3.o = zmm7
    zmm6_4.o = zmm6
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    if (rdi_1 != 0)
        float (* rax_62)[0x4] = rdi_1
        
        if (((var_200 - rdi_1) & 0xfffffffffffffff0) u>= 0x1000)
            rdi_1 = *(rdi_1 - 8)
            
            if (rax_62 - rdi_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rdi_1)
else
    *arg5 = 0
    int32_t var_218_1 = 0
    *arg7 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg7[1].d = 0
    *arg8 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_218_2 = 0
    rsi_1 = 2
    arg8[1].d = 0

int64_t rcx_35 = var_250

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

__security_check_cookie(rax_1 ^ &var_2a8)
return zx.q(rsi_1)
