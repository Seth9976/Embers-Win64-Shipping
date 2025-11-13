// 函数: sub_1428a4e50
// 地址: 0x1428a4e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = sub_1428a50d0()

if (rax != 0)
    int32_t rcx_1 = *(rax + 0x204)
    
    if (rcx_1 != *(rax + 0x200))
        int32_t rcx_3 = (rcx_1 + 1) & 0x8000000f
        
        if (rcx_3 s< 0)
            rcx_3 = ((rcx_3 - 1) | 0xfffffff0) + 1
        
        int64_t rax_2 = sx.q(rcx_3)
        int32_t rbp = *(rax + (rax_2 << 2) + 0x40)
        *(rax + 0x204) = rcx_3
        *(rax + ((rax_2 + 0x10) << 2)) = 0
        void* rdi = rax + (rax_2 << 2)
        
        if ((*(rdi + 0x100) & 1) != 0)
            sub_1428a6780(*(rax + ((rax_2 + 0x10) << 3)))
            *(rax + ((rax_2 + 0x10) << 3)) = 0
        
        *(rdi + 0x100) = 0
        return zx.q(rbp)

return 0
