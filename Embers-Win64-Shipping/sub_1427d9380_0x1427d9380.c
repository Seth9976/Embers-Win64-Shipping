// 函数: sub_1427d9380
// 地址: 0x1427d9380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_1427e4f10(arg1)

if (result == 0)
    return result

int128_t var_28
int128_t* rax = (*(arg3 + 0x18))(&var_28, arg1[6])
int64_t r9_1 = arg1[5]
int64_t r8 = arg1[1]
int64_t rdx_1 = *arg1
int64_t r9
int64_t var_50_1 = r9
int128_t var_48 = *rax
int64_t var_58_1 = arg1[8]
int64_t* rax_2 = arg1[7]
int64_t var_38_1 = rax[1].q
int64_t zmm1 = arg1[4]
var_28 = *(arg1 + 0x10)
int64_t var_18_1 = zmm1

if (sub_1427dc020(&var_28, rdx_1, r8, r9_1, &var_48, rax_2) == 0)
    *arg1[0xa] = 1

int64_t rcx_2 = arg1[6]
var_28 = var_48
int64_t var_18_2 = var_38_1
return (*(arg3 + 0x20))(rcx_2, &var_28)
