// 函数: sub_140b565a0
// 地址: 0x140b565a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg3 + 0x50)
void* r10 = *(*arg1 + 0x10)

if (r9 != 0)
    int64_t r11_1 = *(r10 + 0x10)
    int32_t rdi_1 = 0
    int32_t i_2 = *(r10 + 0x18)
    int32_t i = i_2
    
    if (i_2 s> 0)
        do
            int32_t rcx_1 = i & 0x80000001
            
            if (rcx_1 s< 0)
                rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i)
            int32_t i_1 = (temp1_1 - temp0_1) s>> 1
            i = i_1
            int32_t rax_4 = i_1 + rdi_1
            
            if (*(*(r11_1 + (sx.q(rax_4) << 3)) + 0x50) u< r9)
                rdi_1 = rax_4 + rcx_1
        while (i s> 0)
    
    if (rdi_1 s>= *(r10 + 0x18) || *(r11_1 + (sx.q(rdi_1) << 3)) != arg3)
        *(r10 + 0x18) = i_2 + 1
        
        if (i_2 + 1 s> *(r10 + 0x1c))
            sub_1405a4d70(r10 + 0x10)
        
        int64_t rbx_1 = sx.q(rdi_1) << 3
        int64_t rdx_4 = *(r10 + 0x10) + rbx_1
        memmove(rdx_4 + 8, rdx_4, (i_2 - rdi_1) << 3)
        *(rbx_1 + *(r10 + 0x10)) = arg3

jump(*(arg3 + 0x20))
