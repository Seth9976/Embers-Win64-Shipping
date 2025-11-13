// 函数: sub_140e24d10
// 地址: 0x140e24d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0x278)
int64_t r10 = sx.q(*(arg1 + 0x280))
int64_t rdi = r10 * 0x18
void* rcx = &rax[r10 * 3]
void* rcx_3

if (rax == rcx)
label_140e24d5e:
    int32_t rax_1 = (r10 + 1).d
    *(arg1 + 0x280) = rax_1
    
    if (rax_1 s> *(arg1 + 0x284))
        sub_1405a4df0(arg1 + 0x278)
    
    void* rax_2 = *(arg1 + 0x278)
    *(rdi + rax_2) = arg2
    rcx_3 = rax_2 + 8 + rdi
    *rcx_3 = 0
    *(rcx_3 + 8) = 0
else
    while (*rax != arg2)
        rax = &rax[3]
        
        if (rax == rcx)
            goto label_140e24d5e
    
    rcx_3 = &rax[1]

return sub_1407473e0(rcx_3, arg3)
