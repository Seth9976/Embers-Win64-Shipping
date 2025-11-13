// 函数: sub_141a67eb0
// 地址: 0x141a67eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg2 + 0xc) == 0 & sub_140b5b8a0(*(arg2 + 8), 0x13)) == 0)
    return 0

int32_t var_30 = 0xffffffff
int64_t var_20
__builtin_memset(&var_20, 0, 0x14)
int64_t var_2c = 0
int64_t arg_10 = 0
int64_t* rcx_1 = *(*arg3 + 8)
(*(*rcx_1 + 0x118))(rcx_1, &var_30)
int64_t rax_4 = var_20
int64_t var_40
int64_t var_18
sub_140596d10(&var_40, &var_18)
*arg1 = 0xffffffff
arg1[1] = 0
*(arg1 + 0x10) = rax_4
sub_140597df0(&arg1[6], &var_40)
int64_t rcx_4 = var_40
arg1[2] = 0

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t var_10
uint64_t result

if (var_10 == 0 || var_10 == 1)
    result = sub_1408d4dd0(&var_30)
    
    if (result != 0 && sub_140d226f0(result, sub_1425be5e0()) == 0)
        *(arg1 + 0x28) = result

int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

result.b = 1
return result
