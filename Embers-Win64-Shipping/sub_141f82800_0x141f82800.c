// 函数: sub_141f82800
// 地址: 0x141f82800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_d8[0x4]

if (sub_140ab3dc0(arg1 + 0x408) != 0 || *(arg1 + 0x428) == 0)
    __builtin_memset(&var_d8, 0, 0x1c)
    sub_140ae2e90(&var_d8, arg2, arg3)
else
    float zmm8[0x4] = 0xbf800000
    int128_t zmm9 = 0x7f7fffff
    int128_t zmm10 = 0x800000
    float zmm11[0x4] = zx.o(0)
    float zmm12[0x4] = zx.o(0)
    int64_t* rax_1 = sub_140ac6680(arg1 + 0x408)
    uint64_t rbx_1
    
    if (rax_1[1].d == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = *rax_1
    
    bool cond:0_1 = *rbx_1 == 0
    int128_t zmm13 = *(arg1 + 0x440)
    float zmm0_1[0x4] = *(arg1 + 0x444)
    int128_t zmm14
    zmm14.d = zmm13.d f* *(arg1 + 0x438)
    uint64_t var_f8 = rbx_1
    zmm13.d = zmm13.d f* *(arg1 + 0x43c)
    float var_f0_1 = rbx_1.d
    float zmm7[0x4] = 0xbf000000
    zmm14.d = zmm14.d f* zmm0_1[0]
    zmm13.d = zmm13.d f* zmm0_1[0]
    float var_108[0x4]
    
    if (not(cond:0_1))
        do
            void* r8 = *(arg1 + 0x428)
            int32_t var_118_1 = (*(arg1 + 0x44c)).d
            var_108 = var_f8.o
            int32_t arg_8
            zmm7, zmm8, zmm9, zmm10, zmm11 =
                sub_141f83e10(&arg_8, &var_108, r8, zmm14, zmm13.d, (*(arg1 + 0x448))[0], var_118_1)
            uint32_t rcx_3 = zx.d(*(arg1 + 0x430))
            float zmm6_1[0x4] = zmm11
            zmm0_1 = arg_8
            
            if (rcx_3 == 1)
                zmm6_1 = zmm0_1
                zmm6_1[0] = zmm6_1[0] * zmm7[0]
            else if (rcx_3 == 2)
                zmm6_1 = zmm0_1 ^ 0x80000000
            
            zmm7 = arg4
            zmm10 = _mm_max_ss(zmm10.d, zmm0_1[0])
            
            if (zmm7[0] <= zmm11[0])
                zmm0_1, zmm6_1, zmm7, zmm8, zmm9 = sub_142005cc0(*(arg1 + 0x428))
            else
                zmm0_1 = zmm7
            
            bool cond:1_1 = zmm8[0] >= zmm11[0]
            zmm12[0] = zmm12[0] + zmm0_1[0]
            zmm9 = _mm_min_ss(zmm9.d, zmm6_1[0])
            
            if (not(cond:1_1))
                zmm8 = zmm7
            
            int16_t i
            
            do
                i = *rbx_1
                
                if (i == 0)
                    goto label_141f82a2a
                
                if (i == 0x3c && *(rbx_1 + 2) == 0x62 && *(rbx_1 + 4) == 0x72
                        && *(rbx_1 + 6) == 0x3e)
                    rbx_1 += 8
                    break
                
                rbx_1 += 2
            while (i != 0xa)
            var_f0_1 = rbx_1.d
        while (*rbx_1 != 0)
        
    label_141f82a2a:
        zmm7 = 0xbf000000
    
    uint32_t rcx_6 = zx.d(*(arg1 + 0x431))
    
    if (rcx_6 == 0)
        zmm8 = zmm11
    else if (rcx_6 == 1)
        zmm8 = zmm12
        zmm8[0] = zmm8[0] * zmm7[0]
    else if (rcx_6 == 2)
        zmm8 = zmm12 ^ 0x80000000
    else if (rcx_6 != 3)
        zmm8 = zmm11
    
    int32_t var_c0
    var_c0.b = 1
    int128_t zmm1
    zmm1.d = zmm9.d f+ zmm10.d
    zmm12[0] = zmm12[0] + zmm8[0]
    var_d8[0].q = (_mm_unpacklo_ps(zmm11, (zmm9 ^ 0x80000000).q)).q
    var_108[2] = (zmm8 ^ 0x80000000)[0]
    float rax_2 = var_108[2]
    zmm0_1 = _mm_unpacklo_ps(zmm11, (zmm1 ^ 0x80000000).q)
    var_f0_1 = (zmm12 ^ 0x80000000)[0]
    var_d8[2] = rax_2
    var_d8[3].q = zmm0_1.q
    int64_t var_c8
    var_c8:4.d = var_f0_1
    uint64_t* rax_4 = sub_140ae2c60(&var_d8, &var_f8, arg3)
    float zmm3_1[0x4] = *rax_4
    float zmm1_1[0x4] = rax_4[1].d
    zmm9.d = (*(rax_4 + 0xc)).d f- zmm3_1[0]
    int64_t zmm2_1 = *(rax_4 + 4)
    float zmm5_1[0x4] = rax_4[2].d
    int64_t zmm4_1 = *(rax_4 + 0x14)
    zmm5_1[0] = zmm5_1[0] f- zmm2_1.d
    zmm4_1.d = zmm4_1.d f- zmm1_1[0]
    float zmm7_1 = zmm9.d * 0.5f
    zmm9.d = zmm9.d f* zmm9.d
    zmm5_1[0] = zmm5_1[0] * 0.5f
    int64_t zmm6_2
    zmm6_2.d = zmm4_1.d f* 0.5f
    zmm3_1[0] = zmm3_1[0] + zmm7_1
    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
    zmm4_1.d = zmm4_1.d f* zmm4_1.d
    zmm2_1.d = zmm2_1.d f+ zmm5_1[0]
    zmm1_1[0] = zmm1_1[0] f+ zmm6_2.d
    zmm9.d = zmm9.d f+ zmm5_1[0]
    zmm3_1 = _mm_unpacklo_ps(zmm3_1, zmm2_1)
    var_f0_1 = zmm1_1[0]
    zmm1_1 = *(arg1 + 0x264)
    zmm9.d = zmm9.d f+ zmm4_1.d
    zmm5_1[0] = zmm5_1[0] * zmm1_1[0]
    var_d8[2] = var_f0_1
    zmm6_2.d = zmm6_2.d f* zmm1_1[0]
    zmm9.d = zmm9.d f* 0.25f
    zmm7_1 = zmm7_1 * zmm1_1[0]
    float zmm0_2[0x4] = _mm_sqrt_ss(0, zmm9.d)
    zmm0_2[0] = zmm0_2[0] * zmm1_1[0]
    zmm1_1 = var_d8
    float var_c0_1 = zmm0_2[0]
    zmm1_1[0].q = zmm3_1.q
    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x93)
    zmm1_1[0] = zmm7_1
    zmm0_2 = _mm_unpacklo_ps(zmm5_1, zmm6_2)
    *arg2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x39)
    *(arg2 + 0x10) = zmm0_2.q
    arg2[6] = var_c0_1
return arg2
