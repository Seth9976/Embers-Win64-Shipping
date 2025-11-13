// 函数: sub_140ade9e0
// 地址: 0x140ade9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = *(arg2 + 8)
int128_t zmm6
zmm6.d = (*(arg2 + 0x14)).d f- zmm7.d
int128_t zmm10
zmm10.d = float.s(rand())
zmm10.d = zmm10.d f* 3.05185094e-05f
zmm10.d = zmm10.d f* zmm6.d
zmm10.d = zmm10.d f+ zmm7.d
zmm7 = *(arg2 + 4)
zmm6.d = arg2[1].d.d f- zmm7.d
int128_t zmm8
zmm8.d = float.s(rand())
zmm8.d = zmm8.d f* 3.05185094e-05f
zmm8.d = zmm8.d f* zmm6.d
zmm6 = *(arg2 + 0xc)
zmm8.d = zmm8.d f+ zmm7.d
zmm7 = *arg2
int32_t rax_2 = rand()
zmm6.d = zmm6.d f- zmm7.d
arg1[1] = zmm8.d
arg1[2] = zmm10.d
*arg1 = float.s(rax_2) * 3.05185094e-05f f* zmm6.d f+ zmm7.d
return arg1
