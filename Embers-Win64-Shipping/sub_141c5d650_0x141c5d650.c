// 函数: sub_141c5d650
// 地址: 0x141c5d650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x7f0)

if (rcx == 0 || (*(*rcx + 0x58))(rcx).b == 0)
    return 

int64_t* rcx_1 = *(arg1 + 0x7f0)
int32_t arg_8

if ((*(*rcx_1 + 0x60))(rcx_1, &arg_8).b == 0)
    return 

int32_t rsi_1 = 0

if (arg_8 u<= 0)
    return 

do
    int64_t var_78
    sub_141c4d6a0(&var_78)
    int64_t* rcx_3 = *(arg1 + 0x7f0)
    
    if ((*(*rcx_3 + 0x68))(rcx_3, zx.q(rsi_1), &var_78).b != 0)
        int64_t rbx_1 = sx.q(arg2[1].d)
        int32_t rax = (rbx_1 + 1).d
        arg2[1].d = rax
        
        if (rax s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t* rbx_3 = (rbx_1 << 4) + *arg2
        *rbx_3 = 0
        int64_t r14_1 = var_78
        int32_t var_70
        rbx_3[1].d = var_70
        
        if (var_70 != 0)
            sub_1405a4c70(rbx_3, var_70, 0)
            memcpy(*rbx_3, r14_1, var_70 * 2)
        else
            *(rbx_3 + 0xc) = 0
    
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    int64_t rcx_9 = var_78
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    rsi_1 += 1
while (rsi_1 u< arg_8)
