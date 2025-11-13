// 函数: sub_14183ecf0
// 地址: 0x14183ecf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0xf8)
int32_t r8 = 0

for (void* r14_2 = sx.q(*(arg1 + 0x100)) * 0x60 + i; i != r14_2; i += 0x60)
    void* rcx = *(i + 0x48)
    void* r10_1 = rcx + sx.q(*(i + 0x50)) * 0x18
    
    while (rcx != r10_1)
        int32_t rax_8 = r8 + 1
        
        if (((*(rcx + 4) ^ arg2[1]) | (*(rcx + 8) ^ arg2[2]) | (*(rcx + 0xc) ^ arg2[3])
                | (*arg2 ^ *rcx)) != 0)
            rax_8 = r8
        
        rcx += 0x18
        r8 = rax_8

return zx.q(r8)
