// 函数: sub_1421f5820
// 地址: 0x1421f5820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x30)
int32_t rdi_1 = rdi - 1

if (rdi - 1 s< 0)
    return 

int64_t rax_1 = sx.q(rdi_1)
int64_t r14_2 = rax_1 << 4
int64_t r12_1 = r14_2
int64_t rsi_1 = rax_1 << 3
int64_t r15_1 = rsi_1
int32_t temp1_1

do
    if (*(rsi_1 + *(arg1 + 0x28)) == 0)
        int64_t rdx_1 = *(arg1 + 0x38)
        int64_t rax_3
        
        if ((*(rdx_1 + r14_2 + 0xd) & 1) == 0)
            rax_3 = *(arg1 + 0x58)
        else
            rax_3 = *(arg1 + 0x48)
        
        sub_1421f9020(rax_3 + zx.q(*(rdx_1 + r14_2 + 0xc)) * 0x18, rdi_1)
        int32_t rdx_3 = *(arg1 + 0x30)
        int32_t rax_6 = rdx_3 - rdi_1 - 1
        
        if (rax_6 s>= 1)
            rax_6 = 1
        
        if (rax_6 != 0)
            int64_t rcx_2 = *(arg1 + 0x28)
            memcpy(rcx_2 + r15_1, rcx_2 + (sx.q(rdx_3 - rax_6) << 3), rax_6 << 3)
            rdx_3 = *(arg1 + 0x30)
        
        *(arg1 + 0x30) = rdx_3 - 1
        int32_t rdx_6 = *(arg1 + 0x40)
        int32_t rcx_6 = rdx_6 - rdi_1 - 1
        
        if (rcx_6 s>= 1)
            rcx_6 = 1
        
        if (rcx_6 != 0)
            int64_t rax_9 = *(arg1 + 0x38)
            memcpy(r12_1 + rax_9, (sx.q(rdx_6 - rcx_6) << 4) + rax_9, rcx_6 << 4)
            rdx_6 = *(arg1 + 0x40)
        
        *(arg1 + 0x40) = rdx_6 - 1
        
        if (rdi_1 s>= 0 && rdi_1 s< *(arg1 + 0x30))
            void* rcx_8 = *(rsi_1 + *(arg1 + 0x28))
            
            if (rcx_8 != 0)
                *(rcx_8 + 0x438) &= 0xc0000000
                *(rcx_8 + 0x438) |= rdi_1 & 0x3fffffff
            
            int64_t rdx_11 = *(arg1 + 0x38)
            int64_t rax_14
            
            if ((*(rdx_11 + r14_2 + 0xd) & 1) == 0)
                rax_14 = *(arg1 + 0x58)
            else
                rax_14 = *(arg1 + 0x48)
            
            *(*(zx.q(*(rdx_11 + r14_2 + 0xc)) * 0x18 + rax_14 + 8)
                + (sx.q(*(rdx_11 + r14_2 + 8)) << 2)) = rdi_1
    
    r15_1 -= 8
    r12_1 -= 0x10
    rsi_1 -= 8
    r14_2 -= 0x10
    temp1_1 = rdi_1
    rdi_1 -= 1
while (temp1_1 - 1 s>= 0)
