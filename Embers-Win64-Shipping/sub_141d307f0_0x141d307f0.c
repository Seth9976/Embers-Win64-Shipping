// 函数: sub_141d307f0
// 地址: 0x141d307f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg2 + 0x358)

if (*(result + 0x1a) != 0)
    void* rdi_1 = *(arg2 + 0x348)
    arg3[4] = 0
    
    if (arg3[5] s<= 0xffffffff)
        sub_1405a5310(&arg3[2], 0)
    
    *arg3 = *(arg2 + 0x6c)
    int64_t* rbx_1 = *(rdi_1 + 0x260)
    
    if (rbx_1[0x11].b != 0)
        sub_14175a890(rbx_1, 0)
    
    int64_t* var_1d0
    __builtin_memset(&var_1d0, 0, 0x15)
    void* var_1d8 = &rbx_1[0x3c]
    int32_t var_1b8_1 = 0
    result = sub_141750820(&var_1d8)
    void* i_1
    void* i = i_1
    
    if (i != 0)
        int64_t* r14_1 = var_1d0
        float zmm7[0x4]
        float var_58_1[0x4] = zmm7
        float zmm8[0x4]
        float var_68_1[0x4] = zmm8
        int128_t zmm9
        int128_t var_78_1 = zmm9
        uint128_t zmm10
        uint128_t var_88_1 = zmm10
        uint128_t zmm11
        uint128_t var_98_1 = zmm11
        uint128_t zmm12
        uint128_t var_a8_1 = zmm12
        
        do
            int32_t var_1c0_1
            int64_t rsi_1 = sx.q(var_1c0_1)
            
            if (_finite(_mm_cvtps_pd((*(*(i + 0x2d8) + (rsi_1 << 2)))[0].q)[0].q) != 0
                    && not(0f f== *(*(i + 0x2d8) + (rsi_1 << 2))))
                void* rcx_3 = *(*(i + 0x80) + (rsi_1 << 3))
                
                if (rcx_3 != 0 && *(rcx_3 + 0xc) != 0)
                    int64_t r15_1 = *(i + 0x28)
                    int64_t rdi_2 = rsi_1 * 3
                    
                    if (_finite(_mm_cvtps_pd((*(r15_1 + (rdi_2 << 2)))[0].q)[0].q) != 0
                            && _finite(_mm_cvtps_pd((*(r15_1 + (rdi_2 << 2) + 4))[0].q)[0].q) != 0
                            && _finite(_mm_cvtps_pd((*(r15_1 + (rdi_2 << 2) + 8))[0].q)[0].q) != 0)
                        int64_t r15_2 = *(i + 0x1b8)
                        
                        if (_finite(_mm_cvtps_pd((*(r15_2 + (rdi_2 << 2)))[0].q)[0].q) != 0
                                && _finite(_mm_cvtps_pd((*(r15_2 + (rdi_2 << 2) + 4))[0].q)[0].q)
                                != 0 && _finite(_mm_cvtps_pd((*(r15_2 + (rdi_2 << 2) + 8))[0].q)[0].q)
                                != 0)
                            int64_t r15_3 = *(i + 0x1d0)
                            
                            if (_finite(_mm_cvtps_pd((*(r15_3 + (rdi_2 << 2)))[0].q)[0].q) != 0 &&
                                    _finite(_mm_cvtps_pd((*(r15_3 + (rdi_2 << 2) + 4))[0].q)[0].q) != 0 &&
                                    _finite(_mm_cvtps_pd((*(r15_3 + (rdi_2 << 2) + 8))[0].q)[0].q) != 0 &&
                                    _finite(_mm_cvtps_pd((*(*(i + 0x2c0) + (rsi_1 << 2)))[0].q)[0]
                                    .q) != 0)
                                int64_t rax_17 = *(i + 0x28)
                                float zmm0_1[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
                                zmm7 = zmm0_1
                                int64_t var_140_1 = zmm0_1.q
                                int32_t var_114_1 = 0
                                zmm11 = zx.o(*(rax_17 + (rdi_2 << 2)))
                                int32_t rax_18 = *(rax_17 + (rdi_2 << 2) + 8)
                                int32_t r13_1 = 0
                                int64_t rax_19 = *(i + 0x1b8)
                                zmm0_1 = _mm_unpacklo_ps(zx.o(0), 0)
                                int32_t var_120_1 = 0
                                zmm8 = zmm0_1
                                int32_t r15_4 = 0
                                zmm10 = zx.o(*(rax_19 + (rdi_2 << 2)))
                                int32_t rax_20 = *(rax_19 + (rdi_2 << 2) + 8)
                                int64_t rax_21 = *(i + 0x1d0)
                                int32_t var_138_1 = 0
                                int64_t var_134_1 = zmm0_1.q
                                int32_t var_12c_1 = 0
                                zmm12 = zx.o(*(rax_21 + (rdi_2 << 2)))
                                int32_t rax_22 = *(rax_21 + (rdi_2 << 2) + 8)
                                uint64_t var_16c_1 = zmm10.q
                                zmm9 = *(*(i + 0x2c0) + (rsi_1 << 2))
                                int64_t* rcx_4 = *(*(i + 0x80) + (rsi_1 << 3))
                                
                                if (*(rcx_4 + 0xc) != 0)
                                    void var_c0
                                    int64_t* rax_26 = (*(*rcx_4 + 0x28))(rcx_4, &var_c0)
                                    zmm7 = zx.o(*rax_26)
                                    zmm8 = zx.o(*(rax_26 + 0xc))
                                    r15_4 = rax_26[1].d
                                    r13_1 = *(rax_26 + 0x14)
                                    var_140_1 = zmm7.q
                                    var_134_1 = zmm8.q
                                    var_138_1 = r15_4
                                    var_12c_1 = r13_1
                                
                                char* rcx_5 = *(*(arg2 + 0x358) + 0x10)
                                
                                if (*rcx_5 == 0)
                                label_141d30bce:
                                    int64_t rdi_3 = sx.q(arg3[4])
                                    int32_t var_f0_1 = 0
                                    int128_t var_110
                                    __builtin_memset(&var_110, 0, 0x18)
                                    int32_t rax_29 = (rdi_3 + 1).d
                                    int64_t var_1a0
                                    __builtin_memset(&var_1a0, 0, 0x18)
                                    arg3[4] = rax_29
                                    
                                    if (rax_29 s> arg3[5])
                                        sub_1405c5060(&arg3[2])
                                    
                                    int64_t rcx_7 = *(arg3 + 8)
                                    int32_t rax_30 = var_110:8.d
                                    int64_t rdx_3 = rdi_3 * 0xa
                                    *(rcx_7 + (rdx_3 << 3)) = var_110.q
                                    *(rcx_7 + (rdx_3 << 3) + 0xc) = var_110:0xc.q
                                    *(rcx_7 + (rdx_3 << 3) + 8) = rax_30
                                    int64_t var_f8
                                    *(rcx_7 + (rdx_3 << 3) + 0x18) = var_f8
                                    zmm0_1 = zx.o(var_1a0)
                                    int64_t var_100
                                    *(rcx_7 + (rdx_3 << 3) + 0x14) = var_100:4.d
                                    *(rcx_7 + (rdx_3 << 3) + 0x20) = var_f0_1
                                    *(rcx_7 + (rdx_3 << 3) + 0x24) = 0
                                    *(rcx_7 + (rdx_3 << 3) + 0x28) = 0
                                    *(rcx_7 + (rdx_3 << 3) + 0x30) = 0
                                    *(rcx_7 + (rdx_3 << 3) + 0x38) = zmm0_1.q
                                    int32_t var_198
                                    *(rcx_7 + (rdx_3 << 3) + 0x40) = var_198
                                    int64_t var_194
                                    *(rcx_7 + (rdx_3 << 3) + 0x44) = var_194
                                    int32_t var_18c
                                    *(rcx_7 + (rdx_3 << 3) + 0x4c) = var_18c
                                    int64_t rax_35 = *(arg3 + 8)
                                    *(rax_35 + (rdx_3 << 3)) = zmm11.q
                                    *(rax_35 + (rdx_3 << 3) + 8) = rax_18
                                    *(rax_35 + (rdx_3 << 3) + 0xc) = zmm10.q
                                    *(rax_35 + (rdx_3 << 3) + 0x14) = rax_20
                                    *(rax_35 + (rdx_3 << 3) + 0x18) = zmm12.q
                                    *(rax_35 + (rdx_3 << 3) + 0x20) = rax_22
                                    *(rax_35 + (rdx_3 << 3) + 0x24) = zmm9.d
                                    *(rax_35 + (rdx_3 << 3) + 0x28) = 0
                                    *(rax_35 + (rdx_3 << 3) + 0x30) = 0
                                    *(rax_35 + (rdx_3 << 3) + 0x38) = zmm7.q
                                    *(rax_35 + (rdx_3 << 3) + 0x44) = zmm8.q
                                    *(rax_35 + (rdx_3 << 3) + 0x40) = r15_4
                                    *(rax_35 + (rdx_3 << 3) + 0x4c) = r13_1
                                else
                                    zmm0_1 = *(rcx_5 + 8)
                                    int64_t zmm1 = *(rcx_5 + 4)
                                    float zmm3 = zmm0_1[0] * zmm0_1[0]
                                    
                                    if (zmm1.d f<= 0f || not(zmm9.d f< zmm1.d))
                                        if (zmm0_1[0] <= 0f)
                                        label_141d30b95:
                                            zmm3 = *(rcx_5 + 0xc)
                                            
                                            if (zmm3 <= 0f)
                                                goto label_141d30bce
                                            
                                            zmm0_1 = var_134_1:4.d
                                            zmm0_1[0] = zmm0_1[0] f- var_140_1:4.d
                                            zmm1.d = var_12c_1.d f- var_138_1
                                            
                                            if (not((var_134_1.d f- var_140_1.d)
                                                    * zmm0_1[0] f* zmm1.d < zmm3))
                                                goto label_141d30bce
                                        else
                                            float zmm2 = var_16c_1:4.d
                                            zmm0_1 = var_16c_1.d
                                            zmm1 = rax_20
                                            zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                            zmm1.d = zmm1.d f* zmm1.d
                                            
                                            if (not(zmm2 * zmm2 + zmm0_1[0] f+ zmm1.d < zmm3))
                                                goto label_141d30b95
            
            if (r14_1 != 0)
                int32_t var_1b0
                int32_t rax_38 = var_1b0 + 1
                var_1b0 = rax_38
                
                if (rax_38 s>= r14_1[1].d)
                label_141d30d0e:
                    var_1b8_1 += 1
                    result = sub_141750820(&var_1d8)
                    r14_1 = var_1d0
                    i = i_1
                else
                    void** rdx_4 = *(*r14_1 + (sx.q(rax_38) << 3))
                    void* rcx_13 = *rdx_4
                    int32_t var_180_1 = rdx_4[1].d
                    
                    if (rcx_13 == 0)
                        result = 0
                    else
                        result = zx.q(*(rcx_13 + 0x40))
                    
                    char var_17c_1 = result.b
                    i_1.o = rcx_13.o
                    i = i_1
            else
                result = zx.q(var_1c0_1 + 1)
                var_1c0_1 = result.d
                int32_t var_1b4
                
                if (result.d s>= var_1b4)
                    goto label_141d30d0e
        while (i != 0)

return result
