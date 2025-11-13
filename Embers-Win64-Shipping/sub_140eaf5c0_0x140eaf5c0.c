// 函数: sub_140eaf5c0
// 地址: 0x140eaf5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_10
sub_140eaf230(arg1, &arg_10, arg2)
int128_t zmm4 = arg2[9]
float zmm3 = arg2[0xa]
int128_t zmm2
zmm2.d = 1f / (zmm3 f* arg2[7] - zmm4.d f* arg2[8])
zmm4.d = zmm4.d f* zmm2.d
zmm3 = zmm3 f* zmm2.d
zmm4 ^= data_142d3f780
zmm2 = zmm4
zmm4.d = zmm4.d f* *(arg3 + 0x1c)
zmm2.d = zmm2.d f* arg2[0xc]
zmm2.d = (zmm2 ^ data_142d3f780).d f- zmm3 f* arg2[0xb]
zmm4.d = zmm4.d f+ zmm3 f* *(arg3 + 0x18)
zmm4.d = zmm4.d f+ zmm2.d
zmm4.d = zmm4.d f- arg_10 * *arg4
return zmm4.d
