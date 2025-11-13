// 函数: sub_141145860
// 地址: 0x141145860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg2 + 0x188)
int64_t r9 = *(arg3 + 0x10)
int64_t var_58 = rbx
sub_141080be0(arg1, arg2, rbx, r9)
void* r8_1 = data_143a2dd48
int32_t var_68 = *(r8_1 + 0x60)
int32_t var_64 = *(r8_1 + 0x64)
int32_t var_60 = *(r8_1 + 0x68)
sub_141118890(arg1 + 0x118, arg2, rbx, &data_143e570b0, r8_1, &var_68, 0)
var_68.q = rbx
sub_1405eb490(arg2, &var_68, arg1 + 0x14a, &arg4[1], 0)
int128_t zmm1
zmm1.d = float.s(zx.q(data_1439b55b8 - 1))
zmm1.d = zmm1.d f* data_1439b55a8
float zmm6 = powf(2f, (zmm1 ^ data_142d3f780).d)
float zmm0_2 = tanf(data_1439b5b9c) + 1f
zmm1.d = arg4[1].d f/ zmm0_2
float arg_8 = zmm6 f* zmm1.d
sub_1405eb490(arg2, &var_68, arg1 + 0x150, &arg_8, 0)
sub_1405eb490(arg2, &var_68, arg1 + 0x156, &data_1439b55a8, 0)
int32_t arg_10 = __minss_xmmss_memss(data_1439b55ac, 0x477de800)
sub_1405eb490(arg2, &var_68, arg1 + 0x15c, &arg_10, 0)
int32_t arg_18 = *arg4
sub_1405eb490(arg2, &var_68, arg1 + 0x162, &arg_18, 0)
int32_t arg_20 = 0x3fb504f3
return sub_1405eb490(arg2, &var_58, arg1 + 0x168, &arg_20, 0)
