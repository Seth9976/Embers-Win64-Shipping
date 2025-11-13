// 函数: sub_141ee2540
// 地址: 0x141ee2540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *(arg1 + 0x1e0)
float zmm4 = zmm1[0] f* *(arg1 + 0x420)
float zmm3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm3[0] = zmm3[0] f* *(arg1 + 0x424)
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
zmm4 = zmm4 + arg3
zmm1[0] = zmm1[0] f* *(arg1 + 0x428)
zmm3[0] = zmm3[0] + arg3
zmm1[0] = zmm1[0] + arg3

if (not(arg3 >= 0f))
    zmm4 = __maxss_xmmss_memss(zmm4, data_143dbb1f8)
    zmm3 = __maxss_xmmss_memss(zmm3[0], data_143dbb1fc)
    zmm1 = __maxss_xmmss_memss(zmm1[0], data_143dbb200)

arg2[1] = zmm4
arg2[2] = zmm3[0]
arg2[3] = zmm1[0]
*arg2 = 1
return arg2
