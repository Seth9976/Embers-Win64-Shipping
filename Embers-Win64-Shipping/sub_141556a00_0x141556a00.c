// 函数: sub_141556a00
// 地址: 0x141556a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int32_t r12 = 0
int64_t* r13 = arg4
int64_t* r15 = arg2
int64_t* r14 = arg1
uint64_t* var_250 = arg6
int64_t var_220
int64_t* var_258 = &var_220
float* var_180 = arg5
int32_t* var_190 = arg7
var_220 = 0
int64_t var_218 = 0
char rax_3
uint128_t zmm6
uint128_t zmm7
uint32_t zmm8[0x4]
int128_t zmm9
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13_1
int128_t zmm14
int128_t zmm15
rax_3, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, zmm14, zmm15 =
    sub_14168b460(arg1, arg2, arg3, arg4, var_258)
int32_t rdi_1

if (rax_3 != 0)
    int128_t var_1e0
    __builtin_memset(&var_1e0, 0, 0x18)
    float (* rdi_2)[0x4] = var_1e0:8.q
    int32_t i = 0
    float (* rbx_1)[0x4] = var_1e0.q
    int64_t* var_230
    int64_t var_1d0
    float zmm1_1[0x4]
    
    if (var_218.d s> 0)
        do
            char rax_5
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, zmm14, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_220, *r14, *r15)
            
            if (rax_5 != 0)
                int64_t var_228
                var_228.d = i
                var_230 = &var_220
                
                if (var_1d0 == rdi_2)
                    sub_141701fc0(&var_1e0, rdi_2, &var_230)
                    rdi_2 = var_1e0:8.q
                    rbx_1 = var_1e0.q
                else
                    *rdi_2 = var_230.o
                    rdi_2 = &rdi_2[1]
                    var_1e0:8.q = rdi_2
                
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
        while (i s< var_218.d)
    
    int64_t rcx_7 = (rdi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_7 == 0)
        rdx_4 = var_220
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_220
    
    float zmm0_1[0x4] = *rdx_4
    int64_t* rsi_1 = nullptr
    zmm1_1 = rdx_4[1]
    var_230 = nullptr
    uint128_t var_58_1 = zmm6
    uint128_t var_68_1 = zmm7
    uint32_t var_78_1[0x4] = zmm8
    int128_t var_88_1 = zmm9
    float var_98_1[0x4] = zmm10
    float var_b8_1[0x4] = zmm12
    float var_128[0x4] = zmm0_1
    int64_t var_228_1 = 0
    float var_118_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    int128_t var_d8_1 = zmm14
    int128_t var_e8_1 = zmm15
    int64_t var_f8_1 = rdx_4[3][0].q
    float var_108_1[0x4] = rdx_4[2]
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
    label_14155745c:
        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm14_1, zmm15_1 =
            sub_14154a2a0(*arg1, *arg2, &var_128, var_180, arg6, var_190, arg8)
        rdi_1 = 1
    else
        zmm8 = 0x7fffffff
        zmm14 = 0x322bcc77
        zmm15 = 0x38d1b717
        
        while (true)
            if (rdx_5 s< 0x80)
                float rax_11 = (*rbx_1)[2]
                float var_238_1 = rax_11
                
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
                    
                    rax_11 = var_238_1
                    r13 = arg4
                    rbx_1[i_2] = zmm1_1
                
                rdi_2 -= 0x10
                var_1e0:8.q = rdi_2
                int32_t* rsi_5 = sx.q(rax_11) * 0x38 + var_220
                
                if (rsi_5[0xd].b != 0)
                label_14155740c:
                    rcx_7 = (rdi_2 - rbx_1) s>> 4
                    
                    if (rcx_7 != 0)
                        rdx_5 += 1
                        r13 = arg4
                        continue
                else
                    zmm12 = rsi_5[6]
                    void* rax_23 = *arg3
                    zmm7 = zx.o(*(rax_23 + 0x10))
                    int32_t rax_24 = *(rax_23 + 0x18)
                    void* rax_25 = *r13
                    uint128_t zmm4_1 = zx.o(*(rax_25 + 0x10))
                    int32_t rax_26 = *(rax_25 + 0x18)
                    zmm0_1 = zmm4_1
                    float temp0_5[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                    int128_t* rax_27 = r13[1]
                    float temp0_6[0x4] = _mm_unpacklo_ps(temp0_5, zx.o(0)[0].q)
                    zmm6 = _mm_unpacklo_ps(zmm4_1, rax_26[0].q)
                    uint128_t zmm5_1 = *rax_27
                    zmm6 = _mm_unpacklo_ps(zmm6, temp0_6[0].q)
                    zmm4_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                    float temp0_10[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                    float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), temp0_10)
                    float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4_1)
                    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    float temp0_16[0x4] = _mm_sub_ps(temp0_14, temp0_12)
                    float temp0_17[0x4] = _mm_add_ps(temp0_16, temp0_16)
                    zmm5_1 = _mm_mul_ps(zmm5_1, temp0_17)
                    float temp0_19[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc9)
                    float temp0_20[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xd2)
                    float zmm2_1[0x4] = zmm7
                    float temp0_21[0x4] = _mm_mul_ps(temp0_19, temp0_10)
                    float temp0_22[0x4] = _mm_mul_ps(temp0_20, zmm4_1)
                    zmm5_1 = _mm_add_ps(zmm5_1, zmm6)
                    float temp0_26[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(temp0_22, temp0_21), zmm5_1), rax_27[1])
                    zmm2_1[0] = zmm2_1[0] - temp0_26[0]
                    float var_1b0_1 = temp0_26[0]
                    float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0x55)
                    float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)
                    float zmm3_1[0x4] = zmm7
                    float temp0_29[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                    temp0_29[0] = temp0_29[0] - temp0_27[0]
                    float var_1ac_1 = temp0_27[0]
                    zmm0_1 = rax_24
                    zmm0_1[0] = zmm0_1[0] - temp0_28[0]
                    float var_1a8_1 = temp0_28[0]
                    float var_178 = zmm2_1[0]
                    zmm2_1[0] = zmm2_1[0] f* rsi_5[3]
                    float var_174_1 = temp0_29[0]
                    temp0_29[0] = temp0_29[0] f* rsi_5[4]
                    float var_170_1 = zmm0_1[0]
                    zmm0_1[0] = zmm0_1[0] f* rsi_5[5]
                    temp0_29[0] = temp0_29[0] + zmm2_1[0]
                    temp0_29[0] = temp0_29[0] + zmm0_1[0]
                    zmm12[0] = zmm12[0] * 0.00999999978f
                    float temp0_30[0x4] = _mm_min_ss(temp0_29[0], zmm13_1)
                    zmm0_1 = _mm_and_ps(zmm12, zmm8)
                    zmm13_1 = temp0_30[0]
                    temp0_30[0] = temp0_30[0] - zmm12[0]
                    
                    if (_mm_and_ps(temp0_30, zmm8)[0] <= zmm0_1[0])
                        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm14_1, 
                            zmm15_1 = sub_14154a2a0(*r14, *r15, rsi_5, var_180, arg6, var_190, arg8)
                        rsi_1 = var_230
                        rdi_1 = 0
                        break
                    
                    if (not(zmm13_1 < zmm12[0]))
                        int64_t r13_2 = sx.q(r14[1].d)
                        zmm0_1 = zx.o(*(rsi_5 + 0xc))
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
                        int32_t rax_38 = (r13_2 + 1).d
                        var_118_1[2] = zmm12[0]
                        var_128[3].q = zmm0_1.q
                        var_f8_1:4.b = 0
                        int32_t var_1c0_1 = r13_2.d
                        r14[1].d = rax_38
                        
                        if (rax_38 s> *(r14 + 0xc))
                            sub_14083a7e0(r14)
                        
                        int64_t rax_39 = *r14
                        int64_t rcx_15 = r13_2 * 3
                        *(rax_39 + (rcx_15 << 2)) = zmm7.q
                        *(rax_39 + (rcx_15 << 2) + 8) = rax_24
                        int64_t r13_3 = sx.q(r15[1].d)
                        int32_t rax_40 = (r13_3 + 1).d
                        r15[1].d = rax_40
                        
                        if (rax_40 s> *(r15 + 0xc))
                            sub_14083a7e0(r15)
                        
                        int64_t rcx_17 = *r15
                        int64_t rdx_13 = r13_3 * 3
                        var_228_1.d = 0
                        *(rcx_17 + (rdx_13 << 2)) = var_1b0_1.q
                        *(rcx_17 + (rdx_13 << 2) + 8) = var_1a8_1
                        rsi_5[0xd].b = 1
                        
                        if (r12 s< 0 && r12 != 0)
                            sub_1405c5570(&var_230, 0)
                        
                        sub_1415c5980(&var_220, var_238_1, &var_178, &var_230)
                        int64_t r13_4 = sx.q(var_218.d)
                        int32_t r8_10 = var_228_1.d
                        int32_t rax_42 = r8_10 + r13_4.d
                        var_218.d = rax_42
                        
                        if (rax_42 s> var_218:4.d)
                            sub_1407c3b60(&var_220)
                            r8_10 = var_228_1.d
                        
                        if (r8_10 s>= 3)
                            int64_t rsi_6 = 0
                            int64_t rax_43 = sx.q(r8_10)
                            
                            if (r8_10 s> 0)
                                int64_t r14_1 = r13_4 * 0x38
                                int32_t rbx_2 = r13_4.d
                                int32_t r11_7 = 1 - r13_4.d
                                int32_t var_1b8_1 = r11_7
                                
                                do
                                    int64_t* rdx_16 = var_230
                                    int64_t rcx_21 = var_220
                                    int64_t r12_1 = sx.q(rdx_16[rsi_6].d)
                                    int64_t rdi_3 = sx.q(*(&rdx_16[rsi_6] + 4))
                                    int32_t* r9_5 = rcx_21 + r14_1
                                    int64_t r10_8 = r12_1 * 0x38 + rcx_21
                                    int32_t r11_8 = rbx_2 + 1
                                    
                                    if (r11_7 + rbx_2 s>= r8_10)
                                        r11_8 = r13_4.d
                                    
                                    int64_t r8_11 = *r15
                                    int32_t rax_48 = rbx_2
                                    
                                    if (rbx_2 s<= r13_4.d)
                                        rax_48 = r8_10 + r13_4.d
                                    
                                    int64_t rdx_20 = *arg1
                                    int32_t rax_51 = *(r10_8 + (rdi_3 << 2))
                                    int64_t rax_53 =
                                        sx.q(*(r10_8 + (sx.q((rdi_3 + 1).d s% 3) << 2)))
                                    int32_t var_210_2 = rax_53.d
                                    int64_t rcx_24 = rax_53 * 3
                                    zmm8 = *(rdx_20 + (rcx_24 << 2))
                                    zmm8[0] = zmm8[0] f- *(r8_11 + (rcx_24 << 2))
                                    zmm6.d = (*(rdx_20 + (rcx_24 << 2) + 4)).d f-
                                        *(r8_11 + (rcx_24 << 2) + 4)
                                    zmm9.d = (*(rdx_20 + (rcx_24 << 2) + 8)).d f-
                                        *(r8_11 + (rcx_24 << 2) + 8)
                                    int64_t rcx_25 = sx.q(rax_51) * 3
                                    zmm2_1 = *(rdx_20 + (rcx_25 << 2) + 8)
                                    zmm2_1[0] = zmm2_1[0] f- *(r8_11 + (rcx_25 << 2) + 8)
                                    zmm5_1 = *(rdx_20 + (rcx_25 << 2))
                                    zmm7.d = (*(rdx_20 + (rcx_15 << 2) + 4)).d f-
                                        *(r8_11 + (rcx_15 << 2) + 4)
                                    zmm1_1 = *(rdx_20 + (rcx_15 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_11 + (rcx_15 << 2) + 8)
                                    zmm3_1 = *(rdx_20 + (rcx_15 << 2))
                                    zmm2_1[0] = zmm2_1[0] f- zmm9.d
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_11 + (rcx_15 << 2))
                                    zmm7.d = zmm7.d f- zmm6.d
                                    zmm5_1.d = zmm5_1.d f- *(r8_11 + (rcx_25 << 2))
                                    zmm4_1.d = (*(rdx_20 + (rcx_25 << 2) + 4)).d f-
                                        *(r8_11 + (rcx_25 << 2) + 4)
                                    zmm1_1[0] = zmm1_1[0] f- zmm9.d
                                    zmm3_1[0] = zmm3_1[0] f- zmm8[0]
                                    zmm0_1 = zmm7
                                    zmm0_1[0] = zmm0_1[0] * zmm2_1[0]
                                    zmm5_1.d = zmm5_1.d f- zmm8[0]
                                    zmm10 = zmm1_1
                                    zmm4_1.d = zmm4_1.d f- zmm6.d
                                    zmm3_1[0] = zmm3_1[0] * zmm2_1[0]
                                    zmm1_1[0] = zmm1_1[0] f* zmm5_1.d
                                    zmm10[0] = zmm10[0] f* zmm4_1.d
                                    zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
                                    zmm7.d = zmm7.d f* zmm5_1.d
                                    zmm10[0] = zmm10[0] - zmm0_1[0]
                                    zmm3_1[0] = zmm3_1[0] f* zmm4_1.d
                                    zmm7.d = zmm7.d f- zmm3_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                                    zmm10[0] = zmm10[0] * zmm10[0]
                                    zmm1_1 = zmm7
                                    zmm1_1[0] = zmm1_1[0] f* zmm7.d
                                    zmm3_1[0] = zmm3_1[0] + zmm10[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm1_1[0]
                                    float var_20c_1
                                    float var_204_1
                                    
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
                                            zmm5_1.d = zmm5_1.d f* zmm7.d
                                            var_20c_1 = zmm0_1[0]
                                            zmm1_1[0] = zmm1_1[0] * zmm3_1[0]
                                            var_204_1 = zmm5_1.d
                                        else
                                            zmm1_1 = data_143dbb1fc
                                            var_20c_1 = data_143dbb1f8[0]
                                            var_204_1 = data_143dbb200[0]
                                        
                                        float var_208_2 = zmm1_1[0]
                                    else
                                        var_20c_1 = zmm10[0]
                                        float var_208_1 = zmm3_1[0]
                                        var_204_1 = zmm7.d
                                    
                                    *(r9_5 + 0xc) = var_20c_1.q
                                    r9_5[5] = var_204_1
                                    zmm0_1 = r9_5[4]
                                    zmm2_1 = r9_5[3]
                                    zmm1_1 = r9_5[5]
                                    zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                                    float rax_56
                                    
                                    if (zmm2_1[0] f>= zmm15.d)
                                        *r9_5 = var_210_2
                                        r9_5[1] = rax_51
                                        r9_5[2] = var_1c0_1
                                        r9_5[8] = rax_48 - 1
                                        rax_56.b = 1
                                        r9_5[7] = r12_1.d
                                        r9_5[9] = r11_8
                                        r9_5[0xa] = rdi_3.d
                                        r9_5[0xb] = 2
                                        r9_5[0xc] = 1
                                        zmm6.d = zmm6.d f* r9_5[4]
                                        zmm8[0] = zmm8[0] f* r9_5[3]
                                        zmm9.d = zmm9.d f* r9_5[5]
                                        r9_5[0xd].b = 0
                                        zmm6.d = zmm6.d f+ zmm8[0]
                                        zmm6.d = zmm6.d f+ zmm9.d
                                        r9_5[6] = zmm6.d
                                    else
                                        rax_56.b = 0
                                    
                                    *(r10_8 + (rdi_3 << 2) + 0x1c) = rbx_2
                                    *(r10_8 + (rdi_3 << 2) + 0x28) = 0
                                    
                                    if (rax_56.b == 0)
                                        rbx_1 = var_1e0.q
                                        goto label_141557425
                                    
                                    zmm0_1 = r9_5[6]
                                    r15 = arg2
                                    
                                    if (not(zmm0_1[0] < zmm12[0]) && not(zmm0_1[0] > zmm13_1))
                                        char rax_61
                                        rax_61, zmm12, zmm13_1, zmm14, zmm15 =
                                            sub_141743d50(r9_5, *arg1, *r15)
                                        
                                        if (rax_61 != 0)
                                            int32_t var_130_1 = rbx_2
                                            int64_t* var_138 = &var_220
                                            sub_14175ce20(&var_1e0, &var_138)
                                    
                                    r8_10 = var_228_1.d
                                    rbx_2 += 1
                                    r11_7 = var_1b8_1
                                    r14_1 += 0x38
                                    rsi_6 += 1
                                while (rsi_6 s< rax_43)
                                
                                rdi_2 = var_1e0:8.q
                                rbx_1 = var_1e0.q
                                zmm8 = 0x7fffffff
                                r14 = arg1
                            
                            r12 = var_228_1:4.d
                            goto label_14155740c
            
        label_141557425:
            rsi_1 = var_230
            goto label_14155745c
    
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
        float (* rax_66)[0x4] = rbx_1
        
        if (((var_1d0 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_66 - rbx_1 - 8 u> 0x1f)
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
    int32_t var_1e8_1 = 0
    int32_t var_1e8_2 = 0

int64_t rcx_34 = var_220

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

__security_check_cookie(rax_1 ^ &var_278)
return zx.q(rdi_1)
