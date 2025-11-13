// 函数: sub_1426f29d0
// 地址: 0x1426f29d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
float var_60[0x4]
int128_t* rax_1 = sub_142435fc0(arg2, &var_60, arg3)
float zmm6[0x4] = *rax_1
float zmm2[0x4] = *(rax_1 + 8)
int128_t zmm5 = *(rax_1 + 4)
zmm2[0] = zmm2[0] f+ *(rax_1 + 0x14)
zmm6[0] = zmm6[0] f+ *(rax_1 + 0xc)
zmm6[0] = zmm6[0] f- *(rax_1 + 0xc)
zmm2[0] = zmm2[0] f- *(rax_1 + 0x14)
int128_t zmm7
zmm7.d = zmm5.d f+ rax_1[1].d
zmm5.d = zmm5.d f- rax_1[1].d
float var_64 = zmm2[0]
arg3.o = zmm6
int64_t var_54 = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
float var_58 = zmm2[0]
float zmm0[0x4] = var_60
float var_4c = var_64
arg3.o = _mm_unpacklo_ps(arg3.o, zmm5.q)
zmm0[0].q = (arg3.o).q
*(arg1 + 8) = zmm0
arg1[3] = var_54
arg1[4].d = 1.d
return arg1
