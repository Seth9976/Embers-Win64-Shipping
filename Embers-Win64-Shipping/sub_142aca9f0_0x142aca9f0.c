// 函数: sub_142aca9f0
// 地址: 0x142aca9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg2 + 8)
int16_t r12 = arg4
int32_t rsi_1

if (rax s< 0)
    rsi_1 = *(arg2 + 0xc)
else
    rsi_1 = sx.d(rax) s>> 5

int32_t rbp = 0
arg4.b = 1
int32_t arg_18 = 0
int32_t arg_10 = 0
*arg5 = 0
int32_t rax_2 = sub_142acaf10(arg1, arg2, arg3, arg4.b, 2, 0, 0x17, &arg_18)
int32_t rax_3 = arg_18

if (rax_3 != 0)
    int32_t rbx_1 = rax_3 + arg3
    int32_t r8_1
    
    if (rbx_1 + 1 s>= rsi_1)
        r8_1 = arg_10
    else
        int16_t rcx_1 = *(arg2 + 8)
        int32_t rax_5
        
        if (rcx_1 s< 0)
            rax_5 = *(arg2 + 0xc)
        else
            rax_5 = sx.d(rcx_1) s>> 5
        
        int16_t r15_1 = -1
        int16_t rdx
        
        if (rbx_1 u>= rax_5)
            rdx = -1
        else
            void* rcx_2 = arg2 + 0xa
            
            if ((rcx_1.b & 2) == 0)
                rcx_2 = *(arg2 + 0x18)
            
            rdx = *(rcx_2 + (sx.q(rbx_1) << 1))
        
        if (rdx != r12)
            r8_1 = arg_10
        else
            int32_t rax_7 = sub_142acaf10(arg1, arg2, rbx_1 + 1, 2, 2, 0, 0x3b, &arg_18)
            int32_t rcx_4 = arg_18
            r8_1 = rax_7
            
            if (rcx_4 != 0)
                rbx_1 = rbx_1 + 1 + rcx_4
                
                if (rbx_1 + 1 s< rsi_1)
                    int16_t rdx_2 = *(arg2 + 8)
                    int32_t rcx_6
                    
                    if (rdx_2 s< 0)
                        rcx_6 = *(arg2 + 0xc)
                    else
                        rcx_6 = sx.d(rdx_2) s>> 5
                    
                    if (rbx_1 u< rcx_6)
                        void* rcx_7 = arg2 + 0xa
                        
                        if ((rdx_2.b & 2) == 0)
                            rcx_7 = *(arg2 + 0x18)
                        
                        r15_1 = *(rcx_7 + (sx.q(rbx_1) << 1))
                    
                    if (r15_1 == r12)
                        int32_t rax_9 = sub_142acaf10(arg1, arg2, rbx_1 + 1, 2, 2, 0, 0x3b, &arg_18)
                        int32_t rcx_9 = arg_18
                        rbp = rax_9
                        
                        if (rcx_9 != 0)
                            rbx_1 = rbx_1 + 1 + rcx_9
                
                r8_1 = rax_7
    
    if (rbx_1 != arg3)
        *arg5 = rbx_1 - arg3
        return zx.q(((rax_2 * 0x3c + r8_1) * 0x3c + rbp) * 0x3e8)

return 0
