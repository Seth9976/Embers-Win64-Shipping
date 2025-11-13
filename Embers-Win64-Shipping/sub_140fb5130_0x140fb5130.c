// 函数: sub_140fb5130
// 地址: 0x140fb5130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140ab3dc0(arg2)

if (result.b == 0)
    result = arg3 - 1
    
    if (result u<= 1)
        char arg_20
        sub_140ad6f70(&arg_20, sub_140ac6680(arg2))
        float zmm6[0x4] = zx.o(0)
        float zmm8[0x4] = zx.o(0)
        float zmm7[0x4] = zx.o(0)
        zmm6[0] = float.s(zx.d(arg5))
        zmm8[0] = float.s(zx.d(arg4))
        zmm7[0] = float.s(zx.d(arg_20))
        int128_t zmm14
        zmm14.d = float.s(zx.d(arg6))
        zmm6[0] = zmm6[0] * 0.00392156886f
        zmm14.d = zmm14.d f* 0.00392156886f
        bool cond:0_1 = zmm6[0] > 0.0404499993f
        zmm8[0] = zmm8[0] * 0.00392156886f
        zmm7[0] = zmm7[0] * 0.00392156886f
        
        if (cond:0_1)
            zmm6[0] = zmm6[0] * 0.947867334f
            zmm6[0] = zmm6[0] + 0.0521327034f
            zmm6 = powf(zmm6[0], 2.4000001f)
        else
            zmm6[0] = zmm6[0] * 0.0773993805f
        
        if (zmm8[0] > 0.0404499993f)
            zmm8[0] = zmm8[0] * 0.947867334f
            zmm8[0] = zmm8[0] + 0.0521327034f
            zmm8 = powf(zmm8[0], 2.4000001f)
        else
            zmm8[0] = zmm8[0] * 0.0773993805f
        
        if (zmm7[0] > 0.0404499993f)
            zmm7[0] = zmm7[0] * 0.947867334f
            zmm7[0] = zmm7[0] + 0.0521327034f
            zmm7 = powf(zmm7[0], 2.4000001f)
        else
            zmm7[0] = zmm7[0] * 0.0773993805f
        
        float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        temp0_1[0] = zmm8[0]
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
        temp0_2[0] = zmm7[0]
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
        temp0_3[0] = zmm14.d
        float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
        float var_68[0x4] = temp0_4
        *(arg1 + 0x3c8) = temp0_4
        float var_58[0x4]
        *(arg1 + 0x3b8) = *sub_140ad9b20(&var_68, &var_58)
        return sub_140f9fa80(arg1, 0)

return result
