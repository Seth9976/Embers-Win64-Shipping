// 函数: sub_1420417d0
// 地址: 0x1420417d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143f5b298
int128_t zmm10
zmm10.d = (*(arg4 + 8)).d f- arg3[2]
float zmm12[0x4] = *arg4
zmm12[0] = zmm12[0] f- *arg3
int128_t zmm13
zmm13.d = (*(arg4 + 4)).d f- arg3[1]
int128_t zmm6
zmm6.d = zmm13.d f* zmm13.d
zmm6.d = zmm6.d f+ zmm12[0] * zmm12[0]
float temp0[0x4] = _mm_sqrt_ss(0, zmm10.d f* zmm10.d f+ zmm6.d)
void* rax = sub_1423de540(rcx, arg1, 1)
uint32_t result

if (rax == 0 || temp0[0] <= 9.99999975e-05f)
label_142041ac7:
    *arg2 = data_143dbb1f8.q
    arg2[1].d = data_143dbb200
    result.b = 0
else
    uint32_t zmm11[0x4] = arg5
    
    if (not(__andps_xmmxud_memxud(zmm11, data_142d3f770)[0] f> 9.99999994e-09f))
        zmm11 = sub_142436950(rax)
    
    float zmm7[0x4] = 0x3f800000
    zmm7[0] = 1f / temp0[0]
    zmm7[0] = zmm7[0] * zmm12[0]
    zmm7[0] = zmm7[0] f* zmm13.d
    zmm7[0] = zmm7[0] f- data_14399f678.d
    zmm7[0] = zmm7[0] f- data_14399f678:4.d
    zmm7[0] = zmm7[0] f* zmm10.d
    zmm7[0] = zmm7[0] * arg6
    zmm7[0] = zmm7[0] f- data_14399f680
    zmm7[0] = zmm7[0] * arg6
    zmm7[0] = zmm7[0] f+ data_14399f678.d
    zmm7[0] = zmm7[0] f+ data_14399f678:4.d
    zmm7[0] = zmm7[0] * arg6
    uint32_t zmm0_1[0x4] = zmm7
    zmm0_1[0] = zmm0_1[0] f* zmm7[0]
    zmm7[0] = zmm7[0] f+ data_14399f680
    zmm7[0] = zmm7[0] * zmm7[0]
    float zmm1_1 = zmm7[0]
    zmm7[0] = zmm7[0] f+ zmm0_1[0]
    zmm7[0] = zmm7[0] + zmm1_1 * zmm7[0]
    
    if (zmm7[0] == 1f)
        goto label_1420419ef
    
    uint32_t var_a8
    float var_a4_1
    uint32_t var_a0_1
    
    if (zmm7[0] >= 9.99999994e-09f)
        zmm0_1 = zmm7
        float zmm3[0x4] = zmm0_1
        float temp0_2[0x4] = _mm_rsqrt_ss(zmm0_1[0], zmm3[0])
        zmm3[0] = zmm3[0] * 0.5f
        zmm0_1 = temp0_2
        zmm0_1[0] = zmm0_1[0] f* temp0_2[0]
        zmm1_1 = zmm3[0] f* zmm0_1[0]
        zmm0_1 = temp0_2
        zmm0_1[0] = zmm0_1[0] f* (0.5f - zmm1_1)
        temp0_2[0] = temp0_2[0] f+ zmm0_1[0]
        zmm0_1 = temp0_2
        zmm3[0] = zmm3[0] * temp0_2[0] * temp0_2[0]
        zmm0_1[0] = zmm0_1[0] f* (0.5f - zmm3[0])
        temp0_2[0] = temp0_2[0] f+ zmm0_1[0]
        zmm7[0] = zmm7[0] * temp0_2[0]
        zmm7[0] = zmm7[0] * temp0_2[0]
        zmm7[0] = zmm7[0] * temp0_2[0]
    label_1420419ef:
        var_a0_1 = zmm7[0]
        var_a4_1 = zmm7[0]
        var_a8 = zmm7[0]
    else
        zmm1_1 = data_143dbb1fc
        var_a8 = data_143dbb1f8[0]
        var_a0_1 = data_143dbb200[0]
        var_a4_1 = zmm1_1
    
    int32_t var_98
    float zmm6_1[0x4] = sub_140adf3c0(&var_a8, &var_98)
    zmm7 = var_98
    zmm7[0] = zmm7[0] * 0.0174532924f
    float zmm8[0x4] = cosf(zmm7[0])
    zmm6_1[0] = zmm6_1[0] f* zmm11[0]
    float temp0_3[0x4] = _mm_sqrt_ss(zmm6_1[0], zmm6_1[0])
    zmm6_1[0] = zmm6_1[0] * 0.5f
    zmm0_1 = tanf(zmm7[0])
    temp0_3[0] = temp0_3[0] f* zmm0_1[0]
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm10.d = zmm10.d f- temp0_3[0]
    zmm10.d = zmm10.d f* zmm8[0]
    zmm6_1[0] = zmm6_1[0] f/ zmm10.d
    
    if (zmm6_1[0] < 0f)
        goto label_142041ac7
    
    float zmm3_1[0x4] = var_a8
    zmm0_1 = var_a0_1
    float temp0_4[0x4] = _mm_sqrt_ss(0, zmm6_1[0])
    zmm0_1[0] = zmm0_1[0] f* temp0_4[0]
    zmm3_1[0] = zmm3_1[0] * temp0_4[0]
    int64_t zmm2_2
    zmm2_2.d = var_a4_1.d f* temp0_4[0]
    uint32_t var_90_1 = zmm0_1[0]
    *arg2 = (_mm_unpacklo_ps(zmm3_1, zmm2_2)).q
    arg2[1].d = var_90_1
    result.b = 1

return result
