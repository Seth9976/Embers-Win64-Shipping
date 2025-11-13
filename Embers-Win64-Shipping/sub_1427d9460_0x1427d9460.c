// 函数: sub_1427d9460
// 地址: 0x1427d9460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_1427e4f10(arg1)

if (result == 0)
    return result

int128_t var_48
int128_t* rax = (*(arg3 + 0x18))(&var_48, arg1[6])
int64_t r9_1 = arg1[5]
int64_t r8 = arg1[1]
int64_t rdx_1 = *arg1
int64_t r9
int64_t var_50_1 = r9
int128_t var_28 = *rax
int64_t var_18_1 = rax[1].q
int32_t rax_1 = *(rax + 0x18)
int64_t zmm1 = arg1[4]
int64_t var_58_1 = arg1[8]
int64_t* rax_3 = arg1[7]
var_48 = *(arg1 + 0x10)
int64_t var_38_1 = zmm1

if (sub_1427dbef0(&var_48, rdx_1, r8, r9_1, &var_28, rax_3) == 0)
    *arg1[0xa] = 1

int64_t rcx_2 = arg1[6]
var_48 = var_28
int64_t var_38_2 = var_18_1
int32_t var_30_1 = rax_1
return (*(arg3 + 0x20))(rcx_2, &var_48)
