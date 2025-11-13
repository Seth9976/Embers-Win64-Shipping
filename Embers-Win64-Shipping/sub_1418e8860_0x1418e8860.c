// 函数: sub_1418e8860
// 地址: 0x1418e8860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1418f9b10(arg1 + 0x468)
sub_1418c2fd0(*(arg1 + 0x140) + 0x3f0, 0, 1)
sub_1418c5680(*(arg1 + 0x140) + 0x248)

if (data_1439c7a08 s> 1)
    sub_1418e12a0(*(*(arg1 + 0x140) + 0x468))
else
    void* rbx_1 = *(*(arg1 + 0x140) + 0x460)
    int32_t i_1 = *(rbx_1 + 0x10)
    
    if (i_1 s> data_1439c7248)
        int32_t i = i_1
        
        do
            int64_t rdx_1 = *(rbx_1 + 8)
            
            if (data_14399fa54 - *(*(rdx_1 + (sx.q(i) << 3) - 8) + 0xc0) u<= 0xa)
                break
            
            void* r8_1 = (sx.q(i_1) << 3) + -fffffffffffffff8 + rdx_1
            
            if (rbx_1 + 0x18 != r8_1)
                void* rdx_2 = *(rbx_1 + 0x18)
                *(rbx_1 + 0x18) = *r8_1
                *r8_1 = 0
                sub_1418d7e60(rbx_1 + 0x18, rdx_2)
            
            void* rcx_8 = *(rbx_1 + 8) + (sx.q(i_1) << 3) + -fffffffffffffff8
            sub_1418d7e60(rcx_8, *rcx_8)
            int32_t rcx_9 = *(rbx_1 + 0x10)
            int32_t rax_8 = rcx_9 - (i_1 - 1)
            
            if (rax_8 != 1)
                void* rcx_10 = *(rbx_1 + 8)
                memmove(rcx_10 + (sx.q(i_1) << 3) + -fffffffffffffff8, rcx_10 + (sx.q(i_1) << 3), 
                    (rax_8 - 1) << 3)
                rcx_9 = *(rbx_1 + 0x10)
            
            i = rcx_9 - 1
            *(rbx_1 + 0x10) = i
            i_1 = i
        while (i s> data_1439c7248)

uint64_t result = zx.q(data_14399fa54)

if (result.d u< 0xffffffff)
    *(arg1 + 0x460) += 1
else
    void* rdi_1 = *(arg1 + 0x140)
    int32_t r12_1 = (result + 1).d
    int32_t rbx_2 = *(rdi_1 + 0x1548)
    int32_t rbx_3 = rbx_2 - 1
    
    if (rbx_2 - 1 s>= 0)
        int64_t rsi_2 = sx.q(rbx_3) << 3
        int64_t r15_1 = rsi_2
        int64_t r14_3 = sx.q(rbx_3 + 1) << 3
        int32_t temp2_1
        
        do
            result = *(rdi_1 + 0x1540)
            int64_t* rcx_14 = *(rsi_2 + result)
            
            if (r12_1 u> *(rcx_14 + 0x3c))
                (**rcx_14)(rcx_14, 1)
                int32_t rax_14 = *(rdi_1 + 0x1548)
                int32_t rcx_16 = rax_14 - rbx_3
                
                if (rcx_16 != 1)
                    int64_t rax_15 = *(rdi_1 + 0x1540)
                    memmove(r15_1 + rax_15, r14_3 + rax_15, (rcx_16 - 1) << 3)
                    rax_14 = *(rdi_1 + 0x1548)
                
                *(rdi_1 + 0x1548) = rax_14 - 1
                result = sub_1405c53d0(rdi_1 + 0x1540)
            
            r14_3 -= 8
            r15_1 -= 8
            rsi_2 -= 8
            temp2_1 = rbx_3
            rbx_3 -= 1
        while (temp2_1 - 1 s>= 0)
    
    *(arg1 + 0x460) += 1

return result
