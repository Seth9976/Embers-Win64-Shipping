// 函数: sub_140b187e0
// 地址: 0x140b187e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg2[1].d
int64_t r9 = *arg2
int32_t rdi = r8 - 1

if (r8 == 0)
    rdi = 0

void* rdx = r9 + (sx.q(rdi) << 1)
void* rax_1 = rdx
int32_t rax_2

if (rdx == r9)
label_140b1883f:
    rax_2 = -1
else
    while (true)
        int16_t rcx = *(rax_1 - 2)
        rax_1 -= 2
        
        if (rcx != 0x2f && rcx != 0x5c)
            rax_2 = ((rax_1 - r9) s>> 1).d
            break
        
        if (rax_1 == r9)
            goto label_140b1883f

int32_t rdx_1

if (rdx == r9)
label_140b18871:
    rdx_1 = -1
else
    while (true)
        int16_t rcx_1 = *(rdx - 2)
        rdx -= 2
        
        if (rcx_1 == 0x2f || rcx_1 == 0x5c)
            rdx_1 = ((rdx - r9) s>> 1).d
            break
        
        if (rdx == r9)
            goto label_140b18871
        
        continue

if (rdx_1 + 1 s> rax_2 + 1)
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        sub_1405947f0(arg2, 0)
else
    int32_t rdi_1 = rdi - (rax_2 + 1)
    
    if (rdi - (rax_2 + 1) s>= 0 && rdi_1 != 0)
        int32_t rcx_3 = r8 - rdi_1
        
        if (rcx_3 != rax_2 + 1)
            memmove(r9 + (sx.q(rax_2 + 1) << 1), r9 + (sx.q(rax_2 + 1 + rdi_1) << 1), 
                (rcx_3 - (rax_2 + 1)) * 2)
            r8 = arg2[1].d
        
        r8 -= rdi_1
        arg2[1].d = r8
    
    int32_t rdi_2 = r8 - 1
    
    if (r8 == 0)
        rdi_2 = 0
    
    if (rdx_1 + 1 s>= 0)
        if (rdx_1 + 1 s< rdi_2)
            rdi_2 = rdx_1 + 1
        
        if (rdi_2 != 0)
            if (r8 != rdi_2)
                int64_t rcx_7 = *arg2
                memmove(rcx_7, rcx_7 + (sx.q(rdi_2) << 1), (r8 - rdi_2) * 2)
                r8 = arg2[1].d
            
            arg2[1].d = r8 - rdi_2

*arg1 = 0
*arg1 = *arg2
*arg2 = 0
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
return arg1
