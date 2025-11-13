// 函数: sub_140699590
// 地址: 0x140699590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
int64_t* rax = sub_1406a93a0(&var_18)
sub_140682070(*(arg1 + 8) + 0x198, rax)
int32_t i_2
int32_t i_1 = i_2
int64_t* rbx = var_18

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
    rbx = var_18

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t* rcx_5 = *(arg1 + 8)
(*(*rcx_5 + 0x2a8))(rcx_5, &var_18)
int64_t* rbx_1 = i_2.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*arg2 = 1
*(arg2 + 0xb0) = 0x20702
return arg2
