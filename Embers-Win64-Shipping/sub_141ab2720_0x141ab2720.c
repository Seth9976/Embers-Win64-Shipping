// 函数: sub_141ab2720
// 地址: 0x141ab2720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (not(9.99999975e-06f f< *(arg1 + 0x30)))
    return sub_141e1c570(arg1 + 0x10, arg2, arg3)

void var_68
sub_140dd5b90(&var_68, *arg2)
*arg2
bool cond:0_1 = arg2[8].b != 0
int64_t var_60
__builtin_memset(&var_60, 0, 0x33)
bool var_28_1 = cond:0_1
int32_t zmm1
float zmm6_1[0x4]
zmm1, zmm6_1 = sub_141e295c0(&var_68)
int32_t zmm2 = *(arg1 + 0x2c)

if (not(zmm2 f<= zmm6_1[0]))
    zmm6_1 = sub_141e1c570(arg1 + 0x10, &var_68, zmm1, zmm2)
    zmm2 = *(arg1 + 0x2c)

int64_t var_48
return sub_141e0cc70(*arg2, arg1 + 0x20, &var_60, &var_48, zmm6_1, zmm2, &arg2[1], &arg2[4], 
    *(arg1 + 0x30), *(arg1 + 0x34))
