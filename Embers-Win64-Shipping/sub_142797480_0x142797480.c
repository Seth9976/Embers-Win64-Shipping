// 函数: sub_142797480
// 地址: 0x142797480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(arg3)

if (rcx == 1)
    sub_142783eb0(*arg2, arg2[1].d, arg5)
    return 

if (rcx == 2)
    sub_1427848f0(*arg2, arg2[1].d, arg5)
    return 

if (rcx == 3)
    sub_142783940(*arg2, arg2[1].d, arg5)
    return 

if (rcx != 4)
    return 

float zmm2[0x4] = *(arg4 + 0x10)
int32_t rdx = arg2[1].d
int64_t rcx_4 = *arg2
float var_14 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
int64_t var_28 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
float var_20 = var_14
sub_142784360(rcx_4, rdx, arg5, &var_28)
