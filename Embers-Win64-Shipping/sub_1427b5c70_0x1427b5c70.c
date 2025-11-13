// 函数: sub_1427b5c70
// 地址: 0x1427b5c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_1 = *(arg1 + 0x158) + 0x28
(*(*rcx_1 + 0x10))(rcx_1)
float zmm2[0x4] = arg2[2]
void* rcx_2 = *(arg1 + 0x118)
float var_10 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
*(arg1 + 0x168) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
*(arg1 + 0x170) = var_10
sub_141f4a580(*(rcx_2 + 0x130), arg2, 0, 0, 0)
jump(*(*(*(arg1 + 0x158) + 0x28) + 0x18))
