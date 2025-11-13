// 函数: sub_141c79cd0
// 地址: 0x141c79cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x20)
void* rbx = *(arg2 + 0x20)

if (r10 s< 0x18)
    int64_t rcx = *(arg1 + 0x10)
    char* rax_1 = *(arg1 + 8)
    uint32_t rdx_2
    
    if (r10 s>= 0x10)
        if (rax_1 u>= rcx)
            rdx_2 = 0
        else
            rdx_2 = zx.d(*rax_1)
            *(arg1 + 8) = &rax_1[1]
        
        r10 += 8
    else
        uint32_t rdx = 0
        uint32_t r8_1 = 0
        
        if (rax_1 u< rcx)
            rdx = zx.d(*rax_1)
            rax_1 = &rax_1[1]
            
            if (rax_1 u< rcx)
                r8_1 = zx.d(*rax_1)
                rax_1 = &rax_1[1]
        
        r10 += 0x10
        rdx_2 = rdx << 8 | r8_1
        *(arg1 + 8) = rax_1
    
    *(arg1 + 0x20) = r10
    *(arg1 + 0x1c) |= rdx_2 << (0x20 - r10.b)

int32_t rdi = *(arg1 + 0x1c)
uint64_t result
uint32_t r8_3

if ((rdi u>> 0x10) + 1 u> *(rbx + 0x10))
    r8_3 = *(rbx + 0x14)
    
    while ((rdi u>> 0x10) + 1 u> *(rbx + (zx.q(r8_3 - 1) << 2) + 0x1c))
        r8_3 += 1
    
    int32_t rdx_8 = (rdi u>> (0x20 - r8_3.b)) + *(rbx + (zx.q(r8_3 - 1) << 2) + 0x60)
    
    if (rdx_8 u>= *arg2)
        return 0
    
    r10 = *(arg1 + 0x20)
    result = zx.q(*(*(rbx + 0xb8) + (sx.q(rdx_8) << 1)))
else
    int32_t r8_2 = *(*(rbx + 0xa8) + (zx.q(rdi) u>> (0x20 - (*(rbx + 8)).b) << 2))
    result = zx.q(r8_2.w)
    r8_3 = r8_2 u>> 0x10

*(arg1 + 0x1c) = rdi << r8_3.b
*(arg1 + 0x20) = r10 - r8_3
return result
