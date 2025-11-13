// 函数: sub_141f17710
// 地址: 0x141f17710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = *(arg1 + 0xb0)
float zmm5 = *(arg1 + 0xb4)
int128_t zmm6 = *(arg1 + 0xb8)
int128_t zmm7 = *(arg1 + 0x18c)
float zmm3 = zmm7.d f* *(arg1 + 0x40)
float zmm2 = zmm7.d f* *(arg1 + 0x50)
zmm7.d = zmm7.d f* *(arg1 + 0x60)
zmm3 = zmm3 * 0.5f
zmm2 = zmm2 * 0.5f
zmm7.d = zmm7.d f* 0.5f
float var_48 = zmm3 + zmm4
float var_3c = zmm4 - zmm3
float var_44 = zmm2 + zmm5
float zmm0 = zmm7.d f+ zmm6.d
float var_38 = zmm5 - zmm2
zmm6.d = zmm6.d f- zmm7.d
float var_40 = zmm0
int32_t var_34 = zmm6.d
sub_140acf9d0(arg2, arg3, &var_3c, &var_48)
return arg2
