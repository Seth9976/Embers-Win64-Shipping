// 函数: sub_140f7b3c0
// 地址: 0x140f7b3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 1

if (*(arg1 + 0x11) == 0)
    int64_t rax
    rax.b = 1
    return rax

if (*(arg1 + 0x20) != 0)
    int64_t* rcx = *(arg1 + 0x18)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        if (*(arg1 + 0x20) != 0)
            int64_t* rcx_1 = *(arg1 + 0x18)
            char rax_4 = (*(*rcx_1 + 0x48))(rcx_1)
            *(arg1 + 0x10) = rax_4
            return rax_4
        
        *(arg1 + 0x10) = (*(*nullptr + 0x48))(0)

return zx.q(*(arg1 + 0x10))
