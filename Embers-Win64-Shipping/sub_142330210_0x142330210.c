// 函数: sub_142330210
// 地址: 0x142330210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int64_t* result = *(arg1 + 0x40)
void* r15 = arg1
int64_t r12 = sx.q(arg2)
void* rdi_1 = r12 * 0x370 + *(arg1 + 0x70)
void* var_238 = arg1
int64_t* r13 = *(*result + (r12 << 3))
void* var_208 = rdi_1

if (arg2 != *(arg1 + 0x88) || arg3 != 0)
    result = *(arg1 + 0x80)
    
    if (result != 0 && *(rdi_1 + 0x240) != 0 && *(rdi_1 + 0x258) != 0)
        void* r9_1 = arg1 + 0x90
        int32_t rbx_1 = *(r13 + 0xec)
        int64_t* rsi_1 = result[0xa]
        int32_t i_3 = 0
        int32_t rdx = 0
        void* var_228_1 = r9_1
        *(r9_1 + 8) = 0
        
        if (*(r9_1 + 0xc) != rbx_1)
            sub_1413f6f70(r9_1, rbx_1)
            rdx = *(r15 + 0x98)
            r9_1 = r15 + 0x90
        
        int32_t rax_2 = rdx + rbx_1
        *(r9_1 + 8) = rax_2
        
        if (rax_2 s> *(r9_1 + 0xc))
            sub_1405c50f0(r9_1)
            r9_1 = r15 + 0x90
        
        uint64_t rbx_2 = *r9_1
        float var_48_1[0x4] = arg4
        int32_t i_4
        int32_t var_244
        uint128_t zmm0
        uint128_t zmm1
        float zmm7[0x4]
        int32_t zmm8[0x4]
        int128_t zmm9
        int128_t zmm10
        int128_t zmm11
        float zmm12[0x4]
        int32_t zmm13
        uint128_t zmm14
        uint128_t zmm15
        
        if (rbx_2 != 0)
            void* rax_3 = *(r15 + 0x80)
            void* rdi_2 = *(rdi_1 + 0x2e8)
            int32_t r8 = *(rax_3 + 0x60)
            int32_t var_258_1 = (*(rax_3 + 0xd8)).d
            int32_t mxcsr
            
            if (r13[0x16].b == 0)
                zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 = sub_142328f20(rbx_2, 
                    rsi_1, r8, r13, mxcsr, rdi_2, rax_3 + 0x68, rax_3 + 0x78, rax_3 + 0x88, 
                    var_258_1, rax_3 + 0x10)
            else
                zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 = sub_1423291a0(rbx_2, 
                    rsi_1, r8, r13, mxcsr, rdi_2, rax_3 + 0x68, rax_3 + 0x78, rax_3 + 0x88, 
                    var_258_1, rax_3 + 0x10)
            
            if (*(r15 + 0xc0) == 0)
                r9_1 = r15 + 0x90
            else
                if (*(r15 + 0xb8) s<= 0)
                    int64_t r15_3 = sx.q(*(r15 + 0xa8))
                    uint64_t rsi_4 = 0
                    void* r12_2 = var_238
                    uint64_t var_1d8 = 0
                    var_244 = r15_3.d
                    int32_t var_1d0_1 = r15_3.d
                    int64_t rdi_6 = *(r12_2 + 0xa0)
                    
                    if (r15_3.d != 0)
                        sub_140638750(&var_1d8, r15_3.d, 0)
                        rsi_4 = var_1d8
                        memcpy(rsi_4, rdi_6, (r15_3 << 2).d)
                        var_244 = var_1d0_1
                    
                    int32_t i = 0
                    i_4 = 0
                    void* rdi_7 = *(var_208 + 0x2e8)
                    
                    if (r13[1].d s> 0)
                        int64_t r13_1 = 0
                        int64_t* rax_21 = r13
                        
                        do
                            int64_t rax_22 = *rax_21
                            int32_t j = 0
                            int64_t var_1f8 = rax_22
                            int64_t r12_3 = *(rax_22 + r13_1 + 0x28)
                            
                            if (*(rax_22 + r13_1 + 0x38) s> 0)
                                do
                                    int16_t var_110[0xc]
                                    sub_1422c8440(rdi_7, &var_110, 
                                        zx.q(*(rax_22 + r13_1 + 0x10) + j))
                                    *(rbx_2 + 0x14) = 0
                                    int32_t k = 0
                                    
                                    if (*(rdi_7 + 0x24) u> 0)
                                        int64_t rdx_11 = rsi_4 + (sx.q(var_244) << 2)
                                        
                                        do
                                            uint64_t rcx_15 = rsi_4
                                            
                                            if (rsi_4 != rdx_11)
                                                uint64_t k_1 = zx.q(k)
                                                
                                                do
                                                    if (*rcx_15 == zx.d(
                                                            *(r12_3 + (zx.q(var_110[k_1]) << 1))))
                                                        char var_f8[0x10]
                                                        zmm1.d =
                                                            _mm_cvtepi32_ps(zx.o(var_f8[k_1])).d
                                                            f* 0.00392156886f
                                                        zmm0.d = zmm1.d f+ *(rbx_2 + 0x14)
                                                        zmm1.d = zmm1.d f+ *(rbx_2 + 0x18)
                                                        *(rbx_2 + 0x14) = zmm0.d
                                                        *(rbx_2 + 0x18) = zmm1.d
                                                        break
                                                    
                                                    rcx_15 += 4
                                                while (rcx_15 != rdx_11)
                                            
                                            k += 1
                                        while (k u< *(rdi_7 + 0x24))
                                    
                                    rax_22 = var_1f8
                                    j += 1
                                    rbx_2 += 0x1c
                                while (j s< *(rax_22 + r13_1 + 0x38))
                                
                                i = i_4
                            
                            rax_21 = r13
                            i += 1
                            r13_1 += 0xe8
                            i_4 = i
                        while (i s< rax_21[1].d)
                    
                    if (rsi_4 != 0)
                        sub_140a74f90(rsi_4)
                else
                    void* rax_4 = var_238
                    uint64_t r15_1 = 0
                    uint64_t var_1e8 = 0
                    int64_t rdi_3 = sx.q(*(rax_4 + 0xb8))
                    int64_t rsi_2 = *(rax_4 + 0xb0)
                    int32_t var_1e0_1 = rdi_3.d
                    
                    if (rdi_3.d != 0)
                        sub_1405c4a00(&var_1e8, rdi_3.d, 0)
                        r15_1 = var_1e8
                        memcpy(r15_1, rsi_2, (rdi_3 << 3).d)
                        rdi_3 = zx.q(var_1e0_1)
                    
                    int64_t i_1 = zx.q(*(r13 + 0xec)) * 0x1c + rbx_2
                    
                    if (rbx_2 != i_1)
                        void* rcx_6 = rbx_2 + 0x18
                        
                        do
                            *(rcx_6 - 4) = 0
                            rcx_6 += 0x1c
                        while (rcx_6 - 0x18 != i_1)
                    
                    uint64_t rsi_3 = r15_1
                    int64_t rdi_4 = 0
                    int64_t rcx_7 = r15_1 + (sx.q(rdi_3.d) << 3)
                    uint64_t r11_5 = (rcx_7 - r15_1 + 7) u>> 3
                    
                    if (r15_1 u> rcx_7)
                        r11_5 = 0
                    
                    if (r11_5 != 0)
                        int64_t r10_3 = r12 * 6
                        
                        do
                            int32_t i_2 = 0
                            int64_t r9_4 = *(*rsi_3 + 0x30)
                            
                            if (*(r9_4 + (r10_3 << 3) + 8) s> 0)
                                int64_t rdx_6 = 0
                                
                                do
                                    rdx_6 += 0x1c
                                    i_2 += 1
                                    int64_t rax_10 =
                                        zx.q(*(*(r9_4 + (r10_3 << 3)) + rdx_6 - 4)) * 0x1c
                                    *(rax_10 + rbx_2 + 0x14) = 0x3f800000
                                    *(rax_10 + rbx_2 + 0x18) = 0x3f800000
                                while (i_2 s< *(r9_4 + (r10_3 << 3) + 8))
                            
                            rsi_3 += 8
                            rdi_4 += 1
                        while (rdi_4 != r11_5)
                    
                    if (r15_1 != 0)
                        sub_140a74f90(r15_1)
                
                r9_1 = var_228_1
                r15 = var_238
            
            rdi_1 = var_208
        
        *(r15 + 0x88) = arg2
        
        if (*(r15 + 0x98) s> 0)
            int32_t zmm3[0x4] = data_142dd3f80
            float zmm2[0x4] = zx.o(0)
            float zmm4[0x4] = data_142dd3fd0
            int64_t r15_2 = 0
            void* r12_1 = var_238
            float var_58_1[0x4] = zmm7
            zmm7 = data_142dd3fb0
            int32_t var_68_1[0x4] = zmm8
            int128_t var_78_1 = zmm9
            zmm9 = 0x3f000000
            int128_t var_88_1 = zmm10
            zmm10 = 0x42fe0000
            int128_t var_98_1 = zmm11
            zmm11 = 0x46fffe00
            float var_a8_1[0x4] = zmm12
            int32_t var_b8_1 = zmm13
            uint128_t var_c8_1 = zmm14
            uint128_t var_d8_1 = zmm15
            
            do
                void* r8_3 = *r9_1
                int64_t rcx_10 = *(rdi_1 + 0x2d0)
                uint64_t rax_13 = zx.q(*(rdi_1 + 0x2d8) * i_3)
                uint64_t i_5 = zx.q(i_3)
                *(rax_13 + rcx_10) = *(r8_3 + r15_2)
                *(zx.q(rax_13.d) + rcx_10 + 8) = *(r8_3 + r15_2 + 8)
                int64_t rax_15 = *r9_1
                int64_t rdi_5 = *(rdi_1 + 0x280)
                zmm1 = _mm_unpacklo_epi16(
                    _mm_unpacklo_epi8(zx.o(*(rax_15 + r15_2 + 0x10)), zmm2[0].q), zmm2[0].q)
                zmm0 = (_mm_cmpgt_epi32(zmm1, zmm3) & zmm4) | zmm1
                zmm1 = zx.o(*(rax_15 + r15_2 + 0xc))
                void* rax_16 = var_208
                float temp0_4[0x4] = _mm_cvtepi32_ps(zmm0)
                bool cond:7_1 = *(rax_16 + 0x2a1) == 0
                zmm1 = _mm_unpacklo_epi8(zmm1, zmm2[0].q)
                float temp0_6[0x4] = _mm_mul_ps(temp0_4, zmm7)
                zmm1 = _mm_unpacklo_epi16(zmm1, zmm2[0].q)
                var_228_1.o = temp0_6
                float var_148_1[0x4] = temp0_6
                float temp0_10[0x4] =
                    _mm_mul_ps(_mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm3) & zmm4) | zmm1), zmm7)
                float temp0_11[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x55)
                zmm1 = _mm_shuffle_ps(temp0_6, temp0_6, 0xaa)
                float temp0_13[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xff)
                int96_t var_1f8_1 = temp0_10[0].12
                zmm3 = _mm_shuffle_ps(temp0_10, temp0_10, 0xaa)
                float temp0_15[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x55)
                zmm8 = zmm3
                zmm8[0] = zmm8[0] f* temp0_11[0]
                zmm0.d = temp0_15.d f* zmm1.d
                temp0_10[0] = temp0_10[0] f* zmm1.d
                zmm8[0] = zmm8[0] f- zmm0.d
                temp0_15[0] = temp0_15[0] * temp0_6[0]
                zmm3[0] = zmm3[0] f* temp0_6[0]
                zmm0.d = temp0_10.d f* temp0_11[0]
                zmm4 = var_1f8_1.d
                temp0_10[0] = temp0_10[0] f- zmm3[0]
                float var_138_1[0x4] = temp0_10
                zmm1 = zmm4
                temp0_15[0] = temp0_15[0] f- zmm0.d
                zmm8[0] = zmm8[0] f* temp0_13[0]
                temp0_10[0] = temp0_10[0] * temp0_13[0]
                temp0_15[0] = temp0_15[0] * temp0_13[0]
                int32_t var_220
                int32_t zmm13_1
                
                if (cond:7_1)
                    zmm1.d = zmm1.d f* zmm10.d
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm1.d = zmm1.d f+ zmm9.d
                    int32_t rax_39 = int.d(zmm1.d) s>> 1
                    char rcx_23
                    
                    if (rax_39 s>= 0xffffff80)
                        rcx_23 = 0x7f
                        
                        if (rax_39 s< 0x7f)
                            rcx_23 = rax_39.b
                    else
                        rcx_23 = -0x80
                    
                    zmm3 = var_1f8_1:4.d
                    *(rdi_5 + (i_5 << 3)) = rcx_23
                    zmm1.d = zmm3.d f* zmm10.d
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm1.d = zmm1.d f+ zmm9.d
                    int32_t rax_41 = int.d(zmm1.d) s>> 1
                    char rcx_24
                    
                    if (rax_41 s>= 0xffffff80)
                        rcx_24 = 0x7f
                        
                        if (rax_41 s< 0x7f)
                            rcx_24 = rax_41.b
                    else
                        rcx_24 = -0x80
                    
                    zmm2 = var_1f8_1:8.d
                    *(rdi_5 + (i_5 << 3) + 1) = rcx_24
                    zmm1.d = zmm2.d f* zmm10.d
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm1.d = zmm1.d f+ zmm9.d
                    int32_t rax_43 = int.d(zmm1.d) s>> 1
                    char rcx_25
                    
                    if (rax_43 s>= 0xffffff80)
                        rcx_25 = 0x7f
                        
                        if (rax_43 s< 0x7f)
                            rcx_25 = rax_43.b
                    else
                        rcx_25 = -0x80
                    
                    zmm0 = data_142d3f660
                    int32_t var_178_1 = zmm8[0]
                    float var_170_1 = temp0_15[0]
                    *(rdi_5 + (i_5 << 3) + 2) = rcx_25
                    float var_164_1 = var_228_1:4.d[0]
                    int32_t var_160_1 = var_220[0]
                    float var_188 = zmm4[0]
                    int32_t var_184_1 = zmm3[0]
                    float var_180_1 = zmm2[0]
                    float var_174_1 = temp0_10[0]
                    float var_168_1 = var_228_1.d[0]
                    *(rdi_5 + (i_5 << 3) + 3) = 0x7f
                    int32_t var_17c_1 = 0
                    int32_t var_16c_1 = 0
                    int32_t var_15c_1 = 0
                    uint128_t var_158_1 = zmm0
                    zmm0, arg4, zmm7, zmm8, zmm9, zmm10, zmm11, zmm13_1 = sub_14062b8d0(&var_188)
                    
                    zmm1 = zmm0.d f>= zmm13_1 ? 0x437e8000 : 0xc37d8000
                    
                    arg4[0] = arg4[0] f* zmm10.d
                    arg4[0] = arg4[0] + arg4[0]
                    arg4[0] = arg4[0] f+ zmm9.d
                    int32_t rax_45 = int.d(arg4[0]) s>> 1
                    char rcx_27
                    
                    if (rax_45 s>= 0xffffff80)
                        rcx_27 = 0x7f
                        
                        if (rax_45 s< 0x7f)
                            rcx_27 = rax_45.b
                    else
                        rcx_27 = -0x80
                    
                    zmm7[0] = zmm7[0] f* zmm10.d
                    *(rdi_5 + (i_5 << 3) + 4) = rcx_27
                    zmm7[0] = zmm7[0] + zmm7[0]
                    zmm7[0] = zmm7[0] f+ zmm9.d
                    int32_t rax_47 = int.d(zmm7[0]) s>> 1
                    char rcx_28
                    
                    if (rax_47 s>= 0xffffff80)
                        rcx_28 = 0x7f
                        
                        if (rax_47 s< 0x7f)
                            rcx_28 = rax_47.b
                    else
                        rcx_28 = -0x80
                    
                    zmm8[0] = zmm8[0] f* zmm10.d
                    *(rdi_5 + (i_5 << 3) + 5) = rcx_28
                    zmm8[0] = zmm8[0] f+ zmm8[0]
                    zmm8[0] = zmm8[0] f+ zmm9.d
                    int32_t rax_49 = int.d(zmm8[0]) s>> 1
                    char rcx_29
                    
                    if (rax_49 s>= 0xffffff80)
                        rcx_29 = 0x7f
                        
                        if (rax_49 s< 0x7f)
                            rcx_29 = rax_49.b
                    else
                        rcx_29 = -0x80
                    
                    *(rdi_5 + (i_5 << 3) + 6) = rcx_29
                    int32_t rax_51 = int.d(zmm1.d) s>> 1
                    char rcx_30
                    
                    if (rax_51 s>= 0xffffff80)
                        rcx_30 = 0x7f
                        
                        if (rax_51 s< 0x7f)
                            rcx_30 = rax_51.b
                    else
                        rcx_30 = -0x80
                    
                    *(rdi_5 + (i_5 << 3) + 7) = rcx_30
                else
                    zmm1.d = zmm1.d f* zmm11.d
                    int16_t* rbx_5 = (zx.q(i_5.d) << 4) + rdi_5
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm1.d = zmm1.d f+ zmm9.d
                    int32_t rax_18 = int.d(zmm1.d) s>> 1
                    int16_t rcx_11
                    
                    if (rax_18 s>= 0xffff8000)
                        rcx_11 = 0x7fff
                        
                        if (rax_18 s< 0x7fff)
                            rcx_11 = rax_18.w
                    else
                        rcx_11 = -0x8000
                    
                    zmm3 = var_1f8_1:4.d
                    *rbx_5 = rcx_11
                    zmm1.d = zmm3.d f* zmm11.d
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm1.d = zmm1.d f+ zmm9.d
                    int32_t rax_27 = int.d(zmm1.d) s>> 1
                    int16_t rcx_16
                    
                    if (rax_27 s>= 0xffff8000)
                        rcx_16 = 0x7fff
                        
                        if (rax_27 s< 0x7fff)
                            rcx_16 = rax_27.w
                    else
                        rcx_16 = -0x8000
                    
                    zmm2 = var_1f8_1:8.d
                    rbx_5[1] = rcx_16
                    zmm1.d = zmm2.d f* zmm11.d
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm1.d = zmm1.d f+ zmm9.d
                    int32_t rax_29 = int.d(zmm1.d) s>> 1
                    int16_t rcx_17
                    
                    if (rax_29 s>= 0xffff8000)
                        rcx_17 = 0x7fff
                        
                        if (rax_29 s< 0x7fff)
                            rcx_17 = rax_29.w
                    else
                        rcx_17 = -0x8000
                    
                    zmm0 = data_142d3f660
                    int32_t var_1b8_1 = zmm8[0]
                    float var_1b0_1 = temp0_15[0]
                    rbx_5[2] = rcx_17
                    float var_1a4_1 = var_228_1:4.d[0]
                    int32_t var_1a0_1 = var_220[0]
                    float var_1c8 = zmm4[0]
                    int32_t var_1c4_1 = zmm3[0]
                    float var_1c0_1 = zmm2[0]
                    float var_1b4_1 = temp0_10[0]
                    float var_1a8_1 = var_228_1.d[0]
                    rbx_5[3] = 0x7fff
                    int32_t var_1bc_1 = 0
                    int32_t var_1ac_1 = 0
                    int32_t var_19c_1 = 0
                    uint128_t var_198_1 = zmm0
                    uint128_t zmm14_1
                    uint128_t zmm15_1
                    zmm0, arg4, zmm7, zmm8, zmm9, zmm10, zmm11, zmm13_1, zmm14_1, zmm15_1 =
                        sub_14062b8d0(&var_1c8)
                    
                    zmm1 = zmm0.d f>= zmm13_1 ? zmm15_1 : zmm14_1
                    
                    arg4[0] = arg4[0] f* zmm11.d
                    arg4[0] = arg4[0] + arg4[0]
                    arg4[0] = arg4[0] f+ zmm9.d
                    int32_t rax_31 = int.d(arg4[0]) s>> 1
                    int16_t rcx_19
                    
                    if (rax_31 s>= 0xffff8000)
                        rcx_19 = 0x7fff
                        
                        if (rax_31 s< 0x7fff)
                            rcx_19 = rax_31.w
                    else
                        rcx_19 = -0x8000
                    
                    zmm7[0] = zmm7[0] f* zmm11.d
                    rbx_5[4] = rcx_19
                    zmm7[0] = zmm7[0] + zmm7[0]
                    zmm7[0] = zmm7[0] f+ zmm9.d
                    int32_t rax_33 = int.d(zmm7[0]) s>> 1
                    int16_t rcx_20
                    
                    if (rax_33 s>= 0xffff8000)
                        rcx_20 = 0x7fff
                        
                        if (rax_33 s< 0x7fff)
                            rcx_20 = rax_33.w
                    else
                        rcx_20 = -0x8000
                    
                    zmm8[0] = zmm8[0] f* zmm11.d
                    rbx_5[5] = rcx_20
                    zmm8[0] = zmm8[0] f+ zmm8[0]
                    zmm8[0] = zmm8[0] f+ zmm9.d
                    int32_t rax_35 = int.d(zmm8[0]) s>> 1
                    int16_t rcx_21
                    
                    if (rax_35 s>= 0xffff8000)
                        rcx_21 = 0x7fff
                        
                        if (rax_35 s< 0x7fff)
                            rcx_21 = rax_35.w
                    else
                        rcx_21 = -0x8000
                    
                    rbx_5[6] = rcx_21
                    int32_t rax_37 = int.d(zmm1.d) s>> 1
                    
                    if (rax_37 s>= 0xffff8000)
                        int16_t rcx_22 = 0x7fff
                        
                        if (rax_37 s< 0x7fff)
                            rcx_22 = rax_37.w
                        
                        rbx_5[7] = rcx_22
                    else
                        rbx_5[7] = 0x8000
                rdi_1 = var_208
                int64_t rax_52 = *(r12_1 + 0x90)
                zmm0 = *(rax_52 + r15_2 + 0x14)
                zmm1 = *(rax_52 + r15_2 + 0x18)
                int64_t r11_6 = *(rdi_1 + 0x288)
                int64_t r9_6 = zx.q(*(rdi_1 + 0x298)) * i_5
                
                if (*(rdi_1 + 0x2a0) == 0)
                    int32_t var_240_1 = zmm0.d
                    uint16_t rcx_32 = (var_240_1 u>> 0x17).w
                    uint16_t rax_54 = (var_240_1 u>> 0x1f).w << 0xf
                    uint32_t r8_9 = zx.d(rcx_32.b)
                    
                    if (r8_9 u<= 0x70)
                        i_4.w = rax_54
                        
                        if (0x70 - r8_9 + 0xe s<= 0x18)
                            int32_t rdx_14 = (var_240_1 & 0x7fffff) | 0x800000
                            uint16_t r8_11 = ((rdx_14 u>> (0x70 - r8_9 + 0xe).b).w & 0x3ff) | rax_54
                            rax_54 = r8_11
                            i_4.w = rax_54
                            
                            if (((rdx_14 u>> ((0x70 - r8_9).b + 0xd)).b & 1) != 0)
                                rax_54 = r8_11 + 1
                                i_4.w = rax_54
                    else if (r8_9 u< 0x8f)
                        uint16_t rdx_16 = ((var_240_1 u>> 0xd).w & 0x3ff)
                            | ((rcx_32 - 0x10) & 0x1f) << 0xa | rax_54
                        rax_54 = rdx_16
                        i_4.w = rdx_16
                    else
                        rax_54 |= 0x7bff
                        i_4.w = rax_54
                    
                    *(r11_6 + (r9_6 << 2)) = rax_54
                    int32_t var_240_2 = zmm1.d
                    uint16_t rcx_36 = (var_240_2 u>> 0x17).w
                    uint16_t rax_56 = (var_240_2 u>> 0x1f).w << 0xf
                    uint32_t r8_12 = zx.d(rcx_36.b)
                    
                    if (r8_12 u<= 0x70)
                        var_244.w = rax_56
                        
                        if (0x70 - r8_12 + 0xe s<= 0x18)
                            int32_t rdx_19 = (var_240_2 & 0x7fffff) | 0x800000
                            uint16_t r8_14 =
                                ((rdx_19 u>> (0x70 - r8_12 + 0xe).b).w & 0x3ff) | rax_56
                            rax_56 = r8_14
                            var_244.w = rax_56
                            
                            if (((rdx_19 u>> ((0x70 - r8_12).b + 0xd)).b & 1) != 0)
                                rax_56 = r8_14 + 1
                                var_244.w = rax_56
                    else if (r8_12 u< 0x8f)
                        uint16_t rdx_21 = ((var_240_2 u>> 0xd).w & 0x3ff)
                            | ((rcx_36 - 0x10) & 0x1f) << 0xa | rax_56
                        rax_56 = rdx_21
                        var_244.w = rdx_21
                    else
                        rax_56 |= 0x7bff
                        var_244.w = rax_56
                    
                    *(r11_6 + (r9_6 << 2) + 2) = rax_56
                else
                    *(r11_6 + (r9_6 << 3)) = zmm0.d
                    *(r11_6 + (r9_6 << 3) + 4) = zmm1.d
                
                zmm3 = data_142dd3f80
                r9_1 = r12_1 + 0x90
                zmm4 = data_142dd3fd0
                i_3 += 1
                zmm7 = data_142dd3fb0
                r15_2 += 0x1c
                zmm2 = zx.o(0)
            while (i_3 s< *(r12_1 + 0x98))
        
        sub_1419981a0(rdi_1 + 0x2a8)
        sub_1419981a0(rdi_1 + 0x220)
        void* var_230_1 = rdi_1
        var_238 = rdi_1 + 0x10
        int512_t zmm6
        zmm6.o = var_48_1
        
        if (sub_140a80f40() == 0)
            uint32_t rax_59
            
            if (data_143f138f4 == 0 && data_143de5480 != 0)
                rax_59.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_59.b == 0))
                void var_128
                int64_t* rax_60 = sub_142332820(&var_128, nullptr, 0xff)
                *(*rax_60 + 0x10) = var_238.o
                void* rcx_45 = *rax_60
                int32_t r8_15 = rax_60[2].d
                int64_t* rdx_24 = rax_60[1]
                int64_t* rbx_6 = *(rcx_45 + 0x28)
                int64_t* var_218_1 = rbx_6
                int32_t* rdi_8 = &rbx_6[9]
                
                if (rbx_6 != 0)
                    *rdi_8 += 1
                    rbx_6 = var_218_1
                
                result = sub_1405e48c0(rcx_45, rdx_24, r8_15, 1)
                
                if (rbx_6 != 0)
                    result = zx.q(*rdi_8)
                    *rdi_8 -= 1
                    
                    if (result.d == 1)
                        result = sub_140a2f6e0(var_218_1)
            else
                var_208.o = var_238.o
                result = sub_14232d740(&var_208)
        else
            result = sub_14232d740(&var_238)

__security_check_cookie(rax_1 ^ &var_298)
return result
