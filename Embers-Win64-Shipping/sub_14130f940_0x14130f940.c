// 函数: sub_14130f940
// 地址: 0x14130f940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax_2 = sub_14139d290((*(*arg1 + 8))(arg1, 0))
int128_t zmm1 = rax_2[1]
*arg2 = *rax_2
int128_t zmm0 = rax_2[2]
arg2[1] = zmm1
zmm1 = rax_2[3]
arg2[2] = zmm0
zmm0 = rax_2[4]
arg2[3] = zmm1
arg2[4] = zmm0
zmm0 = data_14399f5e0
int32_t rax_4 = *(arg2 + 0x34) & 0xfffeffff
*(arg2 + 0x28) = 1
*(arg2 + 0x38) = 0
*(arg2 + 0x34) = rax_4 | 1
arg2[4].q = u"DOFRecombine"
*(arg2 + 0x48) = 0
*arg2 = 1.o
arg2[1].d = zmm0:0xc.d
return arg2
