// 函数: sub_141827da0
// 地址: 0x141827da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe3548
arg1[1] = &data_142fe3578
int64_t* rcx = arg1[0xc]

if (rcx != 0)
    (*(*rcx + 0x18))(rcx)
    int64_t* rcx_1 = arg1[0xc]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x20))(rcx_1, 1)
    
    arg1[0xc] = 0

sub_140596eb0(&arg1[0x20])
int32_t i_1 = arg1[0x15].d
int64_t* rbx = arg1[0x14]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *rbx
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0x14]

if (rbx != 0)
    sub_140a74f90(rbx)

DeleteCriticalSection(&arg1[0xf])
sub_141822ac0(&arg1[2])
arg1[1] = &data_142d56fa0
*arg1 = &data_142d565e8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
