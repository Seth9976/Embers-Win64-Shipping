// 函数: sub_142199470
// 地址: 0x142199470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_1 = *(arg1 + 0x48)
uint32_t rdx = 0x60
uint64_t r8 = 2

if (r9_1 s>= 0)
    rdx = (r9_1 + 8) * 0xc
    
    if (r9_1 != 0)
        r8 = zx.q(r9_1 + 1)

if (*(arg1 + 0x128) s> 0)
    void* r9 = **(arg1 + 0x120)
    
    if (r9 != 0 && (*(r9 + 0x30) & 1) != 0)
        int32_t r8_1 = *(r9 + 0x34)
        uint32_t rcx_1 = (r8_1 + 1) * 0xc
        rdx = rdx + 8 + rcx_1
        
        if ((*(r9 + 0x108) & 1) != 0)
            rdx += rcx_1
        
        int32_t rax_4 = *(r9 + 0x150)
        int32_t rcx_2 = 1
        
        if (rax_4 != 0)
            rcx_2 = rax_4
        
        r8 = zx.q((r8_1 + 2) * rcx_2)
        
        if ((*(r9 + 0x15c) & 1) != 0)
            rdx += 4

if (*(arg1 + 0x90) != 0)
    return zx.q(rdx + (r8 << 2).d)

return zx.q(rdx)
