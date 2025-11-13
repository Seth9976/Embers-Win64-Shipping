// 函数: sub_142b7f7e0
// 地址: 0x142b7f7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x188)

if (test_bit(arg2, 8))
    return sub_142a959a0(*(rcx + 0x20), arg2 u>> 0xd) __tailcall

void* rax_1 = sub_142ae72d0(rcx + 0x68, arg2 u>> 0xd)

if (*(rax_1 + 0x48) == 1)
    void* rdi_1 = nullptr
    *(rax_1 + 0x48) = sub_142b7d6c0(*(arg1 + 0x188), rax_1, arg3)
    
    if (*arg3 == 0xf)
        *arg3 = 0
        sub_142b7e2c0(*(arg1 + 0x188))
        *(rax_1 + 0x48) = sub_142b7d6c0(*(arg1 + 0x188), rax_1, arg3)
    
    void* rax_4 = *(arg1 + 0x188)
    char rcx_7 = (*(rax_4 + 0x160)).b
    
    if ((rcx_7 & 0x11) == 0)
        rdi_1 = rax_4 + 0x162
        
        if ((rcx_7 & 2) == 0)
            rdi_1 = *(rax_4 + 0x170)
    
    *(arg1 + 0x1a8) = rdi_1

return zx.q(*(rax_1 + 0x48))
