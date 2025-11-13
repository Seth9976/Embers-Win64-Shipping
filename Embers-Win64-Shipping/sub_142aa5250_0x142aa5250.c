// 函数: sub_142aa5250
// 地址: 0x142aa5250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r9_1 = *(arg1 + 0x20)
int64_t rcx = *(arg1 + 0x28)

if (r9_1 != rcx)
    uint32_t rdx_1 = zx.d(*r9_1)
    *(arg1 + 0x20) = &r9_1[1]
    
    if (rcx != 0 || rdx_1 != 0)
        if ((rdx_1 & 0xfffffc00) == 0xd800 && &r9_1[1] != rcx)
            uint32_t rax_3 = zx.d(r9_1[1])
            
            if ((rax_3 & 0xfffffc00) == 0xdc00)
                rdx_1 = ((rdx_1 - 0xd7f7) << 0xa) + rax_3
                *(arg1 + 0x20) = &r9_1[2]
        
        return zx.q(rdx_1)
    
    *(arg1 + 0x20) = rcx

return 0xffffffff
