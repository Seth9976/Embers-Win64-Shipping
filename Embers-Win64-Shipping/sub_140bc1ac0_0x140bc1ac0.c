// 函数: sub_140bc1ac0
// 地址: 0x140bc1ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 != 0)
    sub_140ac59f0(arg2)

sub_140a99e20(arg2, &data_14399eba0)
int64_t* rcx_2 = *(arg2 + 0x108)
*(arg2 + 0x108) = 0
int64_t* rax = arg1[1]
int64_t* var_10 = rcx_2

if (rax != &var_10)
    int64_t* rbx_1 = *rax
    *rax = rcx_2
    
    if (rbx_1 != 0)
        int32_t rax_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_1 == 1)
            sub_140a99090(rbx_1)
            j_sub_140a74f90(rbx_1)
else if (rcx_2 != 0)
    int32_t rax_2 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (rax_2 == 1)
        sub_140a99090(var_10)
        j_sub_140a74f90(var_10)

int64_t* rcx_6 = *arg1
(*(*rcx_6 + 0x10))(rcx_6)
return sub_140a980e0(arg2) __tailcall
