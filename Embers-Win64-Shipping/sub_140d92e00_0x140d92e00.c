// 函数: sub_140d92e00
// 地址: 0x140d92e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[4].b = (arg1[4].b & 0xfb) | 2
float zmm3 = *(arg2 + 0x2c)
float zmm2 = arg2[3].d
int128_t zmm7 = *arg2
int128_t zmm6 = *(arg2 + 4)
float zmm5 = zmm7.d f* *(arg2 + 0x1c)
zmm7.d = zmm7.d f* arg2[2].d
float zmm4 = zmm6.d f* *(arg2 + 0x24)
zmm6.d = zmm6.d f* *(arg2 + 0x28)
float arg_20 = zmm3
float arg_24 = zmm2
float zmm1 = zmm7.d f+ zmm6.d
float arg_18 = zmm5 + zmm3
zmm6.d = zmm6.d f+ zmm2
zmm7.d = zmm7.d f+ zmm2
float arg_10 = zmm4 + zmm3
int32_t arg_14 = zmm6.d
int32_t arg_1c = zmm7.d
float arg_8 = zmm5 + zmm4 + zmm3
float arg_c = zmm1 + zmm2
sub_140db27a0(arg1, &arg_20, &arg_18, &arg_10, &arg_8)
return arg1
