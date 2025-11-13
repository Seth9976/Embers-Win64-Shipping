// 函数: sub_141f8b960
// 地址: 0x141f8b960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28
(*(*arg1 + 0x480))(arg1, &var_28, &data_143dbb0c0)
int128_t zmm1 = var_28
int32_t var_24
int128_t zmm3 = var_24
int128_t zmm2 = zmm1
int32_t var_1c
zmm1.d = zmm1.d f- var_1c
zmm2.d = zmm2.d f+ var_1c
zmm2.d = zmm2.d f- zmm1.d
zmm1 = zmm3
int32_t var_18
zmm3.d = zmm3.d f- var_18
zmm1.d = zmm1.d f+ var_18
*arg2 = zmm2.d
int32_t var_20
zmm2 = var_20
zmm1.d = zmm1.d f- zmm3.d
int32_t var_14
zmm3.d = zmm2.d f+ var_14
zmm2.d = zmm2.d f- var_14
arg2[1] = zmm1.d
zmm3.d = zmm3.d f- zmm2.d
arg2[2] = zmm3.d
return arg2
