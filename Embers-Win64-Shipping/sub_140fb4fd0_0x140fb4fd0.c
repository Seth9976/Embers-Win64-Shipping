// 函数: sub_140fb4fd0
// 地址: 0x140fb4fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140ab3dc0(arg2)

if (result.b == 0)
    result = arg3 - 1
    
    if (result u<= 1)
        char arg_20
        sub_140ad6f70(&arg_20, sub_140ac6680(arg2))
        uint128_t zmm4_1 = _mm_cvtepi32_ps(zx.o(arg5))
        uint32_t rax_3 = zx.d(arg_20)
        zmm4_1.d = zmm4_1.d f* 0.00392156886f
        uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(arg4))
        _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
        uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rax_3))
        zmm1.d = zmm1.d f* 0.00392156886f
        uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(arg6))
        zmm4_1.d = zmm1.d
        zmm2.d = zmm2.d f* 0.00392156886f
        _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc6)
        zmm3.d = zmm3.d f* 0.00392156886f
        zmm4_1.d = zmm2.d
        _mm_shuffle_ps(zmm4_1, zmm4_1, 0x27)
        zmm4_1.d = zmm3.d
        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x39)
        uint128_t var_28 = zmm4_1
        *(arg1 + 0x3c8) = zmm4_1
        float var_18[0x4]
        *(arg1 + 0x3b8) = *sub_140ad9b20(&var_28, &var_18)
        return sub_140f9fa80(arg1, 0)

return result
