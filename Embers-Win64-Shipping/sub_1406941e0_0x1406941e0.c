// 函数: sub_1406941e0
// 地址: 0x1406941e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_140b1a780(&var_18, *arg1 + 0x108)
int64_t* rsi_1 = *arg1 + 0x108

if (rsi_1 != rax)
    int64_t rcx_1 = *rsi_1
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *rsi_1 = *rax
    *rax = 0
    rsi_1[1].d = rax[1].d
    *(rsi_1 + 0xc) = *(rax + 0xc)
    rax[1] = 0

int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rcx_3 = *arg1
(*(*rcx_3 + 0x2a8))(rcx_3, &var_18)
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*arg2 = 1
*(arg2 + 0xb0) = 0x20702
return arg2
