// 函数: sub_141b9ebe0
// 地址: 0x141b9ebe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_44 = 1
bool cond:0 = arg2[1].b == 1
char var_24 = 1
int64_t var_20
int64_t* rcx = &var_20
int64_t var_40 = 0
int32_t var_38 = 0
var_20 = 0
int32_t var_18 = 0
int64_t* rcx_3

if (cond:0)
    int32_t zmm0 = *arg2
    int32_t var_48_1 = zmm0
    int32_t var_30_1 = 1
    sub_140692f90(rcx, &var_40)
    *arg1 = var_30_1
    arg1[3].b = var_24
    arg1[2] = zmm0
    *(arg1 + 0x10) = 0
    arg1[6] = 0
    sub_140692f90(&arg1[4], &var_20)
    sub_140745b20(&var_20)
    rcx_3 = &var_40
else
    int32_t var_48 = 0
    int32_t var_30 = 0
    int32_t var_28 = 0
    sub_140692f90(rcx, &var_40)
    sub_140745b20(&var_40)
    *arg1 = var_30
    arg1[3].b = var_24
    arg1[2] = var_28
    *(arg1 + 0x10) = 0
    arg1[6] = 0
    sub_140692f90(&arg1[4], &var_20)
    rcx_3 = &var_20

sub_140745b20(rcx_3)
return arg1
