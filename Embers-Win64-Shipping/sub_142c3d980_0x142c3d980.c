// 函数: sub_142c3d980
// 地址: 0x142c3d980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_a8 = 1
char result = sub_142c3d590(arg1, arg2, 4, arg3, 1)

if (result == 0)
    return result

int64_t var_80_1 = *(arg8 + 8)
int32_t var_78_1 = *(arg8 + 0x10)
int64_t var_68_1 = *(arg7 + 8)
int32_t var_60_1 = *(arg7 + 0x10)
int64_t var_50_1 = *(arg6 + 8)
int32_t var_48_1 = *(arg6 + 0x10)
int64_t var_38_1 = *(arg5 + 8)
int32_t var_30_1 = *(arg5 + 0x10)
int64_t var_20_1 = *(arg4 + 8)
int32_t var_18_1 = *(arg4 + 0x10)
void* r8

if (zx.d(arg1[4]) << 8 != neg.d(zx.d(arg1[5])))
    r8 = &arg1[6]
else
    r8 = &data_144017550
    data_144017550.w = 0

int16_t* rcx_7 = *(arg2 + 0x18)
uint16_t rdx_1 = rcx_7.w - arg1.w
*(r8 + 1) = rdx_1.b
*r8 = (rdx_1 u>> 8).b
void var_58
var_a8.q = &var_58
void var_88
void var_70
void var_40
void var_28
return sub_142c3d240(rcx_7, arg2, &var_28, &var_40, var_a8, &var_70, &var_88)
