// 函数: sub_141a4ad10
// 地址: 0x141a4ad10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void* rax = *(arg1 + 0x28)
void* rdi = arg1 + 0x10
int32_t rbp = 0
int32_t i = *(rdi + 0x20)

if (i s> 0)
    void* r14_1 = rdi
    
    if (rax != 0)
        r14_1 = rax
    
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        int32_t rax_4 = i_1 + rbp
        
        if (sub_140b5d160(r14_1 + sx.q(rax_4) * 0x18, &arg_10) s< 0)
            rbp = rax_4 + rcx_1
    while (i s> 0)
    
    i = *(rdi + 0x20)

if (rbp s< i)
    void* rcx_6 = *(rdi + 0x18)
    void* rdx_2 = rdi
    int64_t rbx_3 = sx.q(rbp) * 0x18
    
    if (rcx_6 != 0)
        rdx_2 = rcx_6
    
    if (sub_140b5d160(&arg_10, rdx_2 + rbx_3) s>= 0 && rbp != 0xffffffff)
        void* rcx_8 = *(rdi + 0x18)
        
        if (rcx_8 != 0)
            rdi = rcx_8
        
        return rbx_3 + rdi

return 0
