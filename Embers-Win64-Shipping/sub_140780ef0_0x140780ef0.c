// 函数: sub_140780ef0
// 地址: 0x140780ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
sub_140780ab0(&arg1[1], &arg2[1])
sub_140780ab0(&arg1[3], &arg2[3])
arg1[5] = arg2[5]
arg1[6].d ^= (arg1[6].d ^ arg2[6].d) & 1
int32_t rcx_5 = ((arg1[6].d ^ arg2[6].d) & 2) ^ arg1[6].d
arg1[6].d = rcx_5
int32_t rax_8 = ((rcx_5 ^ arg2[6].d) & 4) ^ rcx_5
arg1[6].d = rax_8
int32_t rcx_9 = ((rax_8 ^ arg2[6].d) & 8) ^ rax_8
arg1[6].d = rcx_9
int32_t rdx_5 = ((rcx_9 ^ arg2[6].d) & 0x10) ^ rcx_9
arg1[6].d = rdx_5
arg1[6].d = ((rdx_5 ^ arg2[6].d) & 0x20) ^ rdx_5

if (&arg1[7] != &arg2[7])
    sub_140780e10(&arg1[7], &arg2[7])
    
    if (arg2[0xf] == 0)
        memmove(&arg1[0xe], &arg2[0xe], 4)
    
    int64_t rcx_12 = arg1[0xf]
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    arg1[0xf] = arg2[0xf]
    arg2[0xf] = 0
    arg1[0x10].d = arg2[0x10].d
    arg2[0x10].d = 0

return arg1
