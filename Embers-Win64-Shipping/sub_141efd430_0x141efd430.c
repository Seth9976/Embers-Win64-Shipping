// 函数: sub_141efd430
// 地址: 0x141efd430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0 = *arg2
int32_t rax = arg2[1].d
float zmm6[0x4]
int128_t zmm7
float zmm8[0x4]
float zmm9[0x4]
int128_t zmm10
float zmm11[0x4]
zmm6, zmm7, zmm8, zmm9, zmm10, zmm11 = sub_141f296b0(arg1, arg2, arg3, arg4)
float result = (*(*arg1 + 0x550))(arg1)

if (result.b != 0)
    float zmm0_1[0x4] = arg2[1].d
    zmm0_1[0] - 0f
    
    if (not(zmm0_1[0] <= 0f))
        int128_t var_58_1 = zmm10
        
        if (not((*(arg1 + 0x164))[0] f<= *(arg3 + 0x30)))
            result = (*(*arg1 + 0x820))(arg1, arg3)
        
        if ((*(arg1 + 0x164))[0] f<= *(arg3 + 0x30) || result.b != 0)
            zmm10 = *(arg3 + 0x30)
        
        if ((not((*(arg1 + 0x164))[0] f<= *(arg3 + 0x30)) && result.b == 0)
                || zmm10.d f<= 9.99999975e-05f)
            arg2[1].d = 0
        else
            float zmm1_1[0x4] = rax
            float var_18_1[0x4] = zmm6
            zmm6 = arg2[1].d
            int128_t var_28_1 = zmm7
            zmm7.d = 1f f- *(arg3 + 8)
            zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
            float var_38_1[0x4] = zmm8
            zmm8 = zmm0.d
            float var_48_1[0x4] = zmm9
            zmm9 = zmm0:4.d
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm9[0] = zmm9[0] * zmm9[0]
            float var_68_1[0x4] = zmm11
            zmm8[0] = zmm8[0] + zmm9[0]
            zmm0_1 = *(arg2 + 4)
            zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
            zmm8[0] = zmm8[0] + zmm1_1[0]
            zmm1_1 = *arg2
            zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
            zmm1_1[0] = zmm1_1[0] + zmm0_1[0]
            float temp0_1[0x4] = _mm_sqrt_ss(0, zmm8[0])
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm1_1[0] = zmm1_1[0] + zmm6[0]
            float zmm2_1[0x4]
            
            if (not(zmm1_1[0] != 1f))
                zmm6 = arg2[1].d
            else if (zmm1_1[0] >= 9.99999994e-09f)
                float temp0_2[0x4] = _mm_rsqrt_ss(zmm1_1[0], zmm1_1[0])
                zmm2_1 = 0x3f000000
                zmm1_1[0] = zmm1_1[0] * 0.5f
                temp0_2[0] = temp0_2[0] * temp0_2[0]
                zmm1_1[0] = zmm1_1[0] * temp0_2[0]
                zmm2_1[0] = 0.5f - zmm1_1[0]
                temp0_2[0] = temp0_2[0] * zmm2_1[0]
                temp0_2[0] = temp0_2[0] + temp0_2[0]
                temp0_2[0] = temp0_2[0] * temp0_2[0]
                zmm1_1[0] = zmm1_1[0] * temp0_2[0]
                temp0_2[0] = temp0_2[0] * (0.5f - zmm1_1[0])
                temp0_2[0] = temp0_2[0] + temp0_2[0]
                zmm6[0] = zmm6[0] * temp0_2[0]
            else
                zmm6 = data_143dbb200
            
            zmm6[0] = zmm6[0] * temp0_1[0]
            zmm8[0] = zmm8[0] f* zmm7.d
            zmm6[0] = zmm6[0] f/ zmm10.d
            zmm9[0] = zmm9[0] f* zmm7.d
            zmm6[0] = zmm6[0] f* zmm7.d
            *arg2 = (_mm_unpacklo_ps(zmm8, zmm9[0].q)).q
            result = zmm6[0]
            arg2[1].d = result
            float zmm3_1[0x4] = arg2[1].d
            zmm2_1 = *(arg1 + 0x154)
            
            if (not(zmm3_1[0] <= zmm2_1[0]))
                zmm2_1[0] = zmm2_1[0] / zmm3_1[0]
                zmm3_1[0] = zmm3_1[0] * zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *arg2
                zmm2_1[0] = zmm2_1[0] f* *(arg2 + 4)
                *arg2 = zmm2_1[0]
                arg2[1].d = zmm3_1[0]
                *(arg2 + 4) = zmm2_1[0]
    else if (not(zmm0_1[0] >= 0f) && not(1.89999998f f<= *(arg1 + 0x2f4))
            && (arg1[0x5e].b & 1) != 0)
        arg2[1].d = 0

return result
