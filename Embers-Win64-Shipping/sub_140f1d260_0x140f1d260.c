// 函数: sub_140f1d260
// 地址: 0x140f1d260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140f497f0(arg2, arg3) != 0)
    return 0

int64_t r15

if (arg2[4] == 0)
    r15.b = 0
else
    int64_t* rcx_1 = *(arg2 + 8)
    
    if (rcx_1 == 0)
        r15.b = 0
    else if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
        r15.b = 0
    else
        r15.b = 1

int64_t rbp

if (arg3[4] == 0)
    rbp.b = 0
else
    int64_t* rcx_2 = *(arg3 + 8)
    
    if (rcx_2 == 0)
        rbp.b = 0
    else if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
        rbp.b = 0
    else
        rbp.b = 1

*arg2 = *arg3
arg2[1].b = arg3[1].b
sub_140692f90(&arg2[2], &arg3[2])
char rdx_2 = arg4 | 4

if (r15.b == rbp.b)
    rdx_2 = arg4

sub_140e19ef0(arg1, rdx_2)
int64_t result
result.b = 1
return result
