// 函数: sub_141f65750
// 地址: 0x141f65750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *(arg1 + 0x4d8)
int32_t zmm0 = (zx.o(0)).d

if (zmm3 == 0f)
    return zmm0

float zmm2[0x4]

if (arg4 == 0)
    int32_t rcx_2 = *(arg1 + 0x410)
    
    if (*(arg1 + 0x4e1) == 0)
        rcx_2 -= 1
    
    zmm2 = _mm_cvtepi32_ps(zx.o(rcx_2))
    zmm2[0] = zmm2[0] / zmm3
    zmm2[0] = zmm2[0] f* arg2.d
else
    if (*(arg1 + 0x458) s> 0)
        zmm0 = *(*(arg1 + 0x450) + sx.q(*(arg1 + 0x458)) * 0x14 - 0x14)
    
    arg2.d = arg2.d f/ zmm3
    int32_t arg_8 = 0
    arg2.d = arg2.d f* zmm0
    zmm2 = sub_141f5bc90(arg1 + 0x450, arg2, &arg_8)

void var_28
uint32_t var_18[0x4]
sub_140adf5d0(sub_141f64de0(arg1, &var_18, zmm2, arg3), &var_28)
int32_t var_20
return var_20
