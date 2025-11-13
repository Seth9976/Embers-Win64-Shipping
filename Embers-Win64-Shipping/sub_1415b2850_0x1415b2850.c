// 函数: sub_1415b2850
// 地址: 0x1415b2850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int64_t* r15 = arg2
int64_t* r12 = arg1
uint64_t* var_270 = arg6
int64_t var_240
int64_t* var_278 = &var_240
int32_t* var_1a0 = arg7
var_240 = 0
int64_t var_238 = 0
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
    sub_1416d6be0(arg1, arg2, arg3, arg4, var_278)
int32_t rsi_1

if (rax_3 != 0)
    int32_t i = 0
    int128_t var_200
    __builtin_memset(&var_200, 0, 0x18)
    float (* r14_1)[0x4] = var_200:8.q
    float (* rdi_1)[0x4] = var_200.q
    int64_t* var_250
    int64_t var_1f0
    float zmm1_1[0x4]
    
    if (var_238.d s> 0)
        do
            char rax_5
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, zmm14, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_240, *r12, *r15)
            
            if (rax_5 != 0)
                int64_t var_248
                var_248.d = i
                var_250 = &var_240
                
                if (var_1f0 == r14_1)
                    sub_141701fc0(&var_200, r14_1, &var_250)
                    r14_1 = var_200:8.q
                    rdi_1 = var_200.q
                else
                    *r14_1 = var_250.o
                    r14_1 = &r14_1[1]
                    var_200:8.q = r14_1
                
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
        while (i s< var_238.d)
    
    int64_t rcx_7 = (r14_1 - rdi_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_7 == 0)
        rdx_4 = var_240
    else
        rdx_4 = sx.q((*rdi_1)[2]) * 0x38 + var_240
    
    int64_t* rbx_1 = nullptr
    int32_t r13_1 = 0
    uint128_t var_b8_1 = zmm12
    int128_t var_d8_1 = zmm14
    int128_t var_e8_1 = zmm15
    var_250 = nullptr
    int64_t var_248_1 = 0
    zmm1_1 = rdx_4[1]
    float var_128[0x4] = *rdx_4
    float var_118_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    int64_t var_f8_1 = rdx_4[3][0].q
    float var_108_1[0x4] = rdx_4[2]
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
    label_1415b3314:
        zmm6_3, zmm7_2, zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm12_1, zmm14_1, zmm15_1 =
            sub_14154a2a0(*arg1, *arg2, &var_128, arg5, arg6, var_1a0, arg8)
        rsi_1 = 1
    else
        zmm14 = 0x322bcc77
        zmm15 = 0x38d1b717
        
        while (true)
            if (rdx_5 s< 0x80)
                float rax_11 = (*rdi_1)[2]
                float var_258_1 = rax_11
                
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
                    
                    rax_11 = var_258_1
                    rdi_1[i_2] = zmm1_1
                
                r14_1 -= 0x10
                var_200:8.q = r14_1
                int32_t* rsi_4 = sx.q(rax_11) * 0x38 + var_240
                
                if (rsi_4[0xd].b != 0)
                label_1415b32c6:
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
                    float var_188 = zmm0_1[0]
                    zmm0_1 = *(rbx_4 + 0x30)
                    zmm0_1[0] = zmm0_1[0] f* rsi_4[5]
                    float var_184_1 = zmm1_1[0]
                    float var_180_1 = zmm0_1[0]
                    float var_17c
                    uint32_t zmm10_1[0x4] = sub_141758e70(rcx_13, &var_17c, &var_188, zx.o(0))
                    float zmm8_1 = var_17c f* *(rbx_4 + 0x28)
                    void* rax_23 = *arg4
                    int32_t var_178
                    float zmm9_1[0x4] = var_178
                    zmm9_1[0] = zmm9_1[0] f* *(rbx_4 + 0x2c)
                    uint128_t zmm4_1 = zx.o(*(rax_23 + 0x10))
                    int32_t rax_24 = *(rax_23 + 0x18)
                    int32_t var_174
                    float zmm7_1[0x4] = var_174
                    zmm7_1[0] = zmm7_1[0] f* *(rbx_4 + 0x30)
                    float (* rax_25)[0x4] = arg4[1]
                    uint128_t zmm0_2 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                    uint128_t zmm6_1 = _mm_unpacklo_ps(zmm4_1, rax_24[0].q)
                    float zmm5_1[0x4] = *rax_25
                    zmm6_1 = _mm_unpacklo_ps(zmm6_1, _mm_unpacklo_ps(zmm0_2, 0).q)
                    uint32_t zmm1_2[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9), zmm1_2)
                    zmm4_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                    uint128_t zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2), zmm4_1)
                    float var_1c4_1 = zmm9_1[0]
                    float temp0_15[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    float var_1c8_1 = zmm8_1
                    zmm2_1 = _mm_sub_ps(zmm2_1, zmm0_2)
                    float var_1c0_1 = zmm7_1[0]
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm2_1)
                    float temp0_18[0x4] = _mm_mul_ps(temp0_15, zmm2_1)
                    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9), zmm1_2)
                    float temp0_21[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
                    float temp0_22[0x4] = _mm_add_ps(temp0_18, zmm6_1)
                    float temp0_26[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_21, zmm4_1), zmm0_2), temp0_22), 
                        rax_25[1])
                    zmm8_1 = zmm8_1 - temp0_26[0]
                    float var_1b8_1 = temp0_26[0]
                    zmm0_2 = _mm_shuffle_ps(temp0_26, temp0_26, 0x55)
                    zmm9_1[0] = zmm9_1[0] f- zmm0_2.d
                    zmm1_2 = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)
                    zmm7_1[0] = zmm7_1[0] f- zmm1_2[0]
                    int32_t var_1b4_1 = zmm0_2.d
                    float var_170 = zmm8_1
                    zmm8_1 = zmm8_1 f* rsi_4[3]
                    float var_16c_1 = zmm9_1[0]
                    zmm9_1[0] = zmm9_1[0] f* rsi_4[4]
                    uint32_t var_1b0_1 = zmm1_2[0]
                    float var_168_1 = zmm7_1[0]
                    zmm9_1[0] = zmm9_1[0] + zmm8_1
                    zmm12 = rsi_4[6]
                    zmm7_1[0] = zmm7_1[0] f* rsi_4[5]
                    zmm0_2.d = zmm12.d f* 0.00999999978f
                    zmm9_1[0] = zmm9_1[0] + zmm7_1[0]
                    zmm0_2 = _mm_and_ps(zmm0_2, zmm10_1)
                    float temp0_30[0x4] = _mm_min_ss(zmm9_1[0], zmm13_1)
                    zmm1_2 = temp0_30
                    zmm13_1 = temp0_30[0]
                    zmm1_2[0] = zmm1_2[0] f- zmm12.d
                    
                    if (_mm_and_ps(zmm1_2, zmm10_1)[0] f<= zmm0_2.d)
                        zmm6_3, zmm7_2, zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm12_1, zmm14_1, 
                            zmm15_1 = sub_14154a2a0(*r12, *r15, rsi_4, arg5, arg6, var_1a0, arg8)
                        rbx_1 = var_250
                        rsi_1 = 0
                        break
                    
                    if (not(zmm13_1 f< zmm12.d))
                        int64_t rbx_5 = sx.q(r12[1].d)
                        zmm0_2 = zx.o(*(rsi_4 + 0xc))
                        var_128[0] = *rsi_4
                        var_128[1] = rsi_4[1]
                        var_128[2] = rsi_4[2]
                        var_118_1[1] = rsi_4[5]
                        var_118_1[3] = rsi_4[7]
                        var_108_1[0] = rsi_4[8]
                        var_108_1[1] = rsi_4[9]
                        var_108_1[2] = rsi_4[0xa]
                        var_108_1[3] = rsi_4[0xb]
                        var_f8_1.d = rsi_4[0xc]
                        var_f8_1:4.b = rsi_4[0xd].b
                        int32_t rax_37 = (rbx_5 + 1).d
                        var_118_1[2] = zmm12.d
                        var_128[3].q = zmm0_2.q
                        int32_t var_1dc_1 = rbx_5.d
                        r12[1].d = rax_37
                        
                        if (rax_37 s> *(r12 + 0xc))
                            sub_14083a7e0(r12)
                        
                        int64_t rcx_16 = *r12
                        int64_t rdx_11 = rbx_5 * 3
                        *(rcx_16 + (rdx_11 << 2)) = var_1c8_1.q
                        *(rcx_16 + (rdx_11 << 2) + 8) = var_1c0_1
                        int64_t rbx_6 = sx.q(r15[1].d)
                        int32_t rax_39 = (rbx_6 + 1).d
                        r15[1].d = rax_39
                        
                        if (rax_39 s> *(r15 + 0xc))
                            sub_14083a7e0(r15)
                        
                        int64_t rcx_18 = *r15
                        int64_t rdx_13 = rbx_6 * 3
                        var_248_1.d = 0
                        *(rcx_18 + (rdx_13 << 2)) = var_1b8_1.q
                        *(rcx_18 + (rdx_13 << 2) + 8) = var_1b0_1
                        rsi_4[0xd].b = 1
                        
                        if (r13_1 s< 0 && r13_1 != 0)
                            sub_1405c5570(&var_250, 0)
                        
                        sub_1415c5980(&var_240, var_258_1, &var_170, &var_250)
                        int64_t r13_2 = sx.q(var_238.d)
                        int32_t r8_11 = var_248_1.d
                        int32_t rax_41 = r8_11 + r13_2.d
                        var_238.d = rax_41
                        
                        if (rax_41 s> var_238:4.d)
                            sub_1407c3b60(&var_240)
                            r8_11 = var_248_1.d
                        
                        if (r8_11 s>= 3)
                            int64_t rsi_5 = 0
                            int64_t rax_42 = sx.q(r8_11)
                            
                            if (r8_11 s> 0)
                                int64_t r14_2 = r13_2 * 0x38
                                int32_t rbx_7 = r13_2.d
                                int32_t rdi_2 = 1 - r13_2.d
                                int32_t var_1d4_1 = rdi_2
                                
                                do
                                    int64_t* rdx_16 = var_250
                                    int64_t rcx_22 = var_240
                                    int64_t r12_1 = sx.q(rdx_16[rsi_5].d)
                                    int64_t r11_7 = sx.q(*(&rdx_16[rsi_5] + 4))
                                    int32_t* r9_5 = rcx_22 + r14_2
                                    void* r10_8 = r12_1 * 0x38 + rcx_22
                                    int32_t rdi_3 = rbx_7 + 1
                                    
                                    if (rdi_2 + rbx_7 s>= r8_11)
                                        rdi_3 = r13_2.d
                                    
                                    int64_t r8_12 = *r15
                                    int32_t rax_47 = rbx_7
                                    
                                    if (rbx_7 s<= r13_2.d)
                                        rax_47 = r8_11 + r13_2.d
                                    
                                    int32_t rax_49 = *(r10_8 + (r11_7 << 2))
                                    int64_t rdx_21 = *arg1
                                    int64_t rax_51 =
                                        sx.q(*(r10_8 + (sx.q((r11_7 + 1).d s% 3) << 2)))
                                    int32_t var_1e0_1 = rax_51.d
                                    int64_t rcx_25 = rax_51 * 3
                                    zmm8_1 = *(rdx_21 + (rcx_25 << 2)) f- *(r8_12 + (rcx_25 << 2))
                                    float zmm6_2 = *(rdx_21 + (rcx_25 << 2) + 4) f-
                                        *(r8_12 + (rcx_25 << 2) + 4)
                                    zmm9_1 = *(rdx_21 + (rcx_25 << 2) + 8)
                                    zmm9_1[0] = zmm9_1[0] f- *(r8_12 + (rcx_25 << 2) + 8)
                                    int64_t rcx_26 = sx.q(rax_49) * 3
                                    float zmm2_2[0x4] = *(rdx_21 + (rcx_26 << 2) + 8)
                                    zmm2_2[0] = zmm2_2[0] f- *(r8_12 + (rcx_26 << 2) + 8)
                                    float zmm5_2[0x4] = *(rdx_21 + (rcx_26 << 2))
                                    zmm7_1 = *(rdx_21 + (rdx_11 << 2) + 4)
                                    zmm7_1[0] = zmm7_1[0] f- *(r8_12 + (rdx_11 << 2) + 4)
                                    zmm1_1 = *(rdx_21 + (rdx_11 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_12 + (rdx_11 << 2) + 8)
                                    float zmm3_1[0x4] = *(rdx_21 + (rdx_11 << 2))
                                    zmm2_2[0] = zmm2_2[0] - zmm9_1[0]
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_12 + (rdx_11 << 2))
                                    float zmm4_2 = *(rdx_21 + (rcx_26 << 2) + 4)
                                    zmm7_1[0] = zmm7_1[0] - zmm6_2
                                    zmm5_2[0] = zmm5_2[0] f- *(r8_12 + (rcx_26 << 2))
                                    zmm4_2 = zmm4_2 f- *(r8_12 + (rcx_26 << 2) + 4)
                                    zmm1_1[0] = zmm1_1[0] - zmm9_1[0]
                                    zmm3_1[0] = zmm3_1[0] - zmm8_1
                                    zmm7_1[0] = zmm7_1[0] * zmm2_2[0]
                                    zmm5_2[0] = zmm5_2[0] - zmm8_1
                                    zmm10_1 = zmm1_1
                                    zmm4_2 = zmm4_2 - zmm6_2
                                    zmm3_1[0] = zmm3_1[0] * zmm2_2[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm5_2[0]
                                    zmm10_1[0] = zmm10_1[0] f* zmm4_2
                                    zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
                                    zmm7_1[0] = zmm7_1[0] * zmm5_2[0]
                                    zmm10_1[0] = zmm10_1[0] f- zmm7_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm4_2
                                    zmm7_1[0] = zmm7_1[0] - zmm3_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                                    zmm0_1 = zmm10_1
                                    zmm0_1[0] = zmm0_1[0] f* zmm10_1[0]
                                    zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm0_1[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm7_1[0]
                                    uint32_t var_230_1
                                    float var_228_1
                                    
                                    if (zmm3_1[0] != 1f)
                                        if (zmm3_1[0] f>= zmm14.d)
                                            float temp0_33[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                                            zmm2_2 = 0x3f000000
                                            zmm3_1[0] = zmm3_1[0] * 0.5f
                                            temp0_33[0] = temp0_33[0] * temp0_33[0]
                                            zmm3_1[0] = zmm3_1[0] * temp0_33[0]
                                            zmm2_2[0] = 0.5f - zmm3_1[0]
                                            temp0_33[0] = temp0_33[0] * zmm2_2[0]
                                            temp0_33[0] = temp0_33[0] + temp0_33[0]
                                            temp0_33[0] = temp0_33[0] * temp0_33[0]
                                            zmm3_1[0] = zmm3_1[0] * temp0_33[0]
                                            temp0_33[0] = temp0_33[0] * (0.5f - zmm3_1[0])
                                            temp0_33[0] = temp0_33[0] + temp0_33[0]
                                            zmm1_1 = temp0_33
                                            temp0_33[0] = temp0_33[0] f* zmm10_1[0]
                                            temp0_33[0] = temp0_33[0] * zmm7_1[0]
                                            var_230_1 = temp0_33[0]
                                            zmm1_1[0] = zmm1_1[0] * zmm3_1[0]
                                            var_228_1 = temp0_33[0]
                                        else
                                            zmm1_1 = data_143dbb1fc
                                            var_230_1 = data_143dbb1f8[0]
                                            var_228_1 = data_143dbb200[0]
                                        
                                        float var_22c_2 = zmm1_1[0]
                                    else
                                        var_230_1 = zmm10_1[0]
                                        float var_22c_1 = zmm3_1[0]
                                        var_228_1 = zmm7_1[0]
                                    
                                    *(r9_5 + 0xc) = var_230_1.q
                                    r9_5[5] = var_228_1
                                    zmm0_1 = r9_5[4]
                                    zmm2_2 = r9_5[3]
                                    zmm1_1 = r9_5[5]
                                    zmm2_2[0] = zmm2_2[0] * zmm2_2[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_2[0] = zmm2_2[0] + zmm0_1[0]
                                    zmm2_2[0] = zmm2_2[0] + zmm1_1[0]
                                    float rax_54
                                    
                                    if (zmm2_2[0] f>= zmm15.d)
                                        *r9_5 = var_1e0_1
                                        r9_5[1] = rax_49
                                        r9_5[2] = var_1dc_1
                                        r9_5[8] = rax_47 - 1
                                        rax_54.b = 1
                                        r9_5[7] = r12_1.d
                                        r9_5[9] = rdi_3
                                        r9_5[0xa] = r11_7.d
                                        r9_5[0xb] = 2
                                        r9_5[0xc] = 1
                                        zmm6_2 = zmm6_2 f* r9_5[4]
                                        zmm8_1 = zmm8_1 f* r9_5[3]
                                        zmm9_1[0] = zmm9_1[0] f* r9_5[5]
                                        r9_5[0xd].b = 0
                                        r9_5[6] = zmm6_2 + zmm8_1 + zmm9_1[0]
                                    else
                                        rax_54.b = 0
                                    
                                    *(r10_8 + (r11_7 << 2) + 0x1c) = rbx_7
                                    *(r10_8 + (r11_7 << 2) + 0x28) = 0
                                    
                                    if (rax_54.b == 0)
                                        rdi_1 = var_200.q
                                        goto label_1415b32dd
                                    
                                    zmm0_1 = r9_5[6]
                                    r15 = arg2
                                    r12 = arg1
                                    
                                    if (not(zmm0_1[0] f< zmm12.d) && not(zmm0_1[0] > zmm13_1))
                                        char rax_58
                                        rax_58, zmm12, zmm13_1, zmm14, zmm15 =
                                            sub_141743d50(r9_5, *r12, *r15)
                                        
                                        if (rax_58 != 0)
                                            int32_t var_130_1 = rbx_7
                                            int64_t* var_138 = &var_240
                                            sub_14175ce20(&var_200, &var_138)
                                    
                                    r8_11 = var_248_1.d
                                    rbx_7 += 1
                                    rdi_2 = var_1d4_1
                                    r14_2 += 0x38
                                    rsi_5 += 1
                                while (rsi_5 s< rax_42)
                                
                                r14_1 = var_200:8.q
                                rdi_1 = var_200.q
                            
                            r13_1 = var_248_1:4.d
                            goto label_1415b32c6
            
        label_1415b32dd:
            rbx_1 = var_250
            goto label_1415b3314
    
    zmm15_1.o = var_e8_1
    zmm14_1.o = var_d8_1
    zmm12_1.o = var_b8_1
    zmm11_2.o = zmm11
    zmm10_2.o = zmm10
    zmm9_2.o = zmm9
    zmm8_2.o = zmm8
    zmm7_2.o = zmm7
    zmm6_3.o = zmm6
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    if (rdi_1 != 0)
        float (* rax_63)[0x4] = rdi_1
        
        if (((var_1f0 - rdi_1) & 0xfffffffffffffff0) u>= 0x1000)
            rdi_1 = *(rdi_1 - 8)
            
            if (rax_63 - rdi_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rdi_1)
else
    *arg5 = 0
    int32_t var_208_1 = 0
    *arg7 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg7[1].d = 0
    *arg8 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_208_2 = 0
    rsi_1 = 2
    arg8[1].d = 0

int64_t rcx_35 = var_240

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

__security_check_cookie(rax_1 ^ &var_298)
return zx.q(rsi_1)
