// 函数: sub_141c26430
// 地址: 0x141c26430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx
int512_t zmm1_1
int128_t zmm6_1
rdx, zmm1_1, zmm6_1 = sub_141c26ec0(arg1)
zmm1_1.o = zmm6_1
int512_t zmm1_2
int128_t zmm6_2
zmm1_2, zmm6_2 = sub_141ea1880(arg1, rdx, arg3)
zmm1_2.o = zmm6_2
int64_t result = (*(*arg1 + 0x538))(arg1, zmm1_2, arg3)
arg1[0x109].b &= 0xfe
return result
