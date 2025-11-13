// 函数: __libm_sse2_sincosf_
// 地址: 0x142c93950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4]
zmm2[0] = arg1[0]
zmm2 &= data_1436bbb20

if (zmm2[0] < 0.000122070312f)
    _mm_unpacklo_ps(arg1, 
        _mm_sub_ps(0x3f800000, __mulps_xmmps_memps(_mm_mul_ps(zmm2, zmm2), data_1436bbb40)))
    return 

int64_t zmm1
zmm1.d = zmm2[0]
zmm1.d = zmm1.d f+ 1.57079637f
return sub_142c93930(_mm_unpacklo_ps(arg1, zmm1)) __tailcall
