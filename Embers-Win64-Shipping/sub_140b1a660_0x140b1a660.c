// 函数: sub_140b1a660
// 地址: 0x140b1a660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg2[1].d
int64_t rdx = *arg2
int32_t rax = r8 - 1

if (r8 == 0)
    rax = 0

void* rax_2 = rdx + (sx.q(rax) << 1)
int32_t rax_3

if (rax_2 == rdx)
label_140b1a6c1:
    rax_3 = -1
else
    while (true)
        int16_t rcx = *(rax_2 - 2)
        rax_2 -= 2
        
        if (rcx == 0x2f || rcx == 0x5c)
            rax_3 = ((rax_2 - rdx) s>> 1).d
            break
        
        if (rax_2 == rdx)
            goto label_140b1a6c1
        
        continue

*arg1 = 0
arg1[1] = 0

if (rax_3 != 0xffffffff)
    int32_t rcx_1 = arg2[1].d
    int32_t rsi_1 = rcx_1 - 1
    
    if (rcx_1 == 0)
        rsi_1 = -1
    
    int32_t rdx_1 = rcx_1 - 1
    
    if (rcx_1 == 0)
        rdx_1 = -1
    
    if (rcx_1 == 0)
        rsi_1 = 0
    
    if (rcx_1 == 0)
        rdx_1 = 0
    
    int32_t rsi_2 = rsi_1 - rax_3
    int32_t rdx_2 = rdx_1 - rax_3
    
    if (rdx_1 - rax_3 s>= 0)
        if (rdx_2 s< rsi_2)
            rsi_2 = rdx_2
        
        if (rsi_2 != 0)
            int32_t rdx_4 = rcx_1 - rsi_2
            
            if (rdx_4 != rax_3)
                int64_t r9_1 = *arg2
                memmove(r9_1 + (sx.q(rax_3) << 1), r9_1 + (sx.q(rsi_2 + rax_3) << 1), 
                    (rdx_4 - rax_3) * 2)
                rcx_1 = arg2[1].d
            
            arg2[1].d = rcx_1 - rsi_2
    
    if (arg1 != arg2)
        int64_t rcx_6 = *arg1
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        *arg1 = *arg2
        *arg2 = 0
        arg1[1].d = arg2[1].d
        *(arg1 + 0xc) = *(arg2 + 0xc)
        arg2[1] = 0

return arg1
