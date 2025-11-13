// 函数: sub_141e93b80
// 地址: 0x141e93b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x130))
int32_t r12 = 0
int32_t result_3 = arg4
int32_t result_1 = arg3
int32_t result
void* rbx_2

if (rax.d s<= 0)
label_141e93d1d:
    int32_t rcx_3 = *(arg1 + 0x64)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg2 - result_1)
    result = (temp1_1 ^ temp0_1) - temp0_1
    
    if (result s< rcx_3)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(arg2 - result_3)
        result = (temp3_1 ^ temp2_1) - temp2_1
        
        if (result s< rcx_3)
            void* rbx_3 = arg1 + 0x68
            int64_t rsi_1 = sx.q(*(rbx_3 + 0xc8))
            int32_t rax_19 = (rsi_1 + 1).d
            *(rbx_3 + 0xc8) = rax_19
            
            if (rax_19 s> *(rbx_3 + 0xcc))
                sub_141eab870(rbx_3, rsi_1.d)
            
            void* rax_20 = *(rbx_3 + 0xc0)
            
            if (rax_20 != 0)
                rbx_3 = rax_20
            
            int64_t rcx_6 = rsi_1 * 0x60
            rbx_2 = rbx_3 + rcx_6
            
            if (rbx_3 == neg.q(rcx_6))
                rbx_2 = nullptr
            else
                *(rbx_2 + 0x18) = 0
                *(rbx_2 + 0x20) = 0
                *(rbx_2 + 0x24) = 6
                *(rbx_2 + 0x30) = 0
                *(rbx_2 + 0x3c) &= 0xfffffffe
                __builtin_memset(rbx_2 + 0x40, 0, 0x20)
            
            *(rbx_2 + 0x28) = arg6
            int64_t* rcx_7 = *(rbx_2 + 0x30)
            *(rbx_2 + 0x30) = arg5
            
            if (arg5 != 0)
                *(arg5 + 8) += 1
            
            if (rcx_7 != 0)
                rcx_7[1].d -= 1
                
                if (rcx_7[1].d == 1)
                    (**rcx_7)(rcx_7, 1)
            
            *(rbx_2 + 0x38) = arg7
            int32_t result_2 = result_1
            
            if (arg2 s<= result_1)
                result_2 = arg2
            
            *(rbx_2 + 0x3c) = *arg8
            *(rbx_2 + 0x4c) = *(arg8 + 0x10)
            *(rbx_2 + 0x5c) = arg8[8]
            int32_t result_4 = result_3
            
            if (result_2 s<= result_3)
                result_4 = result_2
            
            *(rbx_2 + 4) = arg2
            *rbx_2 = result_4
            goto label_141e93e19
else
    void* rbx_1 = arg1 + 0x68
    void* rax_1 = *(rbx_1 + 0xc0)
    int64_t r11_1 = 0
    int64_t r8 = rax
    void* rdx = rbx_1
    
    if (rax_1 != 0)
        rdx = rax_1
    
    int64_t rax_2 = arg6
    int64_t rcx = 0
    
    while (true)
        if (*(rdx + rcx + 0x28) == rax_2 && *(rdx + rcx + 0x30) == arg5
                && *(rdx + rcx + 0x38) == arg7)
            if (*(rdx + rcx + 0x20) + 3 s< *(arg1 + 0x60))
                int32_t r8_2 = *(rdx + rcx + 0x3c) & 1
                
                if ((*arg8 & 1) == r8_2)
                    if (r8_2 == 0)
                    label_141e93ca9:
                        int32_t rax_7 = *(rdx + rcx)
                        int32_t r8_4 = result_1 - rax_7
                        int32_t r10_2 = result_3 - rax_7
                        
                        if (arg2 - rax_7 s>= 0)
                            int32_t rax_8 = *(arg1 + 0x64)
                            
                            if (arg2 - rax_7 s< rax_8 && r8_4 s>= 0 && r8_4 s< rax_8 && r10_2 s>= 0
                                    && r10_2 s< rax_8)
                                break
                    else if (not((*(rdx + rcx + 0x40)).d f!= arg8[1])
                            && not((*(rdx + rcx + 0x44)).d f!= arg8[2])
                            && not((*(rdx + rcx + 0x48)).d f!= arg8[3])
                            && not((*(rdx + rcx + 0x4c)).d f!= arg8[4])
                            && not((*(rdx + rcx + 0x50)).d f!= arg8[5])
                            && not((*(rdx + rcx + 0x54)).d f!= arg8[6])
                            && not((*(rdx + rcx + 0x58)).d f!= arg8[7])
                            && not((*(rdx + rcx + 0x5c)).d f!= arg8[8]))
                        goto label_141e93ca9
                
                r8 = rax
            
            rax_2 = arg6
        
        r12 += 1
        r11_1 += 1
        rcx += 0x60
        
        if (r11_1 s>= r8)
            goto label_141e93d1d
    
    void* rax_9 = *(rbx_1 + 0xc0)
    
    if (rax_9 != 0)
        rbx_1 = rax_9
    
    int64_t rcx_2 = sx.q(r12) * 0x60
    rbx_2 = rbx_1 + rcx_2
    
    if (rbx_1 == neg.q(rcx_2))
        goto label_141e93d1d
    
label_141e93e19:
    int64_t rsi_2 = sx.q(*(rbx_2 + 0x20))
    void* rdi_1 = rbx_2 + 8
    int16_t rbp_1 = arg2.w - *rbx_2
    int32_t rax_25 = (rsi_2 + 1).d
    *(rdi_1 + 0x18) = rax_25
    
    if (rax_25 s> *(rdi_1 + 0x1c))
        sub_141eab7f0(rdi_1, rsi_2.d)
    
    void* rax_26 = *(rdi_1 + 0x10)
    void* rcx_9 = rdi_1
    
    if (rax_26 != 0)
        rcx_9 = rax_26
    
    *(rcx_9 + (rsi_2 << 1)) = rbp_1
    int64_t rsi_3 = sx.q(*(rdi_1 + 0x18))
    int16_t rbp_2 = result_1.w - *rbx_2
    int32_t rax_27 = (rsi_3 + 1).d
    *(rdi_1 + 0x18) = rax_27
    
    if (rax_27 s> *(rdi_1 + 0x1c))
        sub_141eab7f0(rdi_1, rsi_3.d)
    
    void* rax_28 = *(rdi_1 + 0x10)
    void* rcx_11 = rdi_1
    
    if (rax_28 != 0)
        rcx_11 = rax_28
    
    *(rcx_11 + (rsi_3 << 1)) = rbp_2
    int64_t rsi_4 = sx.q(*(rdi_1 + 0x18))
    int16_t rbp_3 = result_3.w - *rbx_2
    int32_t rax_29 = (rsi_4 + 1).d
    *(rdi_1 + 0x18) = rax_29
    
    if (rax_29 s> *(rdi_1 + 0x1c))
        sub_141eab7f0(rdi_1, rsi_4.d)
    
    void* rax_30 = *(rdi_1 + 0x10)
    
    if (rax_30 != 0)
        rdi_1 = rax_30
    
    *(rdi_1 + (rsi_4 << 1)) = rbp_3
    result = *(rbx_2 + 4)
    
    if (arg2 s>= result)
        result = arg2
    
    if (result s>= result_1)
        result_1 = result
    
    if (result_1 s>= result_3)
        result_3 = result_1
    
    *(rbx_2 + 4) = result_3
return result
