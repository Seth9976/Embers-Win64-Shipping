// 函数: sub_14285f490
// 地址: 0x14285f490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rdi = *arg2
int32_t rcx = *(arg1 + 0x5cc)

if (rcx == 0 || rdi == rcx)
label_14285f521:
    
    if (sub_1428546e0(arg1, 9, 0, rdi, 0) != 0)
        int32_t r8_2 = *(arg1 + 0x5d0)
        
        if (r8_2 != 0 && sub_1428615b0(arg1, rdi, r8_2) s> 0)
            return 0xa6
        
        if ((arg2[2] & *(arg1 + 0x5c4)) != 0)
            return 0x102
        
        if ((arg2[1].b & 2) != 0 && (*(*(arg1 + 0x488) + 0x1c) & 0x30000) != 0)
            return 0x9e
        
        return 0
else
    int32_t rdx
    
    if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
        int32_t rax_2 = rdi
        
        if (rcx == 0x100)
            rcx = 0xff00
        
        if (rdi == 0x100)
            rax_2 = 0xff00
        
        rdx = 1
        
        if (rax_2 s> rcx)
            rdx = -1
    else
        rdx = 1
        
        if (rdi s< rcx)
            rdx = -1
    
    if (rdx s>= 0)
        goto label_14285f521

return 0x18c
