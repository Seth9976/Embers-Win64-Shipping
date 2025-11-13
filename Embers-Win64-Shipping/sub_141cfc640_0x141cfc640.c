// 函数: sub_141cfc640
// 地址: 0x141cfc640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x38)
void* rdx = *(arg1 + 0x10)
void* r8_2 = (sx.q(*(arg1 + 0x18)) << 4) + rdx
void* rdi

if (rdx == r8_2)
label_141cfc686:
    void* rax_2 = *(arg1 + 0x20)
    void* rdx_2 = sx.q(*(arg1 + 0x28)) * 0x38 + rax_2
    
    if (rax_2 == rdx_2)
    label_141cfc6af:
        rdi.b = 0
    else
        while (*(rax_2 + 0x34) == 0xffffffff)
            rax_2 += 0x38
            
            if (rax_2 == rdx_2)
                goto label_141cfc6af
        
        rdi.b = 1
else
    while (*(*(rdx + 8) + 0x14c) == 0xffffffff)
        rdx += 0x10
        
        if (rdx == r8_2)
            goto label_141cfc686
    
    rdi.b = 1

if (arg1 != -0x38)
    LeaveCriticalSection(arg1 + 0x38)

return zx.q(rdi.b)
