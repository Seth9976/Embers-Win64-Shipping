// 函数: sub_140943cc0
// 地址: 0x140943cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0xa0)
void* result

if (rdi != 0)
label_140943cfa:
    int64_t r9_1 = sx.q(*(rdi + 0x30))
    int32_t rdx = 0
    
    if (r9_1.d s> 0)
        int64_t* rax_1 = *(rdi + 0x28)
        int64_t rcx = 0
        
        while (*rax_1 != arg2)
            rdx += 1
            rcx += 1
            rax_1 = &rax_1[2]
            
            if (rcx s>= r9_1)
                break
    
    int64_t rcx_3
    
    if (rdx s< r9_1.d)
        result = *(rdi + 0x28)
        rcx_3 = sx.q(rdx) * 2
    else
        int64_t rsi_1 = sx.q(*(rdi + 0x30))
        int32_t rax_2 = (rsi_1 + 1).d
        *(rdi + 0x30) = rax_2
        
        if (rax_2 s> *(rdi + 0x34))
            sub_1405a4f90(rdi + 0x28)
        
        int64_t rax_3 = *(rdi + 0x28)
        rcx_3 = rsi_1 * 2
        *(rax_3 + (rcx_3 << 3)) = 0
        *(rax_3 + (rcx_3 << 3) + 8) = 0
        result = *(rdi + 0x28)
        *(result + (rcx_3 << 3)) = arg2
    
    *(result + (rcx_3 << 3) + 8) = arg3
else
    result = sub_1409415f0(arg1)
    rdi = *(arg1 + 0xa0)
    
    if (rdi != 0)
        goto label_140943cfa

return result
