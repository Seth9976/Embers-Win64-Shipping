// 函数: sub_1426c2180
// 地址: 0x1426c2180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = *(arg1 + 0xb0)

if (rax != 0)
    int64_t* rdi_1 = *(rax + 0x258)
    
    if (rdi_1 != 0)
        int64_t rax_1 = sub_1427303e0()
        int64_t r8_1 = *rdi_1
        rax = (*(r8_1 + 0x610))(rdi_1, rax_1, r8_1)
        uint64_t rdi_2 = rax
        
        if (rax != 0)
            void* rax_2 = *(arg1 + 0xd8)
            
            if (rax_2 != 0 && *(rax_2 + 0x60) s> 1)
                int64_t rax_4 = (*(*(rdi_2 + 0xb0) + 0x10))(rdi_2 + 0xb0, 2)
                *(arg1 + 0xe0) |= 1
                return rax_4
            
            rax = zx.q(*(arg1 + 0xe0))
            
            if ((rax.b & 1) != 0)
                *(arg1 + 0xe0) = rax.d & 0xfffffffe
                (*(*(rdi_2 + 0xb0) + 0x18))(rdi_2 + 0xb0, 2)
                
                if ((*(*(rdi_2 + 0xb0) + 0x28))(rdi_2 + 0xb0) != 0)
                    return sub_1426e8290(rdi_2)
                
                jump(*(*rdi_2 + 0x3f8))

return rax
