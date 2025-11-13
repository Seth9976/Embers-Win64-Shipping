// 函数: sub_141228a60
// 地址: 0x141228a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2].q = arg2
int64_t* rcx = *(arg2 + 0x20)
int128_t var_18
(*(*rcx + 0x10))(rcx, &var_18)
int32_t var_c

if (not(var_c.d f> 0f))
    int32_t var_c_1 = 0x7f7fffff

*arg1 = var_18
arg1[1] = *(*(arg2 + 0x20) + 0x30)
*(arg1 + 0x28) ^= (zx.d(*(*(arg2 + 0x20) + 0x13c)) ^ *(arg1 + 0x28)) & 3
int32_t rdx_5 = ((zx.d(*(*(arg2 + 0x20) + 0x138)) u>> 2 ^ *(arg1 + 0x28)) & 4) ^ *(arg1 + 0x28)
*(arg1 + 0x28) = rdx_5
int32_t rcx_8 = ((zx.d(*(*(arg2 + 0x20) + 0x138)) u>> 2 ^ rdx_5) & 8) ^ rdx_5
*(arg1 + 0x28) = rcx_8
int32_t rdx_10 = ((zx.d(*(*(arg2 + 0x20) + 0x138)) << 2 ^ rcx_8) & 0x10) ^ rcx_8
*(arg1 + 0x28) = rdx_10
int32_t rcx_12 = ((zx.d(*(*(arg2 + 0x20) + 0x139)) ^ rdx_10) & 0x20) ^ rdx_10
*(arg1 + 0x28) = rcx_12
int32_t rdx_14 = ((zx.d(*(*(arg2 + 0x20) + 0x139)) ^ rcx_12) & 0x40) ^ rcx_12
*(arg1 + 0x28) = rdx_14
void* result = *(arg2 + 0x20)
*(arg1 + 0x28) = ((zx.d(*(result + 0x139)) << 3 ^ rdx_14) & 0x80) ^ rdx_14
return result
