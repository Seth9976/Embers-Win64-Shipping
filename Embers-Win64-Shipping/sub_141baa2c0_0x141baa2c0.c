// 函数: sub_141baa2c0
// 地址: 0x141baa2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x128)
int32_t rax_5

if (rbx == 0)
    rax_5 = *(arg1 + 0x120)
else
    if (*(rbx + 0x2b8) != 0)
        int64_t* rcx = *(rbx + 0x2b0)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (*(rbx + 0x2b8) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(rbx + 0x2b0)
            
            *(rbx + 0x2a8) = (*(*rcx_1 + 0x48))(rcx_1)
    
    rax_5 = *(rbx + 0x2a8)

if (rax_5 s>= 0 && rax_5 s< *(arg1 + 0x110))
    return *(*(*(arg1 + 0x108) + (sx.q(rax_5) << 3)) + 0x30)

return 0
