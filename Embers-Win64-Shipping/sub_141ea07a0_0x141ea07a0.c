// 函数: sub_141ea07a0
// 地址: 0x141ea07a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t r9 = *(arg2 + 0x78)
int128_t zmm0 = *(arg2 + 0x80)
int64_t var_38 = r9
void* var_30 = arg1
int32_t var_18 = *(arg2 + 0x90)
int64_t arg_8
int64_t* var_50 = &arg_8
int64_t (* var_58)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = sub_140cf2f50
int64_t arg_20
int64_t* var_40 = &arg_20
int64_t (* var_48)(int64_t* arg1, int64_t* arg2) = sub_140cf2f40
arg_8 = r9
arg_20 = r9
int128_t var_28 = zmm0
int32_t rax_2
rax_2.b = sub_141e9f780(arg1, arg3, &var_28, &var_48, &var_58) != 0xffffffff
return rax_2
