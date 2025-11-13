// 函数: sub_142423810
// 地址: 0x142423810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x30)

for (void* rdi_2 = &i[sx.q(*(arg1 + 0x38)) * 2]; i != rdi_2; i = &i[2])
    int64_t var_28
    sub_140b2f8b0(&var_28, i)
    char rax = sub_140b48320(&var_28, arg2, arg3)
    int64_t var_18
    
    if (var_18 != 0)
        sub_140a74f90(var_18)
    
    int64_t rcx_3 = var_28
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    if (rax != 0)
        return 1

return 0
