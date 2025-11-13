// 函数: sub_140f8e410
// 地址: 0x140f8e410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0

if (*(arg1 + 0x29) == 0)
    int64_t rax
    rax.b = 0
    return rax

if (*(arg1 + 0x38) != 0)
    int64_t* rcx = *(arg1 + 0x30)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        if (*(arg1 + 0x38) != 0)
            int64_t* rcx_1 = *(arg1 + 0x30)
            char rax_4 = (*(*rcx_1 + 0x48))(rcx_1)
            *(arg1 + 0x28) = rax_4
            return rax_4
        
        *(arg1 + 0x28) = (*(*nullptr + 0x48))(0)

return zx.q(*(arg1 + 0x28))
