// 函数: sub_141f65bb0
// 地址: 0x141f65bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *(arg1 + 0x4d8)
uint128_t zmm1 = arg3
arg3 = zx.o(0)
uint64_t* rbx = arg2

if (not(zmm3 != 0f))
    *arg2 = 0x3f800000
    *(arg2 + 4) = 0x3f800000
    arg2[1].d = 0x3f800000
    return arg2

int32_t var_18

if (arg4 == 0)
    int32_t rcx_2 = *(arg1 + 0x410)
    bool cond:1_1 = *(arg1 + 0x4e1) == 0
    var_18 = 0x3f800000
    int32_t var_14_1 = 0x3f800000
    int32_t var_10_1 = 0x3f800000
    
    if (cond:1_1)
        rcx_2 -= 1
    
    arg3.d = _mm_cvtepi32_ps(zx.o(rcx_2)).d f/ zmm3
    arg3.d = arg3.d f* zmm1.d
else
    if (*(arg1 + 0x458) s> 0)
        arg3 = *(*(arg1 + 0x450) + sx.q(*(arg1 + 0x458)) * 0x14 - 0x14)
    
    zmm1.d = zmm1.d f/ zmm3
    int32_t arg_8 = 0
    var_18 = 0x3f800000
    int32_t var_14 = 0x3f800000
    int32_t var_10 = 0x3f800000
    zmm1.d = zmm1.d f* arg3.d
    arg3 = sub_141f5bc90(arg1 + 0x450, zmm1, &arg_8)
    arg2 = rbx

sub_141a1d730(arg1 + 0x438, arg2, arg3, &var_18)
return rbx
