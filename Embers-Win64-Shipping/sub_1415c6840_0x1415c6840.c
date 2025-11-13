// 函数: sub_1415c6840
// 地址: 0x1415c6840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = *(arg2 + 0x20)
float zmm2 = *(arg2 + 0x1c)
float zmm4 = *arg6
int128_t zmm6 = *(arg2 + 0x24)
int128_t zmm7 = arg6[1]
int128_t zmm8 = arg6[2]
float zmm3 = (zmm7.d f- *(arg2 + 0x14)) * zmm5 + (zmm4 f- *(arg2 + 0x10)) * zmm2
    + (zmm8.d f- *(arg2 + 0x18)) f* zmm6.d
zmm6.d = zmm6.d f* zmm3
zmm7.d = zmm7.d f- zmm5 * zmm3
zmm8.d = zmm8.d f- zmm6.d
float var_48 = zmm4 - zmm2 * zmm3
int32_t var_44 = zmm7.d
int32_t var_40 = zmm8.d
sub_1415c64e0(arg1, &var_48, arg3, arg4, arg5, arg6)
return arg1
