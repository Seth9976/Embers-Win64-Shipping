// 函数: sub_140949bf0
// 地址: 0x140949bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14215cf50(arg1, arg2)
*arg1 = &data_142e26130
__builtin_memset(&arg1[6], 0, 0x20)
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
arg1[0xb] = 0
arg1[0xc].d = 0
arg1[0xd] = 0
arg1[0xe] = 0
void*** rax = sub_140a84c80(0, 0x30, 0)

if (rax != 0)
    *rax = &data_142e34428
    sub_140d3a3a0(&rax[1], arg1)
    rax[2] = sub_14096dbd0
    rax[4] = sub_140a387b0()
    *rax = &data_142e34480

void var_18

if (&var_18 != &arg1[0xb])
    if (rax != 0)
        (*rax)[8](rax, &arg1[0xb])
    else if (arg1[0xc].d != 0)
        int64_t* rcx_2 = arg1[0xb]
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x38))(rcx_2, 0)
            int64_t rcx_3 = arg1[0xb]
            
            if (rcx_3 != 0)
                arg1[0xb] = sub_140a84c80(rcx_3, 0, 0)
            
            arg1[0xc].d = 0

if (rax != 0)
    (*rax)[7](rax, 0)
    int64_t rax_6 = sub_140a84c80(rax, 0, 0)
    
    if (rax_6 != 0)
        sub_140a74f90(rax_6)

return arg1
