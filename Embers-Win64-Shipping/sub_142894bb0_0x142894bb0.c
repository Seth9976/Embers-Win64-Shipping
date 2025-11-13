// 函数: sub_142894bb0
// 地址: 0x142894bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = sub_142890ec0(arg1)

if (arg2 != 8)
    if (arg2 != 0)
        return 0xffffffff
    
    *(rax + 0x1f0) = 0
    *(rax + 0x1f8) = 0
else
    void* rax_1 = sub_142890ec0(arg4)
    int64_t rax_2 = *(rax + 0x1f0)
    
    if (rax_2 != 0)
        if (rax_2 != rax)
            return 0
        
        *(rax_1 + 0x1f0) = rax_1
    
    int64_t rdx = *(rax + 0x1f8)
    
    if (rdx != 0)
        if (rdx != rax + 0xf8)
            return 0
        
        *(rax_1 + 0x1f8) = rax_1 + 0xf8

return 1
