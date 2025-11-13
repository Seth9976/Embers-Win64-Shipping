// 函数: sub_141ea3bd0
// 地址: 0x141ea3bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    *arg3 = data_143dbb1f8.q
    arg3[1].d = data_143dbb200
    int32_t rax_7
    rax_7.b = 0
    *arg4 = data_14399f720
    return rax_7

float zmm2[0x4]

if ((arg2:4.d != 0 | sub_140b5b8a0(arg2.d, 0) == 0) == 0)
    zmm2 = *(arg1 + 0x1d0)
    float var_10_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    *arg3 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    arg3[1].d = var_10_1
    float rax_6
    rax_6.b = 1
    *arg4 = *(arg1 + 0x1c0)
    return rax_6

if ((*(*arg1 + 0x428))(arg1, arg2) != 0)
    sub_141f3d580(arg1, arg2, arg3, arg4)
    return 1

zmm2 = *(arg1 + 0x1d0)
float var_10 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
*arg3 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
arg3[1].d = var_10
*arg4 = *(arg1 + 0x1c0)
return 0
