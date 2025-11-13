// 函数: sub_140aa66c0
// 地址: 0x140aa66c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x810)
void* r10 = arg1 + 0x10
uint64_t rdx = sx.q(*(arg1 + 0x818))

if (rax != 0)
    r10 = rax

void* r9 = r10 + (rdx << 3)

while (r9 != r10)
    r9 -= 8
    
    if (*r9 == arg2)
        int32_t r9_2 = ((r9 - r10) s>> 3).d
        
        if (r9_2 == 0xffffffff)
            break
        
        int32_t rax_5 = rdx.d - r9_2
        
        if (rax_5 != 1)
            memmove(r10 + (sx.q(r9_2) << 3), r10 + (sx.q(r9_2 + 1) << 3), (rax_5 - 1) << 3)
            rdx = zx.q(*(arg1 + 0x818))
        
        *(arg1 + 0x818) = (rdx - 1).d
        return sub_140ac0ef0(arg1 + 0x10) __tailcall

int64_t rdi = *(arg2 + 4)
int32_t i_1 = sub_1405b6730(arg1 + 0x820, *(arg1 + 0x828) - *(arg1 + 0x854), 0)

if (*(arg1 + 0x868) != 0)
    int32_t rax_2 = sub_140b5ead0(rdi.d) + rdi:4.d
    void* r8_1 = arg1 + 0x858
    void* rcx_2 = *(r8_1 + 8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t i = *(r8_1 + (((sx.q(*(arg1 + 0x868)) - 1) & sx.q(rax_2)) << 2))
    i_1 = i
    int32_t i_2 = i
    int32_t i_3 = i
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x820)
        
        do
            int64_t rdx_6 = sx.q(i_1) * 3
            i = *(r8_2 + (rdx_6 << 3) + 0x10)
            i_3 = i
            i_2 = i
            
            if (*(r8_2 + (rdx_6 << 3)) == rdi)
                break
            
            i_1 = i
        while (i != 0xffffffff)
    
    while (i_1 != 0xffffffff)
        if (*(*(arg1 + 0x820) + sx.q(i_1) * 0x18 + 8) == arg2)
            sub_1405c2fb0(arg1 + 0x820, i_1)
            i_2 = i_3
        
        i_1 = i_2
        
        if (i == 0xffffffff)
            break
        
        int64_t r8_4 = *(arg1 + 0x820)
        
        do
            int64_t rdx_10 = sx.q(i_1) * 3
            i = *(r8_4 + (rdx_10 << 3) + 0x10)
            i_2 = i
            
            if (*(r8_4 + (rdx_10 << 3)) == rdi)
                break
            
            i_1 = i
        while (i != 0xffffffff)
        
        i_3 = i

return i_1
