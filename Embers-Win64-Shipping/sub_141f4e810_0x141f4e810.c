// 函数: sub_141f4e810
// 地址: 0x141f4e810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x278)

if (rdx != 0)
    float zmm4[0x4] = *(arg1 + 0x1e0)
    int32_t zmm2 = *(arg1 + 0x268)
    zmm4[0] = zmm4[0] f- zmm2
    float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    temp0_1[0] = temp0_1[0] f- zmm2
    zmm4[0] = zmm4[0] / zmm4[0]
    temp0_1[0] = temp0_1[0] / temp0_2[0]
    float temp0_3[0x4] = __maxss_xmmss_memss(zmm4[0], data_143dbb1f8)
    float temp0_4[0x4] = __maxss_xmmss_memss(temp0_1[0], data_143dbb1fc)
    float temp0_5[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
    temp0_5[0] = temp0_5[0] f- zmm2
    float temp0_6[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
    temp0_5[0] = temp0_5[0] / temp0_6[0]
    float var_10_1 = __maxss_xmmss_memss(temp0_5[0], data_143dbb200)[0]
    *(rdx + 0x420) = (_mm_unpacklo_ps(temp0_3, temp0_4[0].q)).q
    *(rdx + 0x428) = var_10_1

return sub_141f4e8f0(arg1) __tailcall
