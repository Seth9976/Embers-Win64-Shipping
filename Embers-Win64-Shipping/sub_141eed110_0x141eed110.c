// 函数: sub_141eed110
// 地址: 0x141eed110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (not(arg2.d f< 9.99999997e-07f))
    void* rax = arg1[0x29]
    uint8_t rax_1
    
    if ((rax == 0 || *(rax + 0x258) == 0) && (*(arg1 + 0x1f1) & 4) == 0 && arg1[0xb4].b == 0)
        rax_1 = sub_142008320(&arg1[0x9b])
    
    if ((rax != 0 && *(rax + 0x258) != 0) || (*(arg1 + 0x1f1) & 4) != 0 || arg1[0xb4].b != 0
            || rax_1 != 0)
        char rcx_1 = arg1[0xa0].b
        
        if ((rcx_1 & 8) != 0)
            arg4 = *(arg1 + 0x504)
            int32_t rax_3 = *(arg1 + 0x50c)
            *(arg1 + 0xc4) = arg4
            *(arg1 + 0xcc) = rax_3
            arg1[0xa0].b = rcx_1 & 0xf7
        
        int64_t rbx
        int64_t arg_8 = rbx
        (*(*arg1 + 0x878))(arg1)
        bool cond:0_1 = arg1[0xb4].b != 0
        *(arg1 + 0x234) = 0
        int32_t var_178
        
        if (not(cond:0_1) && sub_142008320(&arg1[0x9b]) == 0)
            rbx = *arg1
            (*(rbx + 0x6d8))(arg1)
            int512_t zmm2
            zmm2.o = *(arg1 + 0x16c)
            var_178 = arg4.d
            (*(rbx + 0x6a0))(arg1, arg2, zmm2, 0, var_178)
        
        int512_t zmm1
        int512_t zmm2_1
        int128_t zmm6_1
        int128_t zmm7_1
        int128_t zmm8_1
        int128_t zmm9_1
        zmm1, zmm2_1, zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_141ed7690(arg1, arg2, arg4)
        
        if ((*(*arg1 + 0x548))(arg1) == 0)
            int128_t var_28_1 = zmm7_1
            int32_t var_120_1 = *(arg1 + 0xcc)
            void* rax_10 = arg1[0x16]
            int128_t var_38_1 = zmm8_1
            int128_t var_48_1 = zmm9_1
            uint64_t var_128 = *(arg1 + 0xc4)
            uint64_t var_148
            int32_t var_138
            uint64_t* rax_11
            uint128_t zmm0
            
            if (rax_10 == 0)
                int32_t var_140_1 = data_143a2d6e8
                rax_11 = &var_148
                var_148 = data_143a2d6e0
            else
                zmm1.o = *(rax_10 + 0x1d0)
                var_138 = zmm1.d
                zmm0 = _mm_shuffle_ps(zmm1.o, zmm1.o, 0x55)
                zmm1.o = _mm_shuffle_ps(zmm1.o, zmm1.o, 0xaa)
                zmm1.d = zmm1.d f- *(rax_10 + 0x114)
                int32_t var_134_1 = zmm0.d
                rax_11 = &var_138
                int32_t var_130_1 = zmm1.d
            
            zmm1.o = var_128.d
            zmm2_1.o = var_128:4.d
            result = zx.q(rax_11[1].d)
            zmm1.d = zmm1.d f* zmm6_1.d
            uint64_t var_158 = *rax_11
            zmm2_1.d = zmm2_1.d f* zmm6_1.d
            int32_t var_150_1 = result.d
            int32_t var_f0 = zmm1.d
            int32_t var_e8_1 = 0
            bool cond:1_1 = _mm_and_ps(zmm1.o, 0x7fffffff).d f> 9.99999975e-05f
            int32_t var_ec_1 = zmm2_1.d
            
            if (not(cond:1_1))
                zmm0 = _mm_and_ps(zmm2_1.o, 0x7fffffff)
            
            int64_t r14
            
            if (cond:1_1 || zmm0.d f> 9.99999975e-05f)
                r14.b = 0
            else
                r14.b = 1
            
            uint128_t zmm5_1 = var_158.d
            rbx.b = 0
            int128_t zmm4_1 = var_158:4.d
            zmm0.d = zmm5_1.d f+ zmm1.d
            int128_t zmm3_1 = var_150_1
            zmm1.o = zmm4_1
            zmm1.d = zmm1.d f+ zmm2_1.d
            int32_t var_110_1 = zmm3_1.d
            int64_t var_f8_1 = 0
            int32_t var_118 = zmm0.d
            int32_t var_114_1 = zmm1.d
            zmm1.o = data_143dbb1fc
            int32_t var_108 = data_143dbb1f8.d
            int32_t var_104_1 = zmm1.d
            int32_t var_100_1 = data_143dbb200.d
            
            if (arg1[0x7c] != 0)
                if ((*(arg1 + 0x38a) & 0x40) == 0)
                    zmm0.d = arg1[0x7a].d.d f- var_158.d
                    
                    if (_mm_and_ps(zmm0, 0x7fffffff).d f> 9.99999975e-05f)
                        rbx.b = 0
                    else
                        zmm0.d = (*(arg1 + 0x3d4)).d f- var_158:4.d
                        
                        if (_mm_and_ps(zmm0, 0x7fffffff).d f> 9.99999975e-05f)
                            rbx.b = 0
                        else
                            zmm0.d = arg1[0x7b].d.d f- zmm3_1.d
                            
                            if (_mm_and_ps(zmm0, 0x7fffffff).d f> 9.99999975e-05f)
                                rbx.b = 0
                            else
                                rbx.b = 1
                else
                    zmm4_1.d = zmm4_1.d f- *(arg1 + 0x3d4)
                    zmm0 = arg1[0x7b].d
                    zmm2_1.o = zmm3_1
                    result = arg1[0x29]
                    void* rcx_9 = result[0x52]
                    zmm2_1.d = zmm2_1.d f- zmm0.d
                    zmm4_1.d = zmm4_1.d f* zmm4_1.d
                    zmm5_1.d = zmm5_1.d f- arg1[0x7a].d
                    zmm1.o = *(rcx_9 + 0x1e0)
                    zmm1.o = _mm_shuffle_ps(zmm1.o, zmm1.o, 0xaa)
                    zmm1.d = zmm1.d f* *(rcx_9 + 0x420)
                    zmm2_1.o = _mm_and_ps(zmm2_1.o, 0x7fffffff)
                    zmm5_1.d = zmm5_1.d f* zmm5_1.d
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm4_1.d = zmm4_1.d f+ zmm5_1.d
                    
                    if (zmm3_1.d f<= zmm0.d)
                        zmm0 = arg1[0x90].d
                    else
                        zmm0 = *(arg1 + 0x47c)
                    
                    if (zmm4_1.d f> 9.99999975e-05f)
                        rbx.b = 0
                    else
                        zmm0.d = _mm_max_ss(zmm0.d, 0).d f* zmm1.d
                        
                        if (zmm2_1.d f< zmm0.d)
                            rbx.b = 1
                        else
                            rbx.b = 0
                
                if (r14.b == 0)
                    goto label_141eed53e
                
                if (rbx.b != 0)
                    result = sub_141ee5770(arg1)
                    
                    if (result != 0)
                        void* const r8_1 = *result
                        result = (*(r8_1 + 0x18))(result, arg1[0x7c], r8_1)
                        
                        if (result.b == 0)
                            arg1[0x7c] = 0
                            rbx.b = 0
                    
                    zmm3_1 = var_150_1
                
                goto label_141eed4be
            
        label_141eed4be:
            
            if (r14.b == 0)
            label_141eed53e:
                
                if (rbx.b == 0)
                    goto label_141eed566
                
                if ((*(arg1 + 0x38a) & 0x40) != 0)
                    int32_t var_110_2 = arg1[0x7b].d.d
                
                goto label_141eed566
            
            if (rbx.b == 0)
            label_141eed566:
                result = (*(*arg1 + 0x920))(arg1, zmm1, zmm2_1, zmm3_1, var_178)
                
                if (result.b != 0)
                    zmm1.o = zx.o(var_f8_1)
                    zmm3_1 = var_150_1
                    *(arg1 + 0x3d0) = var_108.o
                    arg1[0x7c] = (zmm1.o).q
                    goto label_141eed5a6
                
                result = (*(*arg1 + 0x590))(arg1, 1, 0)
            else
                zmm1.o = zx.o(arg1[0x7c])
                var_108.o = *(arg1 + 0x3d0)
                var_f8_1 = (zmm1.o).q
            label_141eed5a6:
                
                if (var_f8_1 == 0)
                    var_178.q = &var_f0
                    zmm2_1.o = zmm6_1
                    result =
                        (*(*arg1 + 0x5d8))(arg1, zx.q(arg3 + 1), zmm2_1, zmm6_1, var_178, &var_158)
                else
                    bool cond:4_1 = (*(arg1 + 0x38a) & 0x40) == 0
                    zmm2_1.o = var_118
                    zmm1.o = var_114_1
                    zmm0 = var_100_1
                    var_138 = zmm2_1.d
                    int32_t var_134_2 = zmm1.d
                    int32_t var_130_2 = zmm0.d
                    
                    if (not(cond:4_1))
                        void* rax_15 = arg1[0x29]
                        zmm1.o = *(arg1 + 0x47c)
                        zmm0 = _mm_max_ss(arg1[0x90].d.d, 0)
                        zmm1.o = _mm_max_ss(zmm1.d, 0)
                        void* rcx_14 = *(rax_15 + 0x290)
                        zmm2_1.o = *(rcx_14 + 0x1e8)
                        zmm2_1.d = zmm2_1.d f* *(rcx_14 + 0x420)
                        zmm2_1.d = zmm2_1.d f+ zmm2_1.d
                        zmm0.d = zmm0.d f* zmm2_1.d
                        zmm1.d = zmm1.d f* zmm2_1.d
                        zmm2_1.o = zmm6_1
                        int64_t var_170
                        var_170.d = zmm1.d
                        var_178.q = &var_138
                        int64_t* rax_17 = (*(*arg1 + 0x778))(arg1, &var_148, zmm2_1, &var_158, 
                            var_178, var_170, zmm0.d)
                        zmm3_1 = var_150_1
                        var_138.q = *rax_17
                        result = zx.q(rax_17[1].d)
                        zmm1.o = var_134_2
                        zmm2_1.o = var_138
                        zmm0 = result.d
                    
                    zmm2_1.d = zmm2_1.d f- var_158.d
                    zmm1.d = zmm1.d f- var_158:4.d
                    zmm0.d = zmm0.d f- zmm3_1.d
                    var_128.d = zmm2_1.d
                    zmm2_1.o = _mm_and_ps(zmm2_1.o, 0x7fffffff)
                    var_128:4.d = zmm1.d
                    int32_t var_120_2 = zmm0.d
                    
                    if (zmm2_1.d f> 9.99999975e-05f)
                    label_141eed6cd:
                        void var_d8
                        memset(&var_d8, 0, 0x88)
                        int32_t var_d0_1 = 0x3f800000
                        int128_t zmm0_1 = *(arg1[0x16] + 0x1c0)
                        var_178.q = &var_d8
                        var_148.o = zmm0_1
                        result = sub_141f231f0(arg1, &var_128, &var_148, arg1[0x3e].b u>> 4 & 1, 
                            zmm0_1.q, zmm1, zmm2_1, var_178, 0)
                    else
                        zmm1.o = _mm_and_ps(zmm1.o, 0x7fffffff)
                        
                        if (zmm1.d f> 9.99999975e-05f)
                            goto label_141eed6cd
                        
                        if (not(_mm_and_ps(zmm0, 0x7fffffff).d f<= 9.99999975e-05f))
                            goto label_141eed6cd
                    
                    if ((*(arg1 + 0x387) & 0x20) == 0 && arg1[0xb4].b == 0)
                        result =
                            Concurrency::details::_TaskCollectionBase::_IsMarkedForCancellation(
                            &arg1[0x9b])
                        
                        if (result.b == 0)
                            void* rax_19 = arg1[0x16]
                            int32_t var_140_2
                            
                            if (rax_19 == 0)
                                int32_t rax_20 = data_143a2d6e8
                                var_148 = data_143a2d6e0
                                var_140_2 = rax_20
                            else
                                zmm1.o = *(rax_19 + 0x1d0)
                                var_148.d = zmm1.d
                                zmm0 = _mm_shuffle_ps(zmm1.o, zmm1.o, 0x55)
                                zmm1.o = _mm_shuffle_ps(zmm1.o, zmm1.o, 0xaa)
                                zmm1.d = zmm1.d f- *(rax_19 + 0x114)
                                var_148:4.d = zmm0.d
                                var_140_2 = zmm1.d
                            
                            zmm9_1.d = 1f f/ zmm6_1.d
                            zmm0 = zx.o(var_148)
                            zmm2_1.o = zmm0
                            zmm2_1.d = zmm2_1.d f- var_158.d
                            zmm1.o = zmm0
                            zmm0.d = var_140_2.d f- var_150_1
                            zmm1.o = _mm_shuffle_ps(zmm1.o, zmm1.o, 0x55)
                            zmm1.d = zmm1.d f- var_158:4.d
                            zmm2_1.d = zmm2_1.d f* zmm9_1.d
                            zmm0.d = zmm0.d f* zmm9_1.d
                            zmm1.d = zmm1.d f* zmm9_1.d
                            int32_t var_140_4 = zmm0.d
                            *(arg1 + 0xc4) = (_mm_unpacklo_ps(zmm2_1.o, zmm1.q)).q
                            *(arg1 + 0xcc) = var_140_4
                            result = (*(*arg1 + 0x878))(arg1)
                    
                    *(arg1 + 0x387) &= 0xdf
        else
            zmm1.o = zmm6_1
            result = (*(*arg1 + 0x620))(arg1, zmm1, zx.q(arg3))
    else
        *(arg1 + 0x22c) = data_143dbb1f8.q
        *(arg1 + 0x234) = data_143dbb200
        *(arg1 + 0xc4) = data_143dbb1f8.q
        result = zx.q(data_143dbb200)
        *(arg1 + 0xcc) = result.d

return result
