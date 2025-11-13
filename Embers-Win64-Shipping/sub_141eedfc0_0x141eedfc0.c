// 函数: sub_141eedfc0
// 地址: 0x141eedfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
int64_t arg_8 = rbx
float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm8[0x4]
float var_68[0x4] = zmm8
int32_t r15 = arg3
int128_t zmm9
int128_t var_78 = zmm9
uint128_t zmm7 = arg2
float zmm10[0x4]
float var_88[0x4] = zmm10
uint128_t zmm11
uint128_t var_98 = zmm11
float zmm13[0x4]
float var_b8[0x4] = zmm13
int128_t zmm14
int128_t var_c8 = zmm14
uint32_t zmm15[0x4]
uint32_t var_d8[0x4] = zmm15
sub_140b33630("CharPhysWalking")
int128_t zmm12 = 0x358637bd

if (not(zmm7.d f< 9.99999997e-07f))
    void* rax_1 = arg1[0x29]
    uint8_t rax_2
    
    if (rax_1 != 0 && *(rax_1 + 0x258) == 0 && (*(arg1 + 0x1f1) & 4) == 0 && arg1[0xb4].b == 0)
        rax_2 = sub_142008320(&arg1[0x9b])
    
    if (rax_1 != 0 && (*(rax_1 + 0x258) != 0 || (*(arg1 + 0x1f1) & 4) != 0 || arg1[0xb4].b != 0
            || rax_2 != 0 || *(arg1[0x29] + 0xf0) == 1))
        int64_t* rcx_1 = arg1[0x16]
        
        if ((((*(*rcx_1 + 0x4c8))(rcx_1) - 1) & 0xfffffffd) == 0)
            *(arg1 + 0x387) &= 0xdf
            char arg_10 = 0
            char arg_20 = 0
            
            if (not(zmm7.d f< 9.99999997e-07f))
                while (true)
                    int32_t r13_1 = r15
                    
                    if (r15 s>= arg1[0x54].d)
                        break
                    
                    void* rax_8 = arg1[0x29]
                    
                    if (rax_8 == 0)
                        break
                    
                    if (*(rax_8 + 0x258) == 0 && (*(arg1 + 0x1f1) & 4) == 0 && arg1[0xb4].b == 0
                            && sub_142008320(&arg1[0x9b]) == 0 && *(arg1[0x29] + 0xf0) != 1)
                        break
                    
                    *(arg1 + 0x387) &= 0xdf
                    r15 += 1
                    float zmm0_1[0x4] = *(arg1 + 0x29c)
                    zmm6 = zmm7
                    
                    if (not(zmm7.d f<= zmm0_1[0]) && r15 s< arg1[0x54].d)
                        zmm6[0] = zmm6[0] * 0.5f
                        zmm6 = _mm_min_ss(zmm6[0], zmm0_1[0])
                    
                    float temp0_2[0x4] = _mm_max_ss(zmm6[0], zmm12.d)
                    zmm7.d = zmm7.d f- temp0_2[0]
                    void* rax_11 = sub_141ee5460(arg1)
                    int64_t var_398
                    int32_t* rax_12
                    uint128_t zmm1
                    
                    if (rax_11 == 0)
                        int32_t var_390_1 = data_143dbb200
                        rax_12 = &var_398
                        var_398 = data_143dbb1f8.q
                    else
                        zmm1 = *(rax_11 + 0x1d0)
                        int32_t var_378
                        rax_12 = &var_378
                        var_378 = zmm1.d
                        float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        int32_t var_370_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
                        float var_374_1 = temp0_3[0]
                    
                    int32_t rax_14 = rax_12[2]
                    char rcx_5 = arg1[0xa0].b
                    int64_t var_328 = *rax_12
                    int32_t var_320_1 = rax_14
                    zmm1 = *(arg1[0x16] + 0x1d0)
                    int32_t rax_16 = arg1[0x70].d
                    float var_3b4_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
                    float var_3b8 = zmm1.d
                    int32_t var_3b0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
                    int32_t var_228_1 = rax_16
                    zmm1 = *(arg1 + 0x300)
                    float var_2b8[0x4] = *(arg1 + 0x2f0)
                    uint128_t var_2a8_1 = zmm1
                    float var_298_1[0x4] = *(arg1 + 0x310)
                    uint128_t var_288 = *(arg1 + 0x320)
                    zmm1 = *(arg1 + 0x340)
                    float var_278[0x4] = *(arg1 + 0x330)
                    uint128_t var_268_1 = zmm1
                    float var_258_1[0x4] = *(arg1 + 0x350)
                    uint128_t var_248_1 = *(arg1 + 0x360)
                    zmm0_1 = *(arg1 + 0x370)
                    float var_238_1[0x4] = zmm0_1
                    
                    if ((rcx_5 & 8) != 0)
                        zmm0_1 = zx.o(*(arg1 + 0x504))
                        int32_t rax_17 = *(arg1 + 0x50c)
                        *(arg1 + 0xc4) = zmm0_1.q
                        *(arg1 + 0xcc) = rax_17
                        arg1[0xa0].b = rcx_5 & 0xf7
                    
                    (*(*arg1 + 0x878))(arg1)
                    bool cond:1_1 = arg1[0xb4].b != 0
                    *(arg1 + 0xc4)
                    int32_t r12_1 = *(arg1 + 0xcc)
                    *(arg1 + 0x234) = 0
                    float var_3e8
                    int32_t var_3e0
                    float var_3d8
                    int32_t var_3d0
                    char var_3c8
                    
                    if (not(cond:1_1) && sub_142008320(&arg1[0x9b]) == 0)
                        rbx = *arg1
                        (*(rbx + 0x6d8))(arg1)
                        var_3e8 = zmm0_1[0]
                        (*(rbx + 0x6a0))(arg1, temp0_2, *(arg1 + 0x16c), 0, var_3e8, var_3e0, 
                            var_3d8, var_3d0, var_3c8)
                    
                    zmm6, zmm7, zmm8, zmm11, zmm12, zmm13, zmm14, zmm15 =
                        sub_141ed7690(arg1, temp0_2, zmm0_1[0].q)
                    
                    if ((*(*arg1 + 0x548))(arg1) != 0)
                        int64_t rax_81 = *arg1
                        zmm6[0] = zmm6[0] f+ zmm7.d
                        (*(rax_81 + 0x620))(arg1, zmm6, zx.q(r13_1))
                        goto label_141eeec19
                    
                    uint128_t zmm0_2 = zx.o(*(arg1 + 0xc4))
                    int32_t rax_22 = *(arg1 + 0xcc)
                    zmm1.d = zmm0_2.d f* zmm6[0]
                    uint64_t var_368 = zmm0_2.q
                    uint128_t zmm2
                    zmm2.d = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55).d f* zmm6[0]
                    zmm0_2.d = rax_22.d f* zmm6[0]
                    int32_t var_3a8 = zmm1.d
                    int32_t var_3a4_1 = zmm2.d
                    int32_t var_3a0_1 = zmm0_2.d
                    
                    if (_mm_and_ps(zmm1, zmm15).d f> zmm14.d)
                        rbx.b = 0
                    else
                        zmm2 = _mm_and_ps(zmm2, zmm15)
                        
                        if (zmm2.d f> zmm14.d)
                            rbx.b = 0
                        else if (_mm_and_ps(zmm0_2, zmm15).d f> zmm14.d)
                            rbx.b = 0
                        else
                            rbx.b = 1
                    
                    zmm0_2 = data_1430219f0
                    int32_t var_218 = var_218 & 0xfffffffe
                    int32_t var_214 = var_214 & 0xfffffff8
                    int64_t var_194_1 = 0
                    int64_t var_18c_1 = 0
                    int64_t var_210_1 = 0
                    int32_t var_198_1 = 0xffffffff
                    void var_208
                    memset(&var_208, 0, 0x88)
                    int32_t var_200_1 = 0x3f800000
                    int64_t var_388
                    
                    if (rbx.b == 0)
                        zmm2 = zmm6
                        (*(*arg1 + 0x868))(arg1, &var_368, zmm2, &var_218, var_3e8, var_3e0, 
                            var_3d8, var_3d0, var_3c8)
                        
                        if ((*(*arg1 + 0x548))(arg1) != 0)
                            zmm2 = var_3a8
                            zmm0_1 = var_3a4_1
                            zmm1 = var_3a0_1
                            zmm2.d = zmm2.d f* zmm2.d
                            zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                            zmm1.d = zmm1.d f* zmm1.d
                            zmm2.d = zmm2.d f+ zmm0_1[0]
                            zmm2.d = zmm2.d f+ zmm1.d
                            float temp0_21[0x4] = _mm_sqrt_ss(0, zmm2.d)
                            
                            if (not(temp0_21[0] f<= zmm14.d))
                                zmm1 = *(arg1[0x16] + 0x1d0)
                                zmm0_1 = zmm1
                                zmm1.d = _mm_shuffle_ps(zmm1, zmm1, 0x55).d f- var_3b4_1
                                zmm0_1[0] = zmm0_1[0] - var_3b8
                                zmm1.d = zmm1.d f* zmm1.d
                                zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                zmm0_1[0] = zmm0_1[0] f+ zmm1.d
                                zmm1 = _mm_sqrt_ss(0, zmm0_1[0])
                                zmm13[0] = zmm13[0] / temp0_21[0]
                                zmm1.d = zmm1.d f* zmm13[0]
                                zmm1 = _mm_min_ss(zmm1.d, zmm13[0])
                                zmm13[0] = zmm13[0] f- zmm1.d
                                zmm13[0] = zmm13[0] * zmm6[0]
                                zmm7.d = zmm7.d f+ zmm13[0]
                            
                            (*(*arg1 + 0x620))(arg1, zmm7, zx.q(r15), temp0_21)
                            goto label_141eeec19
                        
                        if ((*(*arg1 + 0x558))(arg1) == 0)
                            goto label_141eee479
                        
                        var_388 = zmm8.q
                        int32_t var_380_3 = r12_1
                    else
                        zmm7 = zmm11
                    label_141eee479:
                        
                        if ((var_218.b & 1) == 0)
                            var_3e8.q = 0
                            zmm1 = *(arg1[0x16] + 0x1d0)
                            int64_t rax_30 = *arg1
                            float temp0_11[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                            int32_t var_358 = zmm1.d
                            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                            int32_t var_350_1 = zmm1.d
                            float var_354_1 = temp0_11[0]
                            (*(rax_30 + 0x8a0))(arg1, &var_358, zmm2, zx.q(rbx.b), 0, var_3e0, 
                                var_3d8, var_3d0, var_3c8)
                        else
                            *(arg1 + 0x2f0) = var_214.o
                            uint128_t var_204
                            *(arg1 + 0x300) = var_204
                            float var_1f4[0x4]
                            *(arg1 + 0x310) = var_1f4
                            uint128_t var_1e4
                            *(arg1 + 0x320) = var_1e4
                            float var_1d4[0x4]
                            *(arg1 + 0x330) = var_1d4
                            uint128_t var_1c4
                            *(arg1 + 0x340) = var_1c4
                            zmm1 = zmm0_2
                            float var_1b4[0x4]
                            *(arg1 + 0x350) = var_1b4
                            *(arg1 + 0x360) = zmm1
                            *(arg1 + 0x370) = var_194_1.o
                            int32_t var_184
                            arg1[0x70].d = var_184
                        
                        char rax_32
                        void* rcx_18
                        rax_32, rcx_18 = (*(*arg1 + 0x818))(arg1, zmm1)
                        
                        if (rax_32 != 0 || ((arg1[0x5e].d).b & 3) == 3)
                            if (((arg1[0x5e].d).b & 3) == 3)
                                char rax_43 = (*(*arg1 + 0x5e0))(arg1, &var_2b8, &arg1[0x5e])
                                int64_t r10_1 = *arg1
                                
                                if (rax_43 != 0)
                                    (*(r10_1 + 0x5e8))(arg1, &var_278, &var_288:4, &var_3b8, 
                                        zmm6[0], var_3e0, var_3d8, var_3d0, var_3c8)
                                    
                                    if ((*(*arg1 + 0x550))(arg1) != 0)
                                        var_3e0.q = &var_3b8
                                        float var_3e8_1
                                        var_3e8_1.q = &var_3a8
                                        (*(*arg1 + 0x5d8))(arg1, zx.q(r15), zmm7, zmm6, var_3e8_1, 
                                            var_3e0)
                                    
                                    goto label_141eeec19
                                
                                (*(r10_1 + 0x5f0))(arg1)
                                int64_t r9_5
                                r9_5.b = 1
                                (*(*arg1 + 0x6f0))(arg1, sub_140d3c6e0(arg1 + 0x36c), 
                                    *(arg1 + 0x374), r9_5, var_3e8, var_3e0, var_3d8, var_3d0, 
                                    var_3c8)
                            else if ((*(arg1 + 0x2fc) & 2) != 0 && not(zmm7.d f> zmm11.d))
                                zmm2 = *(arg1 + 0x33c)
                                zmm1 = *(arg1 + 0x30c)
                                float var_178[0x4] = *(arg1 + 0x2fc)
                                uint128_t var_168_1 = zmm1
                                float var_158_1[0x4] = *(arg1 + 0x31c)
                                uint128_t var_148_1 = *(arg1 + 0x32c)
                                float var_128_1[0x4] = *(arg1 + 0x34c)
                                uint128_t var_118_1 = *(arg1 + 0x35c)
                                zmm1 = zx.o(*(arg1 + 0x37c))
                                float var_108_1[0x4] = *(arg1 + 0x36c)
                                float temp0_15[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                                temp0_15[0] = temp0_15[0] + 2.4000001f
                                uint64_t var_f8_1 = zmm1.q
                                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                                uint128_t var_138_1 = zmm2
                                var_128_1[1] = temp0_15[0]
                                int64_t rax_46 = *arg1
                                var_138_1:0xc.q = (_mm_unpacklo_ps(zmm2, zmm1.q)).q
                                void var_2f0
                                (*(rax_46 + 0x480))(arg1, &var_2f0, &var_178)
                                int64_t rax_48 = *arg1
                                float var_2c8[0x4] = *(arg1[0x16] + 0x1c0)
                                (*(rax_48 + 0x488))(arg1, &var_2f0, &var_178, &var_2c8, var_3e8, 
                                    var_3e0, var_3d8, var_3d0, var_3c8)
                                *(arg1 + 0x1f1) |= 8
                            
                            char rax_50
                            void* rcx_28
                            rax_50, rcx_28 = (*(*arg1 + 0x558))(arg1, zmm1, zmm2)
                            
                            if (rax_50 == 0)
                                if (((arg1[0x5e].d).b & 3) != 3 && (*(arg1 + 0x2fc) & 2) == 0)
                                    int32_t rax_54
                                    char rax_56
                                    
                                    if ((*(arg1 + 0x387) & 0x20) == 0 && rbx.b == 0 && rax_11 != 0)
                                        rax_54, rcx_28 = (*(*rax_11 + 0x4c8))(rax_11)
                                        
                                        if (((rax_54 - 1) & 0xfffffffd) != 0)
                                            rax_56 = sub_141ea5e60(rax_11)
                                    
                                    if ((*(arg1 + 0x387) & 0x20) != 0 || rbx.b != 0 || rax_11 == 0
                                            || (((rax_54 - 1) & 0xfffffffd) != 0 && rax_56 != 0))
                                        rcx_28.b = 1
                                    label_141eee820:
                                        var_3c8 = rcx_28.b
                                        var_3d0 = r15
                                        var_3d8 = zmm6[0]
                                        var_3e0 = zmm7.d
                                        var_3e8.q = &var_3b8
                                        
                                        if ((*(*arg1 + 0x7b8))(arg1, &var_2b8, arg1 + 0x2fc, 
                                                &var_3a8, var_3e8, var_3e0, var_3d8, var_3d0, 
                                                var_3c8) != 0)
                                            goto label_141eeec19
                                    else
                                        rcx_28.b = 0
                                        
                                        if (arg_10 == 0)
                                            goto label_141eee820
                                    
                                    arg_10 = 1
                                
                                char rax_60 = (*(*arg1 + 0x550))(arg1)
                                uint8_t rax_61
                                
                                if (rax_60 != 0 && (*(arg1 + 0x387) & 0x20) == 0
                                        && arg1[0xb4].b == 0)
                                    rax_61 = sub_142008320(&arg1[0x9b])
                                
                                float zmm4_1
                                float zmm5_1
                                
                                if (rax_60 == 0 || (*(arg1 + 0x387) & 0x20) != 0
                                        || arg1[0xb4].b != 0 || rax_61 != 0 || zmm6[0] f< zmm12.d)
                                    zmm6 = var_3b0_1
                                    zmm4_1 = var_3b4_1
                                    zmm5_1 = var_3b8
                                else
                                    zmm5_1 = var_3b8
                                    zmm4_1 = var_3b4_1
                                    zmm2.d = zmm13.d f/ zmm6[0]
                                    float zmm3_1[0x4] = *(arg1[0x16] + 0x1d0)
                                    zmm6 = var_3b0_1
                                    zmm3_1[0] = zmm3_1[0] - zmm5_1
                                    zmm1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                                    float temp0_19[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
                                    zmm1.d = zmm1.d f- zmm4_1
                                    temp0_19[0] = temp0_19[0] - zmm6[0]
                                    zmm3_1[0] = zmm3_1[0] f* zmm2.d
                                    zmm1.d = zmm1.d f* zmm2.d
                                    temp0_19[0] = temp0_19[0] f* zmm2.d
                                    *(arg1 + 0xc4) = (_mm_unpacklo_ps(zmm3_1, zmm1.q)).q
                                    *(arg1 + 0xcc) = temp0_19[0]
                                
                                zmm0_1 = *(arg1[0x16] + 0x1d0)
                                int96_t var_318_1 = zmm0_1[0].12
                                
                                if (not(zmm0_1[0] != zmm5_1) && not(var_318_1:4.d[0] != zmm4_1)
                                        && var_318_1:8.d[0] == zmm6[0])
                                    break
                                
                                goto label_141eee948
                        else
                            int64_t var_348 = 0
                            int32_t var_340_1 = 0xbf800000
                            int64_t* rax_36
                            
                            if (arg_20 == 0)
                                var_3e8.q = &var_348
                                void var_e8
                                rax_36, rcx_18 = (*(*arg1 + 0x7b0))(arg1, &var_e8, &var_3b8, 
                                    &var_3a8, var_3e8, var_3e0, var_3d8, var_3d0, var_3c8)
                            else
                                int32_t var_380_1 = data_143dbb200
                                rax_36 = &var_388
                                var_388 = data_143dbb1f8.q
                            
                            zmm0_1 = zx.o(*rax_36)
                            
                            if (zmm0_1.d[0] f!= zmm11.d
                                    || _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)[0] f!= zmm11.d
                                    || not(rax_36[1].d.d f== zmm11.d))
                                var_3e0.b = 0
                                var_3e8.q = &var_2b8
                                zmm6, zmm7, zmm8, zmm9, zmm10, zmm12, zmm13 =
                                    sub_141ef2a40(arg1, &var_3b8, rax_11, &var_328, var_3e8, 0)
                                arg_20 = 1
                                zmm13[0] = zmm13[0] / zmm6[0]
                                zmm7.d = zmm7.d f+ zmm6[0]
                                zmm9.d = zmm9.d f* zmm13[0]
                                zmm10[0] = zmm10[0] * zmm13[0]
                                zmm8[0] = zmm8[0] * zmm13[0]
                                int32_t var_300_1 = zmm9.d
                                *(arg1 + 0xc4) = (_mm_unpacklo_ps(zmm10, zmm8[0].q)).q
                                *(arg1 + 0xcc) = var_300_1
                            label_141eee948:
                                
                                if (not(zmm7.d f>= zmm12.d))
                                    break
                                
                                continue
                            
                            int32_t rax_69
                            char rax_71
                            
                            if (rbx.b == 0 && rax_11 != 0)
                                rax_69, rcx_18 = (*(*rax_11 + 0x4c8))(rax_11)
                                
                                if (((rax_69 - 1) & 0xfffffffd) != 0)
                                    rax_71 = sub_141ea5e60(rax_11)
                            
                            if (rbx.b != 0 || rax_11 == 0
                                    || (((rax_69 - 1) & 0xfffffffd) != 0 && rax_71 != 0))
                                rcx_18.b = 1
                            label_141eee9dc:
                                var_3e8.q = &var_3b8
                                
                                if ((*(*arg1 + 0x7b8))(arg1, &var_2b8, arg1 + 0x2fc, &var_3a8, 
                                        var_3e8, zmm7.d, zmm6[0], r15, rcx_18.b) != 0)
                                    goto label_141eeec19
                            else
                                rcx_18.b = 0
                                
                                if (arg_10 == 0)
                                    goto label_141eee9dc
                            
                            var_3e8.q = &var_2b8
                            sub_141ef2a40(arg1, &var_3b8, rax_11, &var_328, var_3e8, 1)
                            break
                        
                        int32_t rax_77 = *(arg1 + 0xcc)
                        var_388 = *(arg1 + 0xc4)
                        int32_t var_380_2 = rax_77
                    
                    var_398 = var_3b8.q
                    int32_t var_390_2 = var_3b0_1
                    sub_141efbc90(arg1, &var_398, &var_388, zmm6, zmm7.d, r15)
                    goto label_141eeec19
            
            if ((*(*arg1 + 0x550))(arg1) != 0)
                (*(*arg1 + 0x878))(arg1)
        else
            (*(*arg1 + 0x590))(arg1, 1, 0)
    else
        *(arg1 + 0x22c) = data_143dbb1f8.q
        *(arg1 + 0x234) = data_143dbb200
        *(arg1 + 0xc4) = data_143dbb1f8.q
        *(arg1 + 0xcc) = data_143dbb200

label_141eeec19:
return sub_140b37f60("CharPhysWalking") __tailcall
