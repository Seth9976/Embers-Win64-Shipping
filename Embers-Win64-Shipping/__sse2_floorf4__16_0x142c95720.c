// 函数: __sse2_floorf4@@16
// 地址: 0x142c95720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm1[0x4] = data_144280100
uint32_t zmm3[0x4] = data_144280110
uint32_t zmm4[0x4] = zmm1
uint32_t temp0[0x4] = _mm_andnot_ps(zmm1, arg1)
uint32_t zmm2[0x4] = _mm_cmpeq_ps(zmm3, temp0, 1)
zmm1 = _mm_add_ps(temp0, zmm3)
uint32_t temp0_3[0x4] = _mm_and_ps(zmm4, arg1)
uint32_t temp0_4[0x4] = _mm_and_ps(arg1, zmm2)
uint32_t temp0_6[0x4] = _mm_or_ps(_mm_sub_ps(zmm1, zmm3), temp0_3)
return _mm_or_ps(temp0_4, 
    _mm_andnot_ps(zmm2, 
        _mm_sub_ps(temp0_6, __andps_xmmxud_memxud(_mm_cmpeq_ps(arg1, temp0_6, 1), data_144280120))))
