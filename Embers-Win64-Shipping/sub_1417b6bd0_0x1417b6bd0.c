// 函数: sub_1417b6bd0
// 地址: 0x1417b6bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result = zx.o(0)
int128_t zmm9 = *arg1

if (zmm9.d f!= 0f || 0f f!= *(arg1 + 4) || not(0f f== *(arg1 + 8)))
    result.d = arg5.d f/ arg4.d
    int128_t zmm10 = *(arg1 + 4)
    int128_t zmm11 = *(arg1 + 8)
    *arg8 = result.d
    uint128_t zmm6
    zmm6.d = (*arg2).d f* *arg1
    uint128_t zmm7
    zmm7.d = (*(arg2 + 4)).d f* *(arg1 + 4)
    float zmm8[0x4] = *(arg2 + 8)
    zmm8[0] = zmm8[0] f* *(arg1 + 8)
    result.d = zmm6.d f* zmm6.d
    uint128_t zmm2
    zmm2.d = zmm7.d f* zmm7.d
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm2.d = zmm2.d f+ result.d
    zmm2.d = zmm2.d f+ zmm8[0]
    
    if (zmm2.d f== 1f)
        goto label_1417b6d1a
    
    int32_t var_78_1
    float var_70_1
    float zmm1[0x4]
    
    if (zmm2.d f>= 9.99999994e-09f)
        float temp0_1[0x4] = _mm_rsqrt_ss(zmm2[0], zmm2.d)
        arg4.d = zmm2.d f* 0.5f
        result.d = temp0_1.d f* temp0_1[0]
        zmm1 = arg4
        zmm1[0] = zmm1[0] f* result.d
        zmm2.d = 0.5f - zmm1[0]
        result.d = temp0_1.d f* zmm2.d
        temp0_1[0] = temp0_1[0] f+ result.d
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        arg4.d = arg4.d f* temp0_1[0]
        result.d = temp0_1.d f* (0.5f f- arg4.d)
        temp0_1[0] = temp0_1[0] f+ result.d
        zmm6.d = zmm6.d f* temp0_1[0]
        zmm7.d = zmm7.d f* temp0_1[0]
        zmm8[0] = zmm8[0] * temp0_1[0]
    label_1417b6d1a:
        var_70_1 = zmm8[0]
        int32_t var_74_2 = zmm7.d
        var_78_1 = zmm6.d
    else
        var_78_1 = data_143dbb1f8.d
        var_70_1 = data_143dbb200.d
        float var_74_1 = data_143dbb1fc[0]
    
    *arg6 = var_78_1.q
    arg6[1].d = var_70_1
    zmm1 = *arg3
    zmm2.d = (*(arg3 + 4)).d f/ zmm10.d
    result.d = (*(arg3 + 8)).d f/ zmm11.d
    zmm1[0] = zmm1[0] f/ zmm9.d
    *arg7 = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
    arg7[1].d = result.d

return result
