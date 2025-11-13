// 函数: sub_141f36dd0
// 地址: 0x141f36dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0 = *arg3
int32_t var_20 = arg3[1].d
int64_t rax_1 = *arg1
int128_t zmm6 = arg4
int64_t var_28 = zmm0
int32_t var_38
(*(rax_1 + 0x518))(zmm0, &var_38, &var_28)
float zmm1 = *arg3
arg4.d = zmm6.d f* 0.5f
float zmm2 = *(arg3 + 4)
float zmm4 = arg3[1].d
zmm0.d = var_38.d f- zmm1
zmm0.d = zmm0.d f* arg4.d
zmm0.d = zmm0.d f+ zmm1 f* zmm6.d
*arg2 = zmm0.d
int32_t var_30
zmm0.d = var_30.d f- zmm4
zmm0.d = zmm0.d f* arg4.d
zmm0.d = zmm0.d f+ zmm4 f* zmm6.d
float var_34
arg2[1] = (var_34 - zmm2) f* arg4.d + zmm2 f* zmm6.d
arg2[2] = zmm0.d
return arg2
