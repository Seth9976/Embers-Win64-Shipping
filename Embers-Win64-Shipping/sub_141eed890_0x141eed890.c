// 函数: sub_141eed890
// 地址: 0x141eed890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = &__return_addr
int128_t zmm8 = arg2

if (not(zmm8.d f< 9.99999997e-07f))
    char rcx = arg1[0xa0].b
    
    if ((rcx & 8) != 0)
        arg4 = zx.o(*(arg1 + 0x504))
        int32_t rax = *(arg1 + 0x50c)
        *(arg1 + 0xc4) = arg4.q
        *(arg1 + 0xcc) = rax
        arg1[0xa0].b = rcx & 0xf7
    
    (*(*arg1 + 0x698))(arg1)
    *(arg1 + 0x234)
    int64_t r14
    r14.b = 0
    uint128_t zmm7 = arg4
    uint128_t zmm11
    zmm11.d = arg4.d f* arg1[0x3b].d
    
    if (arg1[0xb4].b != 0)
    label_141eed99b:
        
        if (not(zmm7.d f>= 0.649999976f))
            arg4 = *(arg1 + 0x234)
            bool cond:1_1 = arg4.d f> 0f
            arg4 = __minss_xmmss_memss(arg4.d, 0x3dcccccd)
            r14.b = cond:1_1
            *(arg1 + 0x234) = arg4.d
    else
        if (sub_142008320(&arg1[0x9b]) != 0)
            goto label_141eed99b
        
        arg2.d = (*(arg1 + 0x194)).d f* 0.330000013f
        arg4 = *(arg1 + 0xcc)
        
        if (arg4.d f<= arg2.d || zmm11.d f== 0f)
            goto label_141eed99b
        
        arg4.d = arg4.d f* zmm7.d
        arg4.d = arg4.d f* zmm7.d
        arg4 = _mm_max_ss(arg4.d, arg2.d)
        *(arg1 + 0xcc) = arg4.d
    
    float zmm9[0x4] = *(arg1[0x16] + 0x1d0)
    *(arg1 + 0x387) &= 0xdf
    bool cond:0_1 = arg1[0xb4].b != 0
    int64_t var_148_1 = zmm9[0].q
    _mm_shuffle_ps(zmm9, zmm9, 0xaa)
    int32_t var_188
    
    if (not(cond:0_1) && sub_142008320(&arg1[0x9b]) == 0)
        void* rax_6 = (*(*arg1 + 0x430))(arg1, arg2)
        int64_t rbx_1 = *arg1
        int128_t zmm6
        zmm6.d = (*(rax_6 + 0x260)).d f* 0.5f
        zmm6.d = zmm6.d f* zmm7.d
        (*(rbx_1 + 0x6d8))(arg1)
        int64_t r9_1
        r9_1.b = 1
        int512_t zmm2
        zmm2.o = zmm6
        var_188 = arg4.d
        (*(rbx_1 + 0x6a0))(arg1, zmm8, zmm2, r9_1, var_188)
        (*(*arg1 + 0x3e8))(arg1)
        arg4.d = arg4.d f* zmm8.d
        arg2.d = 1f f- zmm11.d
        arg4.d = arg4.d f* arg2.d
        arg4.d = arg4.d f+ *(arg1 + 0xcc)
        *(arg1 + 0xcc) = arg4.d
    
    int512_t zmm1
    int512_t zmm2_1
    float zmm8_1[0x4]
    zmm1, zmm2_1, zmm8_1 = sub_141ed7690(arg1, zmm8, arg4.q)
    float zmm0 = zmm8_1[0] f* *(arg1 + 0xcc)
    zmm8_1[0] = zmm8_1[0] f* *(arg1 + 0xc4)
    int64_t zmm6_1
    zmm6_1.d = zmm8_1[0].q.d f* arg1[0x19].d
    float var_170_1 = zmm0
    char var_128
    memset(&var_128, 0, 0x88)
    int32_t var_120_1 = 0x3f800000
    float temp0_4[0x4] = _mm_unpacklo_ps(zmm8_1, zmm6_1)
    int64_t var_178 = temp0_4.q
    int64_t var_158 = temp0_4.q
    float var_150_1 = var_170_1
    float zmm0_2[0x4]
    int512_t zmm1_1
    int512_t zmm2_2
    int128_t zmm8_2
    float zmm9_1
    int128_t zmm10_1
    int32_t zmm12_1
    float zmm14_1
    zmm0_2, zmm1_1, zmm2_2, zmm8_2, zmm9_1, zmm10_1, zmm12_1, zmm14_1 =
        sub_141efca40(arg1, &var_158, &var_128, zmm1, zmm2_1)
    int64_t rax_9 = *arg1
    float zmm6_2[0x4] = zmm0_2
    zmm6_2[0] = zmm6_2[0] f* zmm8_2.d
    
    if ((*(rax_9 + 0x558))(arg1) == 0)
        zmm1_1.o = zmm6_2
        return (*(*arg1 + 0x620))(arg1, zmm1_1, zx.q(arg3 + 1))
    
    if (not(var_120_1[0] f>= zmm10_1.d) && arg1[0x29] != 0)
        zmm2_2.o = zmm8_2
        (*(*arg1 + 0x858))(arg1, &var_128, zmm2_2)
        int64_t var_168
        
        if (r14.b != 0)
            zmm0_2 = *(arg1 + 0xcc)
            
            if (not(zmm0_2[0] f< zmm12_1))
                zmm2_2.o = zmm10_1
                zmm2_2.d = zmm2_2.d f- var_120_1
                zmm14_1 = zmm14_1 f* zmm8_2.d + zmm0_2[0]
                zmm0_2 = zmm2_2.o
                zmm1_1.o = zmm2_2.o
                *(arg1 + 0xcc) = zmm14_1
                zmm0_2[0] = zmm0_2[0] f* *(arg1 + 0xc4)
                zmm1_1.d = zmm1_1.d f* arg1[0x19].d
                zmm2_2.d = zmm2_2.d f* zmm14_1
                zmm0_2[0] = zmm0_2[0] f* zmm8_2.d
                zmm1_1.d = zmm1_1.d f* zmm8_2.d
                zmm2_2.d = zmm2_2.d f* zmm8_2.d
                float temp0_5[0x4] = _mm_unpacklo_ps(zmm0_2, zmm1_1.q)
                var_178 = temp0_5.q
                var_170_1 = zmm2_2.d
                var_168 = temp0_5.q
                float var_160_1 = var_170_1
                zmm1_1, zmm2_2, zmm6_2, zmm8_2, zmm9_1, zmm10_1 =
                    sub_141efca40(arg1, &var_168, &var_128, zmm1_1, zmm2_2)
                
                if ((*(*arg1 + 0x558))(arg1) == 0)
                    zmm1_1.o = zmm6_2
                    return (*(*arg1 + 0x620))(arg1, zmm1_1, zx.q(arg3 + 1))
        
        zmm0_2 = arg1[0x19].d
        float zmm7_2[0x4] = *(arg1 + 0xcc)
        zmm1_1.o = *(arg1 + 0xc4)
        zmm0_2[0] = zmm0_2[0] * zmm0_2[0]
        var_158 = 0
        zmm1_1.d = zmm1_1.d f* zmm1_1.d
        int32_t var_150_2 = 0xbf800000
        zmm1_1.d = zmm1_1.d f+ zmm0_2[0]
        zmm7_2[0] = zmm7_2[0] * zmm7_2[0]
        zmm1_1.d = zmm1_1.d f+ zmm7_2[0]
        float zmm5_1[0x4]
        
        if (not(zmm1_1.d f!= zmm10_1.d))
            zmm5_1 = *(arg1 + 0xcc)
            var_168 = *(arg1 + 0xc4)
        else if (zmm1_1.d f>= 9.99999994e-09f)
            zmm0_2 = zmm1_1.o
            zmm5_1 = _mm_rsqrt_ss(zmm0_2[0], zmm0_2[0])
            zmm2_2.o = 0x3f000000
            zmm0_2[0] = zmm0_2[0] * 0.5f
            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
            zmm1_1.o = zmm0_2
            zmm1_1.d = zmm1_1.d f* zmm5_1[0]
            zmm2_2.d = 0.5f f- zmm1_1.d
            zmm5_1[0] = zmm5_1[0] f* zmm2_2.d
            zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
            zmm1_1.o = zmm5_1
            zmm1_1.d = zmm1_1.d f* zmm5_1[0]
            zmm0_2[0] = zmm0_2[0] f* zmm1_1.d
            zmm5_1[0] = zmm5_1[0] * (0.5f - zmm0_2[0])
            zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
            zmm5_1[0] = zmm5_1[0] * zmm7_2[0]
        else
            zmm5_1 = data_143dbb200
        
        int32_t var_ec
        bool cond:2_1 = __andps_xmmxud_memxud(var_ec, data_142d3f770)[0] >= 0.200000003f
        zmm5_1[0] = zmm5_1[0] * -1f
        
        if (cond:2_1 || zmm5_1[0] >= 0.5f || zmm5_1[0] <= -0.200000003f)
        label_141eeddf5:
            zmm2_2.o = zmm8_2
            (*(*arg1 + 0x458))(arg1, &var_128, zmm2_2, &var_178, var_188)
            zmm2_2.o = zmm10_1
            zmm2_2.d = zmm2_2.d f- var_120_1
            var_188.q = &var_128
            void var_100
            (*(*arg1 + 0x498))(arg1, &var_178, zmm2_2, &var_100, var_188, 1)
        else
            if ((*(*arg1 + 0x6e0))(arg1, &var_128) == 0)
                goto label_141eeddf5
            
            zmm1_1.o = var_178:4.d
            zmm7_2 = zx.o(*(arg1 + 0xc4))
            int32_t r14_1 = *(arg1 + 0xcc)
            zmm2_2.o = zmm10_1
            zmm2_2.d = zmm2_2.d f- var_120_1
            int64_t rax_19 = *arg1
            int96_t var_138_1 = (*(arg1[0x16] + 0x1d0))[0].12
            zmm0_2 = var_178.d
            *(arg1 + 0xcc) = 0x3f800000
            zmm0_2[0] = zmm0_2[0] f* zmm2_2.d
            var_188.q = 0
            zmm1_1.d = zmm1_1.d f* zmm2_2.d
            var_168.d = zmm0_2[0]
            zmm0_2 = var_170_1
            zmm0_2[0] = zmm0_2[0] f* zmm2_2.d
            var_168:4.d = zmm1_1.d
            float var_160_3 = zmm0_2[0]
            char rax_20 = (*(rax_19 + 0x6e8))(arg1, &var_158, &var_168, &var_128, 0)
            
            if (rax_20 != 0)
                int64_t rdx_6 = *arg1
                
                if ((*(rdx_6 + 0x558))(arg1, rdx_6) == 0)
                    zmm1_1.o = zmm6_2
                    return (*(*arg1 + 0x620))(arg1, zmm1_1, zx.q(arg3 + 1))
                
                zmm9_1 = zmm9_1 f- var_138_1:8.d f+ *(arg1[0x16] + 0x1d8)
            
            *(arg1 + 0xc4) = zmm7_2.q
            *(arg1 + 0xcc) = r14_1
            
            if (rax_20 == 0)
                goto label_141eeddf5
    
    if (arg1[0xb4].b == 0 && sub_142008320(&arg1[0x9b]) == 0 && (*(arg1 + 0x387) & 0x20) == 0)
        zmm8_2.d = zmm8_2.d f- zmm6_2[0]
        
        if (not(zmm8_2.d f<= 9.99999975e-05f) && arg1[0x29] != 0)
            void* rax_27 = (*(*arg1 + 0x430))(arg1)
            float zmm3_1[0x4] = *(arg1 + 0xcc)
            zmm10_1.d = zmm10_1.d f/ zmm8_2.d
            char rcx_22 = not.b(*(rax_27 + 0x264))
            zmm2_2.o = *(arg1[0x16] + 0x1d0)
            zmm0_2 = zmm2_2.o
            zmm1_1.o = zmm2_2.o
            zmm1_1.o = _mm_shuffle_ps(zmm1_1.o, zmm2_2.o, 0x55)
            zmm2_2.o = _mm_shuffle_ps(zmm2_2.o, zmm2_2.o, 0xaa)
            zmm2_2.d = zmm2_2.d f- zmm9_1
            zmm0_2[0] = zmm0_2[0] f- var_148_1.d
            zmm1_1.d = zmm1_1.d f- var_148_1:4.d
            zmm2_2.d = zmm2_2.d f* zmm10_1.d
            zmm0_2[0] = zmm0_2[0] f* zmm10_1.d
            zmm1_1.d = zmm1_1.d f* zmm10_1.d
            int32_t var_150_3 = zmm2_2.d
            *(arg1 + 0xc4) = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
            *(arg1 + 0xcc) = var_150_3
            
            if ((rcx_22 & 1) != 0)
                *(arg1 + 0xcc) = zmm3_1[0]
    
    if ((*((*(*arg1 + 0x430))(arg1) + 0x264) & 1) == 0 && (*(*arg1 + 0x558))(arg1) != 0)
        (*(*arg1 + 0x590))(arg1, 3, 0)
    
    result = (*(*arg1 + 0x558))(arg1)
    
    if (result == 0)
        zmm1_1.o = zmm6_2
        return (*(*arg1 + 0x620))(arg1, zmm1_1, zx.q(arg3 + 1))

return result
