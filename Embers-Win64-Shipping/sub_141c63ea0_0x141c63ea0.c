// 函数: sub_141c63ea0
// 地址: 0x141c63ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx

if (*(*(arg1 + 0x18) + 0xc) s> *(*(arg1 + 0x88) + 0x354) || (*(*(arg1 + 8) + 0x358) & 2) == 0
        || *(*(arg1 + 0x10) + 0x104) != 1)
    rdx.b = 0
else
    rdx.b = 1

int64_t* rax_3 = *(arg1 + 0xa8)

if (rax_3 != 0)
    int64_t rcx = sx.q(*(rax_3 + 0x8c))
    
    if (rcx.d != 0xffffffff)
        rdx.b &= *(rcx + *(*rax_3 + 0x198))
        return zx.q(rdx.b)
    
    rdx.b &= 1

return zx.q(rdx.b)
