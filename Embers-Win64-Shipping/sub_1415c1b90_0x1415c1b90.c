// 函数: sub_1415c1b90
// 地址: 0x1415c1b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int64_t* r14 = arg3
int64_t* r15 = arg2
int64_t* r12 = arg1
float zmm15[0x4] = 0x7f7fffff
uint64_t* var_270 = arg7
int64_t var_240
int64_t* var_278 = &var_240
void** var_158 = arg4
int32_t* var_198 = arg8
var_240 = 0
int64_t var_238 = 0
char rax_3
float zmm6[0x4]
int128_t zmm7
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
uint128_t zmm11
float zmm12[0x4]
float zmm13[0x4]
rax_3, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 =
    sub_1416e3520(arg1, arg2, arg3, arg4, var_278)
int32_t rsi_1

if (rax_3 != 0)
    int128_t var_1f0
    __builtin_memset(&var_1f0, 0, 0x18)
    float (* rsi_2)[0x4] = var_1f0:8.q
    int32_t i = 0
    float (* rbx_1)[0x4] = var_1f0.q
    int64_t* var_258
    int64_t var_1e0
    float zmm1_1[0x4]
    
    if (var_238.d s> 0)
        do
            char rax_5
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, arg5, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_240, *r12, *r15)
            
            if (rax_5 != 0)
                int64_t var_250
                var_250.d = i
                var_258 = &var_240
                
                if (var_1e0 == rsi_2)
                    sub_141701fc0(&var_1f0, rsi_2, &var_258)
                    rsi_2 = var_1f0:8.q
                    rbx_1 = var_1f0.q
                else
                    *rsi_2 = var_258.o
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
        while (i s< var_238.d)
    
    int64_t rcx_7 = (rsi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_7 == 0)
        rdx_4 = var_240
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_240
    
    float zmm0_1[0x4] = *rdx_4
    int64_t* rdi_1 = nullptr
    zmm1_1 = rdx_4[1]
    var_258 = nullptr
    float var_58_1[0x4] = zmm6
    int128_t var_68_1 = zmm7
    float var_78_1[0x4] = zmm8
    float var_98_1[0x4] = zmm10
    uint128_t var_a8_1 = zmm11
    float var_b8_1[0x4] = zmm12
    float var_128[0x4] = zmm0_1
    int64_t var_250_1 = 0
    float var_118_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    float var_c8_1[0x4] = zmm13
    float var_d8_1[0x4] = arg5
    int64_t var_f8_1 = rdx_4[3][0].q
    float var_108_1[0x4] = rdx_4[2]
    int512_t zmm6_2
    int512_t zmm7_1
    int512_t zmm8_1
    int512_t zmm9_1
    int512_t zmm10_1
    int512_t zmm11_1
    int512_t zmm12_1
    int512_t zmm13_1
    int512_t zmm14
    
    if (rcx_7 == 0)
    label_1415c2779:
        zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14 =
            sub_14154a2a0(*arg1, *arg2, &var_128, arg6, arg7, var_198, arg9)
        rsi_1 = 1
    else
        float zmm5_1[0x4] = 0x80000000
        
        while (true)
            if (rdx_5 s< 0x80)
                int64_t r13_1 = sx.q((*rbx_1)[2])
                int32_t var_248_1 = r13_1.d
                
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
                    
                    r14 = arg3
                    rbx_1[i_2] = zmm1_1
                
                rsi_2 -= 0x10
                int32_t* rdi_5 = r13_1 * 0x38 + var_240
                var_1f0:8.q = rsi_2
                
                if (rdi_5[0xd].b != 0)
                label_1415c272a:
                    rcx_7 = (rsi_2 - rbx_1) s>> 4
                    
                    if (rcx_7 != 0)
                        rdx_5 += 1
                        r14 = arg3
                        continue
                else
                    int32_t* rax_20 = *r14
                    zmm13 = rdi_5[4]
                    zmm12 = rdi_5[3]
                    arg5 = rdi_5[5]
                    zmm12[0] = zmm12[0] f* *rax_20
                    arg5[0] = arg5[0] f* rax_20[2]
                    zmm13[0] = zmm13[0] f* rax_20[1]
                    zmm13[0] = zmm13[0] f* rax_20[4]
                    zmm13[0] = zmm13[0] f* rax_20[7]
                    zmm13[0] = zmm13[0] + zmm12[0]
                    zmm12[0] = zmm12[0] f* rax_20[3]
                    zmm13[0] = zmm13[0] + arg5[0]
                    arg5[0] = arg5[0] f* rax_20[5]
                    zmm13[0] = zmm13[0] + zmm12[0]
                    zmm12[0] = zmm12[0] f* rax_20[6]
                    zmm13[0] = zmm13[0] + arg5[0]
                    arg5[0] = arg5[0] f* rax_20[8]
                    zmm13[0] = zmm13[0] + zmm12[0]
                    bool cond:0_1 = zmm13[0] < zmm13[0]
                    zmm13[0] = zmm13[0] + arg5[0]
                    int32_t r13_2
                    
                    if (not(cond:0_1) && not(zmm13[0] < zmm13[0]))
                        zmm11 = zx.o(*rax_20)
                        r13_2 = rax_20[2]
                    else if (zmm13[0] < zmm13[0] || zmm13[0] < zmm13[0])
                        zmm11 = zx.o(*(rax_20 + 0x18))
                        r13_2 = rax_20[8]
                    else
                        zmm11 = zx.o(*(rax_20 + 0xc))
                        r13_2 = rax_20[5]
                    
                    zmm13 ^= zmm5_1
                    uint64_t var_220_1 = zmm11.q
                    arg5 ^= zmm5_1
                    zmm12 ^= zmm5_1
                    int128_t* rax_21 = var_158[2]
                    void* rcx_13 = *var_158
                    zmm8 = *(rax_21 + 4)
                    zmm5_1 = *(rax_21 + 8)
                    zmm7 = *rax_21
                    float zmm3_1[0x4] = *(rax_21 + 0xc)
                    zmm13[0] = zmm13[0] * zmm5_1[0]
                    zmm12[0] = zmm12[0] * zmm5_1[0]
                    zmm13[0] = zmm13[0] f* zmm7.d
                    arg5[0] = arg5[0] * zmm8[0]
                    arg5[0] = arg5[0] - zmm13[0]
                    arg5[0] = arg5[0] f* zmm7.d
                    zmm12[0] = zmm12[0] - arg5[0]
                    zmm12[0] = zmm12[0] * zmm8[0]
                    arg5[0] = arg5[0] + arg5[0]
                    zmm13[0] = zmm13[0] - zmm12[0]
                    zmm12[0] = zmm12[0] + zmm12[0]
                    arg5[0] = arg5[0] * zmm3_1[0]
                    arg5[0] = arg5[0] * zmm5_1[0]
                    zmm13[0] = zmm13[0] + zmm13[0]
                    arg5[0] = arg5[0] * zmm8[0]
                    arg5[0] = arg5[0] + zmm12[0]
                    zmm12[0] = zmm12[0] * zmm5_1[0]
                    zmm13[0] = zmm13[0] * zmm8[0]
                    zmm13[0] = zmm13[0] - zmm12[0]
                    zmm13[0] = zmm13[0] f* zmm7.d
                    zmm13[0] = zmm13[0] * zmm3_1[0]
                    zmm13[0] = zmm13[0] + arg5[0]
                    arg5[0] = arg5[0] - zmm13[0]
                    zmm12[0] = zmm12[0] * zmm3_1[0]
                    zmm12[0] = zmm12[0] f* zmm7.d
                    zmm13[0] = zmm13[0] + arg5[0]
                    zmm12[0] = zmm12[0] + zmm13[0]
                    zmm12[0] = zmm12[0] - arg5[0]
                    arg5[0] = arg5[0] + zmm12[0]
                    zmm12[0] = zmm12[0] + zmm13[0]
                    int64_t var_200 = (_mm_unpacklo_ps(zmm13, arg5[0].q)).q
                    float var_1f8_3 = zmm12[0]
                    float var_180
                    zmm11 = sub_141758e70(rcx_13, &var_180, &var_200, zx.o(0))
                    float (* rax_23)[0x4] = var_158[1]
                    int32_t var_178
                    float temp0_6[0x4] = _mm_unpacklo_ps(var_180, var_178.q)
                    float zmm5_2[0x4] = *rax_23
                    int32_t var_17c
                    float temp0_8[0x4] = _mm_unpacklo_ps(temp0_6, _mm_unpacklo_ps(var_17c, 0)[0].q)
                    float temp0_9[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
                    uint128_t zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xc9), temp0_9)
                    float temp0_12[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                    zmm12 = rdi_5[6]
                    float temp0_14[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xd2), temp0_12)
                    float temp0_15[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
                    float temp0_16[0x4] = _mm_sub_ps(temp0_14, zmm0_2)
                    float temp0_17[0x4] = _mm_add_ps(temp0_16, temp0_16)
                    float temp0_18[0x4] = _mm_mul_ps(temp0_15, temp0_17)
                    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xc9), temp0_9)
                    float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xd2)
                    float temp0_22[0x4] = _mm_add_ps(temp0_18, temp0_8)
                    float zmm2_2[0x4] = var_220_1.d
                    float temp0_26[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_21, temp0_12), zmm0_2), temp0_22), 
                        rax_23[1])
                    zmm2_2[0] = zmm2_2[0] - temp0_26[0]
                    float var_1b8_1 = temp0_26[0]
                    zmm0_2 = _mm_shuffle_ps(temp0_26, temp0_26, 0x55)
                    float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)
                    zmm3_1 = var_220_1:4.d
                    zmm3_1[0] = zmm3_1[0] f- zmm0_2.d
                    int32_t var_1b4_1 = zmm0_2.d
                    zmm0_2.d = r13_2.d f- temp0_28[0]
                    float var_1b0_1 = temp0_28[0]
                    float var_170 = zmm2_2[0]
                    zmm2_2[0] = zmm2_2[0] f* rdi_5[3]
                    float var_16c_1 = zmm3_1[0]
                    zmm3_1[0] = zmm3_1[0] f* rdi_5[4]
                    int32_t var_168_1 = zmm0_2.d
                    zmm0_2.d = zmm0_2.d f* rdi_5[5]
                    zmm3_1[0] = zmm3_1[0] + zmm2_2[0]
                    zmm3_1[0] = zmm3_1[0] f+ zmm0_2.d
                    zmm0_2.d = zmm12.d f* 0.00999999978f
                    zmm0_2 = __andps_xmmxud_memxud(zmm0_2, data_142d3f770)
                    float temp0_30[0x4] = _mm_min_ss(zmm3_1[0], zmm15[0])
                    zmm15 = temp0_30
                    temp0_30[0] = temp0_30[0] - zmm12[0]
                    
                    if (__andps_xmmxud_memxud(temp0_30, data_142d3f770)[0] f<= zmm0_2.d)
                        zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14 =
                            sub_14154a2a0(*r12, *r15, rdi_5, arg6, arg7, var_198, arg9)
                        rdi_1 = var_258
                        rsi_1 = 0
                        break
                    
                    if (not(zmm15[0] < zmm12[0]))
                        int64_t r14_3 = sx.q(r12[1].d)
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
                        var_f8_1:4.b = rdi_5[0xd].b
                        int32_t rax_35 = (r14_3 + 1).d
                        var_118_1[2] = zmm12[0]
                        var_128[3].q = zmm0_2.q
                        int32_t var_1c8_1 = r14_3.d
                        r12[1].d = rax_35
                        
                        if (rax_35 s> *(r12 + 0xc))
                            sub_14083a7e0(r12)
                        
                        int64_t rax_36 = *r12
                        int64_t r14_4 = r14_3 * 3
                        *(rax_36 + (r14_4 << 2)) = zmm11.q
                        *(rax_36 + (r14_4 << 2) + 8) = r13_2
                        int64_t r13_3 = sx.q(r15[1].d)
                        int32_t rax_37 = (r13_3 + 1).d
                        r15[1].d = rax_37
                        
                        if (rax_37 s> *(r15 + 0xc))
                            sub_14083a7e0(r15)
                        
                        int64_t rcx_16 = *r15
                        int64_t rdx_13 = r13_3 * 3
                        var_250_1.d = 0
                        *(rcx_16 + (rdx_13 << 2)) = var_1b8_1.q
                        *(rcx_16 + (rdx_13 << 2) + 8) = var_1b0_1
                        int32_t rax_39 = var_250_1:4.d
                        rdi_5[0xd].b = 1
                        
                        if (rax_39 s< 0 && rax_39 != 0)
                            sub_1405c5570(&var_258, 0)
                        
                        sub_1415c5980(&var_240, var_248_1, &var_170, &var_258)
                        int32_t r8_11 = var_238.d
                        int64_t r13_4 = sx.q(var_250_1.d)
                        int32_t var_248_2 = r8_11
                        int32_t rax_40 = r8_11 + r13_4.d
                        var_238.d = rax_40
                        
                        if (rax_40 s> var_238:4.d)
                            sub_1407c3b60(&var_240)
                            r8_11 = var_248_2
                        
                        if (r13_4.d s>= 3)
                            int64_t rdi_6 = 0
                            int64_t var_150_1 = r13_4
                            
                            if (r13_4.d s> 0)
                                void* r12_1 = sx.q(r8_11) * 0x38
                                int32_t r11_7 = 1 - r8_11
                                int32_t rbx_2 = r8_11
                                int32_t var_1c0_1 = r11_7
                                
                                do
                                    int64_t* rdx_16 = var_258
                                    int64_t rcx_20 = var_240
                                    int64_t rax_42 = sx.q(rdx_16[rdi_6].d)
                                    int64_t rsi_3 = sx.q(*(&rdx_16[rdi_6] + 4))
                                    void* r9_5 = r12_1 + rcx_20
                                    float var_1c4_1 = rax_42.d
                                    int64_t r10_8 = rax_42 * 0x38 + rcx_20
                                    int32_t r13_5 = rbx_2 + 1
                                    
                                    if (r11_7 + rbx_2 s>= r13_4.d)
                                        r13_5 = r8_11
                                    
                                    int64_t r8_12 = *r15
                                    int32_t r11_8 = rbx_2
                                    
                                    if (rbx_2 s<= r8_11)
                                        r11_8 = rax_40
                                    
                                    int64_t rdx_19 = *arg1
                                    int32_t rax_48 = *(r10_8 + (rsi_3 << 2))
                                    zmm6 = *(rdx_19 + (r14_4 << 2) + 4)
                                    zmm6[0] = zmm6[0] f- *(r8_12 + (r14_4 << 2) + 4)
                                    zmm1_1 = *(rdx_19 + (r14_4 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_12 + (r14_4 << 2) + 8)
                                    int64_t rax_50 =
                                        sx.q(*(r10_8 + (sx.q((rsi_3 + 1).d s% 3) << 2)))
                                    zmm3_1 = *(rdx_19 + (r14_4 << 2))
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_12 + (r14_4 << 2))
                                    int32_t var_1cc_1 = rax_50.d
                                    int64_t rcx_23 = rax_50 * 3
                                    zmm10 = *(rdx_19 + (rcx_23 << 2))
                                    zmm10[0] = zmm10[0] f- *(r8_12 + (rcx_23 << 2))
                                    zmm7.d = (*(rdx_19 + (rcx_23 << 2) + 4)).d f-
                                        *(r8_12 + (rcx_23 << 2) + 4)
                                    zmm11.d = (*(rdx_19 + (rcx_23 << 2) + 8)).d f-
                                        *(r8_12 + (rcx_23 << 2) + 8)
                                    int64_t rcx_24 = sx.q(rax_48) * 3
                                    float zmm2_1[0x4] = *(rdx_19 + (rcx_24 << 2) + 8)
                                    zmm3_1[0] = zmm3_1[0] - zmm10[0]
                                    zmm2_1[0] = zmm2_1[0] f- *(r8_12 + (rcx_24 << 2) + 8)
                                    zmm5_1 = *(rdx_19 + (rcx_24 << 2))
                                    zmm6[0] = zmm6[0] f- zmm7.d
                                    float zmm4_1[0x4] = *(rdx_19 + (rcx_24 << 2) + 4)
                                    zmm1_1[0] = zmm1_1[0] f- zmm11.d
                                    zmm5_1[0] = zmm5_1[0] f- *(r8_12 + (rcx_24 << 2))
                                    zmm4_1[0] = zmm4_1[0] f- *(r8_12 + (rcx_24 << 2) + 4)
                                    zmm2_1[0] = zmm2_1[0] f- zmm11.d
                                    zmm5_1[0] = zmm5_1[0] - zmm10[0]
                                    zmm4_1[0] = zmm4_1[0] f- zmm7.d
                                    zmm6[0] = zmm6[0] * zmm2_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm2_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm5_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm4_1[0]
                                    zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
                                    zmm6[0] = zmm6[0] * zmm5_1[0]
                                    zmm1_1[0] = zmm1_1[0] - zmm6[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm4_1[0]
                                    zmm6[0] = zmm6[0] - zmm3_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm6[0] = zmm6[0] * zmm6[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm1_1[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm6[0]
                                    
                                    if (zmm3_1[0] == 1f)
                                        goto label_1415c25d8
                                    
                                    float var_230_1
                                    float var_228_1
                                    
                                    if (zmm3_1[0] >= 9.99999994e-09f)
                                        zmm4_1 = 0x3f000000
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
                                        zmm4_1[0] = 0.5f - zmm3_1[0]
                                        temp0_33[0] = temp0_33[0] * zmm4_1[0]
                                        temp0_33[0] = temp0_33[0] + temp0_33[0]
                                        zmm1_1[0] = zmm1_1[0] * temp0_33[0]
                                        zmm3_1[0] = zmm3_1[0] * temp0_33[0]
                                        zmm6[0] = zmm6[0] * temp0_33[0]
                                    label_1415c25d8:
                                        var_228_1 = zmm6[0]
                                        float var_22c_2 = zmm3_1[0]
                                        var_230_1 = zmm1_1[0]
                                    else
                                        var_230_1 = data_143dbb1f8[0]
                                        var_228_1 = data_143dbb200[0]
                                        float var_22c_1 = data_143dbb1fc[0]
                                    
                                    *(r9_5 + 0xc) = var_230_1.q
                                    *(r9_5 + 0x14) = var_228_1
                                    zmm0_1 = *(r9_5 + 0x10)
                                    zmm2_1 = *(r9_5 + 0xc)
                                    zmm1_1 = *(r9_5 + 0x14)
                                    zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                                    float rax_52
                                    
                                    if (zmm2_1[0] >= 9.99999975e-05f)
                                        *r9_5 = var_1cc_1
                                        *(r9_5 + 4) = rax_48
                                        *(r9_5 + 8) = var_1c8_1
                                        *(r9_5 + 0x1c) = var_1c4_1
                                        rax_52.b = 1
                                        *(r9_5 + 0x20) = r11_8 - 1
                                        *(r9_5 + 0x24) = r13_5
                                        *(r9_5 + 0x28) = rsi_3.d
                                        *(r9_5 + 0x2c) = 2
                                        *(r9_5 + 0x30) = 1
                                        zmm7.d = zmm7.d f* *(r9_5 + 0x10)
                                        zmm10[0] = zmm10[0] f* *(r9_5 + 0xc)
                                        zmm11.d = zmm11.d f* *(r9_5 + 0x14)
                                        *(r9_5 + 0x34) = 0
                                        zmm7.d = zmm7.d f+ zmm10[0]
                                        zmm7.d = zmm7.d f+ zmm11.d
                                        *(r9_5 + 0x18) = zmm7.d
                                    else
                                        rax_52.b = 0
                                    
                                    *(r10_8 + (rsi_3 << 2) + 0x1c) = rbx_2
                                    *(r10_8 + (rsi_3 << 2) + 0x28) = 0
                                    
                                    if (rax_52.b == 0)
                                        rbx_1 = var_1f0.q
                                        goto label_1415c2743
                                    
                                    zmm0_1 = *(r9_5 + 0x18)
                                    r15 = arg2
                                    
                                    if (not(zmm0_1[0] < zmm12[0]) && not(zmm0_1[0] > zmm15[0]))
                                        char rax_57
                                        rax_57, zmm12, zmm15 = sub_141743d50(r9_5, *arg1, *r15)
                                        
                                        if (rax_57 != 0)
                                            int32_t var_140_1 = rbx_2
                                            int64_t* var_148 = &var_240
                                            sub_14175ce20(&var_1f0, &var_148)
                                    
                                    r8_11 = var_248_2
                                    rbx_2 += 1
                                    r13_4 = zx.q(var_250_1.d)
                                    r12_1 += 0x38
                                    r11_7 = var_1c0_1
                                    rdi_6 += 1
                                while (rdi_6 s< var_150_1)
                                
                                rsi_2 = var_1f0:8.q
                                rbx_1 = var_1f0.q
                                r12 = arg1
                            
                            zmm5_1 = 0x80000000
                            goto label_1415c272a
            
        label_1415c2743:
            rdi_1 = var_258
            goto label_1415c2779
    
    zmm14.o = var_d8_1
    zmm13_1.o = var_c8_1
    zmm12_1.o = var_b8_1
    zmm11_1.o = var_a8_1
    zmm10_1.o = var_98_1
    zmm9_1.o = zmm9
    zmm8_1.o = var_78_1
    zmm7_1.o = var_68_1
    zmm6_2.o = var_58_1
    
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
    *arg6 = 0
    rsi_1 = 2
    *arg8 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg8[1].d = 0
    *arg9 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_1f8_1 = 0
    arg9[1].d = 0
    int32_t var_1f8_2 = 0

int64_t rcx_33 = var_240

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

__security_check_cookie(rax_1 ^ &var_298)
return zx.q(rsi_1)
