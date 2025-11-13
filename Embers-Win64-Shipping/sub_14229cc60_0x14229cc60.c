// 函数: sub_14229cc60
// 地址: 0x14229cc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *arg2
int32_t zmm1 = arg2[1]
int64_t rax = *arg1
int128_t zmm7 = arg3
float zmm0 = zmm3 f- zmm7.d
zmm3 = zmm3 f+ zmm7.d
int32_t var_44 = zmm1
float var_48 = zmm0
zmm0 = arg2[2]
float var_34 = zmm0
float var_3c = zmm3
(*(rax + 0x30))(arg1, &var_3c, &var_48, zmm3, arg5, 0, 0, 0, var_48, zmm0, zmm1)
zmm3 = arg2[1]
arg3 = *arg2
zmm1 = arg2[2]
int64_t rax_1 = *arg1
var_3c = arg3.d
int32_t var_34_1 = zmm1
var_48 = arg3.d
float var_44_1 = zmm3 f+ zmm7.d
(*(rax_1 + 0x30))(arg1, &var_48, &var_3c, arg4, arg5, 0, 0, 0, var_48, zmm1, zmm3 f- zmm7.d)
zmm3 = arg2[2]
arg3 = *arg2
zmm1 = arg2[1]
int64_t rax_2 = *arg1
var_3c = arg3.d
float var_34_2 = zmm3 f- zmm7.d
var_48 = arg3.d
int32_t var_44_2 = zmm1
return (*(rax_2 + 0x30))(arg1, &var_48, &var_3c, arg4, arg5, 0, 0, 0, var_48, zmm3 f+ zmm7.d, zmm1)
