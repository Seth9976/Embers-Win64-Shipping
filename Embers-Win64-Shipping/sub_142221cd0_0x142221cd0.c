// 函数: sub_142221cd0
// 地址: 0x142221cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = arg3
float arg_10 = arg2
char* var_28 = &arg_18
int32_t* var_20 = &arg_10
float arg_20 = arg2 * 57.2957764f
float* var_18 = &arg_20
char** var_30 = &var_28
int64_t (* var_38)(int64_t* arg1, int64_t* arg2) = sub_142211d40
int64_t result = sub_14226a4e0(arg1 + 0xf0, &var_38)
*(arg1 + 0xc0) = arg_20

if (arg4 != 0)
    *(arg1 + 0xe) |= 8

return result
