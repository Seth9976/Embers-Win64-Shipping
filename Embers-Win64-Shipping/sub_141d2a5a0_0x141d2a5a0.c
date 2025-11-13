// 函数: sub_141d2a5a0
// 地址: 0x141d2a5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm8[0x4] = arg4[3]
zmm8[0] = zmm8[0] f- *arg4
uint32_t zmm9[0x4] = arg4[4]
zmm9[0] = zmm9[0] f- arg4[1]
uint32_t zmm10[0x4] = arg4[5]
zmm10[0] = zmm10[0] f- arg4[2]
zmm8[0] = zmm8[0] f* 0.5f
zmm9[0] = zmm9[0] f* 0.5f
zmm10[0] = zmm10[0] f* 0.5f
uint32_t temp0[0x4] = _mm_and_ps(zmm8, 0x7fffffff)
uint32_t temp0_1[0x4] = _mm_and_ps(zmm9, 0x7fffffff)
uint32_t zmm3[0x4] = _mm_min_ss(temp0[0], temp0_1[0])
uint32_t temp0_3[0x4] = _mm_and_ps(zmm10, 0x7fffffff)

if (not(_mm_min_ss(zmm3[0], temp0_3[0])[0] f>= 9.99999975e-05f))
    int64_t rcx = *(arg1 + 8)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    return nullptr

char var_90 = *arg1
char var_8f_1 = arg1[1]
void var_88
sub_140596d10(&var_88, &arg1[8])
void*** result
uint128_t zmm7_1
int32_t zmm8_1
int32_t zmm9_1
int32_t zmm10_1
int128_t zmm11_1
uint128_t zmm12_1
result, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1 =
    sub_141d2a930(&var_90, arg2, arg3, arg4, arg5, arg6, arg8)

if (result == 0)
    int16_t* rcx_10
    
    if (*(arg1 + 0x10) == 0)
        rcx_10 = &data_142d40450
    else
        rcx_10 = *(arg1 + 8)
    
    sub_140a54570(rcx_10, &data_1437020ab)
    *arg1 = 0x101
else
    uint128_t zmm2_1 = zx.o(result[0x13])
    uint128_t zmm1_1 = zx.o(*(result + 0xa4))
    int32_t rcx_3 = result[0x14].d
    int32_t var_28_1 = zmm7_1.d
    uint128_t zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    int32_t rcx_4 = *(result + 0xac)
    zmm7_1.d = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55).d f- zmm0_1.d
    zmm0_1.d = rcx_4.d f- rcx_3
    uint64_t var_9c_1 = zmm1_1.q
    zmm1_1.d = zmm1_1.d f- zmm2_1.d
    int128_t var_68_1 = zmm11_1
    uint128_t var_78_1 = zmm12_1
    uint64_t var_a8 = zmm2_1.q
    zmm7_1.d = zmm7_1.d f* zmm1_1.d
    zmm7_1.d = zmm7_1.d f* zmm0_1.d
    uint128_t zmm0_2
    uint128_t zmm6_1
    int32_t zmm7_2
    zmm0_2, zmm6_1, zmm7_2 = sub_14176fdf0(result)
    zmm12_1.q = fconvert.d(zmm7_2)
    zmm11_1.q = fconvert.d(zmm0_2.d)
    uint128_t zmm1_2
    zmm1_2.q = zmm12_1.q f* 0.050000000000000003
    uint128_t zmm2_2
    
    if (not(zmm11_1.q f>= zmm1_2.q))
        zmm2_2 = zx.o(*(result + 0xa4))
        int32_t rax_5 = result[0x14].d
        zmm0_2.d = zmm0_2.d f/ zmm7_2
        int32_t rax_6 = *(result + 0xac)
        uint64_t var_9c_2 = zmm2_2.q
        zmm0_2.d = zmm0_2.d f* 100f
        zmm1_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
        uint128_t var_18_1 = zmm6_1
        zmm6_1 = zx.o(result[0x13])
        int64_t zmm4_1 = fconvert.d(zmm0_2.d)
        zmm2_2.d = zmm2_2.d f- zmm6_1.d
        zmm0_2.d = rax_6.d f- rax_5
        int64_t var_b0_1 = zmm4_1
        char var_b8_1
        var_b8_1.q = zmm11_1.q
        int32_t var_c0_1
        var_c0_1.q = zmm12_1.q
        zmm2_2.q = fconvert.d(zmm2_2.d)
        int64_t temp0_8 = _mm_cvtps_pd(zmm0_2.q)
        var_a8 = zmm6_1.q
        zmm1_2.d = zmm1_2.d f- _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55).d
        int32_t var_c8_1
        var_c8_1.q = temp0_8
        sub_140a2e390(&var_a8, 
            Level set is small or empty:\n    domain extent: (%g %g %g) volume: %g\n    estimated level "
        "set volume: %g\n    percentage filled: %g%%", zmm2_2.q)
        int16_t* rcx_7
        
        if (*(arg1 + 0x10) == 0)
            rcx_7 = &data_142d40450
        else
            rcx_7 = *(arg1 + 8)
        
        sub_140a54570(rcx_7, &data_1437020ab)
        uint64_t rcx_8 = var_a8
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
    
    zmm1_2.d = arg7.d f* 0.00999999978f
    zmm0_2.d = zmm1_2.d f* zmm9_1
    zmm2_2.d = zmm1_2.d f* zmm10_1
    zmm1_2.d = zmm1_2.d f* zmm8_1
    zmm2_2 = _mm_min_ss(_mm_min_ss(zmm2_2.d, zmm0_2.d).d, zmm1_2.d)
    
    if (not(zmm2_2.d f<= 0f))
        int32_t i = 0
        
        if (result[6].d * *(result + 0x2c) * result[5].d s> 0)
            int64_t rcx_9 = 0
            
            do
                int32_t* rax_10 = result[0xa]
                i += 1
                zmm0_2.d = zmm2_2.d f+ *(rax_10 + rcx_9)
                *(rax_10 + rcx_9) = zmm0_2.d
                rcx_9 += 4
            while (i s< result[6].d * *(result + 0x2c) * result[5].d)

int64_t rcx_11 = *(arg1 + 8)

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return result
