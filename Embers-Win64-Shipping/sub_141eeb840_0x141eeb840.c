// 函数: sub_141eeb840
// 地址: 0x141eeb840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm14[0x4] = arg2
int32_t r15 = arg3
sub_140b33630("CharPhysFalling")
uint128_t zmm6 = 0x358637bd

if (not(zmm14[0] < 9.99999997e-07f))
    int512_t zmm2
    zmm2.o = zmm14
    int64_t var_368
    (*(*arg1 + 0x730))(arg1, &var_368, zmm2)
    int512_t zmm1
    zmm1.o = zmm14
    int32_t var_360_1 = 0
    int128_t zmm10 = zx.o(0)
    char rax_3 = (*(*arg1 + 0x738))(arg1, zmm1, &var_368)
    float zmm9[0x4] = 0x3f000000
    float zmm13[0x4] = 0x3f800000
    float zmm15[0x4] = 0x38d1b717
    uint64_t rbx
    uint64_t arg_8 = rbx
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    int128_t zmm12
    int128_t var_a8_1 = zmm12
    
    do
        int32_t rax_4 = arg1[0x54].d
        int32_t rdi_1 = r15
        
        if (r15 s>= rax_4)
            break
        
        float zmm0_1[0x4] = *(arg1 + 0x29c)
        r15 += 1
        zmm8 = zmm14
        
        if (not(zmm14[0] <= zmm0_1[0]) && r15 s< rax_4)
            zmm8[0] = zmm8[0] * zmm9[0]
            zmm8 = _mm_min_ss(zmm8[0], zmm0_1[0])
        
        void* rax_5 = arg1[0x16]
        zmm8 = _mm_max_ss(zmm8[0], zmm6.d)
        char rcx_2 = arg1[0xa0].b
        zmm0_1 = *(rax_5 + 0x1d0)
        zmm1.o = zmm0_1
        float var_308_1 = zmm0_1[0]
        zmm1.o = _mm_shuffle_ps(zmm1.o, zmm0_1, 0x55)
        zmm14[0] = zmm14[0] - zmm8[0]
        int32_t var_304_1 = zmm1.d
        int32_t var_1d8_1 = zmm1.d
        zmm1.o = zmm0_1
        zmm1.o = _mm_shuffle_ps(zmm1.o, zmm0_1, 0xaa)
        float var_1e8_1 = zmm0_1[0]
        zmm0_1 = *(rax_5 + 0x1c0)
        *(arg1 + 0x387) &= 0xdf
        int32_t var_300_1 = zmm1.d
        int32_t var_1c8_1 = zmm1.d
        float var_2f8[0x4] = zmm0_1
        
        if ((rcx_2 & 8) != 0)
            int32_t rax_6 = *(arg1 + 0x50c)
            *(arg1 + 0xc4) = *(arg1 + 0x504)
            *(arg1 + 0xcc) = rax_6
            arg1[0xa0].b = rcx_2 & 0xf7
        
        zmm0_1 = zx.o(*(arg1 + 0xc4))
        int32_t r12_1 = *(arg1 + 0xcc)
        int64_t arg_20 = zmm0_1.q
        int64_t var_358_1 = zmm0_1.q
        (*(*arg1 + 0x6d8))(arg1)
        zmm7 = zmm0_1
        zmm12 = r12_1
        float arg_10 = zmm7[0]
        char var_400
        
        if (arg1[0xb4].b == 0 && sub_142008320(&arg1[0x9b]) == 0)
            zmm6 = zx.o(*(arg1 + 0x22c))
            rbx = zx.q(*(arg1 + 0x234))
            zmm1.o = zmm8
            zmm0_1 = zx.o(var_368)
            *(arg1 + 0x22c) = zmm0_1.q
            *(arg1 + 0x234) = var_360_1
            int64_t rax_10 = *arg1
            zmm2.o = arg1[0x3a].d
            float var_408_1 = zmm7[0]
            *(arg1 + 0xcc) = 0
            (*(rax_10 + 0x6a0))(arg1, zmm1, zmm2, 0, var_408_1, var_400)
            *(arg1 + 0xcc) = zmm12.d
            *(arg1 + 0x22c) = zmm6.q
            *(arg1 + 0x234) = rbx.d
        
        (*(*arg1 + 0x3e8))(arg1, zmm1)
        void* rax_12 = arg1[0x29]
        rbx.b = 0
        float var_330_1 = zmm0_1[0]
        zmm11 = zmm8
        int64_t var_338 = 0
        zmm0_1 = *(rax_12 + 0x338)
        
        if (not(zmm0_1[0] f<= zmm10.d))
            bool cond:2_1 = (arg1[0x3e].b & 2) != 0
            zmm1.o = zmm0_1
            zmm1.o = _mm_min_ss(zmm1.d, zmm8[0])
            
            if (not(cond:2_1))
                zmm11[0] = zmm11[0] f- zmm1.d
                zmm11 = _mm_max_ss(zmm11[0], zmm10.d)
            
            zmm0_1[0] = zmm0_1[0] f- zmm1.d
            *(rax_12 + 0x338) = zmm0_1[0]
            int64_t* rcx_7 = arg1[0x29]
            
            if (not(zmm10.d f< rcx_7[0x67].d))
                (*(*rcx_7 + 0x7a8))(rcx_7)
                rbx.b = 1
        
        void var_118
        int64_t* rax_15 =
            (*(*arg1 + 0x690))(arg1, &var_118, arg1 + 0xc4, &var_338, zmm11[0], var_400)
        zmm6 = var_358_1:4.d
        zmm7 = var_358_1.d
        zmm0_1 = zx.o(*rax_15)
        *(arg1 + 0xc4) = zmm0_1.q
        *(arg1 + 0xcc) = rax_15[1].d
        
        if (data_143a2d688 != 0 && not(zmm12.d f<= zmm10.d) && not(zmm10.d f< *(arg1 + 0xcc)))
            int32_t rcx_9 = arg1[0x53].d
            
            if (rcx_9 s< *(arg1 + 0x2a4))
                zmm1.o = *(arg1 + 0xcc)
                zmm1.d = zmm1.d f- zmm12.d
                float zmm5_1 = arg1[0x19].d
                float zmm4_1 = *(arg1 + 0xc4) - zmm7[0]
                zmm13[0] = zmm13[0] / zmm8[0]
                zmm1.d = zmm1.d f* zmm13[0]
                zmm0_1 = __andps_xmmxud_memxud(zmm1.o, data_142d3f770)
                
                if (not(zmm0_1[0] <= 9.99999994e-09f))
                    zmm2.o = zmm12
                    zmm2.d = zmm2.d f/ zmm1.d
                    zmm2.o ^= data_142d3f780
                    
                    if (not(zmm2.d f< zmm15[0]) && not(zmm2.d f>= zmm8[0]))
                        zmm1.d = zmm1.d f* zmm2.d
                        r15 = rdi_1
                        zmm13[0] = zmm13[0] * zmm4_1
                        zmm8[0] = zmm8[0] f- zmm2.d
                        zmm13[0] = zmm13[0] * (zmm5_1 f- zmm6.d)
                        zmm1.d = zmm1.d f+ zmm12.d
                        zmm13[0] = zmm13[0] f* zmm2.d
                        zmm13[0] = zmm13[0] f* zmm2.d
                        zmm14[0] = zmm14[0] + zmm8[0]
                        zmm13[0] = zmm13[0] + zmm7[0]
                        int32_t var_1f0_1 = zmm1.d
                        zmm8 = zmm2.o
                        zmm13[0] = zmm13[0] f+ zmm6.d
                        zmm0_1 = _mm_unpacklo_ps(zmm13, zmm13[0].q)
                        *(arg1 + 0xc4) = zmm0_1.q
                        *(arg1 + 0xcc) = var_1f0_1
                        arg1[0x53].d = rcx_9 + 1
                        *(arg1 + 0xcc) = 0
        
        zmm1.o = zmm8
        zmm1, zmm2, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_141ed7690(arg1, zmm1.o, zmm0_1[0].q)
        char rax_19 = arg1[0x71].b
        
        if ((rax_19 & 4) != 0 && not(zmm10.d f<= *(arg1 + 0xcc)))
            arg1[0x71].b = rax_19 & 0xfb
            (*(*arg1 + 0x688))(arg1)
        
        zmm2.o = zmm7
        float zmm3[0x4] = zmm6
        zmm2.d = zmm2.d f+ *(arg1 + 0xc4)
        zmm3[0] = zmm3[0] f+ arg1[0x19].d
        float zmm4_2 = zmm12.d f+ *(arg1 + 0xcc)
        zmm2.d = zmm2.d f* zmm9[0]
        zmm3[0] = zmm3[0] * zmm9[0]
        zmm4_2 = zmm4_2 * zmm9[0]
        float var_3e8 = zmm2.d * zmm8[0]
        float var_3e4_1 = zmm3[0] * zmm8[0]
        float var_3e0_1 = zmm4_2 * zmm8[0]
        
        if (rbx.b != 0 && (arg1[0x3e].b & 2) == 0)
            zmm1.o = zmm8
            zmm2.d = zmm2.d f* zmm11[0]
            zmm1.d = zmm1.d f- zmm11[0]
            zmm3[0] = zmm3[0] * zmm11[0]
            zmm4_2 = zmm4_2 * zmm11[0]
            zmm1.o = _mm_max_ss(zmm1.d, zmm10.d)
            zmm2.d = zmm2.d f+ zmm1.d * zmm7[0]
            float zmm0_2 = zmm1.d f* zmm6.d
            zmm1.d = zmm1.d f* zmm12.d
            zmm3[0] = zmm3[0] + zmm0_2
            var_3e8 = zmm2.d
            float var_3e4_2 = zmm3[0]
            float var_3e0_2 = zmm4_2 f+ zmm1.d
        
        var_400 = 0
        float var_408_2
        char var_298
        var_408_2.q = &var_298
        int32_t var_290_1 = 0x3f800000
        sub_141f231f0(arg1, &var_3e8, &var_2f8, 1, memset(&var_298, 0, 0x88), zmm1, zmm2, 
            var_408_2, 0)
        
        if ((*(*arg1 + 0x5c0))(arg1) == 0)
            break
        
        int64_t rax_23 = *arg1
        zmm13[0] = zmm13[0] f- var_290_1
        zmm13[0] = zmm13[0] * zmm8[0]
        int64_t var_388
        int64_t var_378
        
        if ((*(rax_23 + 0x558))(arg1) != 0)
            zmm13[0] = zmm13[0] + zmm14[0]
            var_378 = arg_20
            var_400.d = r15
            float var_408_4 = zmm13[0]
            int32_t var_370_2 = r12_1
            var_388 = var_308_1.q
            int32_t var_380_2 = var_300_1
            sub_141efbc90(arg1, &var_388, &var_378, zmm8, var_408_4, var_400)
            break
        
        if ((var_298 & 1) == 0)
            zmm9 = 0x3f000000
        else
            zmm1.o = *(arg1[0x16] + 0x1d0)
            int64_t rax_26 = *arg1
            float temp0_10[0x4] = _mm_shuffle_ps(zmm1.o, zmm1.o, 0x55)
            int32_t var_2c0 = zmm1.d
            zmm1.o = _mm_shuffle_ps(zmm1.o, zmm1.o, 0xaa)
            int32_t var_2b8_1 = zmm1.d
            float var_2bc_1 = temp0_10[0]
            
            if ((*(rax_26 + 0x8c8))(arg1, &var_2c0, &var_298) != 0)
                int64_t rax_89 = *arg1
                zmm13[0] = zmm13[0] + zmm14[0]
                zmm2.o = zmm13
                (*(rax_89 + 0x758))(arg1, &var_298, zmm2, zx.q(r15))
                break
            
            bool cond:3_1 = (var_298 & 2) != 0
            zmm2.o = zmm8
            zmm2.d = zmm2.d f* *(arg1 + 0xc4)
            zmm1.o = zmm8
            zmm1.d = zmm1.d f* arg1[0x19].d
            zmm8[0] = zmm8[0] f* *(arg1 + 0xcc)
            var_3e8 = zmm2.d
            int32_t var_3e4_3 = zmm1.d
            float var_3e0_3 = zmm8[0]
            
            if (not(cond:3_1))
                zmm1.o = zmm8
                
                if ((*(*arg1 + 0x8d0))(arg1, zmm1, &var_3e8, &var_298) != 0)
                    zmm1.o = *(arg1[0x16] + 0x1d0)
                    int32_t var_1b8 = var_1b8 & 0xfffffff8
                    float var_344_1 = _mm_shuffle_ps(zmm1.o, zmm1.o, 0x55)[0]
                    zmm0_1 = data_143264930
                    int32_t var_348 = zmm1.d
                    zmm1.o = _mm_shuffle_ps(zmm1.o, zmm1.o, 0xaa)
                    float var_148_1[0x4] = zmm0_1
                    int32_t var_340_1 = zmm1.d
                    int64_t var_1b4_1 = 0
                    int32_t var_14c_1 = 0xffffffff
                    int64_t var_138_1 = 0
                    int64_t var_130_1 = 0
                    void var_1ac
                    memset(&var_1ac, 0, 0x88)
                    int32_t var_1a4_1 = 0x3f800000
                    var_408_2.q = 0
                    (*(*arg1 + 0x8a0))(arg1, &var_348, &var_1b8, 0, 0)
                    
                    if ((var_1b8.b & 3) == 3 && (*(*arg1 + 0x8c8))(arg1, &var_348, &var_1ac) != 0)
                        int64_t rax_87 = *arg1
                        zmm13[0] = zmm13[0] + zmm14[0]
                        zmm2.o = zmm13
                        (*(rax_87 + 0x758))(arg1, &var_1ac, zmm2, zx.q(r15))
                        break
            
            zmm2.o = zmm8
            (*(*arg1 + 0x458))(arg1, &var_298, zmm2, &var_3e8, var_408_2)
            
            if ((*(*arg1 + 0x5c0))(arg1) == 0)
                break
            
            if ((*(*arg1 + 0x548))(arg1) == 0)
                break
            
            zmm0_1 = zx.o(*(arg1 + 0x22c))
            int32_t rax_41 = *(arg1 + 0x234)
            int64_t var_398 = zmm0_1.q
            float var_3d8 = zmm7[0]
            int32_t var_3d4_1 = zmm6.d
            int32_t var_3d0_1 = zmm12.d
            int32_t var_390_1 = rax_41
            
            if (rax_3 != 0)
                *(arg1 + 0x22c) = data_143dbb1f8.q
                zmm1.o = zmm8
                *(arg1 + 0x234) = data_143dbb200
                zmm6 = zx.o(*(arg1 + 0xc4))
                rbx = zx.q(*(arg1 + 0xcc))
                *(arg1 + 0xc4) = arg_20
                *(arg1 + 0xcc) = r12_1
                int64_t rax_43 = *arg1
                zmm2.o = arg1[0x3a].d
                float var_408_3 = arg_10[0]
                *(arg1 + 0xcc) = 0
                (*(rax_43 + 0x6a0))(arg1, zmm1, zmm2, 0, var_408_3)
                zmm1.o = arg1[0x19].d
                int64_t rax_44 = *arg1
                var_3d8 = (*(arg1 + 0xc4))[0]
                var_3d4_1 = zmm1.d
                int32_t var_3d0_2 = zmm12.d
                void var_10c
                int64_t* rax_45 = (*(rax_44 + 0x690))(arg1, &var_10c, &var_3d8, &var_338, zmm11[0])
                var_400 = 0
                zmm13[0] = zmm13[0] / zmm8[0]
                var_408_2.q = &var_298
                var_3d8.q = *rax_45
                int32_t rax_46 = rax_45[1].d
                *(arg1 + 0xc4) = zmm6.q
                *(arg1 + 0xcc) = rbx.d
                *(arg1 + 0x22c) = zmm0_1.q
                *(arg1 + 0x234) = rax_41
                zmm2.o = *(arg1 + 0xc4)
                zmm2.d = zmm2.d f- var_3d8
                zmm0_1 = *(arg1 + 0xcc)
                zmm1.o = arg1[0x19].d
                zmm1.d = zmm1.d f- var_3d4_1
                var_3d0_1 = rax_46
                zmm0_1[0] = zmm0_1[0] f- var_3d0_1
                zmm2.d = zmm2.d f* zmm13[0]
                zmm1.d = zmm1.d f* zmm13[0]
                zmm0_1[0] = zmm0_1[0] * zmm13[0]
                float var_200_1 = zmm0_1[0]
                zmm0_1 = zmm2.o
                zmm2.o = zmm8
                float var_390_2 = var_200_1
                int64_t rax_48 = *arg1
                var_398 = (_mm_unpacklo_ps(zmm0_1, zmm1.q)).q
                void var_100
                int32_t* rax_49 = (*(rax_48 + 0x750))(arg1, &var_100, zmm2, &var_398, var_408_2, 0)
                zmm2.o = zmm8
                zmm1.o = zmm8
                zmm2.d = zmm2.d f* *rax_49
                zmm1.d = zmm1.d f* rax_49[1]
                zmm8[0] = zmm8[0] f* rax_49[2]
                zmm2.d = zmm2.d f+ var_3d8
                zmm1.d = zmm1.d f+ var_3d4_1
                zmm8[0] = zmm8[0] f+ var_3d0_1
                zmm2.d = zmm2.d f* zmm8[0]
                zmm1.d = zmm1.d f* zmm8[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                var_3e8 = zmm2.d
                var_3e4_3 = zmm1.d
                var_3e0_3 = zmm8[0]
            
            int32_t var_26c
            zmm1.o = var_26c
            int32_t var_25c
            zmm12 = var_25c
            int64_t rax_50 = *arg1
            zmm3 = zmm13
            zmm3[0] = zmm3[0] f- var_290_1
            int32_t var_264
            zmm7 = var_264
            int32_t var_260
            zmm11 = var_260
            var_400.q = &var_298
            int32_t var_270
            float var_3b8 = var_270[0]
            var_408_2.q = &var_3b8
            int32_t var_3b4_1 = zmm1.d
            int32_t var_268
            float var_3b0_1 = var_268[0]
            arg_10 = zmm12.d
            int32_t var_3f8
            (*(rax_50 + 0x490))(arg1, &var_3f8, &var_3e8, zmm3, var_408_2, var_400)
            
            if (zmm13[0] <= zmm15[0])
                zmm9 = 0x3f000000
            else
                float var_3f4
                float var_3f0
                
                if ((*(arg1 + 0x387) & 0x20) == 0)
                    bool cond:4_1 = arg1[0xb4].b != 0
                    zmm6.d = zmm13.d f/ zmm13[0]
                    zmm0_1 = zmm6
                    zmm1.o = zmm6
                    zmm0_1[0] = zmm0_1[0] f* var_3f8
                    zmm1.d = zmm1.d f* var_3f4
                    zmm6.d = zmm6.d f* var_3f0
                    float var_328_1 = zmm0_1[0]
                    int32_t var_324_1 = zmm1.d
                    int32_t var_320_1 = zmm6.d
                    uint8_t rax_51
                    
                    if (not(cond:4_1))
                        rax_51 = sub_142008330(&arg1[0x9b])
                    
                    int64_t* rax_53
                    
                    if (cond:4_1 || rax_51 != 0)
                        float var_2b4
                        rax_53 = &var_2b4
                        zmm1.o = arg1[0x19].d
                        var_2b4 = (*(arg1 + 0xc4))[0]
                        int32_t var_2b0_1 = zmm1.d
                        int32_t var_2ac_1 = zmm6.d
                    else
                        int32_t var_380_1 = var_320_1
                        rax_53 = &var_388
                        var_388 = var_328_1.q
                    
                    int32_t rax_54 = rax_53[1].d
                    *(arg1 + 0xc4) = *rax_53
                    *(arg1 + 0xcc) = rax_54
                
                zmm2.o = var_3f4
                zmm2.d = zmm2.d f* var_3e4_3
                zmm0_1 = var_3f8
                zmm0_1[0] = zmm0_1[0] * var_3e8
                zmm1.o = var_3f0
                zmm1.d = zmm1.d f* var_3e0_3
                zmm2.d = zmm2.d f+ zmm0_1[0]
                zmm2.d = zmm2.d f+ zmm1.d
                
                if (zmm2.d f<= zmm10.d)
                    zmm9 = 0x3f000000
                else
                    var_400 = 0
                    var_408_2.q = &var_298
                    sub_141f231f0(arg1, &var_3f8, &var_2f8, 1, zmm0_1[0].q, zmm1, zmm2, var_408_2, 
                        0)
                    
                    if ((var_298 & 1) == 0)
                        zmm9 = 0x3f000000
                    else
                        void* rax_55 = arg1[0x16]
                        zmm13[0] = zmm13[0] f- var_290_1
                        zmm6 = zmm13
                        zmm1.o = *(rax_55 + 0x1d0)
                        int64_t rax_56 = *arg1
                        int32_t var_2a8 = zmm1.d
                        zmm13[0] = zmm13[0] * zmm13[0]
                        zmm0_1 = _mm_shuffle_ps(zmm1.o, zmm1.o, 0x55)
                        zmm1.o = _mm_shuffle_ps(zmm1.o, zmm1.o, 0xaa)
                        int32_t var_2a0_1 = zmm1.d
                        float var_2a4_1 = zmm0_1[0]
                        char rax_57 = (*(rax_56 + 0x8c8))(arg1, &var_2a8, &var_298)
                        int64_t r8_11 = *arg1
                        char* rdx_13 = &var_298
                        
                        if (rax_57 != 0)
                            zmm13[0] = zmm13[0] + zmm14[0]
                            zmm2.o = zmm13
                            (*(r8_11 + 0x758))(arg1, rdx_13, zmm2, zx.q(r15))
                            break
                        
                        zmm2.o = zmm6
                        (*(r8_11 + 0x458))(arg1, rdx_13, r8_11, &var_3f8)
                        
                        if ((*(*arg1 + 0x5c0))(arg1) == 0)
                            break
                        
                        if ((*(*arg1 + 0x548))(arg1) == 0)
                            break
                        
                        if (rax_3 != 0)
                            zmm0_1 = var_268
                            
                            if (not(zmm0_1[0] <= 0.00100000005f))
                                int64_t rax_62 = *arg1
                                var_400.q = &var_298
                                zmm0_1 = zmm6
                                zmm0_1[0] = zmm0_1[0] * var_3d8
                                var_408_2.q = &var_3b8
                                zmm1.o = zmm6
                                zmm3 = zmm13
                                zmm1.d = zmm1.d f* var_3d4_1
                                zmm6.d = zmm6.d f* var_3d0_1
                                float var_2e8 = zmm0_1[0]
                                int32_t var_2e4_1 = zmm1.d
                                int32_t var_2e0_1 = zmm6.d
                                void var_f4
                                int64_t* rax_63 = (*(rax_62 + 0x490))(arg1, &var_f4, &var_2e8, 
                                    zmm3, var_408_2, var_400)
                                zmm0_1 = zx.o(*rax_63)
                                var_3f8.q = zmm0_1.q
                                var_3f0 = rax_63[1].d
                        
                        (*(*arg1 + 0x4a0))(arg1, &var_3f8, &var_298, &var_3b8, var_408_2, var_400)
                        
                        if (rax_3 != 0)
                            var_408_2.q = &var_298
                            zmm2.o = zmm13
                            void var_e8
                            int32_t* rax_67 =
                                (*(*arg1 + 0x750))(arg1, &var_e8, zmm2, &var_398, var_408_2, 0)
                            zmm3 = zmm13
                            zmm3[0] = zmm3[0] f* *rax_67
                            zmm13[0] = zmm13[0] f* rax_67[1]
                            zmm13[0] = zmm13[0] f* rax_67[2]
                            zmm0_1 = zmm3
                            zmm0_1[0] = zmm0_1[0] * var_3b8
                            zmm2.o = zmm13
                            zmm2.d = zmm2.d f* var_3b4_1
                            zmm1.o = zmm13
                            zmm1.d = zmm1.d f* var_3b0_1
                            zmm2.d = zmm2.d f+ zmm0_1[0]
                            zmm2.d = zmm2.d f+ zmm1.d
                        
                        if (rax_3 == 0 || zmm2.d f<= zmm10.d)
                            zmm2.o = var_3f4
                            zmm1.o = var_3f8
                        else
                            zmm1.o = var_3f8
                            zmm2.o = var_3f4
                            zmm0_1 = var_3f0
                            zmm3[0] = zmm3[0] * zmm13[0]
                            zmm13[0] = zmm13[0] * zmm13[0]
                            zmm13[0] = zmm13[0] * zmm13[0]
                            zmm1.d = zmm1.d f+ zmm3[0]
                            zmm2.d = zmm2.d f+ zmm13[0]
                            zmm0_1[0] = zmm0_1[0] + zmm13[0]
                            var_3f8 = zmm1.d
                            var_3f4 = zmm2.d
                            var_3f0 = zmm0_1[0]
                        
                        if (not(zmm13[0] <= zmm15[0]) && (*(arg1 + 0x387) & 0x20) == 0)
                            bool cond:5_1 = arg1[0xb4].b != 0
                            zmm6.d = zmm13.d f/ zmm13[0]
                            zmm0_1 = zmm6
                            zmm0_1[0] = zmm0_1[0] f* zmm1.d
                            zmm1.o = zmm6
                            zmm6.d = zmm6.d f* var_3f0
                            zmm1.d = zmm1.d f* zmm2.d
                            float var_318_1 = zmm0_1[0]
                            int32_t var_310_1 = zmm6.d
                            int32_t var_314_1 = zmm1.d
                            uint8_t rax_68
                            
                            if (not(cond:5_1))
                                rax_68 = sub_142008330(&arg1[0x9b])
                            
                            int64_t* rax_70
                            
                            if (cond:5_1 || rax_68 != 0)
                                float var_2d8
                                rax_70 = &var_2d8
                                zmm1.o = arg1[0x19].d
                                var_2d8 = (*(arg1 + 0xc4))[0]
                                int32_t var_2d4_1 = zmm1.d
                                int32_t var_2d0_1 = zmm6.d
                            else
                                int32_t var_370_1 = var_310_1
                                rax_70 = &var_378
                                var_378 = var_318_1.q
                            
                            zmm0_1 = zx.o(*rax_70)
                            int32_t rax_71 = rax_70[1].d
                            *(arg1 + 0xc4) = zmm0_1.q
                            *(arg1 + 0xcc) = rax_71
                        
                        if (zmm12.d f<= zmm10.d)
                            rbx.b = 0
                        else
                            zmm1.o = var_25c
                            
                            if (zmm1.d f<= zmm10.d)
                                rbx.b = 0
                            else
                                zmm0_1 = __andps_xmmxud_memxud(var_3f0, data_142d3f770)
                                
                                if (zmm0_1[0] > zmm15[0])
                                    rbx.b = 0
                                else
                                    zmm7[0] = zmm7[0] f* var_264
                                    zmm11[0] = zmm11[0] f* var_260
                                    zmm1.d = zmm1.d f* zmm12.d
                                    zmm7[0] = zmm7[0] + zmm11[0]
                                    zmm7[0] = zmm7[0] f+ zmm1.d
                                    
                                    if (zmm7[0] f>= zmm10.d)
                                        rbx.b = 0
                                    else
                                        rbx.b = 1
                        
                        var_400 = 0
                        var_408_2.q = &var_298
                        sub_141f231f0(arg1, &var_3f8, &var_2f8, 1, zmm0_1[0].q, zmm1, zmm2, 
                            var_408_2, 0)
                        
                        if (not(var_290_1[0] f!= zmm10.d))
                            zmm9 = var_3b8
                            zmm11 = var_3b4_1
                            zmm6.d = zmm9.d f+ var_264
                            zmm1.o = var_25c
                            zmm7 = zmm11
                            zmm7[0] = zmm7[0] f+ var_260
                            zmm1.d = zmm1.d f+ var_3b0_1
                            zmm12 = data_143dbb200
                            zmm15 = data_143dbb1fc
                            zmm0_1 = zmm6
                            float zmm4_4 = 9.99999994e-09f
                            zmm2.o = zmm7
                            zmm0_1[0] = zmm0_1[0] f* zmm6.d
                            zmm2.d = zmm2.d f* zmm7[0]
                            zmm2.d = zmm2.d f+ zmm0_1[0]
                            float var_3c8
                            
                            if (not(zmm2.d f!= zmm13[0]))
                                zmm2.o = data_143dbb1f8
                                var_3c8 = zmm6.d
                                float var_3c4_1 = zmm7[0]
                                
                                if (not(zmm1.d f== zmm10.d))
                                    zmm1.o = zmm10
                            else if (zmm2.d f>= 9.99999994e-09f)
                                zmm0_1 = zmm2.o
                                float temp0_18[0x4] = _mm_rsqrt_ss(zmm0_1[0], zmm0_1[0])
                                zmm2.o = 0x3f000000
                                zmm0_1[0] = zmm0_1[0] * 0.5f
                                temp0_18[0] = temp0_18[0] * temp0_18[0]
                                zmm1.o = zmm0_1
                                zmm1.d = zmm1.d f* temp0_18[0]
                                zmm2.d = 0.5f f- zmm1.d
                                temp0_18[0] = temp0_18[0] f* zmm2.d
                                zmm2.o = data_143dbb1f8
                                temp0_18[0] = temp0_18[0] + temp0_18[0]
                                zmm1.o = temp0_18
                                zmm1.d = zmm1.d f* temp0_18[0]
                                zmm0_1[0] = zmm0_1[0] f* zmm1.d
                                temp0_18[0] = temp0_18[0] * (0.5f - zmm0_1[0])
                                zmm4_4 = 9.99999994e-09f
                                temp0_18[0] = temp0_18[0] + temp0_18[0]
                                arg_20.d = temp0_18[0]
                                temp0_18[0] = temp0_18[0] f* zmm6.d
                                temp0_18[0] = temp0_18[0] * zmm7[0]
                                var_3c8 = temp0_18[0]
                                zmm6 = temp0_18
                                float var_3c4_3 = temp0_18[0]
                                zmm7 = temp0_18
                                zmm1.o = zmm10
                            else
                                zmm2.o = data_143dbb1f8
                                zmm7 = zmm15
                                var_3c8 = zmm2.d
                                zmm6 = zmm2.o
                                float var_3c4_2 = zmm7[0]
                                zmm1.o = zmm12
                            
                            zmm3 = 0x7fffffff
                            zmm0_1 = 0x38d1b717
                            int32_t var_3c0_1 = zmm1.d
                            
                            if (not(_mm_and_ps(zmm6, 0x7fffffff).d f> 9.99999975e-05f)
                                    && not(_mm_and_ps(zmm7, 0x7fffffff)[0] > 9.99999975e-05f))
                                zmm1.o = _mm_and_ps(zmm1.o, 0x7fffffff)
                                
                                if (not(zmm1.d f> 9.99999975e-05f))
                                    zmm9 ^= data_142d3f780
                                    zmm1.o = zmm11
                                    zmm1.d = zmm1.d f* zmm11[0]
                                    zmm9[0] = zmm9[0] * zmm9[0]
                                    zmm1.d = zmm1.d f+ zmm9[0]
                                    
                                    if (zmm1.d f== zmm13[0])
                                        goto label_141eec860
                                    
                                    float var_3a8_1
                                    int32_t var_3a0_1
                                    
                                    if (zmm1.d f>= zmm4_4)
                                        zmm0_1 = zmm1.o
                                        zmm3 = zmm0_1
                                        float temp0_22[0x4] = _mm_rsqrt_ss(zmm0_1[0], zmm3[0])
                                        zmm2.o = 0x3f000000
                                        zmm3[0] = zmm3[0] * 0.5f
                                        temp0_22[0] = temp0_22[0] * temp0_22[0]
                                        zmm1.o = zmm3
                                        zmm1.d = zmm1.d f* temp0_22[0]
                                        zmm2.d = 0.5f f- zmm1.d
                                        temp0_22[0] = temp0_22[0] f* zmm2.d
                                        temp0_22[0] = temp0_22[0] + temp0_22[0]
                                        zmm1.o = temp0_22
                                        zmm1.d = zmm1.d f* temp0_22[0]
                                        zmm3[0] = zmm3[0] f* zmm1.d
                                        temp0_22[0] = temp0_22[0] * (0.5f - zmm3[0])
                                        temp0_22[0] = temp0_22[0] + temp0_22[0]
                                        arg_20.d = temp0_22[0]
                                        zmm11[0] = zmm11[0] * temp0_22[0]
                                        zmm9[0] = zmm9[0] * temp0_22[0]
                                    label_141eec860:
                                        float var_3a4_2 = zmm9[0]
                                        var_3a8_1 = zmm11[0]
                                        var_3a0_1 = 0
                                    else
                                        var_3a8_1 = zmm2.d
                                        float var_3a4_1 = zmm15[0]
                                        var_3a0_1 = zmm12.d
                                    
                                    zmm0_1 = zx.o(var_3a8_1.q)
                                    var_3c8.q = zmm0_1.q
                                    int32_t var_3c0_2 = var_3a0_1
                            
                            var_400 = 0
                            var_408_2.q = &var_298
                            sub_141f231f0(arg1, &var_3c8, &var_2f8, 1, zmm0_1[0].q, zmm1, zmm2, 
                                var_408_2, 0)
                            zmm12 = arg_10
                            zmm15 = 0x38d1b717
                        
                        if (rbx.b != 0)
                        label_141eecb61:
                            zmm2.o = zmm10
                            (*(*arg1 + 0x758))(arg1, zmm1, zmm2, zmm3, var_408_2, 0)
                            break
                        
                        zmm1.o = *(arg1[0x16] + 0x1d0)
                        int64_t rax_74 = *arg1
                        float temp0_23[0x4] = _mm_shuffle_ps(zmm1.o, zmm1.o, 0x55)
                        int32_t var_2cc = zmm1.d
                        zmm1.o = _mm_shuffle_ps(zmm1.o, zmm1.o, 0xaa)
                        int32_t var_2c4_1 = zmm1.d
                        float var_2c8_1 = temp0_23[0]
                        
                        if ((*(rax_74 + 0x8c8))(arg1, &var_2cc, zmm2, zmm3, var_408_2, 0) != 0)
                            goto label_141eecb61
                        
                        zmm1.o = var_290_1
                        
                        if (zmm1.d f== zmm10.d)
                            goto label_141eecb61
                        
                        if (_mm_max_ss((*(arg1 + 0x1dc))[0], zmm10.d)[0] f<= zmm10.d
                                || zmm1.d f!= zmm13[0] || zmm12.d f< *(arg1 + 0x164))
                            zmm9 = 0x3f000000
                        else
                            void* rax_76 = arg1[0x16]
                            zmm8[0] = zmm8[0] * 0.200000003f
                            zmm1.o = *(rax_76 + 0x1d0)
                            zmm2.o = zmm1.o
                            zmm3 = zmm1.o
                            zmm3[0] = zmm3[0] - var_1e8_1
                            zmm2.o = _mm_shuffle_ps(zmm2.o, zmm1.o, 0x55)
                            zmm2.d = zmm2.d f- var_1d8_1
                            zmm1.o = _mm_shuffle_ps(zmm1.o, zmm1.o, 0xaa)
                            zmm1.d = zmm1.d f- var_1c8_1
                            zmm1.o = __andps_xmmxud_memxud(zmm1.o, data_142d3f770)
                            
                            if (zmm1.d f> zmm8[0])
                                zmm9 = 0x3f000000
                            else
                                zmm2.d = zmm2.d f* zmm2.d
                                zmm8[0] = zmm8[0] * 4f
                                zmm3[0] = zmm3[0] * zmm3[0]
                                zmm2.d = zmm2.d f+ zmm3[0]
                                
                                if (zmm2.d f> zmm8[0])
                                    zmm9 = 0x3f000000
                                else
                                    int32_t rax_78 = *(arg1 + 0x4cc) * 0xbb38435 + 0x3619636b
                                    *(arg1 + 0x4cc) = rax_78
                                    (*(*arg1 + 0x3f0))(arg1, zmm1, zmm2)
                                    zmm1.o = rax_78 u>> 9 | 0x3f800000
                                    zmm9 = 0x3f000000
                                    zmm1.d = zmm1.d f- zmm13[0]
                                    zmm8[0] = zmm8[0] * 0.25f
                                    zmm1.d = zmm1.d f- 0.5f
                                    zmm8[0] = zmm8[0] f* zmm1.d
                                    zmm8[0] = zmm8[0] f+ *(arg1 + 0xc4)
                                    *(arg1 + 0xc4) = zmm8[0]
                                    int32_t rax_83 = *(arg1 + 0x4cc) * 0xbb38435 + 0x3619636b
                                    *(arg1 + 0x4cc) = rax_83
                                    (*(*arg1 + 0x3f0))(arg1)
                                    zmm1.o = rax_83 u>> 9 | 0x3f800000
                                    zmm8[0] = zmm8[0] * 0.25f
                                    zmm1.d = zmm1.d f- zmm13[0]
                                    var_400 = rbx.b
                                    var_408_2.q = &var_298
                                    zmm1.d = zmm1.d f- 0.5f
                                    zmm8[0] = zmm8[0] f* zmm1.d
                                    zmm1.o = zmm8
                                    zmm8[0] = zmm8[0] f+ arg1[0x19].d
                                    arg1[0x19].d = zmm8[0]
                                    zmm0_1 = arg1[0x2b].d
                                    zmm0_1[0] = zmm0_1[0] * 0.25f
                                    *(arg1 + 0xcc) = _mm_max_ss(zmm0_1[0], zmm13[0])[0]
                                    zmm8[0] = zmm8[0] f* arg1[0x19].d
                                    zmm1.d = zmm1.d f* *(arg1 + 0xc4)
                                    zmm8[0] = zmm8[0] f* *(arg1 + 0xcc)
                                    var_3f4 = zmm8[0]
                                    var_3f8 = zmm1.d
                                    var_3f0 = zmm8[0]
                                    sub_141f231f0(arg1, &var_3f8, &var_2f8, 1, zmm8[0].q, zmm1, 
                                        zmm2, var_408_2, var_400)
        
        zmm0_1 = arg1[0x19].d
        zmm1.o = *(arg1 + 0xc4)
        zmm1.d = zmm1.d f* zmm1.d
        zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
        zmm1.d = zmm1.d f+ zmm0_1[0]
        
        if (not(zmm1.d f> 0.000999999931f))
            *(arg1 + 0xc4) = 0
            arg1[0x19].d = 0
        
        zmm6 = 0x358637bd
    while (zmm14[0] >= 9.99999997e-07f)

return sub_140b37f60("CharPhysFalling")
