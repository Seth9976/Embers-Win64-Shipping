// 函数: sub_141a37ca0
// 地址: 0x141a37ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 == 2 || *(arg4 + 8) == 2)
    return 

int128_t var_68
sub_140d3a3a0(&var_68, arg2)
double zmm1_1[0x2] = *arg3
int128_t zmm0_1 = *arg4
double var_60_1[0x2] = zmm1_1
void** const var_48 = &data_14302f438
int128_t var_78 = zmm0_1
zmm0_1 = var_68
double temp0_1[0x2] = _mm_unpackhi_pd(zmm1_1, zmm1_1[0])
int32_t arg_20 = 0xffffffff
int32_t arg_24 = 0
int128_t var_38_1 = zmm0_1
int128_t* var_40_1 = arg1 + 0x290
int64_t var_28_1 = temp0_1.q
int32_t var_20_1 = arg5.d
sub_141a37e10(arg1 + 0x290, &var_78, &var_48, arg_20.q)

if (*sub_140910250(arg1 + 0x1e0, &arg_20, arg2 + 0x28) != 0xffffffff)
    return 

int128_t zmm0_2 = *(arg2 + 0x90)
var_78 = zmm0_2
var_78:4.d = (zmm0_2.q u>> 0x20).d - *(arg2 + 0xa0)
var_78:0xc.d = (var_78:8.q u>> 0x20).d + *(arg2 + 0xa4)
var_68 = var_78
sub_141a28c90(arg1 + 0x1e0, arg2 + 0x28, &var_68)
sub_141a56880(arg1 + 0xa0, &var_78)
sub_141a529c0(arg2, &arg_20)
var_78:8.d = 1
var_78.q = &arg_20
var_68 = var_78
sub_141a61630(arg1 + 0xd0, &var_68)
