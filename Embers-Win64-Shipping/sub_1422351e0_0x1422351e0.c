// 函数: sub_1422351e0
// 地址: 0x1422351e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t zmm0 = *arg3

if (arg2 != 0)
    *(arg1 + 0x54) = zmm0
    *(arg1 + 0x5c) = arg3[1].d
else
    *(arg1 + 0x30) = zmm0
    *(arg1 + 0x38) = arg3[1].d

int64_t* var_20 = arg3
int32_t* var_28 = &arg_10
int32_t** var_10 = &var_28
void** (* var_18)(int64_t* arg1, int64_t* arg2) = j_sub_14222b1e0
return sub_142269c80(arg1 + 8, &var_18)
