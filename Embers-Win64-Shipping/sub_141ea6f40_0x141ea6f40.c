// 函数: sub_141ea6f40
// 地址: 0x141ea6f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_2

if ((arg1[0x66].b & 4) != 0)
    int64_t* rcx = arg1[0x51]
    rax_2 = (*(*rcx + 0x548))(rcx)

if ((arg1[0x66].b & 4) == 0 || rax_2 == 0)
    (*(*arg1 + 0x7a8))(arg1)

if ((arg1[0x66].b & 2) != 0)
    int64_t* rcx_2 = arg1[0x51]
    
    if ((*(*rcx_2 + 0x548))(rcx_2) != 0)
        *(arg1 + 0x33c) = *((*(*arg1 + 0x150))(arg1) + 0x520)

void* rax_8 = arg1[0x51]
char var_28 = *(rax_8 + 0x169)
sub_14248a190(arg1, arg2, *(rax_8 + 0x168))
int64_t* var_18 = arg1
char var_10 = arg2
char var_f = arg3
return sub_1405a9f90(&arg1[0x6e], &var_18)
