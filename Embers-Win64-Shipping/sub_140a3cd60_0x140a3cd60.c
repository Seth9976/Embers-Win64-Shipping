// 函数: sub_140a3cd60
// 地址: 0x140a3cd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int64_t* rdi = *arg1
*arg1 = *arg2
*arg2 = 0

if (rdi != 0)
    int32_t rax_1 = *(rdi + 0xc)
    *(rdi + 0xc) -= 1
    
    if (rax_1 == 1)
        sub_140a99090(rdi)
        j_sub_140a74f90(rdi)

return arg1
