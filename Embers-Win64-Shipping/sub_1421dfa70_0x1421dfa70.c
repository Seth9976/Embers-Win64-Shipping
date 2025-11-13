// 函数: sub_1421dfa70
// 地址: 0x1421dfa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x30)
int32_t rdi_1 = rdi - 1

if (rdi - 1 s< 0)
    return 

int64_t rax = sx.q(rdi_1)
int64_t rsi_2 = rax << 4
int64_t r12_1 = rsi_2
int64_t r14_1 = rax << 3
int64_t r15_1 = r14_1
int32_t temp1_1

do
    int64_t rdx_1 = *(arg1 + 0x38)
    
    if ((*(rsi_2 + rdx_1 + 0xd) & 2) != 0)
        void* rcx = *(r14_1 + *(arg1 + 0x28))
        
        if (rcx != 0)
            *(rcx + 0x438) = (*(rcx + 0x438) & 0x40000000) | 0x3fffffff
            rdx_1 = *(arg1 + 0x38)
        
        int64_t rax_6
        
        if ((*(rsi_2 + rdx_1 + 0xd) & 1) == 0)
            rax_6 = *(arg1 + 0x58)
        else
            rax_6 = *(arg1 + 0x48)
        
        sub_1421f9020(rax_6 + zx.q(*(rsi_2 + rdx_1 + 0xc)) * 0x18, rdi_1)
        int32_t rdx_3 = *(arg1 + 0x30)
        int32_t rax_9 = rdx_3 - rdi_1 - 1
        
        if (rax_9 s>= 1)
            rax_9 = 1
        
        if (rax_9 != 0)
            int64_t rcx_3 = *(arg1 + 0x28)
            memcpy(rcx_3 + r15_1, rcx_3 + (sx.q(rdx_3 - rax_9) << 3), rax_9 << 3)
            rdx_3 = *(arg1 + 0x30)
        
        *(arg1 + 0x30) = rdx_3 - 1
        int32_t rdx_6 = *(arg1 + 0x40)
        int32_t rcx_7 = rdx_6 - rdi_1 - 1
        
        if (rcx_7 s>= 1)
            rcx_7 = 1
        
        if (rcx_7 != 0)
            int64_t rax_12 = *(arg1 + 0x38)
            memcpy(r12_1 + rax_12, (sx.q(rdx_6 - rcx_7) << 4) + rax_12, rcx_7 << 4)
            rdx_6 = *(arg1 + 0x40)
        
        *(arg1 + 0x40) = rdx_6 - 1
        
        if (rdi_1 s>= 0 && rdi_1 s< *(arg1 + 0x30))
            void* rcx_9 = *(r14_1 + *(arg1 + 0x28))
            
            if (rcx_9 != 0)
                *(rcx_9 + 0x438) &= 0xc0000000
                *(rcx_9 + 0x438) |= rdi_1 & 0x3fffffff
            
            int64_t rdx_11 = *(arg1 + 0x38)
            int64_t rax_17
            
            if ((*(rdx_11 + rsi_2 + 0xd) & 1) == 0)
                rax_17 = *(arg1 + 0x58)
            else
                rax_17 = *(arg1 + 0x48)
            
            *(*(zx.q(*(rdx_11 + rsi_2 + 0xc)) * 0x18 + rax_17 + 8)
                + (sx.q(*(rdx_11 + rsi_2 + 8)) << 2)) = rdi_1
    
    r15_1 -= 8
    r12_1 -= 0x10
    r14_1 -= 8
    rsi_2 -= 0x10
    temp1_1 = rdi_1
    rdi_1 -= 1
while (temp1_1 - 1 s>= 0)
