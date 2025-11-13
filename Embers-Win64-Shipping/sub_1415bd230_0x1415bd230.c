// 函数: sub_1415bd230
// 地址: 0x1415bd230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int32_t r12 = 0
int64_t* r13 = arg3
int64_t* r15 = arg2
int64_t* r14 = arg1
uint64_t* var_260 = arg6
int64_t var_230
int64_t* var_268 = &var_230
int32_t* var_188 = arg7
var_230 = 0
int64_t var_228 = 0
char rax_3
uint128_t zmm6
float zmm7[0x4]
int128_t zmm8
int128_t zmm9
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13_1
int128_t zmm14
int128_t zmm15
rax_3, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, zmm14, zmm15 =
    sub_1416df8c0(arg1, arg2, arg3, arg4, var_268)
int32_t rsi_1

if (rax_3 != 0)
    int128_t var_1f0
    __builtin_memset(&var_1f0, 0, 0x18)
    float (* rsi_2)[0x4] = var_1f0:8.q
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
                
                if (var_1e0 == rsi_2)
                    sub_141701fc0(&var_1f0, rsi_2, &var_240)
                    rsi_2 = var_1f0:8.q
                    rbx_1 = var_1f0.q
                else
                    *rsi_2 = var_240.o
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
    
    int64_t rcx_7 = (rsi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_7 == 0)
        rdx_4 = var_230
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_230
    
    float zmm0_1[0x4] = *rdx_4
    int64_t* rdi_1 = nullptr
    zmm1_1 = rdx_4[1]
    var_240 = nullptr
    uint128_t var_58_1 = zmm6
    float var_68_1[0x4] = zmm7
    int128_t var_78_1 = zmm8
    int128_t var_88_1 = zmm9
    float var_98_1[0x4] = zmm10
    float var_a8_1[0x4] = zmm11
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
    label_1415bdcb9:
        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm14_1, zmm15_1 =
            sub_14154a2a0(*arg1, *arg2, &var_130, arg5, arg6, var_188, arg8)
        rsi_1 = 1
    else
        zmm14 = 0x322bcc77
        zmm15 = zx.o(0)
        
        while (true)
            if (rdx_5 s< 0x80)
                float rax_11 = (*rbx_1)[2]
                float var_248_1 = rax_11
                
                if (rcx_7 s>= 2)
                    zmm1_1 = rsi_2[-1]
                    int64_t i_2 = 0
                    int64_t i_3 = 0
                    rsi_2[-1] = *rbx_1
                    int64_t r11_4 = (&rsi_2[-1] - rbx_1) s>> 4
                    int64_t rdi_3 = (r11_4 - 1) s>> 1
                    
                    if (rdi_3 s> 0)
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
                    
                    rax_11 = var_248_1
                    r13 = arg3
                    rbx_1[i_2] = zmm1_1
                
                rsi_2 -= 0x10
                var_1f0:8.q = rsi_2
                int32_t* rdi_5 = sx.q(rax_11) * 0x38 + var_230
                
                if (rdi_5[0xd].b != 0)
                label_1415bdc69:
                    rcx_7 = (rsi_2 - rbx_1) s>> 4
                    
                    if (rcx_7 != 0)
                        rdx_5 += 1
                        r13 = arg3
                        continue
                else
                    zmm11 = rdi_5[3]
                    void* rax_22 = *r13
                    
                    if (zmm11[0] f>= zmm15.d)
                        zmm8 = *(rax_22 + 0x1c)
                    else
                        zmm8 = *(rax_22 + 0x10)
                    
                    int32_t var_1b8_1 = zmm8.d
                    
                    if (zmm15.d f<= rdi_5[4])
                        zmm7 = *(rax_22 + 0x20)
                    else
                        zmm7 = *(rax_22 + 0x14)
                    
                    zmm10 = rdi_5[5]
                    float var_1b4_1 = zmm7[0]
                    
                    if (zmm10[0] f>= zmm15.d)
                        zmm9 = *(rax_22 + 0x24)
                    else
                        zmm9 = *(rax_22 + 0x18)
                    
                    zmm12 = rdi_5[6]
                    int32_t var_1b0_1 = zmm9.d
                    void* rax_23 = *arg4
                    uint128_t zmm4_1 = zx.o(*(rax_23 + 0x10))
                    int32_t rax_24 = *(rax_23 + 0x18)
                    zmm0_1 = zmm4_1
                    float temp0_5[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                    int128_t* rax_25 = arg4[1]
                    zmm6 = _mm_unpacklo_ps(zmm4_1, rax_24[0].q)
                    float temp0_7[0x4] = _mm_unpacklo_ps(temp0_5, zmm15.q)
                    float zmm5_1[0x4] = *rax_25
                    zmm6 = _mm_unpacklo_ps(zmm6, temp0_7[0].q)
                    float temp0_9[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                    float temp0_10[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                    float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), temp0_10)
                    float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), temp0_9)
                    float temp0_15[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    float temp0_16[0x4] = _mm_sub_ps(temp0_14, temp0_12)
                    float temp0_17[0x4] = _mm_add_ps(temp0_16, temp0_16)
                    float temp0_18[0x4] = _mm_mul_ps(temp0_15, temp0_17)
                    zmm4_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xd2), temp0_9)
                    float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc9)
                    float temp0_22[0x4] = _mm_add_ps(temp0_18, zmm6)
                    zmm4_1 = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(zmm4_1, _mm_mul_ps(temp0_21, temp0_10)), temp0_22), 
                        rax_25[1])
                    zmm8.d = zmm8.d f- zmm4_1.d
                    int32_t var_1a8_1 = zmm4_1.d
                    float temp0_27[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                    zmm7[0] = zmm7[0] - temp0_27[0]
                    float temp0_28[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                    zmm9.d = zmm9.d f- temp0_28[0]
                    float var_1a0_1 = temp0_28[0]
                    float var_1a4_1 = temp0_27[0]
                    zmm12[0] = zmm12[0] * 0.00999999978f
                    float var_16c_1 = zmm7[0]
                    zmm7[0] = zmm7[0] f* rdi_5[4]
                    int32_t var_170 = zmm8.d
                    zmm0_1 = _mm_and_ps(zmm12, 0x7fffffff)
                    zmm8.d = zmm8.d f* zmm11[0]
                    int32_t var_168_1 = zmm9.d
                    zmm9.d = zmm9.d f* zmm10[0]
                    zmm7[0] = zmm7[0] f+ zmm8.d
                    zmm7[0] = zmm7[0] f+ zmm9.d
                    float temp0_30[0x4] = _mm_min_ss(zmm7[0], zmm13_1)
                    zmm13_1 = temp0_30[0]
                    temp0_30[0] = temp0_30[0] - zmm12[0]
                    
                    if (_mm_and_ps(temp0_30, 0x7fffffff)[0] <= zmm0_1[0])
                        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm14_1, 
                            zmm15_1 = sub_14154a2a0(*r14, *r15, rdi_5, arg5, arg6, var_188, arg8)
                        rdi_1 = var_240
                        rsi_1 = 0
                        break
                    
                    if (not(zmm13_1 < zmm12[0]))
                        int64_t r13_2 = sx.q(r14[1].d)
                        zmm0_1 = zx.o(*(rdi_5 + 0xc))
                        var_130[0] = *rdi_5
                        var_130[1] = rdi_5[1]
                        var_130[2] = rdi_5[2]
                        var_120_1[1] = rdi_5[5]
                        var_120_1[3] = rdi_5[7]
                        var_110_1[0] = rdi_5[8]
                        var_110_1[1] = rdi_5[9]
                        var_110_1[2] = rdi_5[0xa]
                        var_110_1[3] = rdi_5[0xb]
                        var_100_1.d = rdi_5[0xc]
                        int32_t rax_36 = (r13_2 + 1).d
                        var_120_1[2] = zmm12[0]
                        var_130[3].q = zmm0_1.q
                        var_100_1:4.b = 0
                        int32_t var_1cc_1 = r13_2.d
                        r14[1].d = rax_36
                        
                        if (rax_36 s> *(r14 + 0xc))
                            sub_14083a7e0(r14)
                        
                        int64_t rcx_15 = *r14
                        int64_t rdx_11 = r13_2 * 3
                        *(rcx_15 + (rdx_11 << 2)) = var_1b8_1.q
                        *(rcx_15 + (rdx_11 << 2) + 8) = var_1b0_1
                        int64_t r14_1 = sx.q(r15[1].d)
                        int32_t rax_38 = (r14_1 + 1).d
                        r15[1].d = rax_38
                        
                        if (rax_38 s> *(r15 + 0xc))
                            sub_14083a7e0(r15)
                        
                        int64_t rcx_17 = *r15
                        int64_t rdx_13 = r14_1 * 3
                        var_238_1.d = 0
                        *(rcx_17 + (rdx_13 << 2)) = var_1a8_1.q
                        *(rcx_17 + (rdx_13 << 2) + 8) = var_1a0_1
                        rdi_5[0xd].b = 1
                        
                        if (r12 s< 0 && r12 != 0)
                            sub_1405c5570(&var_240, 0)
                        
                        sub_1415c5980(&var_230, var_248_1, &var_170, &var_240)
                        int64_t r13_3 = sx.q(var_228.d)
                        int32_t r8_10 = var_238_1.d
                        int32_t rax_40 = r8_10 + r13_3.d
                        var_228.d = rax_40
                        
                        if (rax_40 s> var_228:4.d)
                            sub_1407c3b60(&var_230)
                            r8_10 = var_238_1.d
                        
                        if (r8_10 s>= 3)
                            int64_t rdi_6 = 0
                            int64_t rax_41 = sx.q(r8_10)
                            
                            if (r8_10 s<= 0)
                                r14 = arg1
                            else
                                void* rsi_3 = r13_3 * 0x38
                                int32_t rbx_2 = r13_3.d
                                int32_t r11_7 = 1 - r13_3.d
                                int32_t var_1c4_1 = r11_7
                                
                                do
                                    int64_t* rdx_16 = var_240
                                    int64_t rcx_21 = var_230
                                    int64_t r12_1 = sx.q(rdx_16[rdi_6].d)
                                    int64_t r14_2 = sx.q(*(&rdx_16[rdi_6] + 4))
                                    int32_t* r9_5 = rsi_3 + rcx_21
                                    int64_t r10_8 = r12_1 * 0x38 + rcx_21
                                    int32_t r11_8 = rbx_2 + 1
                                    
                                    if (r11_7 + rbx_2 s>= r8_10)
                                        r11_8 = r13_3.d
                                    
                                    int64_t r8_11 = *r15
                                    int32_t rax_46 = rbx_2
                                    
                                    if (rbx_2 s<= r13_3.d)
                                        rax_46 = r8_10 + r13_3.d
                                    
                                    int32_t rax_48 = *(r10_8 + (r14_2 << 2))
                                    int64_t rdx_21 = *arg1
                                    int64_t rax_50 =
                                        sx.q(*(r10_8 + (sx.q((r14_2 + 1).d s% 3) << 2)))
                                    int32_t var_1d0_1 = rax_50.d
                                    int64_t rcx_24 = rax_50 * 3
                                    zmm8.d =
                                        (*(rdx_21 + (rcx_24 << 2))).d f- *(r8_11 + (rcx_24 << 2))
                                    zmm6.d = (*(rdx_21 + (rcx_24 << 2) + 4)).d f-
                                        *(r8_11 + (rcx_24 << 2) + 4)
                                    zmm9.d = (*(rdx_21 + (rcx_24 << 2) + 8)).d f-
                                        *(r8_11 + (rcx_24 << 2) + 8)
                                    int64_t rcx_25 = sx.q(rax_48) * 3
                                    float zmm2_1[0x4] = *(rdx_21 + (rcx_25 << 2) + 8)
                                    zmm2_1[0] = zmm2_1[0] f- *(r8_11 + (rcx_25 << 2) + 8)
                                    zmm5_1 = *(rdx_21 + (rcx_25 << 2))
                                    zmm7 = *(rdx_21 + (rdx_11 << 2) + 4)
                                    zmm7[0] = zmm7[0] f- *(r8_11 + (rdx_11 << 2) + 4)
                                    zmm1_1 = *(rdx_21 + (rdx_11 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_11 + (rdx_11 << 2) + 8)
                                    float zmm3_1[0x4] = *(rdx_21 + (rdx_11 << 2))
                                    zmm2_1[0] = zmm2_1[0] f- zmm9.d
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_11 + (rdx_11 << 2))
                                    zmm4_1 = *(rdx_21 + (rcx_25 << 2) + 4)
                                    zmm7[0] = zmm7[0] f- zmm6.d
                                    zmm5_1[0] = zmm5_1[0] f- *(r8_11 + (rcx_25 << 2))
                                    zmm4_1.d = zmm4_1.d f- *(r8_11 + (rcx_25 << 2) + 4)
                                    zmm1_1[0] = zmm1_1[0] f- zmm9.d
                                    zmm3_1[0] = zmm3_1[0] f- zmm8.d
                                    zmm7[0] = zmm7[0] * zmm2_1[0]
                                    zmm5_1[0] = zmm5_1[0] f- zmm8.d
                                    zmm10 = zmm1_1
                                    zmm4_1.d = zmm4_1.d f- zmm6.d
                                    zmm3_1[0] = zmm3_1[0] * zmm2_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm5_1[0]
                                    zmm10[0] = zmm10[0] f* zmm4_1.d
                                    zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
                                    zmm7[0] = zmm7[0] * zmm5_1[0]
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
                                            float temp0_33[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                                            zmm2_1 = 0x3f000000
                                            zmm3_1[0] = zmm3_1[0] * 0.5f
                                            temp0_33[0] = temp0_33[0] * temp0_33[0]
                                            zmm3_1[0] = zmm3_1[0] * temp0_33[0]
                                            zmm2_1[0] = 0.5f - zmm3_1[0]
                                            temp0_33[0] = temp0_33[0] * zmm2_1[0]
                                            temp0_33[0] = temp0_33[0] + temp0_33[0]
                                            temp0_33[0] = temp0_33[0] * temp0_33[0]
                                            zmm3_1[0] = zmm3_1[0] * temp0_33[0]
                                            zmm4_1.d = 0.5f - zmm3_1[0]
                                            temp0_33[0] = temp0_33[0] f* zmm4_1.d
                                            temp0_33[0] = temp0_33[0] + temp0_33[0]
                                            zmm1_1 = temp0_33
                                            temp0_33[0] = temp0_33[0] * zmm10[0]
                                            temp0_33[0] = temp0_33[0] * zmm7[0]
                                            var_220_1 = temp0_33[0]
                                            zmm1_1[0] = zmm1_1[0] * zmm3_1[0]
                                            var_218_1 = temp0_33[0]
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
                                    float rax_53
                                    
                                    if (zmm2_1[0] >= 9.99999975e-05f)
                                        *r9_5 = var_1d0_1
                                        r9_5[1] = rax_48
                                        r9_5[2] = var_1cc_1
                                        r9_5[8] = rax_46 - 1
                                        rax_53.b = 1
                                        r9_5[7] = r12_1.d
                                        r9_5[9] = r11_8
                                        r9_5[0xa] = r14_2.d
                                        r9_5[0xb] = 2
                                        r9_5[0xc] = 1
                                        zmm6.d = zmm6.d f* r9_5[4]
                                        zmm8.d = zmm8.d f* r9_5[3]
                                        zmm9.d = zmm9.d f* r9_5[5]
                                        r9_5[0xd].b = 0
                                        zmm6.d = zmm6.d f+ zmm8.d
                                        zmm6.d = zmm6.d f+ zmm9.d
                                        r9_5[6] = zmm6.d
                                    else
                                        rax_53.b = 0
                                    
                                    *(r10_8 + (r14_2 << 2) + 0x1c) = rbx_2
                                    *(r10_8 + (r14_2 << 2) + 0x28) = 0
                                    
                                    if (rax_53.b == 0)
                                        rbx_1 = var_1f0.q
                                        goto label_1415bdc82
                                    
                                    zmm0_1 = r9_5[6]
                                    r15 = arg2
                                    r14 = arg1
                                    
                                    if (not(zmm0_1[0] < zmm12[0]) && not(zmm0_1[0] > zmm13_1))
                                        char rax_57
                                        rax_57, zmm12, zmm13_1, zmm14, zmm15 =
                                            sub_141743d50(r9_5, *r14, *r15)
                                        
                                        if (rax_57 != 0)
                                            int32_t var_138_1 = rbx_2
                                            int64_t* var_140 = &var_230
                                            sub_14175ce20(&var_1f0, &var_140)
                                    
                                    r8_10 = var_238_1.d
                                    rbx_2 += 1
                                    r11_7 = var_1c4_1
                                    rsi_3 += 0x38
                                    rdi_6 += 1
                                while (rdi_6 s< rax_41)
                                
                                rsi_2 = var_1f0:8.q
                                rbx_1 = var_1f0.q
                            
                            r12 = var_238_1:4.d
                            goto label_1415bdc69
            
        label_1415bdc82:
            rdi_1 = var_240
            goto label_1415bdcb9
    
    zmm15_1.o = var_e8_1
    zmm14_1.o = var_d8_1
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
        float (* rax_62)[0x4] = rbx_1
        
        if (((var_1e0 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_62 - rbx_1 - 8 u> 0x1f)
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

int64_t rcx_34 = var_230

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

__security_check_cookie(rax_1 ^ &var_288)
return zx.q(rsi_1)
