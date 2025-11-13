// 函数: sub_1428a54c0
// 地址: 0x1428a54c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
void* rax = sub_1428a50d0()

if (rax != 0)
    int32_t rax_2 = *(rax + 0x204)
    
    if (rax_2 != *(rax + 0x200))
        int32_t rax_4 = (rax_2 + 1) & 0x8000000f
        
        if (rax_4 s< 0)
            rax_4 = ((rax_4 - 1) | 0xfffffff0) + 1
        
        return zx.q(*(rax + (sx.q(rax_4) << 2) + 0x40))

return 0
