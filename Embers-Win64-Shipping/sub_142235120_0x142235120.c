// 函数: sub_142235120
// 地址: 0x142235120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t var_48

if (arg2 != 0)
    int32_t rax_3 = *(arg1 + 0x5c)
    var_48 = *(arg1 + 0x54)
    *(arg1 + 0x60) = *arg3
    int32_t var_40_1 = rax_3
    *(arg1 + 0x68) = arg3[1].d
    *(arg1 + 0x6c) = *arg4
    *(arg1 + 0x74) = arg4[1].d
else
    int32_t rax = *(arg1 + 0x38)
    var_48 = *(arg1 + 0x30)
    *(arg1 + 0x3c) = *arg3
    int32_t var_40 = rax
    *(arg1 + 0x44) = arg3[1].d
    *(arg1 + 0x48) = *arg4
    *(arg1 + 0x50) = arg4[1].d

int64_t* var_28 = arg3
int64_t* var_18 = &var_48
int64_t* var_20 = arg4
int32_t* var_10 = &arg_10
int64_t** var_30 = &var_28
void** (* var_38)(int64_t* arg1, int64_t* arg2) = j_sub_14222b260
return sub_142269c80(arg1 + 8, &var_38)
