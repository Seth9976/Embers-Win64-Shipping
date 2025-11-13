// 函数: sub_141be5180
// 地址: 0x141be5180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t result = *arg2
*(arg1 + 0x38) = result
void* rcx = *(arg1 + 0x68)

if (rcx == 0)
    return result

*(rcx + 0x38) = 1
*(rcx + 0x28) = result
int64_t var_20 = 0
int32_t var_18_1 = 0
int128_t result_1 = result
char var_28_1 = 1
sub_140692f90(rcx + 0x40, &var_20)
return sub_140745b20(&var_20)
