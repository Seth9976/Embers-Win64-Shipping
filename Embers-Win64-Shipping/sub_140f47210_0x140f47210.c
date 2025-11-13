// 函数: sub_140f47210
// 地址: 0x140f47210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(*(arg1 + 0x3a8) + 0x4f8)
int128_t zmm6
zmm6.d = 1f - (*(r8 + 0x2d4) f+ *(r8 + 0x2d0))
void arg_8
int64_t* rax_1 = sub_140e13cf0(*(arg1 + 0x398), &arg_8)
float zmm1 = *(rax_1 + 4)

if (*(arg1 + 0x418) != 1)
    zmm1 = *rax_1

int32_t var_24 = 0x3f800000
int32_t var_20 = 0x3f800000
float zmm0_1[0x4] = 0x3f800000.o
float temp0[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x93)
temp0[0] = zmm1 f* zmm6.d * 0.03125f
*arg2 = _mm_shuffle_ps(temp0, temp0, 0x39)
arg2[1][0].b = 0
*(arg2 + 0x18) = 0.0
arg2[2][0].q = 0.0
return arg2
