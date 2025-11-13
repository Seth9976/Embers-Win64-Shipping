// 函数: ??$common_getenv_nolock@_W@@YAPEA_WQEB_W@Z
// 地址: 0x14271af10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426392c0(arg1, arg2)
arg1[7].b = 0x7f
*arg1 = &data_143482870
arg1[5] = &data_143482b28
sub_1426c5390(&arg1[0xe])
arg1[0x17] = 0
arg1[0x18].d = 0
arg1[0x19] = 0
arg1[0x1a].d = 0
arg1[0x1b] = 0
arg1[0x1c] = 0
*(arg1 + 0x3c) &= 0xfffffff7
void (* var_18)(int64_t* arg1, int64_t* arg2) = sub_14271dfc0
int32_t var_10 = 0
void*** rax = sub_140a84c80(0, 0x30, 0)

if (rax != 0)
    *rax = &data_143474f80
    sub_140d3a3a0(&rax[1], arg1)
    *(rax + 0x10) = var_18.o
    rax[5] = sub_140a387b0()
    *rax = &data_143474fd8

if (&var_18 != &arg1[0x17])
    if (rax != 0)
        (*rax)[8](rax, &arg1[0x17])
    else if (arg1[0x18].d != 0)
        int64_t* rcx_3 = arg1[0x17]
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x38))(rcx_3, 0)
            int64_t rcx_4 = arg1[0x17]
            
            if (rcx_4 != 0)
                arg1[0x17] = sub_140a84c80(rcx_4, 0, 0)
            
            arg1[0x18].d = 0

if (rax != 0)
    (*rax)[7](rax, 0)
    int64_t rax_6 = sub_140a84c80(rax, 0, 0)
    
    if (rax_6 != 0)
        sub_140a74f90(rax_6)

return arg1
