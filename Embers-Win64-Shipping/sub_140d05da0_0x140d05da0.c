// 函数: sub_140d05da0
// 地址: 0x140d05da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *(arg1 + 0x80)
int64_t r10 = *(arg1 + 0x78)
int32_t r9_1 = *(arg2 + 8) - *(arg2 + 0x34)
int32_t rax = *(arg1 + 0x90)
int64_t var_30 = r10
void* var_28 = arg2
int32_t var_10 = rax
int128_t var_20 = zmm0

if (arg3 == 0)
    rax.b = r9_1 == 0
    return rax

int32_t var_38 = rax
int32_t rax_2 = *(arg3 + 8) - *(arg3 + 0x34)
int64_t var_58 = r10
void* var_50 = arg3
int128_t var_48 = zmm0

if (r9_1 == rax_2)
    return sub_140d09b90(&var_30, &var_58, arg4)

rax_2.b = 0
return rax_2
