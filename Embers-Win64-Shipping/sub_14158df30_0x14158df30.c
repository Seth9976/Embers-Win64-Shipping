// 函数: sub_14158df30
// 地址: 0x14158df30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int64_t* r12 = arg2
int64_t* r13 = arg1
uint64_t* var_270 = arg6
int64_t var_240
int64_t* var_278 = &var_240
float* var_1b0 = arg5
int32_t* var_1c0 = arg7
var_240 = 0
int64_t var_238 = 0
char rax_3
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
uint128_t zmm9
int128_t zmm10
int128_t zmm11
int128_t zmm12
int128_t zmm14
int128_t zmm15
rax_3, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
    sub_1416b88e0(arg1, arg2, arg3, arg4, var_278)
int32_t rdi_1

if (rax_3 != 0)
    int32_t i = 0
    int128_t var_1f8
    __builtin_memset(&var_1f8, 0, 0x18)
    float (* rdi_2)[0x4] = var_1f8:8.q
    float (* rbx_1)[0x4] = var_1f8.q
    int64_t* var_250
    int64_t var_1e8
    float zmm1_1[0x4]
    
    if (var_238.d s> 0)
        do
            char rax_5
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
                sub_141743d50(sx.q(i) * 0x38 + var_240, *r13, *r12)
            
            if (rax_5 != 0)
                int64_t var_248
                var_248.d = i
                var_250 = &var_240
                
                if (var_1e8 == rdi_2)
                    sub_141701fc0(&var_1f8, rdi_2, &var_250)
                    rdi_2 = var_1f8:8.q
                    rbx_1 = var_1f8.q
                else
                    *rdi_2 = var_250.o
                    rdi_2 = &rdi_2[1]
                    var_1f8:8.q = rdi_2
                
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
        while (i s< var_238.d)
    
    int64_t rcx_7 = (rdi_2 - rbx_1) s>> 4
    float (* rdx_4)[0x4]
    
    if (rcx_7 == 0)
        rdx_4 = var_240
    else
        rdx_4 = sx.q((*rbx_1)[2]) * 0x38 + var_240
    
    float var_58_1[0x4] = zmm6
    int64_t* rsi_1 = nullptr
    float var_68_1[0x4] = zmm7
    int32_t r15_1 = 0
    float var_78_1[0x4] = zmm8
    uint128_t var_88_1 = zmm9
    var_250 = nullptr
    int64_t var_248_1 = 0
    zmm1_1 = rdx_4[1]
    float var_130[0x4] = *rdx_4
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
    
    if (rcx_7 == 0)
    label_14158e982:
        zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_2, zmm11_2, zmm12_2, zmm14_2, zmm15_2 =
            sub_14154a2a0(*arg1, *arg2, &var_130, var_1b0, arg6, var_1c0, arg8)
        rdi_1 = 1
    else
        uint32_t zmm2_1[0x4] = 0x80000000
        
        while (true)
            if (rdx_5 s< 0x80)
                float rax_11 = (*rbx_1)[2]
                float var_258_1 = rax_11
                
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
                    
                    rax_11 = var_258_1
                    rbx_1[i_2] = zmm1_1
                
                rdi_2 -= 0x10
                var_1f8:8.q = rdi_2
                int32_t* rsi_5 = sx.q(rax_11) * 0x38 + var_240
                char r14_2 = rsi_5[0xd].b
                
                if (r14_2 != 0)
                label_14158e937:
                    rcx_7 = (rdi_2 - rbx_1) s>> 4
                    
                    if (rcx_7 != 0)
                        rdx_5 += 1
                        continue
                else
                    zmm7 = rsi_5[5]
                    void* rax_23 = *arg3
                    zmm1_1 = rsi_5[4] ^ zmm2_1
                    float var_1a8 = (rsi_5[3] ^ zmm2_1)[0]
                    float var_1a4_1 = zmm1_1[0]
                    *(rax_23 + 0x10)
                    int32_t rax_24 = *(rax_23 + 0x18)
                    float var_1a0_1 = (zmm7 ^ zmm2_1)[0]
                    float var_140[0x4]
                    float* rax_25
                    int32_t zmm6_1
                    uint32_t zmm11_1[0x4]
                    int32_t zmm13_1
                    int32_t zmm14_1
                    int32_t zmm15_1
                    rax_25, zmm6_1, zmm7, zmm8, zmm9, zmm11_1, zmm13_1, zmm14_1, zmm15_1 =
                        sub_14170a370(arg4, &var_140, &var_1a8)
                    uint128_t zmm12_1 = rsi_5[6]
                    uint128_t zmm2_2 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
                    float zmm10_1[0x4] = zx.o(*rax_25)
                    int32_t rax_26 = rax_25[2]
                    uint128_t zmm1_2
                    zmm1_2.d = zmm9.d f- zmm10_1[0]
                    uint128_t zmm0_2 = zmm10_1
                    zmm2_2.d = zmm2_2.d f- _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55).d
                    zmm0_2.d = rax_24.d f- rax_26
                    int32_t var_198 = zmm1_2.d
                    zmm1_2.d = zmm1_2.d f* zmm8[0]
                    int32_t var_194_1 = zmm2_2.d
                    zmm2_2.d = zmm2_2.d f* zmm6_1
                    int32_t var_190_1 = zmm0_2.d
                    zmm0_2.d = zmm0_2.d f* zmm7[0]
                    zmm2_2.d = zmm2_2.d f+ zmm1_2.d
                    zmm2_2.d = zmm2_2.d f+ zmm0_2.d
                    zmm0_2.d = zmm12_1.d f* 0.00999999978f
                    zmm2_2 = _mm_min_ss(zmm2_2.d, zmm13_1)
                    zmm0_2 = _mm_and_ps(zmm0_2, zmm11_1)
                    zmm13_1 = zmm2_2.d
                    zmm1_2.d = zmm2_2.d f- zmm12_1.d
                    
                    if (_mm_and_ps(zmm1_2, zmm11_1).d f<= zmm0_2.d)
                        zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_2, zmm11_2, zmm12_2, zmm14_2, 
                            zmm15_2 = sub_14154a2a0(*r13, *r12, rsi_5, var_1b0, arg6, var_1c0, arg8)
                        rsi_1 = var_250
                        rdi_1 = 0
                        break
                    
                    if (not(zmm13_1 f< zmm12_1.d))
                        zmm0_2 = zx.o(*(rsi_5 + 0xc))
                        var_130[0] = *rsi_5
                        var_130[1] = rsi_5[1]
                        var_130[2] = rsi_5[2]
                        var_120_1[1] = rsi_5[5]
                        var_120_1[3] = rsi_5[7]
                        var_110_1[0] = rsi_5[8]
                        var_110_1[1] = rsi_5[9]
                        var_110_1[2] = rsi_5[0xa]
                        var_110_1[3] = rsi_5[0xb]
                        var_100_1:4.b = r14_2
                        int64_t r14_3 = sx.q(r13[1].d)
                        var_100_1.d = rsi_5[0xc]
                        var_120_1[2] = zmm12_1.d
                        var_130[3].q = zmm0_2.q
                        int32_t rax_37 = (r14_3 + 1).d
                        int32_t var_1d8_1 = r14_3.d
                        r13[1].d = rax_37
                        
                        if (rax_37 s> *(r13 + 0xc))
                            sub_14083a7e0(r13)
                        
                        int64_t rax_38 = *r13
                        int64_t rdx_11 = r14_3 * 3
                        *(rax_38 + (rdx_11 << 2)) = zmm9.q
                        *(rax_38 + (rdx_11 << 2) + 8) = rax_24
                        int64_t r14_4 = sx.q(r12[1].d)
                        int32_t rax_39 = (r14_4 + 1).d
                        r12[1].d = rax_39
                        
                        if (rax_39 s> *(r12 + 0xc))
                            sub_14083a7e0(r12)
                        
                        int64_t rax_40 = *r12
                        int64_t rcx_17 = r14_4 * 3
                        var_248_1.d = 0
                        *(rax_40 + (rcx_17 << 2)) = zmm10_1.q
                        *(rax_40 + (rcx_17 << 2) + 8) = rax_26
                        rsi_5[0xd].b = 1
                        
                        if (r15_1 s< 0 && r15_1 != 0)
                            sub_1405c5570(&var_250, 0)
                        
                        sub_1415c5980(&var_240, var_258_1, &var_198, &var_250)
                        int64_t r13_1 = sx.q(var_238.d)
                        int32_t r8_11 = var_248_1.d
                        int32_t rax_41 = r8_11 + r13_1.d
                        var_238.d = rax_41
                        
                        if (rax_41 s> var_238:4.d)
                            sub_1407c3b60(&var_240)
                            r8_11 = var_248_1.d
                        
                        if (r8_11 s>= 3)
                            int64_t rax_42 = sx.q(r8_11)
                            int64_t rsi_6 = 0
                            
                            if (r8_11 s<= 0)
                                r15_1 = var_248_1:4.d
                                zmm2_1 = 0x80000000
                                r13 = arg1
                            else
                                void* rdi_3 = r13_1 * 0x38
                                int32_t rbx_2 = r13_1.d
                                int32_t r11_7 = 1 - r13_1.d
                                int32_t var_1d4_1 = r11_7
                                
                                do
                                    int64_t* rdx_16 = var_250
                                    int64_t rcx_21 = var_240
                                    int64_t r15_2 = sx.q(rdx_16[rsi_6].d)
                                    int64_t r14_5 = sx.q(*(&rdx_16[rsi_6] + 4))
                                    int32_t* r9_5 = rdi_3 + rcx_21
                                    int64_t r10_8 = r15_2 * 0x38 + rcx_21
                                    int32_t r11_8 = rbx_2 + 1
                                    
                                    if (r11_7 + rbx_2 s>= r8_11)
                                        r11_8 = r13_1.d
                                    
                                    int64_t r8_12 = *r12
                                    int32_t rax_47 = rbx_2
                                    
                                    if (rbx_2 s<= r13_1.d)
                                        rax_47 = r8_11 + r13_1.d
                                    
                                    int64_t rdx_20 = *arg1
                                    int32_t rax_50 = *(r10_8 + (r14_5 << 2))
                                    int64_t rax_52 =
                                        sx.q(*(r10_8 + (sx.q((r14_5 + 1).d s% 3) << 2)))
                                    int32_t var_22c_2 = rax_52.d
                                    int64_t rcx_24 = rax_52 * 3
                                    zmm7 = *(rdx_20 + (rcx_24 << 2))
                                    zmm7[0] = zmm7[0] f- *(r8_12 + (rcx_24 << 2))
                                    zmm6 = *(rdx_20 + (rcx_24 << 2) + 4)
                                    zmm6[0] = zmm6[0] f- *(r8_12 + (rcx_24 << 2) + 4)
                                    zmm8 = *(rdx_20 + (rcx_24 << 2) + 8)
                                    zmm8[0] = zmm8[0] f- *(r8_12 + (rcx_24 << 2) + 8)
                                    int64_t rcx_25 = sx.q(rax_50) * 3
                                    zmm2_1 = *(rdx_20 + (rcx_25 << 2) + 8)
                                    zmm2_1[0] = zmm2_1[0] f- *(r8_12 + (rcx_25 << 2) + 8)
                                    float zmm5_1[0x4] = *(rdx_20 + (rcx_25 << 2))
                                    zmm9.d = (*(rdx_20 + (rdx_11 << 2) + 4)).d f-
                                        *(r8_12 + (rdx_11 << 2) + 4)
                                    zmm1_1 = *(rdx_20 + (rdx_11 << 2) + 8)
                                    zmm1_1[0] = zmm1_1[0] f- *(r8_12 + (rdx_11 << 2) + 8)
                                    uint32_t zmm3_1[0x4] = *(rdx_20 + (rdx_11 << 2))
                                    zmm2_1[0] = zmm2_1[0] f- zmm8[0]
                                    zmm3_1[0] = zmm3_1[0] f- *(r8_12 + (rdx_11 << 2))
                                    float zmm4_1 = *(rdx_20 + (rcx_25 << 2) + 4)
                                    zmm9.d = zmm9.d f- zmm6[0]
                                    zmm5_1[0] = zmm5_1[0] f- *(r8_12 + (rcx_25 << 2))
                                    zmm4_1 = zmm4_1 f- *(r8_12 + (rcx_25 << 2) + 4)
                                    zmm1_1[0] = zmm1_1[0] - zmm8[0]
                                    zmm3_1[0] = zmm3_1[0] f- zmm7[0]
                                    float zmm0_1[0x4] = zmm9
                                    zmm0_1[0] = zmm0_1[0] f* zmm2_1[0]
                                    zmm5_1[0] = zmm5_1[0] - zmm7[0]
                                    zmm10_1 = zmm1_1
                                    zmm4_1 = zmm4_1 - zmm6[0]
                                    zmm11_1 = zmm3_1
                                    zmm11_1[0] = zmm11_1[0] f* zmm2_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm5_1[0]
                                    zmm10_1[0] = zmm10_1[0] * zmm4_1
                                    zmm11_1[0] = zmm11_1[0] f- zmm1_1[0]
                                    zmm9.d = zmm9.d f* zmm5_1[0]
                                    zmm10_1[0] = zmm10_1[0] - zmm0_1[0]
                                    zmm3_1[0] = zmm3_1[0] f* zmm4_1
                                    zmm9.d = zmm9.d f- zmm3_1[0]
                                    zmm11_1[0] = zmm11_1[0] f* zmm11_1[0]
                                    zmm10_1[0] = zmm10_1[0] * zmm10_1[0]
                                    zmm1_1 = zmm9
                                    zmm1_1[0] = zmm1_1[0] f* zmm9.d
                                    zmm11_1[0] = zmm11_1[0] f+ zmm10_1[0]
                                    zmm11_1[0] = zmm11_1[0] f+ zmm1_1[0]
                                    float var_228_1
                                    float var_220_1
                                    
                                    if (zmm11_1[0] f!= 1f)
                                        if (zmm11_1[0] f>= zmm14_1)
                                            zmm0_1 = zmm11_1
                                            zmm3_1 = zmm0_1
                                            float temp0_11[0x4] = _mm_rsqrt_ss(zmm0_1[0], zmm3_1[0])
                                            zmm2_1 = 0x3f000000
                                            zmm3_1[0] = zmm3_1[0] f* 0.5f
                                            temp0_11[0] = temp0_11[0] * temp0_11[0]
                                            zmm1_1 = zmm3_1
                                            zmm1_1[0] = zmm1_1[0] * temp0_11[0]
                                            zmm2_1[0] = 0.5f - zmm1_1[0]
                                            temp0_11[0] = temp0_11[0] f* zmm2_1[0]
                                            temp0_11[0] = temp0_11[0] + temp0_11[0]
                                            temp0_11[0] = temp0_11[0] * temp0_11[0]
                                            zmm3_1[0] = zmm3_1[0] f* temp0_11[0]
                                            temp0_11[0] = temp0_11[0] * (0.5f f- zmm3_1[0])
                                            temp0_11[0] = temp0_11[0] + temp0_11[0]
                                            zmm1_1 = temp0_11
                                            temp0_11[0] = temp0_11[0] * zmm10_1[0]
                                            temp0_11[0] = temp0_11[0] f* zmm9.d
                                            var_228_1 = temp0_11[0]
                                            zmm1_1[0] = zmm1_1[0] f* zmm11_1[0]
                                            var_220_1 = temp0_11[0]
                                        else
                                            zmm1_1 = data_143dbb1fc
                                            var_228_1 = data_143dbb1f8[0]
                                            var_220_1 = data_143dbb200[0]
                                        
                                        float var_224_2 = zmm1_1[0]
                                    else
                                        var_228_1 = zmm10_1[0]
                                        uint32_t var_224_1 = zmm11_1[0]
                                        var_220_1 = zmm9.d
                                    
                                    *(r9_5 + 0xc) = var_228_1.q
                                    r9_5[5] = var_220_1
                                    zmm0_1 = r9_5[4]
                                    zmm2_1 = r9_5[3]
                                    zmm1_1 = r9_5[5]
                                    zmm2_1[0] = zmm2_1[0] f* zmm2_1[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                    zmm2_1[0] = zmm2_1[0] f+ zmm0_1[0]
                                    zmm2_1[0] = zmm2_1[0] f+ zmm1_1[0]
                                    float rax_55
                                    
                                    if (zmm2_1[0] f>= zmm15_1)
                                        *r9_5 = var_22c_2
                                        r9_5[1] = rax_50
                                        r9_5[2] = var_1d8_1
                                        r9_5[8] = rax_47 - 1
                                        rax_55.b = 1
                                        r9_5[7] = r15_2.d
                                        r9_5[9] = r11_8
                                        r9_5[0xa] = r14_5.d
                                        r9_5[0xb] = 2
                                        r9_5[0xc] = 1
                                        zmm6[0] = zmm6[0] f* r9_5[4]
                                        zmm7[0] = zmm7[0] f* r9_5[3]
                                        zmm8[0] = zmm8[0] f* r9_5[5]
                                        r9_5[0xd].b = 0
                                        zmm6[0] = zmm6[0] + zmm7[0]
                                        zmm6[0] = zmm6[0] + zmm8[0]
                                        r9_5[6] = zmm6[0]
                                    else
                                        rax_55.b = 0
                                    
                                    *(r10_8 + (r14_5 << 2) + 0x1c) = rbx_2
                                    *(r10_8 + (r14_5 << 2) + 0x28) = 0
                                    
                                    if (rax_55.b == 0)
                                        rbx_1 = var_1f8.q
                                        goto label_14158e94c
                                    
                                    zmm0_1 = r9_5[6]
                                    r12 = arg2
                                    
                                    if (not(zmm0_1[0] f< zmm12_1.d) && not(zmm0_1[0] f> zmm13_1))
                                        char rax_60
                                        rax_60, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
                                            sub_141743d50(r9_5, *arg1, *r12)
                                        
                                        if (rax_60 != 0)
                                            int32_t var_148_1 = rbx_2
                                            int64_t* var_150 = &var_240
                                            sub_14175ce20(&var_1f8, &var_150)
                                    
                                    r8_11 = var_248_1.d
                                    rbx_2 += 1
                                    r11_7 = var_1d4_1
                                    rdi_3 += 0x38
                                    rsi_6 += 1
                                while (rsi_6 s< rax_42)
                                
                                rdi_2 = var_1f8:8.q
                                rbx_1 = var_1f8.q
                                r15_1 = var_248_1:4.d
                                zmm2_1 = 0x80000000
                                r13 = arg1
                            
                            goto label_14158e937
            
        label_14158e94c:
            rsi_1 = var_250
            goto label_14158e982
    
    zmm15_2.o = zmm15
    zmm14_2.o = zmm14
    zmm12_2.o = zmm12
    zmm11_2.o = zmm11
    zmm10_2.o = zmm10
    zmm9_1.o = var_88_1
    zmm8_1.o = var_78_1
    zmm7_1.o = var_68_1
    zmm6_2.o = var_58_1
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    if (rbx_1 != 0)
        float (* rax_65)[0x4] = rbx_1
        
        if (((var_1e8 - rbx_1) & 0xfffffffffffffff0) u>= 0x1000)
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
    int32_t var_200_1 = 0
    int32_t var_200_2 = 0

int64_t rcx_34 = var_240

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

__security_check_cookie(rax_1 ^ &var_298)
return zx.q(rdi_1)
