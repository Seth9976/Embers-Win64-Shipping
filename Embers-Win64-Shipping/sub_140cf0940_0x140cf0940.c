// 函数: sub_140cf0940
// 地址: 0x140cf0940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg7 + 0xb8)
int64_t rax_2

if (rcx == 0)
    rax_2 = arg6
else
    rax_2 = (*(*rcx + 0x120))(rcx) | arg6

int128_t var_18 = *arg2
sub_140cd3f40(arg1, &var_18, arg3, arg4, arg5, rax_2)
*arg1 = &data_142ea94c0
arg1[0xf] = arg7
*(arg1 + 0x3c) = *(arg7 + 0x58)
return arg1
