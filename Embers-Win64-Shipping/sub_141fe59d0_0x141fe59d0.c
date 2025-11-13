// 函数: sub_141fe59d0
// 地址: 0x141fe59d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_141a1d730(arg1 + 0x38, &var_18, arg3, &data_143dbb1f8)
uint32_t rcx_1 = zx.d(*(arg1 + 0x54))
int32_t var_10
int64_t zmm0

if (rcx_1 == 1)
    zmm0 = var_18
    *arg2 = zmm0.d
    *(arg2 + 4) = zmm0.d
    arg2[1].d = var_10.d
    return arg2

int32_t var_14

if (rcx_1 == 2)
    int32_t zmm1 = var_18
    *arg2 = zmm1
    *(arg2 + 4) = var_14.d
    arg2[1].d = zmm1
    return arg2

if (rcx_1 == 3)
    *arg2 = var_18.d
    *(arg2 + 4) = var_14
    arg2[1].d = var_14
    return arg2

if (rcx_1 != 4)
    *arg2 = var_18.q
    arg2[1].d = var_10
    return arg2

zmm0 = var_18
*arg2 = zmm0.d
*(arg2 + 4) = zmm0.d
arg2[1].d = zmm0.d
return arg2
