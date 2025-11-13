// 函数: sub_1428a5550
// 地址: 0x1428a5550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = sub_1428a50d0()

if (rax != 0)
    int32_t rdx_1 = *(rax + 0x204)
    int32_t rax_1 = *(rax + 0x200)
    
    if (rdx_1 != rax_1)
        int32_t r8_1 = rax_1
        
        do
            int64_t rcx_1 = sx.q(r8_1)
            
            if ((*(rax + (rcx_1 << 2)) & 1) != 0)
                break
            
            if ((*(rax + (rcx_1 << 2) + 0x100) & 1) != 0)
                sub_1428a6780(*(rax + (rcx_1 << 3) + 0x80))
                *(rax + (sx.q(*(rax + 0x200)) << 3) + 0x80) = 0
                r8_1 = *(rax + 0x200)
            
            *(rax + (sx.q(r8_1) << 2) + 0x100) = 0
            *(rax + (sx.q(*(rax + 0x200)) << 2)) = 0
            *(rax + (sx.q(*(rax + 0x200)) << 2) + 0x40) = 0
            *(rax + (sx.q(*(rax + 0x200)) << 3) + 0x140) = 0
            *(rax + (sx.q(*(rax + 0x200)) << 2) + 0x1c0) = 0xffffffff
            int32_t rax_8 = *(rax + 0x200)
            
            if (rax_8 s<= 0)
                rax_1 = 0xf
            else
                rax_1 = rax_8 - 1
            
            *(rax + 0x200) = rax_1
            r8_1 = rax_1
            rdx_1 = *(rax + 0x204)
        while (rdx_1 != rax_1)
        
        if (rdx_1 != rax_1)
            int64_t rax_9 = sx.q(rax_1)
            *(rax + (rax_9 << 2)) &= 0xfffffffe
            return 1

return 0
