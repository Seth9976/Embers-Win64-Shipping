// 函数: sub_1408ae970
// 地址: 0x1408ae970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *arg4
uint128_t zmm3 = *(arg4 + 4)
float zmm4[0x4] = arg5
int128_t zmm6
int128_t var_18 = zmm6
float zmm7[0x4] = arg2
arg2 = *(arg4 + 8)
float zmm8[0x4] = arg1
int128_t zmm9
int128_t var_48 = zmm9
zmm2[0] = zmm2[0] f- *arg8
zmm3.d = zmm3.d f- arg8[1]
arg2[0] = arg2[0] f- arg8[2]
zmm2[0] = zmm2[0] * zmm2[0]
zmm3.d = zmm3.d f* zmm3.d
arg2[0] = arg2[0] * arg2[0]
zmm3.d = zmm3.d f+ zmm2[0]
zmm3.d = zmm3.d f+ arg2[0]
float temp0[0x4] = _mm_sqrt_ss(0, zmm3.d)

if (arg3 == 0)
label_1408aed9b:
    
    if (not(temp0[0] <= zmm4[0]))
        return zmm8
else
    arg2 = arg6
    zmm4[0] = zmm4[0] + arg2[0]
    
    if (not(temp0[0] > zmm4[0]))
        if (temp0[0] < zmm4[0])
            return zmm8
        
        if (zx.d(arg3) - 1 u> 0xa)
            goto label_1408aed9b
        
        switch (arg3)
            case 1
                arg1 = 0x3f800000
                temp0[0] = temp0[0] - zmm4[0]
                zmm7[0] = zmm7[0] - zmm8[0]
                temp0[0] = temp0[0] / arg2[0]
                arg2 = 0x3f800000
                temp0[0] = temp0[0] * temp0[0]
                arg2[0] = 1f - temp0[0]
                arg1[0] = 1f - _mm_sqrt_ss(0, arg2[0])[0]
                arg1[0] = arg1[0] * zmm7[0]
                arg1[0] = arg1[0] + zmm8[0]
                return arg1
            case 2
                arg1 = 0x3f800000
                temp0[0] = temp0[0] - zmm4[0]
                zmm7[0] = zmm7[0] - zmm8[0]
                temp0[0] = temp0[0] / arg2[0]
                temp0[0] = temp0[0] - 1f
                temp0[0] = temp0[0] * temp0[0]
                arg1[0] = 1f - temp0[0]
                arg1 = _mm_sqrt_ss(arg1[0], arg1[0])
                arg1[0] = arg1[0] * zmm7[0]
                arg1[0] = arg1[0] + zmm8[0]
                return arg1
            case 3
                temp0[0] = temp0[0] - zmm4[0]
                temp0[0] = temp0[0] / arg2[0]
                zmm3.d = temp0.d f+ temp0[0]
                
                if (temp0[0] >= 0.5f)
                    zmm3.d = zmm3.d f- 2f
                    arg1 = 0x3f800000
                    zmm3.d = zmm3.d f* zmm3.d
                    arg1[0] = 1f f- zmm3.d
                    zmm2 = _mm_sqrt_ss(zx.o(0)[0], arg1[0])
                    zmm2[0] = zmm2[0] + 1f
                else
                    zmm2 = 0x3f800000
                    arg1 = 0x3f800000
                    zmm3.d = zmm3.d f* zmm3.d
                    arg1[0] = 1f f- zmm3.d
                    zmm2[0] = 1f - _mm_sqrt_ss(zx.o(0)[0], arg1[0])[0]
                
                zmm2[0] = zmm2[0] * 0.5f
            label_1408aeac7:
                zmm7[0] = zmm7[0] - zmm8[0]
                zmm7[0] = zmm7[0] * zmm2[0]
                zmm7[0] = zmm7[0] + zmm8[0]
            case 4
                temp0[0] = temp0[0] - zmm4[0]
                arg1 = zx.o(0)
                temp0[0] = temp0[0] / arg2[0]
                
                if (not(temp0[0] == arg1[0]))
                    temp0[0] = temp0[0] - 1f
                    temp0[0] = temp0[0] * 10f
                    arg1 = powf(0x40000000[0], temp0[0])
                
                zmm7[0] = zmm7[0] - zmm8[0]
                zmm7[0] = zmm7[0] * arg1[0]
                zmm7[0] = zmm7[0] + zmm8[0]
            case 5
                zmm6 = 0x3f800000
                temp0[0] = temp0[0] - zmm4[0]
                temp0[0] = temp0[0] / arg2[0]
                
                if (not(temp0[0] == 1f))
                    temp0[0] = temp0[0] * -10f
                    zmm6.d = 1f - powf(0x40000000[0], temp0[0])[0]
                
                zmm7[0] = zmm7[0] - zmm8[0]
                zmm7[0] = zmm7[0] f* zmm6.d
                zmm7[0] = zmm7[0] + zmm8[0]
            case 6
                temp0[0] = temp0[0] - zmm4[0]
                temp0[0] = temp0[0] / arg2[0]
                bool cond:1_1 = temp0[0] >= 0.5f
                temp0[0] = temp0[0] + temp0[0]
                
                if (cond:1_1)
                    temp0[0] = temp0[0] - 1f
                    
                    if (temp0[0] != 1f)
                        temp0[0] = temp0[0] * -10f
                        zmm2 = 0x3f800000
                        zmm2[0] = 1f - powf(0x40000000[0], temp0[0])[0]
                        zmm2[0] = zmm2[0] + 1f
                        zmm2[0] = zmm2[0] * 0.5f
                    else
                        zmm2 = 0x3f800000
                        zmm2[0] = 1f + 1f
                        zmm2[0] = zmm2[0] * 0.5f
                else
                    zmm2 = zx.o(0)
                    
                    if (temp0[0] == zmm2[0])
                        zmm2[0] = zmm2[0] * 0.5f
                    else
                        temp0[0] = temp0[0] - 1f
                        temp0[0] = temp0[0] * 10f
                        zmm2 = powf(0x40000000[0], temp0[0])
                        zmm2[0] = zmm2[0] * 0.5f
                
                goto label_1408aeac7
            case 7
                temp0[0] = temp0[0] - zmm4[0]
                temp0[0] = temp0[0] / arg2[0]
                temp0[0] = temp0[0] * 1.57079637f
                arg1 = cosf(temp0[0])
                arg2 = 0x3f800000
                zmm7[0] = zmm7[0] - zmm8[0]
                arg2[0] = 1f - arg1[0]
                arg2[0] = arg2[0] * zmm7[0]
                arg2[0] = arg2[0] + zmm8[0]
                return arg2
            case 8, 9
                temp0[0] = temp0[0] - zmm4[0]
                temp0[0] = temp0[0] / arg2[0]
                bool cond:2_1 = temp0[0] >= 0.5f
                temp0[0] = temp0[0] + temp0[0]
                
                if (cond:2_1)
                    temp0[0] = temp0[0] - 1f
                    temp0[0] = temp0[0] * 1.57079637f
                    arg1 = sinf(temp0[0])
                    zmm7[0] = zmm7[0] - zmm8[0]
                    arg1[0] = arg1[0] + 1f
                    arg1[0] = arg1[0] * 0.5f
                    zmm7[0] = zmm7[0] * arg1[0]
                else
                    temp0[0] = temp0[0] * 1.57079637f
                    arg1 = cosf(temp0[0])
                    arg2 = 0x3f800000
                    zmm7[0] = zmm7[0] - zmm8[0]
                    arg2[0] = 1f - arg1[0]
                    arg2[0] = arg2[0] * 0.5f
                    zmm7[0] = zmm7[0] * arg2[0]
                
                zmm7[0] = zmm7[0] + zmm8[0]
            case 0xa
                if (arg7 s<= 1)
                    return zmm8
                
                temp0[0] = temp0[0] - zmm4[0]
                temp0[0] = temp0[0] / arg2[0]
                
                if (temp0[0] <= zx.o(0)[0])
                    return zmm8
                
                if (not(temp0[0] >= 1f))
                    zmm3 = _mm_cvtepi32_ps(zx.o(arg7))
                    arg2 = zmm3
                    arg2[0] = arg2[0] * temp0[0]
                    int32_t rcx_3 = int.d(arg2[0])
                    
                    if (rcx_3 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_3))[0] == arg2[0]))
                        arg2 = _mm_cvtepi32_ps(zx.o(rcx_3
                            - (_mm_movemask_ps(_mm_unpacklo_ps(arg2, arg2[0].q)) & 1)))
                    
                    arg1 = zmm7
                    zmm3.d = zmm3.d f- 1f
                    arg1[0] = arg1[0] - zmm8[0]
                    arg2[0] = arg2[0] f/ zmm3.d
                    zmm7 = arg2
                    zmm7[0] = zmm7[0] * arg1[0]
                    zmm7[0] = zmm7[0] + zmm8[0]
            case 0xb
                temp0[0] = temp0[0] - zmm4[0]
                zmm7[0] = zmm7[0] - zmm8[0]
                temp0[0] = temp0[0] / arg2[0]
                temp0[0] = temp0[0] * zmm7[0]
                temp0[0] = temp0[0] + zmm8[0]
                return temp0

return zmm7
