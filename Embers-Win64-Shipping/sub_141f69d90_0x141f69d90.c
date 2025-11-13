// 函数: sub_141f69d90
// 地址: 0x141f69d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *(arg1 + 0x4d8)
uint128_t zmm1 = zx.o(0)
int32_t* rbx = arg2
uint128_t zmm0 = arg3

if (not(zmm3 != 0f))
    *arg2 = data_143dbb1f8.q
    arg2[2] = data_143dbb200
    return arg2

if (arg5 == 0)
    int32_t rcx_2 = *(arg1 + 0x410)
    
    if (*(arg1 + 0x4e1) == 0)
        rcx_2 -= 1
    
    arg3 = _mm_cvtepi32_ps(zx.o(rcx_2))
    arg3[0] = arg3[0] / zmm3
    arg3[0] = arg3[0] f* zmm0.d
else
    if (*(arg1 + 0x458) s> 0)
        zmm1 = *(*(arg1 + 0x450) + sx.q(*(arg1 + 0x458)) * 0x14 - 0x14)
    
    zmm0.d = zmm0.d f/ zmm3
    int32_t arg_8 = 0
    zmm0.d = zmm0.d f* zmm1.d
    arg3 = sub_141f5bc90(arg1 + 0x450, zmm0, &arg_8)
    arg2 = rbx

sub_141f69b10(arg1, arg2, arg3, arg4)
return rbx
