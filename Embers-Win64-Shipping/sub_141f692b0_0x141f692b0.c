// 函数: sub_141f692b0
// 地址: 0x141f692b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *(arg1 + 0x4d8)
uint128_t zmm0 = zx.o(0)
uint128_t* rbx = arg2
uint128_t zmm1 = arg3

if (not(zmm3 != 0f))
    *arg2 = data_143dbb0c0
    arg2[1] = data_143dbb0d0
    arg2[2] = data_143dbb0e0
    return arg2

if (arg5 == 0)
    int32_t rcx_2 = *(arg1 + 0x410)
    
    if (*(arg1 + 0x4e1) == 0)
        rcx_2 -= 1
    
    arg3.d = _mm_cvtepi32_ps(zx.o(rcx_2)).d f/ zmm3
    arg3.d = arg3.d f* zmm1.d
else
    if (*(arg1 + 0x458) s> 0)
        zmm0 = *(*(arg1 + 0x450) + sx.q(*(arg1 + 0x458)) * 0x14 - 0x14)
    
    zmm1.d = zmm1.d f/ zmm3
    int32_t arg_8 = 0
    zmm1.d = zmm1.d f* zmm0.d
    arg3 = sub_141f5bc90(arg1 + 0x450, zmm1, &arg_8)
    arg2 = rbx

sub_141f68bf0(arg1, arg2, arg3, arg4, arg6)
return rbx
