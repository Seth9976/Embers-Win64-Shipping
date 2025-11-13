// 函数: sub_141a2d4e0
// 地址: 0x141a2d4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i_1 = *(arg1 + 0x10)
void* var_58 = arg1 + 8
void* var_50 = arg1 + 0x38
void* var_48 = arg1 + 0x20
void* rbp = arg1

if (i_1 s> 1)
    int64_t r10_1 = *(arg2 + 8)
    int64_t r11_1 = *(arg1 + 8)
    int32_t rdi_1 = 0
    
    if (r10_1.b != 2)
        int32_t i = i_1
        
        if (i_1 s> 0)
            do
                int32_t rcx_1 = i & 0x80000001
                
                if (rcx_1 s< 0)
                    rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(i)
                int32_t i_3 = (temp1_1 - temp0_1) s>> 1
                i = i_3
                int32_t rax_3 = i_3 + rdi_1
                
                if (*(r11_1 + (sx.q(rax_3) << 2)) s< (r10_1 u>> 0x20).d)
                    rdi_1 = rax_3 + rcx_1
            while (i s> 0)
    
    int64_t rax_4 = *(arg2 + 0x10)
    int32_t r9_1
    
    if (rax_4.b == 2)
        r9_1 = i_1
    else
        r9_1 = 0
        
        while (i_1 s> 0)
            int32_t rcx_6 = i_1 & 0x80000001
            
            if (rcx_6 s< 0)
                rcx_6 = ((rcx_6 - 1) | 0xfffffffe) + 1
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(i_1)
            int32_t i_4 = (temp3_1 - temp2_1) s>> 1
            i_1 = i_4
            int32_t rax_8 = i_4 + r9_1
            
            if ((rax_4 u>> 0x20).d s>= *(r11_1 + (sx.q(rax_8) << 2)))
                r9_1 = rax_8 + rcx_6
    
    result = sx.q(r9_1)
    int64_t r15_1 = sx.q(rdi_1)
    void* const* result_1 = result
    
    if (r15_1 s< result)
        int32_t r12_1 = rdi_1 + 1
        
        do
            int32_t rcx_11 = *(arg1 + 0x10)
            
            if (rdi_1 s>= rcx_11)
                break
            
            int64_t r9_2 = *(arg1 + 8)
            int64_t rsi_1 = sx.q(r12_1)
            char rax_10 = *(r15_1 + *(arg1 + 0x20))
            int32_t rbx_1 = *(r9_2 + (r15_1 << 2))
            int32_t rax_12 = rcx_11 - rdi_1
            
            if (rax_12 != 1)
                memmove(r9_2 + (sx.q(rdi_1) << 2), r9_2 + (rsi_1 << 2), (rax_12 - 1) << 2)
                rcx_11 = *(arg1 + 0x10)
            
            *(arg1 + 0x10) = rcx_11 - 1
            int32_t rax_16 = *(arg1 + 0x28)
            int32_t rcx_13 = rax_16 - rdi_1
            
            if (rcx_13 != 1)
                int64_t rax_17 = *(arg1 + 0x20)
                memmove(sx.q(rdi_1) + rax_17, rsi_1 + rax_17, rcx_13 - 1)
                rax_16 = *(arg1 + 0x28)
            
            result = zx.q(rax_16 - 1)
            *(arg1 + 0x28) = result.d
            
            if (rbp != -0x38)
                result = sub_141f845f0(rbp + 0x38, rdi_1)
            
            char rdx_9
            
            if (*(rbp + 0x10) != 0)
                int32_t i_2 = *(arg1 + 0x10)
                int32_t r9_3 = 0
                
                while (i_2 s> 0)
                    int32_t rcx_19 = i_2 & 0x80000001
                    
                    if (rcx_19 s< 0)
                        rcx_19 = ((rcx_19 - 1) | 0xfffffffe) + 1
                    
                    int32_t temp6_1
                    int32_t temp7_1
                    temp6_1:temp7_1 = sx.q(i_2)
                    int32_t i_5 = (temp7_1 - temp6_1) s>> 1
                    i_2 = i_5
                    int32_t rax_21 = i_5 + r9_3
                    
                    if (rbx_1 s>= *(*(arg1 + 8) + (sx.q(rax_21) << 2)))
                        r9_3 = rax_21 + rcx_19
                
                int32_t rax_22 = r9_3 - 1
                
                if (rax_22 s<= 0)
                    rax_22 = 0
                
                result = *(arg1 + 0x20)
                rdx_9 = *(sx.q(rax_22) + result)
                goto label_141a2d6f3
            
            if (*(rbp + 0x19) == 0)
            label_141a2d70d:
                int32_t rax_23 = sub_141a376d0(&var_58, rbx_1)
                int32_t rsi_3 = *(arg1 + 0x28)
                char* rbp_1 = sx.q(rax_23)
                *(arg1 + 0x28) = rsi_3 + 1
                
                if (rsi_3 + 1 s> *(arg1 + 0x2c))
                    sub_1405daba0(arg1 + 0x20)
                
                void* rdx_13 = *(arg1 + 0x20) + rbp_1
                memmove(rdx_13 + 1, rdx_13, rsi_3 - rbp_1.d)
                result = *(arg1 + 0x20)
                *(rbp_1 + result) = rax_10
                rbp = arg1
            else
                rdx_9 = *(rbp + 0x18)
            label_141a2d6f3:
                
                if (rdx_9 != rax_10)
                    goto label_141a2d70d
                
                rdi_1 -= 1
                r12_1 -= 1
                r15_1 -= 1
            
            rdi_1 += 1
            r12_1 += 1
            r15_1 += 1
        while (r15_1 s< result_1)

return result
