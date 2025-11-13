// 函数: sub_141bb90a0
// 地址: 0x141bb90a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax

if (arg2 != 0 && ((zx.q(*(*(arg2 + 8) + 0x10)) u>> 0x10).b & 1) != 0)
    rax = sub_141c18780()
    
    if (rax != 0)
        int64_t rcx_2 = sx.q(*(rax + 0x38))
        void* rax_1 = *(arg2 + 0x78)
        
        if (rcx_2.d s> *(rax_1 + 0x38) || *(*(rax_1 + 0x30) + (rcx_2 << 3)) != rax + 0x30)
            return 0
        
        int64_t rax_2
        rax_2.b = 1
        return rax_2

rax.b = 0
return rax
