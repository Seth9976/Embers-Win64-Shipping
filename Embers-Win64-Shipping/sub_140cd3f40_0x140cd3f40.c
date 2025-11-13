// 函数: sub_140cd3f40
// 地址: 0x140cd3f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = *arg2
sub_140cacf00(arg1, &var_18, arg3, arg4)
int64_t* rbx = nullptr
arg1[7] = 1
arg1[9].w = 0
*arg1 = &data_142e9f870
arg1[8] = arg6
*(arg1 + 0x4a) = 0
*(arg1 + 0x4c) = arg5
__builtin_memset(&arg1[0xa], 0, 0x28)
int64_t rax_4

if (sub_140cc16a0(&arg1[2], sub_140d41340()) == 0)
    rax_4 = 0
else
    rax_4 = arg1[2]

if (rax_4 != 0)
    if (sub_140cc16a0(&arg1[2], sub_140bdf8f0()) != 0)
        rbx = arg1[2]
    
    (*(*rbx + 0x260))(rbx, arg1)
    return arg1

sub_140ccfa10()

if (sub_140cc1670(&arg1[2], &data_1439a9d90) != 0)
    rbx = arg1[2]

(*(*rbx + 0x30))(rbx, arg1)
return arg1
