// 函数: sub_142a9fba0
// 地址: 0x142a9fba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg4 + 8)
int32_t r8_1

if (rax s< 0)
    r8_1 = *(arg4 + 0xc)
else
    r8_1 = sx.d(rax) s>> 5

int32_t r15_1

if (arg2 s>= arg3)
    int32_t rax_7 = arg2 - arg3
    r15_1 = rax_7
    
    if (rax_7 s> r8_1)
        r15_1 = r8_1
    
    int64_t rbp_1 = sx.q(r15_1)
    
    if (rbp_1 s> 1)
        int32_t rsi_2 = r8_1 - 2
        int64_t rdi_2 = 1
        int16_t* r14_1 = (sx.q(r8_1 - 1) << 1) + -fffffffffffffffe
        
        while (true)
            int16_t rax_10 = (*(*arg1 + 0x40))(arg1, zx.q(arg2 - (r8_1 - 1) + rsi_2))
            int16_t rcx_4 = *(arg4 + 8)
            int32_t rax_12
            
            if (rcx_4 s< 0)
                rax_12 = *(arg4 + 0xc)
            else
                rax_12 = sx.d(rcx_4) s>> 5
            
            int16_t rcx_5
            
            if (rsi_2 u>= rax_12)
                rcx_5 = -1
            else
                void* rax_13 = arg4 + 0xa
                
                if ((rcx_4.b & 2) == 0)
                    rax_13 = *(arg4 + 0x18)
                
                rcx_5 = *(r14_1 + rax_13)
            
            if (rax_10 != rcx_5)
                return 0
            
            rsi_2 -= 1
            rdi_2 += 1
            r14_1 -= 2
            
            if (rdi_2 s>= rbp_1)
                return zx.q(r15_1)
else
    r15_1 = arg3 - arg2
    int32_t rdi_1 = 1
    int64_t rsi_1 = 1
    
    if (r15_1 s> r8_1)
        r15_1 = r8_1
    
    int64_t rbp = sx.q(r15_1)
    
    if (1 s< rbp)
        do
            int16_t rax_2 = (*(*arg1 + 0x40))(arg1, zx.q(rdi_1 + arg2))
            int16_t rcx_1 = *(arg4 + 8)
            int32_t rax_4
            
            if (rcx_1 s< 0)
                rax_4 = *(arg4 + 0xc)
            else
                rax_4 = sx.d(rcx_1) s>> 5
            
            int16_t rcx_2
            
            if (rdi_1 u>= rax_4)
                rcx_2 = -1
            else
                void* rax_5 = arg4 + 0xa
                
                if ((rcx_1.b & 2) == 0)
                    rax_5 = *(arg4 + 0x18)
                
                rcx_2 = *(rax_5 + (rsi_1 << 1))
            
            if (rax_2 != rcx_2)
                return 0
            
            rdi_1 += 1
            rsi_1 += 1
        while (rsi_1 s< rbp)

return zx.q(r15_1)
