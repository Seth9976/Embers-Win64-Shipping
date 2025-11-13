// 函数: sub_141ed8200
// 地址: 0x141ed8200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax

if ((*(arg1 + 0x210) & 0x10) == 0)
    rax = *(arg1 + 0x260)
    
    if (rax != 0)
        rax += 0x28
        goto label_141ed8242
    
    int64_t* rcx = *(arg1 + 0x1f0)
    
    if (rcx != 0)
        rax = (*(*rcx + 0x278))(rcx)
        goto label_141ed8242
else
    rax = arg1 + 0x268
label_141ed8242:
    
    if (rax != 0)
        sub_141c51970(arg2, rax)
        void* rax_2
        rax_2.b = 1
        return rax_2

rax.b = 0
return rax
