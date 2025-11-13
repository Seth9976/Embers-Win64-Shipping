// 函数: sub_142a94470
// 地址: 0x142a94470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = &__return_addr
int32_t r12 = 1
int64_t r14 = sx.q(arg3)
int32_t var_48 = 1

if (arg2 s> 1)
    int64_t r9 = arg5
    int64_t rbp
    int64_t var_20_1 = rbp
    int64_t r15_1 = r14 + arg1
    
    do
        int32_t rbx_1 = 0
        rbp.b = 0
        int32_t rsi_1 = r12
        
        if (r12 s>= 9)
            do
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rbx_1 + rsi_1)
                int32_t rax_3 = (temp1_1 - temp0_1) s>> 1
                int32_t rax_4 = arg4(r9, r15_1, sx.q(rax_3 * r14.d) + arg1)
                
                if (rax_4 == 0)
                    rbp.b = 1
                    rbx_1 = rax_3 + 1
                else if (rax_4 s>= 0)
                    rbx_1 = rax_3
                else
                    rsi_1 = rax_3
                
                r9 = arg5
                i = rsi_1 - rbx_1
            while (i s>= 9)
            
            r12 = var_48
        
        if (rbx_1 s< rsi_1)
            int32_t rdi_3 = rbx_1 * r14.d
            
            do
                i = arg4(r9, r15_1, sx.q(rdi_3) + arg1)
                
                if (i == 0)
                    rbp.b = 1
                else if (i s< 0)
                    break
                
                r9 = arg5
                rbx_1 += 1
                rdi_3 += r14.d
            while (rbx_1 s< rsi_1)
            
            r12 = var_48
        
        int32_t rbx_2
        
        if (rbp.b == 0)
            rbx_2 = not.d(rbx_1)
        else
            rbx_2 = rbx_1 - 1
        
        int32_t rbx_3
        
        if (rbx_2 s>= 0)
            rbx_3 = rbx_2 + 1
        else
            rbx_3 = not.d(rbx_2)
        
        if (rbx_3 s< r12)
            int64_t rdi_5 = sx.q(rbx_3 * r14.d) + arg1
            memcpy(arg6, r15_1, r14.d)
            memmove(r14 + rdi_5, rdi_5, (r12 - rbx_3) * r14.d)
            i = memcpy(rdi_5, arg6, r14.d)
        
        r9 = arg5
        r12 += 1
        r15_1 += r14
        var_48 = r12
    while (r12 s< arg2)

return i
