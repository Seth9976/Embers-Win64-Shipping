// 函数: sub_14205e1b0
// 地址: 0x14205e1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg1 - 0x1f0)
void var_60
int128_t* rax = (*(r9 + 0x480))(arg1 - 0x1f0, &var_60, arg1 - 0x30, r9)
arg2[3].b = 1
float zmm6[0x4] = *rax
float zmm2[0x4] = *(rax + 8)
int128_t zmm5 = *(rax + 4)
zmm2[0] = zmm2[0] f+ *(rax + 0x14)
zmm6[0] = zmm6[0] f- *(rax + 0xc)
zmm6[0] = zmm6[0] f+ *(rax + 0xc)
zmm2[0] = zmm2[0] f- *(rax + 0x14)
int128_t zmm7
zmm7.d = zmm5.d f+ rax[1].d
zmm5.d = zmm5.d f- rax[1].d
float var_64 = zmm2[0]
float var_70 = zmm2[0]
*arg2 = (_mm_unpacklo_ps(zmm6, zmm5.q)).q
float temp0_1[0x4] = _mm_unpacklo_ps(zmm6, zmm7.q)
arg2[1].d = var_70
*(arg2 + 0xc) = temp0_1.q
*(arg2 + 0x14) = var_64
return arg2
