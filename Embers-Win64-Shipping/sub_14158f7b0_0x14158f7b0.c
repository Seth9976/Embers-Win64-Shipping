// 函数: sub_14158f7b0
// 地址: 0x14158f7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int64_t* r13 = arg1
int32_t r15 = 0
void** r14 = arg3
int64_t* r12 = arg2
uint64_t* var_270 = arg6
int64_t var_240
int64_t* var_278 = &var_240
int32_t* var_1a8 = arg7
var_240 = 0
int64_t var_238 = 0
char rax_2
uint128_t zmm6
uint32_t zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
int128_t zmm10
int128_t zmm11
int128_t zmm12
int128_t zmm14
int128_t zmm15
rax_2, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
    sub_1416b9d00(r13, arg2, arg3, arg4, var_278)
int32_t rsi_1

if (rax_2 != 0)
    int128_t var_1e8
    __builtin_memset(&var_1e8, 0, 0x18)
    float (* rsi_2)[0x4] = var_1e8:8.q
    int32_t i = 0
    float (* rbx_1)[0x4] = var_1e8.q
    int64_t* var_250
    int64_t var_1d8
    float zmm1_1[0x4]
    
    if (var_238.d s> 0)
        do
            char rax_4
            rax_4, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_240, *r13, *r12)
            
            if (rax_4 != 0)
                int64_t var_248
                var_248.d = i
                var_250 = &var_240
                
                if (var_1d8 == rsi_2)
                    sub_141701fc0(&var_1e8, rsi_2, &var_250)
                    rsi_2 = var_1e8:8.q
                    rbx_1 = var_1e8.q
                else
                    *rsi_2 = var_250.o
                    rsi_2 = &rsi_2[1]
                    var_1e8:8.q = rsi_2
                
                int64_t r8_4 = (rsi_2 - rbx_1) s>> 4
                
                if (r8_4 s>= 2)
                    zmm1_1 = rsi_2[-1]
                    int64_t j_1 = r8_4 - 1
                    
                    if (j_1 s> 0)
                        int64_t r11_1 = sx.q(_mm_bsrli_si128(zmm1_1, 8)[0]) * 0x38
                        int64_t j
                        
                        do
                            j = (j_1 - 1) s>> 1
                            int64_t rdx_2 = *rbx_1[j][0].q
                            
                            if ((*(r11_1 + rdx_2 + 0x18))[0] f>=
                                    *(sx.q(rbx_1[j][2]) * 0x38 + rdx_2 + 0x18))
                                break
                            
                            rbx_1[j_1] = rbx_1[j]
                            j_1 = j
                        while (j s> 0)
                    
                    rbx_1[j_1] = zmm1_1
            
            i += 1
        while (i s< var_238.d)
    
    int64_t rcx_9 = (rsi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_9 == 0)
        rdx_4 = var_240
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_240
    
    float zmm0_1[0x4] = *rdx_4
    int64_t* rdi_1 = nullptr
    zmm1_1 = rdx_4[1]
    var_250 = nullptr
    uint128_t var_58_1 = zmm6
    uint32_t var_68_1[0x4] = zmm7
    float var_78_1[0x4] = zmm8
    float var_88_1[0x4] = zmm9
    float var_130[0x4] = zmm0_1
    int64_t var_248_1 = 0
    float var_120_1[0x4] = zmm1_1
    int32_t rdx_5 = 0
    int64_t var_100_1 = rdx_4[3][0].q
    float var_110_1[0x4] = rdx_4[2]
    int512_t zmm6_2
    int512_t zmm7_1
    int512_t zmm8_1
    int512_t zmm9_1
    int512_t zmm10_2
    int512_t zmm11_2
    int512_t zmm12_2
    int512_t zmm14_2
    int512_t zmm15_2
    
    if (rcx_9 == 0)
    label_14159027b:
        zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_2, zmm11_2, zmm12_2, zmm14_2, zmm15_2 =
            sub_14154a2a0(*arg1, *arg2, &var_130, arg5, arg6, var_1a8, arg8)
        rsi_1 = 1
    else
        float zmm5_1[0x4] = 0x80000000
        
        while (true)
            if (rdx_5 s< 0x80)
                float rax_10 = (*rbx_1)[2]
                float var_258_1 = rax_10
                
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
                    
                    rax_10 = var_258_1
                    r14 = arg3
                    *((i_2 << 4) + rbx_1) = zmm1_1
                
                rsi_2 -= 0x10
                var_1e8:8.q = rsi_2
                int32_t* rdi_5 = sx.q(rax_10) * 0x38 + var_240
                char r10_7 = rdi_5[0xd].b
                
                if (r10_7 != 0)
                label_14159022c:
                    rcx_9 = (rsi_2 - rbx_1) s>> 4
                    
                    if (rcx_9 != 0)
                        rdx_5 += 1
                        r14 = arg3
                        continue
                else
                    int32_t* rax_21 = *r14
                    zmm7 = rdi_5[4]
                    zmm8 = rdi_5[3]
                    zmm9 = rdi_5[5]
                    zmm8[0] = zmm8[0] f* *rax_21
                    zmm9[0] = zmm9[0] f* rax_21[2]
                    zmm7[0] = zmm7[0] f* rax_21[1]
                    uint32_t zmm4_1 = zmm7[0]
                    zmm7[0] = zmm7[0] f* rax_21[4]
                    zmm4_1 = zmm4_1 f* rax_21[7]
                    zmm7[0] = zmm7[0] f+ zmm8[0]
                    zmm8[0] = zmm8[0] f* rax_21[3]
                    zmm7[0] = zmm7[0] f+ zmm9[0]
                    zmm9[0] = zmm9[0] f* rax_21[5]
                    zmm7[0] = zmm7[0] f+ zmm8[0]
                    zmm8[0] = zmm8[0] f* rax_21[6]
                    zmm7[0] = zmm7[0] f+ zmm9[0]
                    zmm9[0] = zmm9[0] f* rax_21[8]
                    zmm4_1 = zmm4_1 f+ zmm8[0] f+ zmm9[0]
                    int32_t r14_2
                    
                    if (not(zmm7[0] f< zmm7[0]) && not(zmm7[0] f< zmm4_1))
                        zmm6 = zx.o(*rax_21)
                        r14_2 = rax_21[2]
                    else if (zmm7[0] f< zmm7[0] || zmm7[0] f< zmm4_1)
                        zmm6 = zx.o(*(rax_21 + 0x18))
                        r14_2 = rax_21[8]
                    else
                        zmm6 = zx.o(*(rax_21 + 0xc))
                        r14_2 = rax_21[5]
                    
                    uint64_t var_210_1 = zmm6.q
                    float var_190 = (zmm8 ^ zmm5_1)[0]
                    float var_188_1 = (zmm9 ^ zmm5_1)[0]
                    float var_18c_1 = (zmm7 ^ zmm5_1)[0]
                    float var_140[0x4]
                    float* rax_22
                    int64_t zmm6_1
                    uint32_t zmm11_1[0x4]
                    float zmm13_1
                    int32_t zmm14_1
                    int32_t zmm15_1
                    rax_22, zmm6_1, zmm7, zmm8, zmm9, zmm11_1, zmm13_1, zmm14_1, zmm15_1 =
                        sub_141716230(arg4, &var_140, &var_190)
                    float zmm2_2[0x4] = var_210_1.d
                    float zmm1_2[0x4] = var_210_1:4.d
                    uint128_t zmm12_1 = rdi_5[6]
                    float zmm10_1[0x4] = zx.o(*rax_22)
                    int32_t rax_23 = rax_22[2]
                    zmm2_2[0] = zmm2_2[0] - zmm10_1[0]
                    uint128_t zmm0_2 = zmm10_1
                    zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
                    zmm1_2[0] = zmm1_2[0] f- zmm0_2.d
                    zmm0_2.d = r14_2.d f- rax_23
                    float var_180 = zmm2_2[0]
                    zmm2_2[0] = zmm2_2[0] * zmm8[0]
                    float var_17c_1 = zmm1_2[0]
                    zmm1_2[0] = zmm1_2[0] f* zmm7[0]
                    int32_t var_178_1 = zmm0_2.d
                    zmm0_2.d = zmm0_2.d f* zmm9[0]
                    zmm2_2[0] = zmm2_2[0] + zmm1_2[0]
                    zmm2_2[0] = zmm2_2[0] f+ zmm0_2.d
                    zmm0_2.d = zmm12_1.d f* 0.00999999978f
                    float temp0_6[0x4] = _mm_min_ss(zmm2_2[0], zmm13_1)
                    zmm0_2 = _mm_and_ps(zmm0_2, zmm11_1)
                    zmm13_1 = temp0_6[0]
                    temp0_6[0] = temp0_6[0] f- zmm12_1.d
                    
                    if (_mm_and_ps(temp0_6, zmm11_1)[0] f<= zmm0_2.d)
                        zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_2, zmm11_2, zmm12_2, zmm14_2, 
                            zmm15_2 = sub_14154a2a0(*r13, *r12, rdi_5, arg5, arg6, var_1a8, arg8)
                        rdi_1 = var_250
                        rsi_1 = 0
                        break
                    
                    if (not(zmm13_1 f< zmm12_1.d))
                        int32_t rcx_16 = r13[1].d
                        zmm0_2 = zx.o(*(rdi_5 + 0xc))
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
                        var_120_1[2] = zmm12_1.d
                        var_130[3].q = zmm0_2.q
                        var_100_1:4.b = r10_7
                        int32_t var_220_1 = rcx_16
                        r13[1].d = rcx_16 + 1
                        
                        if (rcx_16 + 1 s> *(r13 + 0xc))
                            sub_14083a7e0(r13)
                            rcx_16 = var_220_1
                        
                        int64_t rcx_18 = sx.q(rcx_16) * 3
                        int64_t rax_36 = *r13
                        *(rax_36 + (rcx_18 << 2)) = zmm6_1
                        *(rax_36 + (rcx_18 << 2) + 8) = r14_2
                        int64_t r14_3 = sx.q(r12[1].d)
                        int32_t rax_37 = (r14_3 + 1).d
                        r12[1].d = rax_37
                        
                        if (rax_37 s> *(r12 + 0xc))
                            sub_14083a7e0(r12)
                        
                        int64_t rax_38 = *r12
                        int64_t rcx_20 = r14_3 * 3
                        var_248_1.d = 0
                        *(rax_38 + (rcx_20 << 2)) = zmm10_1.q
                        *(rax_38 + (rcx_20 << 2) + 8) = rax_23
                        rdi_5[0xd].b = 1
                        
                        if (r15 s< 0 && r15 != 0)
                            sub_1405c5570(&var_250, 0)
                        
                        sub_1415c5980(&var_240, var_258_1, &var_180, &var_250)
                        int64_t r13_1 = sx.q(var_238.d)
                        int32_t r8_11 = var_248_1.d
                        int32_t rax_39 = r8_11 + r13_1.d
                        var_238.d = rax_39
                        
                        if (rax_39 s> var_238:4.d)
                            sub_1407c3b60(&var_240)
                            r8_11 = var_248_1.d
                        
                        if (r8_11 s>= 3)
                            int64_t rdi_6 = 0
                            int64_t rax_40 = sx.q(r8_11)
                            
                            if (r8_11 s> 0)
                                void* rsi_3 = r13_1 * 0x38
                                int32_t rbx_2 = r13_1.d
                                int32_t r11_7 = 1 - r13_1.d
                                int32_t var_1c4_1 = r11_7
                                
                                do
                                    int64_t* rdx_15 = var_250
                                    int64_t rcx_24 = var_240
                                    int64_t r15_1 = sx.q(rdx_15[rdi_6].d)
                                    int64_t r14_4 = sx.q(*(&rdx_15[rdi_6] + 4))
                                    int32_t* r9_5 = rsi_3 + rcx_24
                                    int64_t r10_9 = r15_1 * 0x38 + rcx_24
                                    int32_t r11_8 = rbx_2 + 1
                                    
                                    if (rbx_2 + r11_7 s>= r8_11)
                                        r11_8 = r13_1.d
                                    
                                    int64_t r8_12 = *r12
                                    int32_t rax_45 = rbx_2
                                    
                                    if (rbx_2 s<= r13_1.d)
                                        rax_45 = r8_11 + r13_1.d
                                    
                                    int64_t rdx_19 = *arg1
                                    int32_t rax_48 = *(r10_9 + (r14_4 << 2))
                                    int64_t rax_50 =
                                        sx.q(*(r10_9 + (sx.q((r14_4 + 1).d s% 3) << 2)))
                                    int32_t var_230_2 = rax_50.d
                                    int64_t rcx_27 = rax_50 * 3
                                    zmm7 = *(rdx_19 + (rcx_27 << 2))
                                    zmm7[0] = zmm7[0] f- *(r8_12 + (rcx_27 << 2))
                                    zmm6.d = (*(rdx_19 + (rcx_27 << 2) + 4)).d f-
                                        *(r8_12 + (rcx_27 << 2) + 4)
                                    zmm8 = *(rdx_19 + (rcx_27 << 2) + 8)
                                    zmm8[0] = zmm8[0] f- *(r8_12 + (rcx_27 << 2) + 8)
                                    int64_t rcx_28 = sx.q(rax_48) * 3
                                    uint32_t zmm2_1[0x4] = *(rdx_19 + (rcx_28 << 2) + 8)
                                    zmm2_1[0] = zmm2_1[0] f- *(r8_12 + (rcx_28 << 2) + 8)
                                    zmm5_1 = *(rdx_19 + (rcx_28 << 2))
                                    zmm9 = *(rdx_19 + (rcx_18 << 2) + 4)
                                    zmm9[0] = zmm9[0] f- *(r8_12 + (rcx_18 << 2) + 4)
                                    zmm1_1 = *(rdx_19 + (rcx_18 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_12 + (rcx_18 << 2) + 8)
                                    uint32_t zmm3_1[0x4] = *(rdx_19 + (rcx_18 << 2))
                                    zmm2_1[0] = zmm2_1[0] f- zmm8[0]
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_12 + (rcx_18 << 2))
                                    zmm4_1 = *(rdx_19 + (rcx_28 << 2) + 4)
                                    zmm9[0] = zmm9[0] f- zmm6.d
                                    zmm5_1[0] = zmm5_1[0] f- *(r8_12 + (rcx_28 << 2))
                                    zmm4_1 = zmm4_1 f- *(r8_12 + (rcx_28 << 2) + 4)
                                    zmm1_1[0] = zmm1_1[0] - zmm8[0]
                                    zmm3_1[0] = zmm3_1[0] f- zmm7[0]
                                    zmm9[0] = zmm9[0] f* zmm2_1[0]
                                    zmm5_1[0] = zmm5_1[0] f- zmm7[0]
                                    zmm10_1 = zmm1_1
                                    zmm4_1 = zmm4_1 f- zmm6.d
                                    zmm11_1 = zmm3_1
                                    zmm11_1[0] = zmm11_1[0] f* zmm2_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm5_1[0]
                                    zmm10_1[0] = zmm10_1[0] f* zmm4_1
                                    zmm11_1[0] = zmm11_1[0] f- zmm1_1[0]
                                    zmm9[0] = zmm9[0] * zmm5_1[0]
                                    zmm10_1[0] = zmm10_1[0] - zmm9[0]
                                    zmm3_1[0] = zmm3_1[0] f* zmm4_1
                                    zmm9[0] = zmm9[0] f- zmm3_1[0]
                                    zmm11_1[0] = zmm11_1[0] f* zmm11_1[0]
                                    zmm10_1[0] = zmm10_1[0] * zmm10_1[0]
                                    zmm9[0] = zmm9[0] * zmm9[0]
                                    zmm11_1[0] = zmm11_1[0] f+ zmm10_1[0]
                                    zmm11_1[0] = zmm11_1[0] f+ zmm9[0]
                                    float var_22c_1
                                    float var_224_1
                                    
                                    if (zmm11_1[0] f!= 1f)
                                        if (zmm11_1[0] f>= zmm14_1)
                                            zmm0_1 = zmm11_1
                                            zmm3_1 = zmm0_1
                                            float temp0_10[0x4] = _mm_rsqrt_ss(zmm0_1[0], zmm3_1[0])
                                            zmm2_1 = 0x3f000000
                                            zmm3_1[0] = zmm3_1[0] f* 0.5f
                                            temp0_10[0] = temp0_10[0] * temp0_10[0]
                                            zmm1_1 = zmm3_1
                                            zmm1_1[0] = zmm1_1[0] * temp0_10[0]
                                            zmm2_1[0] = 0.5f - zmm1_1[0]
                                            temp0_10[0] = temp0_10[0] f* zmm2_1[0]
                                            temp0_10[0] = temp0_10[0] + temp0_10[0]
                                            temp0_10[0] = temp0_10[0] * temp0_10[0]
                                            zmm3_1[0] = zmm3_1[0] f* temp0_10[0]
                                            temp0_10[0] = temp0_10[0] f* (0.5f f- zmm3_1[0])
                                            temp0_10[0] = temp0_10[0] + temp0_10[0]
                                            zmm1_1 = temp0_10
                                            temp0_10[0] = temp0_10[0] * zmm10_1[0]
                                            temp0_10[0] = temp0_10[0] * zmm9[0]
                                            var_22c_1 = temp0_10[0]
                                            zmm1_1[0] = zmm1_1[0] f* zmm11_1[0]
                                            var_224_1 = temp0_10[0]
                                        else
                                            zmm1_1 = data_143dbb1fc
                                            var_22c_1 = data_143dbb1f8[0]
                                            var_224_1 = data_143dbb200[0]
                                        
                                        float var_228_2 = zmm1_1[0]
                                    else
                                        var_22c_1 = zmm10_1[0]
                                        uint32_t var_228_1 = zmm11_1[0]
                                        var_224_1 = zmm9[0]
                                    
                                    *(r9_5 + 0xc) = var_22c_1.q
                                    r9_5[5] = var_224_1
                                    zmm0_1 = r9_5[4]
                                    zmm2_1 = r9_5[3]
                                    zmm1_1 = r9_5[5]
                                    zmm2_1[0] = zmm2_1[0] f* zmm2_1[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_1[0] = zmm2_1[0] f+ zmm0_1[0]
                                    zmm2_1[0] = zmm2_1[0] f+ zmm1_1[0]
                                    float rax_53
                                    
                                    if (zmm2_1[0] f>= zmm15_1)
                                        *r9_5 = var_230_2
                                        r9_5[1] = rax_48
                                        r9_5[2] = var_220_1
                                        r9_5[8] = rax_45 - 1
                                        rax_53.b = 1
                                        r9_5[7] = r15_1.d
                                        r9_5[9] = r11_8
                                        r9_5[0xa] = r14_4.d
                                        r9_5[0xb] = 2
                                        r9_5[0xc] = 1
                                        zmm6.d = zmm6.d f* r9_5[4]
                                        zmm7[0] = zmm7[0] f* r9_5[3]
                                        zmm8[0] = zmm8[0] f* r9_5[5]
                                        r9_5[0xd].b = 0
                                        zmm6.d = zmm6.d f+ zmm7[0]
                                        zmm6.d = zmm6.d f+ zmm8[0]
                                        r9_5[6] = zmm6.d
                                    else
                                        rax_53.b = 0
                                    
                                    *(r10_9 + (r14_4 << 2) + 0x1c) = rbx_2
                                    *(r10_9 + (r14_4 << 2) + 0x28) = 0
                                    
                                    if (rax_53.b == 0)
                                        rbx_1 = var_1e8.q
                                        goto label_141590245
                                    
                                    zmm0_1 = r9_5[6]
                                    r12 = arg2
                                    
                                    if (not(zmm0_1[0] f< zmm12_1.d) && not(zmm0_1[0] > zmm13_1))
                                        char rax_58
                                        rax_58, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
                                            sub_141743d50(r9_5, *arg1, *r12)
                                        
                                        if (rax_58 != 0)
                                            int32_t var_148_1 = rbx_2
                                            int64_t* var_150 = &var_240
                                            sub_14175ce20(&var_1e8, &var_150)
                                    
                                    r8_11 = var_248_1.d
                                    rbx_2 += 1
                                    r11_7 = var_1c4_1
                                    rsi_3 += 0x38
                                    rdi_6 += 1
                                while (rdi_6 s< rax_40)
                                
                                rsi_2 = var_1e8:8.q
                                rbx_1 = var_1e8.q
                            
                            r13 = arg1
                            zmm5_1 = 0x80000000
                            r15 = var_248_1:4.d
                            goto label_14159022c
            
        label_141590245:
            rdi_1 = var_250
            goto label_14159027b
    
    zmm15_2.o = zmm15
    zmm14_2.o = zmm14
    zmm12_2.o = zmm12
    zmm11_2.o = zmm11
    zmm10_2.o = zmm10
    zmm9_1.o = var_88_1
    zmm8_1.o = var_78_1
    zmm7_1.o = var_68_1
    zmm6_2.o = var_58_1
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    if (rbx_1 != 0)
        float (* rax_63)[0x4] = rbx_1
        
        if (((var_1d8 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
            rbx_1 = *(rbx_1 - 8)
            
            if (rax_63 - rbx_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rbx_1)
else
    *arg5 = 0
    rsi_1 = 2
    *arg7 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg7[1].d = 0
    *arg8 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_1f0_1 = 0
    arg8[1].d = 0
    int32_t var_1f0_2 = 0

int64_t rcx_37 = var_240

if (rcx_37 != 0)
    sub_140a74f90(rcx_37)

__security_check_cookie(rax_1 ^ &var_298)
return zx.q(rsi_1)
