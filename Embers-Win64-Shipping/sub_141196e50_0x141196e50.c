// 函数: sub_141196e50
// 地址: 0x141196e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_738
int64_t rax_1 = __security_cookie ^ &var_738
void* rdi = arg4
char var_5e0 = arg2.b
int64_t var_470
int64_t* result
int128_t zmm6
result, zmm6 = sub_141190c70(&var_470, arg2, arg3)
int32_t i = 0
int32_t i_1 = 0

if (arg3[1].d s> 0)
    int64_t rbx_1 = 0
    int128_t var_58_1 = zmm6
    int128_t zmm7
    int128_t var_68_1 = zmm7
    int128_t zmm10 = 0x3f800000
    int128_t zmm8
    int128_t var_78_1 = zmm8
    int128_t zmm9
    int128_t var_88_1 = zmm9
    int64_t var_628_1 = 0
    
    do
        int64_t* rax_3 = rbx_1 * 0x5240 + *arg3
        int128_t* var_640_1 = rax_3
        
        if (*rax_3 != 0 && i s< *(rdi + 8))
            int64_t* r14_2 = rbx_1 * 0x130 + *rdi
            int64_t* var_668_1 = r14_2
            
            if (r14_2[1].d != 0)
                int64_t r13_1 = var_470
                int64_t rsi_2 = rbx_1 << 4
                int64_t var_680_1 = rsi_2
                
                if (*(rsi_2 + r13_1 + 8) != 0 && sub_1411e7cf0() == 0)
                    int32_t rdi_1 = 0
                    int32_t j = 0
                    
                    if (r14_2[1].d s> 0)
                        int64_t r15 = 0
                        
                        do
                            int64_t rax_5 = *r14_2
                            uint128_t var_408 = *(r15 + rax_5 + 0xa0)
                            uint64_t var_3f8_1 = *(r15 + rax_5 + 0xb0)
                            int32_t var_3f0_1 = *(r15 + rax_5 + 0xb8)
                            int64_t* rbx_2 = *(rsi_2 + r13_1)
                            int64_t rsi_3 = 0
                            uint64_t r14_4 = sx.q(*(rsi_2 + r13_1 + 8)) << 3 u>> 3
                            
                            if (rbx_2 u> &rbx_2[sx.q(*(rsi_2 + r13_1 + 8))])
                                r14_4 = 0
                            
                            if (r14_4 != 0)
                                do
                                    int64_t* rcx_2 = *(*rbx_2 + 0x20)
                                    
                                    if ((*(*rcx_2 + 8))(rcx_2, &var_408) != 0 && rdi_1 u< 0x20)
                                        rdi_1 += 1
                                    
                                    rbx_2 = &rbx_2[1]
                                    rsi_3 += 1
                                while (rsi_3 != r14_4)
                            
                            r14_2 = var_668_1
                            j += 1
                            rsi_2 = var_680_1
                            r15 += 0xe0
                        while (j s< r14_2[1].d)
                        
                        if (rdi_1 != 0)
                            uint128_t zmm0_1
                            zmm0_1.d = float.s(zx.q(rdi_1))
                            uint128_t zmm1_1 = _mm_sqrt_ss(0, zmm0_1.d)
                            int32_t rcx_3 = int.d(zmm1_1.d)
                            
                            if (rcx_3 != 0x80000000
                                    && not(_mm_cvtepi32_ps(zx.o(rcx_3)).d f== zmm1_1.d))
                                zmm1_1 = _mm_cvtepi32_ps(zx.o(rcx_3 +
                                    ((_mm_movemask_ps(_mm_unpacklo_ps(zmm1_1, zmm1_1.q)) & 1) ^ 1)))
                            
                            float rax_16 = data_1439b5fd8
                            int32_t r13_2 = int.d(zmm1_1.d)
                            float var_6e0 = rax_16
                            int32_t rsi_5 = rax_16 i* r13_2
                            int32_t rbx_3 = r13_2
                            int32_t var_6d8_1 = r13_2
                            
                            if (r13_2 == rdi_1)
                                rbx_3 = 1
                            
                            r14_2[2].d = 0
                            int32_t rbx_4 = rbx_3 i* rax_16
                            void var_318
                            sub_1419928d0(&var_318, arg1)
                            int16_t var_520_1 = 1
                            char var_51e_1 = 0
                            float zmm0_2[0x4] = u"UnknownTexture2D".o
                            int16_t var_530_1 = 0
                            int32_t var_554_1 = rsi_5
                            int32_t var_550_1 = rbx_4
                            int32_t var_54c_1 = 0
                            zmm7 = data_1439c7b78.o
                            int32_t var_544_1 = 0x10000
                            int16_t var_540_1 = 1
                            int32_t var_534_1 = 0xc
                            zmm0_2[0].q = u"ShadowDepth"
                            char var_6e8_1 = 1
                            int128_t var_568_1 = data_1439c7b68
                            int64_t* var_310
                            void*** rax_18
                            int128_t zmm6_1
                            rax_18, zmm6_1 = sub_14081d830(0x88, var_310, 1, 0)
                            void*** var_660_1 = rax_18
                            
                            if (rax_18 == 0)
                                var_660_1 = nullptr
                            else
                                rax_18[1] = u"ShadowDepth"
                                rax_18[2] = 0
                                rax_18[3].b = 0
                                *(rax_18 + 0x1c) = 0
                                rax_18[4] = 0
                                rax_18[5].w = 0x200
                                *(rax_18 + 0x30) = zmm6_1
                                *rax_18 = &data_142f11960
                                *(rax_18 + 0x40) = zmm7
                                rax_18[0x10] = 0
                                *(rax_18 + 0x50) = 1.o
                                *(rax_18 + 0x60) = 0xb:4.o
                                *(rax_18 + 0x70) = zmm0_2
                            
                            int32_t var_500_1 = rbx_4
                            int16_t var_4d0_1 = 1
                            char var_4ce_1 = 0
                            float zmm0_3[0x4] = u"UnknownTexture2D".o
                            int16_t var_4e0_1 = 0
                            int32_t var_504_1 = rsi_5
                            int32_t var_4fc_1 = 0
                            zmm7 = data_1439c7b30.o
                            int32_t var_4f4_1 = 0x10000
                            int16_t var_4f0_1 = 1
                            int32_t var_4e4_1 = 9
                            zmm0_3[0].q = u"DeepShadowLayers"
                            int128_t var_518_1 = data_1439c7b20
                            void*** rax_20
                            int128_t zmm6_2
                            rax_20, zmm6_2 = sub_14081d830(0x88, var_310, 1, 0)
                            void*** var_638_1 = rax_20
                            
                            if (rax_20 == 0)
                                var_638_1 = nullptr
                            else
                                rax_20[1] = u"DeepShadowLayers"
                                rax_20[2] = 0
                                rax_20[3].b = 0
                                *(rax_20 + 0x1c) = 0
                                rax_20[4] = 0
                                rax_20[5].w = 0x200
                                *(rax_20 + 0x30) = zmm6_2
                                *rax_20 = &data_142f11960
                                *(rax_20 + 0x40) = zmm7
                                rax_20[0x10] = 0
                                *(rax_20 + 0x50) = 1.o
                                *(rax_20 + 0x60) = 0xa:4.o
                                *(rax_20 + 0x70) = zmm0_3
                            
                            int32_t j_1 = 0
                            float rdi_3 = 0f
                            int32_t j_3 = 0
                            float var_688_1 = 0f
                            float var_718
                            int32_t* var_710
                            float zmm3[0x4]
                            
                            if (r14_2[1].d s> 0)
                                void* rsi_6 = nullptr
                                
                                do
                                    int64_t rcx_6 = var_470
                                    int64_t rbx_5 = 0
                                    int64_t r15_1 = *r14_2
                                    int64_t var_678_1 = 0
                                    int64_t* r12_1 = *(var_680_1 + rcx_6)
                                    uint64_t rcx_8 = sx.q(*(var_680_1 + rcx_6 + 8)) << 3 u>> 3
                                    
                                    if (r12_1 u> &r12_1[sx.q(*(var_680_1 + rcx_6 + 8))])
                                        rcx_8 = 0
                                    
                                    if (rcx_8 != 0)
                                        do
                                            void* rcx_9 = *r12_1
                                            float rax_24 = *(rsi_6 + r15_1 + 0xb8)
                                            int64_t* r14_5 = *(rcx_9 + 0x20)
                                            uint128_t zmm1_2 = zx.o(*(rsi_6 + r15_1 + 0xb0))
                                            float var_4c8[0x4] = *(rsi_6 + r15_1 + 0xa0)
                                            uint64_t var_4b8_1 = zmm1_2.q
                                            
                                            if ((*(*r14_5 + 8))(r14_5, &var_4c8) != 0
                                                    && rdi_3 u< 0x20)
                                                uint32_t rax_27 = zx.d(*(r14_5 + 0x13c))
                                                int64_t rbx_6 = sx.q(*(rsi_6 + r15_1 + 0x78))
                                                void* rdi_4 = rsi_6 + r15_1
                                                int32_t var_620 = 0x3f800000
                                                float r13_4 = modu.dp.d(0:rdi_3, r13_2) i* var_6e0
                                                int32_t var_61c_1 = 0x3f800000
                                                float var_618_1 = 1f
                                                int32_t var_5e4_1 =
                                                    divu.dp.d(0:rdi_3, r13_2) i* rax_16
                                                int32_t rax_31 = (rbx_6 + 1).d
                                                *(rdi_4 + 0x78) = rax_31
                                                
                                                if (rax_31 s> *(rdi_4 + 0x7c))
                                                    sub_14119a8e0(rdi_4 + 0x70, rbx_6.d)
                                                
                                                float (* rbx_9)[0x4] =
                                                    rbx_6 * 0xc0 + *(rdi_4 + 0x70)
                                                memset(rbx_9, 0, 0xc0)
                                                var_710 = &var_6e0
                                                var_718 = rax_27
                                                zmm10 = sub_1411dc610(rbx_9, &var_620, &var_4c8, 
                                                    r14_5, var_718, var_710)
                                                float zmm0_4[0x4] = r14_5[0xc].d
                                                *(rbx_9 + 0x74) = (_mm_unpacklo_ps(r14_5[8].d, 
                                                    r14_5[0xa].d[0].q)).q
                                                (*rbx_9)[0x1f] = zmm0_4[0]
                                                zmm3 = *(r14_5 + 0x20)
                                                int32_t rax_33
                                                rax_33.b = rax_27 != 0
                                                float temp0_8[0x4] =
                                                    _mm_shuffle_ps(zmm3, zmm3, 0x55)
                                                float temp0_9[0x4] =
                                                    _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                                                float temp0_10[0x4] =
                                                    _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                                                temp0_10[0] = temp0_8[0]
                                                float temp0_11[0x4] =
                                                    _mm_shuffle_ps(temp0_10, temp0_10, 0xc6)
                                                temp0_11[0] = temp0_9[0]
                                                zmm1_2 = _mm_cvtepi32_ps(zx.o(rax_33))
                                                float temp0_13[0x4] =
                                                    _mm_shuffle_ps(temp0_11, temp0_11, 0x27)
                                                temp0_13[0] = zmm1_2.d
                                                float temp0_14[0x4] =
                                                    _mm_shuffle_ps(temp0_13, temp0_13, 0x39)
                                                rbx_9[8] = temp0_14
                                                zmm0_4 = *(r14_5 + 0x30)
                                                rbx_9[7][0] = rax_27
                                                rbx_9[9] = zmm0_4
                                                (*rbx_9)[0x1b] = *(rcx_9 + 0x28)
                                                (*rbx_9)[0x19] = var_6e0
                                                (*rbx_9)[0x1a] = rax_16
                                                uint32_t var_6c8_1
                                                var_6c8_1.o = temp0_14
                                                rbx_9[0xa] = var_4c8
                                                rbx_9[0xb][0].q = var_4b8_1
                                                (*rbx_9)[0x2e] = rax_24
                                                float rdx_9 = var_6e0 i+ r13_4
                                                int64_t rax_39 = r13_4.q
                                                (*rbx_9)[0x13] = r13_4
                                                var_6c8_1.q = rax_39
                                                int32_t var_6c4 = var_6c4 i+ rax_16
                                                rbx_9[5][0] = (rax_39 u>> 0x20).d
                                                (*rbx_9)[0x15] = rdx_9
                                                (*rbx_9)[0x16] = (rdx_9.q u>> 0x20).d
                                                (*rbx_9)[0x17] = *(rsi_6 + r15_1 + 0xcc)
                                                rbx_9[4][0].q = var_620.q
                                                (*rbx_9)[0x12] = var_618_1
                                                r13_2 = var_6d8_1
                                                rbx_9[6][0] = var_688_1
                                                rdi_3 = var_688_1 i+ 1
                                                rbx_5 = var_678_1
                                                var_688_1 = rdi_3
                                            
                                            rbx_5 += 1
                                            r12_1 = &r12_1[1]
                                            var_678_1 = rbx_5
                                        while (rbx_5 != rcx_8)
                                        
                                        r14_2 = var_668_1
                                        j_1 = j_3
                                    
                                    j_1 += 1
                                    rsi_6 += 0xe0
                                    j_3 = j_1
                                while (j_1 s< r14_2[1].d)
                            
                            r14_2[2].d = rdi_3
                            
                            if (rdi_3 u<= 1)
                                rdi_3 = 1.40129846e-45f
                            
                            *(r14_2 + 0x14) = var_6e0
                            r14_2[3].d = rax_16
                            int32_t var_5ac_1 = 2
                            int32_t var_5b0_1 = 0x209
                            int32_t var_5b8_1 = 0x50
                            float var_5b4_1 = rdi_3
                            void*** rax_47 = sub_14081d830(0x48, var_310, 1, 0)
                            void*** rsi_7 = rax_47
                            
                            if (rax_47 == 0)
                                rsi_7 = nullptr
                            else
                                rsi_7[2] = 0
                                rsi_7[1] = u"DeepShadowViewInfo"
                                rsi_7[3].b = 0
                                *(rsi_7 + 0x1c) = 0
                                rsi_7[4] = 0
                                rsi_7[5].w = 0x200
                                *rsi_7 = &data_142f285d0
                                *(rsi_7 + 0x30) = var_5b8_1.o
                                rsi_7[8] = 0
                            
                            int32_t var_59c_1 = 2
                            int32_t var_5a0_1 = 0x209
                            int32_t var_5a8_1 = 0x40
                            float var_5a4_1 = rdi_3
                            uint64_t rax_48 = sub_14081d830(0x48, var_310, 1, 0)
                            uint64_t var_680_2 = rax_48
                            uint64_t r12_2 = rax_48
                            
                            if (rax_48 == 0)
                                r12_2 = 0
                                var_680_2 = 0
                            else
                                *(r12_2 + 0x10) = 0
                                *(r12_2 + 8) = u"DeepShadowWorldToLightTransform"
                                *(r12_2 + 0x18) = 0
                                *(r12_2 + 0x1c) = 0
                                *(r12_2 + 0x20) = 0
                                *(r12_2 + 0x28) = 0x200
                                *r12_2 = &data_142f285d0
                                *(r12_2 + 0x30) = var_5a8_1.o
                                *(r12_2 + 0x40) = 0
                            
                            int64_t var_608_1 = 1
                            
                            if ((rsi_7[7].d & 0x100) != 0)
                                var_608_1.d = 4
                                var_608_1:4.d = 0x1c
                            
                            void** const rax_49 = sub_14081d830(0x28, var_310, 1, 0)
                            var_6d8_1.q = rax_49
                            void*** r15_2 = rax_49
                            
                            if (rax_49 == 0)
                                r15_2 = nullptr
                                var_6d8_1.q = 0
                            else
                                rax_49[1] = rsi_7[1]
                                rax_49[2] = 0
                                *r15_2 = &data_142f285c0
                                *(r15_2 + 0x18) = rsi_7.o
                            
                            rax_49.b = data_1439b5fdc s> 0
                            *(r14_2 + 0x1c) = rax_49.b
                            void* rdi_7 = r14_2[0x25]
                            int32_t var_650
                            int64_t var_208
                            sub_140865c40(&var_208, &var_650, rdi_7)
                            int64_t rax_50 = sx.q(var_650)
                            void* const rcx_17
                            
                            if (rax_50.d == 0xffffffff)
                                rcx_17 = nullptr
                            else
                                rcx_17 = var_208 + rax_50 * 0x18
                            
                            int64_t* rax_52 = rcx_17 + 8
                            
                            if (rcx_17 == 0)
                                rax_52 = nullptr
                            
                            void var_2a8
                            void*** rdi_8
                            
                            if (rax_52 == 0)
                                void*** rax_53 = sub_14081d830(0x48, var_310, 1, 0)
                                void*** rcx_18 = rax_53
                                
                                if (rax_53 == 0)
                                    rcx_18 = nullptr
                                else
                                    rcx_18[2] = 0
                                    rcx_18[1] = u"HairInstanceGroupAABBs"
                                    rcx_18[3].b = 0
                                    *(rcx_18 + 0x1c) = 0
                                    rcx_18[4] = 0
                                    rcx_18[5].w = 0x200
                                    *rcx_18 = &data_142f285d0
                                    int128_t zmm0_8 = *(rdi_7 + 0xb8)
                                    rcx_18[8] = 0
                                    *(rcx_18 + 0x30) = zmm0_8
                                
                                int64_t rax_54 = r14_2[0x25]
                                void*** var_670 = rcx_18
                                rcx_18[8] = rax_54
                                void*** rdx_16 = var_670
                                int32_t rcx_19 = *(rdx_16 + 0x3c)
                                
                                if (rcx_19 == 0)
                                    rdx_16[2] = *r14_2[0x25]
                                else if (rcx_19 == 1)
                                    rdx_16[2] = *(r14_2[0x25] + 8)
                                else if (rcx_19 == 2)
                                    rdx_16[2] = *(r14_2[0x25] + 0x10)
                                
                                void* var_458_1 = &r14_2[0x25]
                                void** var_460 = &var_670
                                void var_4a8
                                sub_1411610a0(&var_2a8, &var_4a8, &var_460, nullptr)
                                int64_t var_488 = r14_2[0x25]
                                int64_t* var_428 = &var_488
                                void** var_420_1 = &var_670
                                void var_4a4
                                sub_14107baa0(&var_208, &var_4a4, &var_428, nullptr)
                                rdi_8 = var_670
                            else
                                rdi_8 = *rax_52
                            
                            int128_t* rax_59 = sub_14081d830(0x350, var_310, 1, 0)
                            int128_t* rbx_11 = rax_59
                            
                            if (rax_59 == 0)
                                rbx_11 = nullptr
                            else
                                sub_141170120(rax_59)
                                sub_141170120(&rbx_11[0x10])
                                __builtin_memset(&rbx_11[0x33], 0, 0x18)
                            
                            memset(rbx_11, 0, 0x350)
                            void* j_2 = *r14_2
                            
                            for (void* r10_2 = sx.q(r14_2[1].d) * 0xe0 + j_2; j_2 != r10_2; 
                                    j_2 += 0xe0)
                                void* rdx_20 = *(j_2 + 0x70)
                                void* r8_6 = sx.q(*(j_2 + 0x78)) * 0xc0 + rdx_20
                                
                                if (rdx_20 != r8_6)
                                    int32_t var_58c_1 = 0
                                    
                                    do
                                        int32_t zmm1_3 = *(rdx_20 + 0x78)
                                        zmm3 = *(rdx_20 + 0x7c)
                                        uint64_t rax_62 = zx.q(*(rdx_20 + 0x60))
                                        float var_598[0x4]
                                        var_598[0] = *(rdx_20 + 0x74)
                                        float temp0_15[0x4] = _mm_shuffle_ps(var_598, var_598, 0xe1)
                                        temp0_15[0] = zmm1_3
                                        float temp0_16[0x4] =
                                            _mm_shuffle_ps(temp0_15, temp0_15, 0xc6)
                                        temp0_16[0] = zmm3[0]
                                        float temp0_17[0x4] =
                                            _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
                                        rbx_11[rax_62] = temp0_17
                                        zmm3 = *(rdx_20 + 0x80)
                                        int32_t zmm0_9 = *(rdx_20 + 0x84)
                                        int32_t rax_64
                                        rax_64.b = *(rdx_20 + 0x70) != 0
                                        zmm1_3 = *(rdx_20 + 0x88)
                                        float temp0_18[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                                        temp0_18[0] = zmm0_9
                                        var_598 = temp0_17
                                        uint64_t rax_65 = zx.q(*(rdx_20 + 0x60))
                                        float temp0_19[0x4] =
                                            _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
                                        temp0_19[0] = zmm1_3
                                        float temp0_20[0x4] =
                                            _mm_shuffle_ps(temp0_19, temp0_19, 0x27)
                                        temp0_20[0] = _mm_cvtepi32_ps(zx.o(rax_64))[0]
                                        float temp0_22[0x4] =
                                            _mm_shuffle_ps(temp0_20, temp0_20, 0x39)
                                        rbx_11[rax_65 + 0x10] = temp0_22
                                        int32_t rax_68 = *(rdx_20 + 0x5c)
                                        int64_t rcx_29 = (zx.q(*(rdx_20 + 0x60)) + 0x20) * 2
                                        uint64_t var_6b8
                                        var_6b8.o = temp0_22
                                        rdx_20 += 0xc0
                                        *(rbx_11 + (rcx_29 << 3)) = rax_68
                                        *(rbx_11 + (rcx_29 << 3) + 4) = 0
                                        *(rbx_11 + (rcx_29 << 3) + 0xc) = 0
                                    while (rdx_20 != r8_6)
                            
                            rbx_11[0x32].d = *(r14_2 + 0x14)
                            *(rbx_11 + 0x324) = r14_2[3].d
                            *(rbx_11 + 0x328) = r14_2[2].d
                            *(rbx_11 + 0x32c) = r14_2[1].d
                            int32_t var_478_1 = data_1439c8a7c
                            int32_t var_474_1 = 0x1d
                            void*** rax_74 = sub_14081d830(0x28, var_310, 1, 0)
                            
                            if (rax_74 == 0)
                                rax_74 = nullptr
                            else
                                rax_74[1] = rdi_8[1]
                                *rax_74 = &data_142f285c0
                                rax_74[2] = 0
                                *(rax_74 + 0x18) = rdi_8.o
                            
                            rbx_11[0x33].q = rax_74
                            int32_t rax_75 = 0
                            
                            if ((rsi_7[7].d & 0x100) != 0)
                                rax_75 = 0x1c
                            
                            int32_t var_580_1 = rax_75
                            int16_t var_57c_1 = 0
                            void*** rax_76 = sub_14081d830(0x28, var_310, 1, 0)
                            
                            if (rax_76 == 0)
                                rax_76 = nullptr
                            else
                                rax_76[1] = rsi_7[1]
                                *rax_76 = &data_142f285c0
                                rax_76[2] = 0
                                *(rax_76 + 0x18) = rsi_7.o
                            
                            *(rbx_11 + 0x338) = rax_76
                            int32_t rax_77 = 0
                            
                            if ((*(r12_2 + 0x38) & 0x100) != 0)
                                rax_77 = 0x1c
                            
                            int32_t var_570_1 = rax_77
                            int16_t var_56c_1 = 0
                            void*** rax_78 = sub_14081d830(0x28, var_310, 1, 0)
                            
                            if (rax_78 == 0)
                                rax_78 = nullptr
                            else
                                rax_78[1] = *(r12_2 + 8)
                                *rax_78 = &data_142f285c0
                                rax_78[2] = 0
                                *(rax_78 + 0x18) = r12_2.o
                            
                            rbx_11[0x34].q = rax_78
                            *(rbx_11 + 0x31c) = sub_1411e10d0().d
                            *(rbx_11 + 0x30c) = 0
                            rbx_11[0x30].q = data_143dbb1f8.q
                            *(rbx_11 + 0x308) = data_143dbb200
                            rbx_11[0x31].q = data_143dbb1f8.q
                            *(rbx_11 + 0x318) = data_143dbb200
                            int128_t var_3e8
                            char rcx_35 =
                                sub_1419a2ec0(var_640_1[0x515].q, &var_3e8, &data_143e6cca0, 0)
                            zmm7 = var_3e8
                            int128_t var_3c8_1 = zx.o(0)
                            int32_t var_498_1 = 1
                            int32_t var_494_1 = 1
                            float var_6c8
                            var_6c8.o = sub_14118d1c0(rcx_35)
                            sub_141998c50(zmm7.q, &data_143e73e50, rbx_11)
                            int32_t var_698_1 = 1
                            int64_t var_6a0_1 = var_498_1.q
                            void*** rax_81
                            char rcx_37
                            rax_81, rcx_37 = sub_14081d830(0x60, var_310, 1, 0)
                            void*** rdi_9 = rax_81
                            
                            if (rax_81 == 0)
                                rdi_9 = nullptr
                            else
                                sub_14118d1c0(rcx_37)
                                void* var_440_1 = &data_143e73e80
                                int128_t var_3d8 = rbx_11.o
                                void var_6d0
                                sub_141992bd0(rdi_9, &var_6d0, &var_3d8, 2)
                                *rdi_9 = &data_142f2ca88
                                *(rdi_9 + 0x38) = rbx_11.o
                                *(rdi_9 + 0x48) = zmm7
                                rdi_9[0xb] = var_698_1.q
                            
                            sub_1419968d0(&var_318, rdi_9)
                            void* rcx_40 = *r14_2
                            void* var_678_2 = rcx_40
                            void* rax_84 = sx.q(r14_2[1].d) * 0xe0 + rcx_40
                            int128_t* var_708
                            int32_t var_700
                            void* var_6f8
                            int128_t* var_6f0
                            int64_t zmm1_5
                            
                            if (rcx_40 != rax_84)
                                int128_t* r13_5 = rcx_40 + 0x80
                                
                                do
                                    void* rsi_8 = r13_5[-1].q
                                    void* rax_88 = sx.q(*(r13_5 - 8)) * 0xc0 + rsi_8
                                    
                                    if (rsi_8 != rax_88)
                                        zmm7 = data_142d3f670
                                        void* rdi_10 = rsi_8 + 0x50
                                        int512_t zmm6_4
                                        zmm6_4.o = zmm7
                                        
                                        do
                                            zmm1_5 = *(rdi_10 - 0x10)
                                            rbx_11.b = *(rdi_10 + 0x20) == 0
                                            void var_438
                                            sub_140dd8770(&var_438, zmm1_5.d, *(rdi_10 - 8), 
                                                zmm1_5.d, zmm10.d)
                                            int32_t rax_89 =
                                                sub_1411e89f0(rbx_11.b, *(r14_2 + 0x1c))
                                            int128_t* rax_90 = sub_14081d830(0x110, var_310, 1, 0)
                                            int128_t* rbx_12 = rax_90
                                            
                                            if (rax_90 == 0)
                                                rbx_12 = nullptr
                                            else
                                                *(rbx_12 + 0x4c) = 0x3f800000
                                                rbx_12[4].q = 0
                                                *(rbx_12 + 0x48) = 0
                                                *(rbx_12 + 0x54) = 0
                                                *(rbx_12 + 0x5c) = 0
                                                rbx_12[7].q = 0
                                                *(rbx_12 + 0x78) = 0
                                                sub_14117af20(&rbx_12[8])
                                            
                                            memset(rbx_12, 0, 0x110)
                                            *rbx_12 = *rsi_8
                                            int128_t* var_6f0_1 = rbx_12
                                            int16_t var_5ef_1 = 0
                                            int32_t var_5ec_1 = 2
                                            rbx_12[1] = *(rsi_8 + 0x10)
                                            rbx_12[2] = *(rsi_8 + 0x20)
                                            int128_t zmm1_6 = *(rsi_8 + 0x30)
                                            rbx_12[4] = zmm7
                                            rbx_12[3] = zmm1_6
                                            rbx_12[5].d = *(rdi_10 - 4)
                                            *(rbx_12 + 0x54) = *rdi_10
                                            *(rbx_12 + 0x58) = *(rdi_10 + 4)
                                            *(rbx_12 + 0x5c) = *(rdi_10 + 8)
                                            *(rbx_12 + 0x68) = *(rdi_10 + 0x10)
                                            rbx_12[6].d = var_6e0
                                            *(rbx_12 + 0x64) = rax_16
                                            void* var_6f8_1 = rdi_10 + 0x24
                                            *(rbx_12 + 0x78) = r15_2
                                            r15_2.b = var_6e8_1 != 0
                                            int32_t var_700_1 = rax_89
                                            r15_2.b += 1
                                            int128_t* var_708_1 = &var_438
                                            char var_5f0_1 = r15_2.b
                                            var_718.b = 0
                                            rbx_12[0x10] = var_660_1.o
                                            sub_1411d1230(&var_318, var_5e0, var_640_1, r13_5, 
                                                var_718, rdi_10 - 4, var_708_1)
                                            int128_t* rax_100
                                            int128_t zmm6_5
                                            rax_100, zmm6_5 = sub_14081d830(0x110, var_310, 1, 0)
                                            rbx_11 = rax_100
                                            
                                            if (rax_100 == 0)
                                                rbx_11 = nullptr
                                            else
                                                *(rbx_11 + 0x4c) = 0x3f800000
                                                rbx_11[4].q = 0
                                                *(rbx_11 + 0x48) = 0
                                                *(rbx_11 + 0x54) = 0
                                                *(rbx_11 + 0x5c) = 0
                                                rbx_11[7].q = 0
                                                *(rbx_11 + 0x78) = 0
                                                sub_14117af20(&rbx_11[8])
                                            
                                            memset(rbx_11, 0, 0x110)
                                            *rbx_11 = *rsi_8
                                            var_6f0 = rbx_11
                                            char var_5c0_1 = r15_2.b
                                            int16_t var_5bf_1 = 0
                                            rbx_11[1] = *(rsi_8 + 0x10)
                                            int32_t var_5bc_1 = 0xffffffff
                                            rbx_11[2] = *(rsi_8 + 0x20)
                                            int128_t zmm1_7 = *(rsi_8 + 0x30)
                                            rbx_11[4] = zmm6_5
                                            rbx_11[3] = zmm1_7
                                            rbx_11[5].d = *(rdi_10 - 4)
                                            *(rbx_11 + 0x54) = *rdi_10
                                            *(rbx_11 + 0x58) = *(rdi_10 + 4)
                                            *(rbx_11 + 0x5c) = *(rdi_10 + 8)
                                            *(rbx_11 + 0x68) = *(rdi_10 + 0x10)
                                            rbx_11[6].d = var_6e0
                                            *(rbx_11 + 0x64) = rax_16
                                            rbx_11[7].q = var_660_1
                                            *(rbx_11 + 0x78) = var_6d8_1.q
                                            var_6f8 = rdi_10 + 0x24
                                            var_700 = rax_89
                                            var_708 = &var_438
                                            var_710 = rdi_10 - 4
                                            var_718.b = 1
                                            rbx_11[8] = var_638_1.o
                                            sub_1411d1230(&var_318, var_5e0, var_640_1, r13_5, 
                                                var_718, var_710, var_708)
                                            r14_2 = var_668_1
                                            rsi_8 += 0xc0
                                            r15_2 = var_6d8_1.q
                                            rdi_10 += 0xc0
                                            var_6e8_1 = 0
                                        while (rsi_8 != rax_88)
                                        
                                        rcx_40 = var_678_2
                                    
                                    r15_2 = var_6d8_1.q
                                    rcx_40 += 0xe0
                                    r13_5 = &r13_5[0xe]
                                    var_678_2 = rcx_40
                                while (rcx_40 != rax_84)
                                
                                r12_2 = var_680_2
                            
                            int32_t var_1b0
                            int64_t rbx_13 = sx.q(var_1b0)
                            int128_t var_6b0_1
                            var_6b0_1.q = &r14_2[4]
                            var_6b0_1:8.b = 1
                            int32_t rax_114 = (rbx_13 + 1).d
                            int64_t var_1b8
                            int32_t var_1ac
                            
                            if (rax_114 s> var_1ac)
                                sub_14119a720(&var_1b8, rbx_13.d)
                            
                            int64_t rax_115 = var_1b8
                            int64_t rcx_50 = rbx_13 * 3
                            zmm1_5 = var_6b0_1:8.q
                            *(rax_115 + (rcx_50 << 3)) = var_660_1.o
                            var_6b0_1:8.b = 1
                            *(rax_115 + (rcx_50 << 3) + 0x10) = zmm1_5
                            int64_t rbx_14 = sx.q(rax_114)
                            var_6b0_1.q = &r14_2[5]
                            int32_t rax_118 = (rbx_14 + 1).d
                            var_1b0 = rax_118
                            
                            if (rax_118 s> var_1ac)
                                sub_14119a720(&var_1b8, rbx_14.d)
                            
                            int64_t rax_119 = var_1b8
                            int64_t rcx_52 = rbx_14 * 3
                            zmm1_5 = var_6b0_1:8.q
                            *(rax_119 + (rcx_52 << 3)) = var_638_1.o
                            var_6b0_1.q = &r14_2[6]
                            *(rax_119 + (rcx_52 << 3) + 0x10) = zmm1_5
                            int32_t var_1a0
                            int64_t rbx_15 = sx.q(var_1a0)
                            var_6b0_1:8.w = 0
                            int32_t rax_120 = (rbx_15 + 1).d
                            var_1a0 = rax_120
                            int64_t var_1a8
                            int32_t var_19c
                            
                            if (rax_120 s> var_19c)
                                sub_14119a720(&var_1a8, rbx_15.d)
                            
                            int64_t rax_121 = var_1a8
                            int64_t rcx_54 = rbx_15 * 3
                            *(rax_121 + (rcx_54 << 3)) = r12_2.o
                            *(rax_121 + (rcx_54 << 3) + 0x10) = var_6b0_1:8.q
                            sub_14199ef00(&var_318)
                            void* r9_4 = r14_2[6]
                            
                            if (r9_4 != 0)
                                int64_t* rcx_56 = data_143f0f180
                                int64_t* var_658
                                (*(*rcx_56 + 0x5b0))(rcx_56, &var_658, &data_143f02b98, 
                                    *(r9_4 + 0x10), var_718, var_710, var_708, var_700, var_6f8, 
                                    var_6f0, var_6e8_1)
                                
                                if (&r14_2[7] == &var_658)
                                label_14119825d:
                                    int64_t* rbx_17 = var_658
                                    
                                    if (rbx_17 != 0)
                                        rbx_17[1].d -= 1
                                        
                                        if (rbx_17[1].d == 1)
                                            char rax_134
                                            
                                            if (rbx_17[2].b == 0 && data_143f0f1d0 == 0)
                                                rax_134 = sub_1405949a0()
                                            
                                            if (rbx_17[2].b != 0
                                                    || (data_143f0f1d0 == 0 && rax_134 != 0))
                                                (**rbx_17)(rbx_17, 1)
                                            else
                                                bool z_2
                                                
                                                if (0 == *(rbx_17 + 0xc))
                                                    *(rbx_17 + 0xc) = 1
                                                    z_2 = true
                                                else
                                                    *(rbx_17 + 0xc)
                                                    z_2 = false
                                                
                                                if (z_2)
                                                    int32_t rax_136 = sub_140a20af0()
                                                    uint64_t rdx_38 = zx.q(rax_136)
                                                    void* const rax_137
                                                    
                                                    if (rax_136 != 0)
                                                        rax_137 = *((rdx_38 u>> 0xe << 3) +
                                                            &data_143cf0bf8)
                                                            + (zx.q(rdx_38.d) & 0x3fff) * 0x18
                                                    else
                                                        rax_137 = nullptr
                                                    
                                                    *(rax_137 + 8) = rbx_17
                                                    sub_1405a42f0(&data_143f02390, rdx_38.d)
                                else
                                    int64_t* rbx_16 = r14_2[7]
                                    r14_2[7] = var_658
                                    var_658 = nullptr
                                    
                                    if (rbx_16 != 0)
                                        rbx_16[1].d -= 1
                                        
                                        if (rbx_16[1].d == 1)
                                            char rax_125
                                            
                                            if (rbx_16[2].b == 0 && data_143f0f1d0 == 0)
                                                rax_125 = sub_1405949a0()
                                            
                                            if (rbx_16[2].b != 0
                                                    || (data_143f0f1d0 == 0 && rax_125 != 0))
                                                (**rbx_16)(rbx_16, 1)
                                            else
                                                bool z_1
                                                
                                                if (0 == *(rbx_16 + 0xc))
                                                    *(rbx_16 + 0xc) = 1
                                                    z_1 = true
                                                else
                                                    *(rbx_16 + 0xc)
                                                    z_1 = false
                                                
                                                if (z_1)
                                                    int32_t rax_127 = sub_140a20af0()
                                                    uint64_t rdx_37 = zx.q(rax_127)
                                                    void* const rax_128
                                                    
                                                    if (rax_127 != 0)
                                                        rax_128 = *((rdx_37 u>> 0xe << 3) +
                                                            &data_143cf0bf8)
                                                            + (zx.q(rdx_37.d) & 0x3fff) * 0x18
                                                    else
                                                        rax_128 = nullptr
                                                    
                                                    *(rax_128 + 8) = rbx_16
                                                    sub_1405a42f0(&data_143f02390, rdx_37.d)
                                        
                                        goto label_14119825d
                            
                            int32_t var_f0_1 = 0
                            int32_t var_ec
                            void var_f8
                            
                            if (var_ec != 0)
                                sub_1410b3aa0(&var_f8, 0)
                            int32_t var_168_1 = 0
                            int32_t var_164
                            void var_170
                            
                            if (var_164 != 0)
                                sub_1410b3aa0(&var_170, 0)
                            int32_t var_1c0_1 = 0
                            int32_t var_200_1 = 0
                            int32_t var_1fc
                            
                            if (var_1fc != 0)
                                sub_1410b3bb0(&var_208, 0)
                            
                            int32_t var_1d8_1 = 0xffffffff
                            int32_t var_1d4_1 = 0
                            void var_1f8
                            sub_141095ed0(&var_1f8, 0)
                            int32_t var_210_1 = 0
                            int32_t var_250_1 = 0
                            int32_t var_24c
                            void var_258
                            
                            if (var_24c != 0)
                                sub_1410b3bb0(&var_258, 0)
                            int32_t var_228_1 = 0xffffffff
                            int32_t var_224_1 = 0
                            void var_248
                            sub_141095ed0(&var_248, 0)
                            int32_t var_260_1 = 0
                            sub_141096480(&var_2a8, 0)
                            int32_t var_2b0_1 = 0
                            void var_2f8
                            sub_14108c840(&var_2f8)
                        
                        i = i_1
                        rbx_1 = var_628_1
                    
                    rdi = arg4
        
        result = arg3
        i += 1
        rbx_1 += 1
        i_1 = i
        var_628_1 = rbx_1
    while (i s< result[1].d)

__security_check_cookie(rax_1 ^ &var_738)
return result
