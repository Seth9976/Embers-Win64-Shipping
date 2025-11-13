// 函数: sub_140e154c0
// 地址: 0x140e154c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x910)
int32_t arg_8 = 0
int32_t arg_18 = 0
int32_t arg_20 = 0
int32_t var_18 = 0
uint128_t zmm0
uint128_t zmm1

if (rcx != 0 && (*(*rcx + 0x88))(rcx, &arg_8, &arg_18, &arg_20, &var_18) != 0)
    int32_t rcx_1 = arg_8
    int32_t rdx_1 = arg_18
    int32_t rcx_2 = rcx_1 + arg_20
    *arg2 = _mm_cvtepi32_ps(zx.o(rcx_1)).d
    int32_t rcx_3 = var_18
    zmm0 = _mm_cvtepi32_ps(zx.o(rcx_2))
    zmm1 = _mm_cvtepi32_ps(zx.o(rdx_1))
    arg2[2] = zmm0.d
    zmm0 = _mm_cvtepi32_ps(zx.o(rcx_3 + rdx_1))
    arg2[1] = zmm1.d
    arg2[3] = zmm0.d
    return arg2

float zmm2
float zmm3

if ((*(arg1 + 0x779) & 2) == 0)
    zmm3 = *(arg1 + 0x790)
    zmm0 = *(arg1 + 0x794)
    zmm2 = zmm3 f+ *(arg1 + 0x7a0)
    zmm1.d = zmm0.d f+ *(arg1 + 0x7a4)
else
    zmm1 = *(arg1 + 0x7a4)
    zmm0 = zx.o(0)
    zmm2 = *(arg1 + 0x7a0)
    zmm3 = (zx.o(0)).d

arg2[2] = zmm2
arg2[3] = zmm1.d
*arg2 = zmm3
arg2[1] = zmm0.d
return arg2
