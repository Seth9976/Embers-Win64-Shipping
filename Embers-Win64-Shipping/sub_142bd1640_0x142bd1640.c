// 函数: sub_142bd1640
// 地址: 0x142bd1640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = *(arg1 + 4)
uint64_t r9 = 0
int32_t rdi = *(arg1 + 0x14)

if (r14 == 0)
    int64_t rax
    rax.b = 0
    return rax

uint64_t rax_2

while (true)
    rax_2 = r9 * 5
    char rbx_1 = *(arg1 + (rax_2 << 2) + 0x70)
    void* rdx = arg1 + (rax_2 << 2)
    int32_t rdx_2
    
    if (rbx_1 != 0)
        if ((*arg2 & 5) != 0)
            int32_t rbp_1 = *(arg2 + 0x10)
            
            if (*(rdx + 0x60) - rdi s> rbp_1)
                goto label_142bd16a3
            
            int32_t rsi_1 = *(arg1 + r9 * 0x14 + 0x64)
            
            if (rbp_1 s<= rsi_1 + rdi)
                if (*(arg1 + 8) != 0)
                    rdx_2 = *(arg1 + r9 * 0x14 + 0x6c) - *(arg2 + 0x14)
                else if (rsi_1 - rbp_1 s< *(arg1 + 0x10))
                    rdx_2 = ((*(arg2 + 0x14) + 0x8000) & 0xffff0000) - *(arg2 + 0x14)
                else
                    int32_t rdx_4 = *(arg1 + r9 * 0x14 + 0x6c) - 0x10000
                    int32_t rax_9 = (*(arg2 + 0x14) + 0x8000) & 0xffff0000
                    
                    if (rax_9 s< rdx_4)
                        rdx_4 = rax_9
                    
                    rdx_2 = rdx_4 - *(arg2 + 0x14)
                
                goto label_142bd1798
        
    label_142bd16a3:
        
        if (rbx_1 != 0 || (*arg3 & 0xa) == 0)
            goto label_142bd16c8
        
        goto label_142bd16b0
    
    if ((*arg3 & 0xa) != 0)
    label_142bd16b0:
        int32_t rbx_2 = arg3[4]
        
        if (*(rdx + 0x60) - rdi s> rbx_2 || rbx_2 s> *(arg1 + r9 * 0x14 + 0x64) + rdi)
            goto label_142bd16c8
        
        uint64_t rcx_2 = r9 * 5
        int32_t rdx_8
        
        if (*(arg1 + 8) != 0)
            rdx_8 = *(arg1 + (rcx_2 << 2) + 0x6c)
        else if (rbx_2 - *(arg1 + (rcx_2 << 2) + 0x60) s< *(arg1 + 0x10))
            rdx_8 = (arg3[5] + 0x8000) & 0xffff0000
        else
            int32_t rax_14 = (arg3[5] + 0x8000) & 0xffff0000
            rdx_8 = *(arg1 + (rcx_2 << 2) + 0x6c) + 0x10000
            
            if (rax_14 s> rdx_8)
                rdx_8 = rax_14
        
        rdx_2 = rdx_8 - arg3[5]
    label_142bd1798:
        int32_t rax_15 = *arg2
        
        if (rax_15 != 0)
            *(arg2 + 0x14) += rdx_2
            *arg2 = rax_15 | 0x10
        
        rax_2 = zx.q(*arg3)
        
        if (rax_2.d != 0)
            arg3[5] += rdx_2
            *arg3 = rax_2.d | 0x10
        
        rax_2.b = 1
        break
    
label_142bd16c8:
    r9 = zx.q(r9.d + 1)
    
    if (r9.d u>= r14)
        rax_2.b = 0
        break

return rax_2
