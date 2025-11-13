// 函数: sub_142a322f0
// 地址: 0x142a322f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg2 + 0x1b8)
void* r8 = *(arg2 + 0x1b0)

if (r9 == 0)
    if (r8 == 0)
        return zx.q((r8 + 1).d)
    
    goto label_142a32375

if (r8 == 0)
label_142a32375:
    
    if (r9 != 0)
        r8 = r9
    
    if (*(r8 + 9) s<= 0)
        int32_t rdx_1
        rdx_1.b = *(r8 + 8) == *(arg1 + 0x1160)
        return zx.q(rdx_1)
else
    char rax_1 = *(r9 + 9)
    char rax_4
    
    if (rax_1 s> 0)
    label_142a32354:
        
        if (*(r8 + 9) s> 0)
            return 4
        
        rax_4 = *(r8 + 8)
    else
        if (*(r8 + 9) s<= 0)
            char rcx = *(arg1 + 0x1160)
            int32_t rax_2
            rax_2.b = *(r8 + 8) == rcx
            int32_t rdx
            rdx.b = *(r9 + 8) == rcx
            return zx.q(rax_2) ^ zx.q(rdx)
        
        if (rax_1 s> 0)
            goto label_142a32354
        
        rax_4 = *(r9 + 8)
    
    if (rax_4 != *(arg1 + 0x1160) && rax_4 s> 0)
        return 2

return 3
