// 函数: sub_141be3290
// 地址: 0x141be3290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg4

if (*(arg1 + 0x490) != 0)
    int64_t* rcx = *(arg1 + 0x488)
    
    if (rcx != 0)
        int32_t rax
        rax, arg4 = (*(*rcx + 0x28))(rcx)
        
        if (rax.b != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0x490) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0x488)
            
            rax, arg4 = (*(*rcx_1 + 0x48))(rcx_1)
            *(arg1 + 0x480) = rax

if (*(arg1 + 0x480) == 0)
    return 

arg4.b = rdi != 3
(*(*(arg1 + 0x4f8) + 0x28))(arg1 + 0x4f8, *arg2, zx.q(arg3), arg4)
(*(*(arg1 + 0x4f8) + 0x40))(arg1 + 0x4f8, zx.q(rdi))
