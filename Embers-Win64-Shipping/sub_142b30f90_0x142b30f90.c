// 函数: sub_142b30f90
// 地址: 0x142b30f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg3
int32_t r8 = arg3.d & 3
uint32_t r11 = 0x500
uint32_t r9

if (r8 != 2)
    r9 = 0x500
else
    r9 = zx.d((rax s>> 0x30).w)

if (r8 u> 1)
    do
        int32_t rax_2 = (rax s>> 0x1c).d & 0xfffff
        
        if (rax_2 s>= *(arg1 + 0x250))
            rax = 0
        else
            rax = *(*(arg1 + 0x260) + (zx.q(rax_2) << 3))
    while ((rax.b & 3) u> 1)

if ((rax.b u>> 3 & 1) == 0)
    int32_t rdx_4 = rax.d & 3
    
    if (rdx_4 == 1)
        r11 = zx.d((rax s>> 0x30).w)
    
    if (rdx_4 != 0)
        do
            int32_t rax_6 = (rax s>> 0x1c).d & 0xfffff
            
            if (rax_6 s>= *(arg1 + 0x250))
                rax = 0
            else
                rax = *(*(arg1 + 0x260) + (zx.q(rax_6) << 3))
        while ((rax.b & 3) u> 0)
    
    if ((rax.b u>> 3 & 1) == 0)
        int32_t rax_8 = (rax s>> 0x20).d
        
        if (arg4 != 1)
            return sub_142b794d0(arg1 + 0x30, rax_8, r11, r9) __tailcall
        
        return sub_142b79370(arg1 + 0x30, rax_8, r11) __tailcall

return 0x100
