// 函数: sub_1408acd50
// 地址: 0x1408acd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4]
uint32_t var_18[0x4] = zmm6
uint32_t zmm7[0x4]
uint32_t var_28[0x4] = zmm7
uint32_t zmm8[0x4]
uint32_t var_38[0x4] = zmm8
uint32_t zmm9[0x4]
uint32_t var_48[0x4] = zmm9
uint32_t zmm10[0x4]
uint32_t var_58[0x4] = zmm10
uint32_t zmm11[0x4]
uint32_t var_68[0x4] = zmm11
int128_t zmm12
int128_t var_78 = zmm12
char* result = arg7
int128_t zmm13
int128_t var_88 = zmm13
uint32_t zmm14[0x4]
uint32_t var_98[0x4] = zmm14
uint32_t r10 = zx.d(*result)
int32_t var_b8

if (r10 == 0)
    zmm6 = *arg2
    int32_t rbx_2 = *arg1
    arg7.d = rbx_2
    zmm6[0] = zmm6[0] f* *arg8
    zmm6[0] = zmm6[0] f* arg8[1]
    zmm6[0] = zmm6[0] f* arg8[2]
    var_b8 = zmm6[0]
    uint32_t var_b4_4 = zmm6[0]
    uint32_t var_b0_4 = zmm6[0]
    uint32_t zmm0_2[0x4]
    zmm0_2, zmm6, zmm7, zmm8 = sub_1408b1b50(&arg7, arg6, &var_b8)
    zmm10 = zmm0_2
    zmm12 = 0x3f800000
    zmm13 = 0x3f800000
    result = zx.q(*arg5)
    
    if (result.d s> 1)
        zmm11 = *arg3
        zmm14 = *arg4
        uint64_t i_3 = zx.q((&result[-1]).d)
        uint64_t i
        
        do
            zmm7[0] = zmm7[0] f* zmm11[0]
            rbx_2 += 1
            zmm8[0] = zmm8[0] f* zmm11[0]
            arg7.d = rbx_2
            zmm6[0] = zmm6[0] f* zmm11[0]
            var_b8 = zmm7[0]
            uint32_t var_b4_5 = zmm8[0]
            uint32_t var_b0_5 = zmm6[0]
            zmm12.d = zmm12.d f* zmm14[0]
            zmm0_2, result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
                sub_1408b1b50(&arg7, arg6, &var_b8)
            zmm0_2[0] = zmm0_2[0] f* zmm12.d
            zmm13.d = zmm13.d f+ zmm9[0]
            zmm9[0] = zmm9[0] f* zmm14[0]
            zmm10[0] = zmm10[0] f+ zmm0_2[0]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    zmm10[0] = zmm10[0] f/ zmm13.d
else if (r10 == 1)
    zmm7 = *arg2
    int32_t rbx_1 = *arg1
    arg7.d = rbx_1
    zmm7[0] = zmm7[0] f* *arg8
    zmm7[0] = zmm7[0] f* arg8[1]
    zmm7[0] = zmm7[0] f* arg8[2]
    var_b8 = zmm7[0]
    uint32_t var_b4_2 = zmm7[0]
    uint32_t var_b0_2 = zmm7[0]
    uint32_t zmm0_1[0x4]
    int32_t zmm15_1
    zmm0_1, zmm7, zmm10, zmm11, zmm15_1 = sub_1408b1b50(&arg7, arg6, &var_b8)
    zmm6 = __andps_xmmxud_memxud(zmm0_1, data_142d3f770)
    zmm12 = 0x3f800000
    zmm8 = *arg4
    zmm6[0] = zmm6[0] f+ zmm6[0]
    result = zx.q(*arg5)
    zmm13 = 0x3f800000
    zmm6[0] = zmm6[0] f- 1f
    
    if (result.d s> 1)
        zmm9 = *arg3
        zmm14 = zmm8
        int32_t var_a8_1 = zmm15_1
        uint64_t i_2 = zx.q((&result[-1]).d)
        uint64_t i_1
        
        do
            zmm10[0] = zmm10[0] f* zmm9[0]
            rbx_1 += 1
            zmm11[0] = zmm11[0] f* zmm9[0]
            arg7.d = rbx_1
            zmm7[0] = zmm7[0] f* zmm9[0]
            var_b8 = zmm10[0]
            uint32_t var_b4_3 = zmm11[0]
            uint32_t var_b0_3 = zmm7[0]
            zmm12.d = zmm12.d f* zmm14[0]
            int32_t zmm15_2
            zmm0_1, result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15_2 =
                sub_1408b1b50(&arg7, arg6, &var_b8)
            zmm0_1 = __andps_xmmxud_memxud(zmm0_1, data_142d3f770)
            zmm13.d = zmm13.d f+ zmm8[0]
            zmm0_1[0] = zmm0_1[0] f* zmm15_2
            zmm8[0] = zmm8[0] f* zmm14[0]
            zmm0_1[0] = zmm0_1[0] f- 1f
            zmm0_1[0] = zmm0_1[0] f* zmm12.d
            zmm6[0] = zmm6[0] f+ zmm0_1[0]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    zmm6[0] = zmm6[0] f/ zmm13.d
else if (r10 == 2)
    float zmm1 = *arg2
    int32_t rcx = *arg1
    var_b8 = zmm1 f* *arg8
    int32_t var_b4_1 = zmm1 f* arg8[1]
    float var_b0_1 = zmm1 * arg8[2]
    return sub_1408b2410(rcx, arg3, arg4, arg5, arg6, &var_b8)
return result
