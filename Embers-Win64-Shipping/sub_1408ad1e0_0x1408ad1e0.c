// 函数: sub_1408ad1e0
// 地址: 0x1408ad1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4]
uint32_t var_18[0x4] = zmm6
uint32_t zmm7[0x4]
uint32_t var_28[0x4] = zmm7
uint32_t zmm8[0x4]
uint32_t var_38[0x4] = zmm8
uint32_t zmm9[0x4]
uint32_t var_48[0x4] = zmm9
int128_t zmm10
int128_t var_58 = zmm10
int128_t zmm11
int128_t var_68 = zmm11
uint32_t zmm12[0x4]
uint32_t var_78[0x4] = zmm12
char* result = arg6
int128_t zmm13
int128_t var_88 = zmm13
uint32_t r10 = zx.d(*result)
uint32_t var_b8

if (r10 == 0)
    zmm6 = *arg2
    int32_t rbx_2 = *arg1
    arg6.d = rbx_2
    zmm6[0] = zmm6[0] f* *arg7
    zmm6[0] = zmm6[0] f* arg7[1]
    var_b8 = zmm6[0]
    uint32_t var_b4_3 = zmm6[0]
    uint32_t zmm0_2[0x4]
    zmm0_2, zmm6, zmm7 = sub_1408b26b0(&arg6, &var_b8)
    zmm9 = zmm0_2
    zmm10 = 0x3f800000
    zmm11 = 0x3f800000
    result = zx.q(*arg5)
    
    if (result.d s> 1)
        zmm13 = *arg3
        zmm12 = *arg4
        uint64_t i_3 = zx.q((&result[-1]).d)
        uint64_t i
        
        do
            zmm7[0] = zmm7[0] f* zmm13.d
            rbx_2 += 1
            zmm6[0] = zmm6[0] f* zmm13.d
            arg6.d = rbx_2
            var_b8 = zmm7[0]
            zmm10.d = zmm10.d f* zmm12[0]
            uint32_t var_b4_4 = zmm6[0]
            zmm0_2, result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11 = sub_1408b26b0(&arg6, &var_b8)
            zmm0_2[0] = zmm0_2[0] f* zmm10.d
            zmm11.d = zmm11.d f+ zmm8[0]
            zmm8[0] = zmm8[0] f* zmm12[0]
            zmm9[0] = zmm9[0] f+ zmm0_2[0]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    zmm9[0] = zmm9[0] f/ zmm11.d
else if (r10 == 1)
    zmm8 = *arg2
    int32_t rbx_1 = *arg1
    arg6.d = rbx_1
    zmm8[0] = zmm8[0] f* *arg7
    zmm8[0] = zmm8[0] f* arg7[1]
    var_b8 = zmm8[0]
    uint32_t var_b4_1 = zmm8[0]
    uint32_t zmm0_1[0x4]
    zmm0_1, zmm8, zmm9 = sub_1408b26b0(&arg6, &var_b8)
    zmm6 = __andps_xmmxud_memxud(zmm0_1, data_142d3f770)
    zmm10 = 0x3f800000
    zmm6[0] = zmm6[0] f+ zmm6[0]
    zmm7 = *arg4
    zmm11 = 0x3f800000
    result = zx.q(*arg5)
    zmm6[0] = zmm6[0] f- 1f
    
    if (result.d s> 1)
        zmm13 = *arg3
        zmm12 = zmm7
        uint64_t i_2 = zx.q((&result[-1]).d)
        uint64_t i_1
        
        do
            zmm9[0] = zmm9[0] f* zmm13.d
            rbx_1 += 1
            zmm8[0] = zmm8[0] f* zmm13.d
            arg6.d = rbx_1
            var_b8 = zmm9[0]
            zmm10.d = zmm10.d f* zmm12[0]
            uint32_t var_b4_2 = zmm8[0]
            zmm0_1, result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11 = sub_1408b26b0(&arg6, &var_b8)
            zmm0_1 = __andps_xmmxud_memxud(zmm0_1, data_142d3f770)
            zmm11.d = zmm11.d f+ zmm7[0]
            zmm0_1[0] = zmm0_1[0] f* 2f
            zmm7[0] = zmm7[0] f* zmm12[0]
            zmm0_1[0] = zmm0_1[0] f- 1f
            zmm0_1[0] = zmm0_1[0] f* zmm10.d
            zmm6[0] = zmm6[0] f+ zmm0_1[0]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    zmm6[0] = zmm6[0] f/ zmm11.d
else if (r10 == 2)
    float zmm1[0x4] = *arg2
    int32_t rcx = *arg1
    zmm1[0] = zmm1[0] f* *arg7
    zmm1[0] = zmm1[0] f* arg7[1]
    return sub_1408b3870(rcx, arg3, arg4, arg5, (_mm_unpacklo_ps(zmm1, zmm1[0].q)).d)
return result
