// 函数: sub_141d04180
// 地址: 0x141d04180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x38)
void* r8 = *(arg1 + 0x10)
void* rdx_2 = (sx.q(*(arg1 + 0x18)) << 4) + r8
int32_t rdi_1

if (r8 == rdx_2)
label_141d041d5:
    void* rax_2 = *(arg1 + 0x20)
    void* rdx_4 = sx.q(*(arg1 + 0x28)) * 0x38 + rax_2
    
    if (rax_2 == rdx_4)
    label_141d041fe:
        rdi_1 = 0
    else
        while (*(rax_2 + 0x34) != arg2)
            rax_2 += 0x38
            
            if (rax_2 == rdx_4)
                goto label_141d041fe
        
        rdi_1 = 1
else
    while (*(*(r8 + 8) + 0x14c) != arg2)
        r8 += 0x10
        
        if (r8 == rdx_2)
            goto label_141d041d5
    
    rdi_1 = 3

if (arg1 != -0x38)
    LeaveCriticalSection(arg1 + 0x38)

return zx.q(rdi_1)
