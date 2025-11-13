// 函数: sub_1415c0ff0
// 地址: 0x1415c0ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int32_t r12 = 0
int64_t* r13 = arg4
int64_t* r15 = arg2
int64_t* r14 = arg1
uint64_t* var_260 = arg6
int64_t var_230
int64_t* var_268 = &var_230
float* var_178 = arg5
int32_t* var_188 = arg7
var_230 = 0
int64_t var_228 = 0
char rax_3
uint128_t zmm6
float zmm7[0x4]
int128_t zmm8
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13_1
int128_t zmm14
int128_t zmm15
rax_3, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, zmm14, zmm15 =
    sub_1416e2b10(arg1, arg2, arg3, arg4, var_268)
int32_t rdi_1

if (rax_3 != 0)
    int128_t var_1f0
    __builtin_memset(&var_1f0, 0, 0x18)
    float (* rdi_2)[0x4] = var_1f0:8.q
    int32_t i = 0
    float (* rbx_1)[0x4] = var_1f0.q
    int64_t* var_240
    int64_t var_1e0
    float zmm1_1[0x4]
    
    if (var_228.d s> 0)
        do
            char rax_5
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, zmm14, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_230, *r14, *r15)
            
            if (rax_5 != 0)
                int64_t var_238
                var_238.d = i
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
    
    float zmm0_1[0x4] = *rdx_4
    int64_t* rsi_1 = nullptr
    zmm1_1 = rdx_4[1]
    var_240 = nullptr
    uint128_t var_58_1 = zmm6
    float var_68_1[0x4] = zmm7
    int128_t var_78_1 = zmm8
    float var_88_1[0x4] = zmm9
    float var_98_1[0x4] = zmm10
    float var_b8_1[0x4] = zmm12
    float var_130[0x4] = zmm0_1
    int64_t var_238_1 = 0
    float var_120_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    int128_t var_d8_1 = zmm14
    int128_t var_e8_1 = zmm15
    int64_t var_100_1 = rdx_4[3][0].q
    float var_110_1[0x4] = rdx_4[2]
    int512_t zmm6_1
    int512_t zmm7_1
    int512_t zmm8_1
    int512_t zmm9_1
    int512_t zmm10_1
    int512_t zmm11_1
    int512_t zmm12_1
    int512_t zmm14_1
    int512_t zmm15_1
    
    if (rcx_7 == 0)
    label_1415c1a6a:
        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm14_1, zmm15_1 =
            sub_14154a2a0(*arg1, *arg2, &var_130, var_178, arg6, var_188, arg8)
        rdi_1 = 1
    else
        zmm10 = 0x7fffffff
        zmm14 = 0x322bcc77
        zmm15 = 0x38d1b717
        
        while (true)
            if (rdx_5 s< 0x80)
                float rax_11 = (*rbx_1)[2]
                float var_248_1 = rax_11
                
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
                    
                    rax_11 = var_248_1
                    r13 = arg4
                    rbx_1[i_2] = zmm1_1
                
                rdi_2 -= 0x10
                var_1f0:8.q = rdi_2
                int32_t* rsi_5 = sx.q(rax_11) * 0x38 + var_230
                
                if (rsi_5[0xd].b != 0)
                label_1415c1a1a:
                    rcx_7 = (rdi_2 - rbx_1) s>> 4
                    
                    if (rcx_7 != 0)
                        rdx_5 += 1
                        r13 = arg4
                        continue
                else
                    zmm12 = rsi_5[6]
                    void* rcx_13 = *arg3
                    void* rax_23 = *(rcx_13 + 0x10)
                    zmm8.d = (*(rcx_13 + 0x28)).d f* *(rax_23 + 0x10)
                    zmm9 = *(rax_23 + 0x14)
                    zmm9[0] = zmm9[0] f* *(rcx_13 + 0x2c)
                    zmm7 = *(rax_23 + 0x18)
                    void* rax_24 = *r13
                    zmm7[0] = zmm7[0] f* *(rcx_13 + 0x30)
                    float var_1b4_1 = zmm9[0]
                    uint128_t zmm4_1 = zx.o(*(rax_24 + 0x10))
                    int32_t rax_25 = *(rax_24 + 0x18)
                    zmm0_1 = zmm4_1
                    float temp0_5[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                    int128_t* rax_26 = r13[1]
                    float temp0_6[0x4] = _mm_unpacklo_ps(temp0_5, zx.o(0)[0].q)
                    zmm6 = _mm_unpacklo_ps(zmm4_1, rax_25[0].q)
                    uint128_t zmm5_1 = *rax_26
                    zmm6 = _mm_unpacklo_ps(zmm6, temp0_6[0].q)
                    zmm4_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                    float temp0_10[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                    float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), temp0_10)
                    float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4_1)
                    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    int32_t var_1b8_1 = zmm8.d
                    float var_1b0_1 = zmm7[0]
                    float temp0_16[0x4] = _mm_sub_ps(temp0_14, temp0_12)
                    float temp0_17[0x4] = _mm_add_ps(temp0_16, temp0_16)
                    zmm5_1 = _mm_mul_ps(zmm5_1, temp0_17)
                    float temp0_20[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xc9), temp0_10)
                    float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xd2)
                    zmm5_1 = _mm_add_ps(zmm5_1, zmm6)
                    float temp0_26[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_21, zmm4_1), temp0_20), zmm5_1), 
                        rax_26[1])
                    zmm8.d = zmm8.d f- temp0_26[0]
                    float var_1a8_1 = temp0_26[0]
                    float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0x55)
                    zmm9[0] = zmm9[0] - temp0_27[0]
                    float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)
                    zmm7[0] = zmm7[0] - temp0_28[0]
                    float var_1a0_1 = temp0_28[0]
                    float var_1a4_1 = temp0_27[0]
                    zmm12[0] = zmm12[0] * 0.00999999978f
                    float var_16c_1 = zmm9[0]
                    zmm9[0] = zmm9[0] f* rsi_5[4]
                    int32_t var_170 = zmm8.d
                    zmm0_1 = _mm_and_ps(zmm12, zmm10)
                    zmm8.d = zmm8.d f* rsi_5[3]
                    float var_168_1 = zmm7[0]
                    zmm7[0] = zmm7[0] f* rsi_5[5]
                    zmm9[0] = zmm9[0] f+ zmm8.d
                    zmm9[0] = zmm9[0] + zmm7[0]
                    float temp0_30[0x4] = _mm_min_ss(zmm9[0], zmm13_1)
                    zmm13_1 = temp0_30[0]
                    temp0_30[0] = temp0_30[0] - zmm12[0]
                    
                    if (_mm_and_ps(temp0_30, zmm10)[0] <= zmm0_1[0])
                        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm14_1, 
                            zmm15_1 = sub_14154a2a0(*r14, *r15, rsi_5, var_178, arg6, var_188, arg8)
                        rsi_1 = var_240
                        rdi_1 = 0
                        break
                    
                    if (not(zmm13_1 < zmm12[0]))
                        int64_t r13_2 = sx.q(r14[1].d)
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
                        int32_t rax_37 = (r13_2 + 1).d
                        var_120_1[2] = zmm12[0]
                        var_130[3].q = zmm0_1.q
                        var_100_1:4.b = 0
                        int32_t var_1cc_1 = r13_2.d
                        r14[1].d = rax_37
                        
                        if (rax_37 s> *(r14 + 0xc))
                            sub_14083a7e0(r14)
                        
                        int64_t rcx_15 = *r14
                        int64_t rdx_11 = r13_2 * 3
                        *(rcx_15 + (rdx_11 << 2)) = var_1b8_1.q
                        *(rcx_15 + (rdx_11 << 2) + 8) = var_1b0_1
                        int64_t r13_3 = sx.q(r15[1].d)
                        int32_t rax_39 = (r13_3 + 1).d
                        r15[1].d = rax_39
                        
                        if (rax_39 s> *(r15 + 0xc))
                            sub_14083a7e0(r15)
                        
                        int64_t rcx_17 = *r15
                        int64_t rdx_14 = r13_3 * 3
                        var_238_1.d = 0
                        *(rcx_17 + (rdx_14 << 2)) = var_1a8_1.q
                        *(rcx_17 + (rdx_14 << 2) + 8) = var_1a0_1
                        rsi_5[0xd].b = 1
                        
                        if (r12 s< 0 && r12 != 0)
                            sub_1405c5570(&var_240, 0)
                        
                        sub_1415c5980(&var_230, var_248_1, &var_170, &var_240)
                        int64_t r13_4 = sx.q(var_228.d)
                        int32_t r8_10 = var_238_1.d
                        int32_t rax_41 = r8_10 + r13_4.d
                        var_228.d = rax_41
                        
                        if (rax_41 s> var_228:4.d)
                            sub_1407c3b60(&var_230)
                            r8_10 = var_238_1.d
                        
                        if (r8_10 s>= 3)
                            int64_t rsi_6 = 0
                            int64_t rax_42 = sx.q(r8_10)
                            
                            if (r8_10 s> 0)
                                int64_t r14_1 = r13_4 * 0x38
                                int32_t rbx_2 = r13_4.d
                                int32_t r11_7 = 1 - r13_4.d
                                int32_t var_1c4_1 = r11_7
                                
                                do
                                    int64_t* rdx_17 = var_240
                                    int64_t rcx_21 = var_230
                                    int64_t r12_1 = sx.q(rdx_17[rsi_6].d)
                                    int64_t rdi_3 = sx.q(*(&rdx_17[rsi_6] + 4))
                                    int32_t* r9_5 = rcx_21 + r14_1
                                    int64_t r10_8 = r12_1 * 0x38 + rcx_21
                                    int32_t r11_8 = rbx_2 + 1
                                    
                                    if (r11_7 + rbx_2 s>= r8_10)
                                        r11_8 = r13_4.d
                                    
                                    int64_t r8_11 = *r15
                                    int32_t rax_47 = rbx_2
                                    
                                    if (rbx_2 s<= r13_4.d)
                                        rax_47 = r8_10 + r13_4.d
                                    
                                    int64_t rdx_21 = *arg1
                                    int32_t rax_50 = *(r10_8 + (rdi_3 << 2))
                                    int64_t rax_52 =
                                        sx.q(*(r10_8 + (sx.q((rdi_3 + 1).d s% 3) << 2)))
                                    int32_t var_1d0_1 = rax_52.d
                                    int64_t rcx_24 = rax_52 * 3
                                    zmm8.d =
                                        (*(rdx_21 + (rcx_24 << 2))).d f- *(r8_11 + (rcx_24 << 2))
                                    zmm6.d = (*(rdx_21 + (rcx_24 << 2) + 4)).d f-
                                        *(r8_11 + (rcx_24 << 2) + 4)
                                    zmm9 = *(rdx_21 + (rcx_24 << 2) + 8)
                                    zmm9[0] = zmm9[0] f- *(r8_11 + (rcx_24 << 2) + 8)
                                    int64_t rcx_25 = sx.q(rax_50) * 3
                                    float zmm2_1[0x4] = *(rdx_21 + (rcx_25 << 2) + 8)
                                    zmm2_1[0] = zmm2_1[0] f- *(r8_11 + (rcx_25 << 2) + 8)
                                    zmm5_1 = *(rdx_21 + (rcx_25 << 2))
                                    zmm7 = *(rdx_21 + (rdx_11 << 2) + 4)
                                    zmm7[0] = zmm7[0] f- *(r8_11 + (rdx_11 << 2) + 4)
                                    zmm1_1 = *(rdx_21 + (rdx_11 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_11 + (rdx_11 << 2) + 8)
                                    float zmm3_1[0x4] = *(rdx_21 + (rdx_11 << 2))
                                    zmm2_1[0] = zmm2_1[0] - zmm9[0]
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_11 + (rdx_11 << 2))
                                    zmm4_1 = *(rdx_21 + (rcx_25 << 2) + 4)
                                    zmm7[0] = zmm7[0] f- zmm6.d
                                    zmm5_1.d = zmm5_1.d f- *(r8_11 + (rcx_25 << 2))
                                    zmm4_1.d = zmm4_1.d f- *(r8_11 + (rcx_25 << 2) + 4)
                                    zmm1_1[0] = zmm1_1[0] - zmm9[0]
                                    zmm3_1[0] = zmm3_1[0] f- zmm8.d
                                    zmm7[0] = zmm7[0] * zmm2_1[0]
                                    zmm5_1.d = zmm5_1.d f- zmm8.d
                                    zmm10 = zmm1_1
                                    zmm4_1.d = zmm4_1.d f- zmm6.d
                                    zmm3_1[0] = zmm3_1[0] * zmm2_1[0]
                                    zmm1_1[0] = zmm1_1[0] f* zmm5_1.d
                                    zmm10[0] = zmm10[0] f* zmm4_1.d
                                    zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
                                    zmm7[0] = zmm7[0] f* zmm5_1.d
                                    zmm10[0] = zmm10[0] - zmm7[0]
                                    zmm3_1[0] = zmm3_1[0] f* zmm4_1.d
                                    zmm7[0] = zmm7[0] - zmm3_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                                    zmm10[0] = zmm10[0] * zmm10[0]
                                    zmm7[0] = zmm7[0] * zmm7[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm10[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm7[0]
                                    float var_220_1
                                    float var_218_1
                                    
                                    if (zmm3_1[0] != 1f)
                                        if (zmm3_1[0] f>= zmm14.d)
                                            zmm5_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1[0])
                                            zmm2_1 = 0x3f000000
                                            zmm3_1[0] = zmm3_1[0] * 0.5f
                                            zmm0_1 = zmm5_1
                                            zmm0_1[0] = zmm0_1[0] f* zmm5_1.d
                                            zmm3_1[0] = zmm3_1[0] * zmm0_1[0]
                                            zmm0_1 = zmm5_1
                                            zmm2_1[0] = 0.5f - zmm3_1[0]
                                            zmm0_1[0] = zmm0_1[0] * zmm2_1[0]
                                            zmm5_1.d = zmm5_1.d f+ zmm0_1[0]
                                            zmm1_1 = zmm5_1
                                            zmm0_1 = zmm5_1
                                            zmm1_1[0] = zmm1_1[0] f* zmm5_1.d
                                            zmm3_1[0] = zmm3_1[0] * zmm1_1[0]
                                            zmm4_1.d = 0.5f - zmm3_1[0]
                                            zmm0_1[0] = zmm0_1[0] f* zmm4_1.d
                                            zmm5_1.d = zmm5_1.d f+ zmm0_1[0]
                                            zmm0_1 = zmm5_1
                                            zmm1_1 = zmm5_1
                                            zmm0_1[0] = zmm0_1[0] * zmm10[0]
                                            zmm5_1.d = zmm5_1.d f* zmm7[0]
                                            var_220_1 = zmm0_1[0]
                                            zmm1_1[0] = zmm1_1[0] * zmm3_1[0]
                                            var_218_1 = zmm5_1.d
                                        else
                                            zmm1_1 = data_143dbb1fc
                                            var_220_1 = data_143dbb1f8[0]
                                            var_218_1 = data_143dbb200[0]
                                        
                                        float var_21c_2 = zmm1_1[0]
                                    else
                                        var_220_1 = zmm10[0]
                                        float var_21c_1 = zmm3_1[0]
                                        var_218_1 = zmm7[0]
                                    
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
                                    float rax_55
                                    
                                    if (zmm2_1[0] f>= zmm15.d)
                                        *r9_5 = var_1d0_1
                                        r9_5[1] = rax_50
                                        r9_5[2] = var_1cc_1
                                        r9_5[8] = rax_47 - 1
                                        rax_55.b = 1
                                        r9_5[7] = r12_1.d
                                        r9_5[9] = r11_8
                                        r9_5[0xa] = rdi_3.d
                                        r9_5[0xb] = 2
                                        r9_5[0xc] = 1
                                        zmm6.d = zmm6.d f* r9_5[4]
                                        zmm8.d = zmm8.d f* r9_5[3]
                                        zmm9[0] = zmm9[0] f* r9_5[5]
                                        r9_5[0xd].b = 0
                                        zmm6.d = zmm6.d f+ zmm8.d
                                        zmm6.d = zmm6.d f+ zmm9[0]
                                        r9_5[6] = zmm6.d
                                    else
                                        rax_55.b = 0
                                    
                                    *(r10_8 + (rdi_3 << 2) + 0x1c) = rbx_2
                                    *(r10_8 + (rdi_3 << 2) + 0x28) = 0
                                    
                                    if (rax_55.b == 0)
                                        rbx_1 = var_1f0.q
                                        goto label_1415c1a33
                                    
                                    zmm0_1 = r9_5[6]
                                    r15 = arg2
                                    
                                    if (not(zmm0_1[0] < zmm12[0]) && not(zmm0_1[0] > zmm13_1))
                                        char rax_60
                                        rax_60, zmm12, zmm13_1, zmm14, zmm15 =
                                            sub_141743d50(r9_5, *arg1, *r15)
                                        
                                        if (rax_60 != 0)
                                            int32_t var_138_1 = rbx_2
                                            int64_t* var_140 = &var_230
                                            sub_14175ce20(&var_1f0, &var_140)
                                    
                                    r8_10 = var_238_1.d
                                    rbx_2 += 1
                                    r11_7 = var_1c4_1
                                    r14_1 += 0x38
                                    rsi_6 += 1
                                while (rsi_6 s< rax_42)
                                
                                rdi_2 = var_1f0:8.q
                                rbx_1 = var_1f0.q
                                zmm10 = 0x7fffffff
                                r14 = arg1
                            
                            r12 = var_238_1:4.d
                            goto label_1415c1a1a
            
        label_1415c1a33:
            rsi_1 = var_240
            goto label_1415c1a6a
    
    zmm15_1.o = var_e8_1
    zmm14_1.o = var_d8_1
    zmm12_1.o = var_b8_1
    zmm11_1.o = zmm11
    zmm10_1.o = var_98_1
    zmm9_1.o = var_88_1
    zmm8_1.o = var_78_1
    zmm7_1.o = var_68_1
    zmm6_1.o = var_58_1
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    if (rbx_1 != 0)
        float (* rax_65)[0x4] = rbx_1
        
        if (((var_1e0 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_65 - rbx_1 - 8 u> 0x1f)
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

int64_t rcx_34 = var_230

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

__security_check_cookie(rax_1 ^ &var_288)
return zx.q(rdi_1)
