// 函数: sub_14211de40
// 地址: 0x14211de40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int128_t var_68 = *arg2
int64_t var_58
sub_140596d10(&var_58, arg3)
int32_t var_44 = arg5
int32_t var_48 = arg4
char var_18 = arg9
char var_28 = arg7
int32_t var_24 = arg8
int64_t var_20 = arg10
int128_t var_38 = *arg6
int64_t result = sub_142117e50(arg1, &arg_20, &var_68)
int64_t rcx_2 = var_58

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

if (arg9 == 0)
    int64_t rdi_1 = sx.q(arg1[0xd].d)
    int32_t rax_5 = (rdi_1 + 1).d
    arg1[0xd].d = rax_5
    
    if (rax_5 s> *(arg1 + 0x6c))
        sub_1405a4f90(&arg1[0xc])
    
    result = arg1[0xc]
    *(result + rdi_1 * 0x10) = *arg2

return result
