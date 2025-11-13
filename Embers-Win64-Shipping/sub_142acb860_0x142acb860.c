// 函数: sub_142acb860
// 地址: 0x142acb860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 0x478)
int64_t r15
r15.b = 0
int32_t rdi = arg3
int32_t r12 = 0
int32_t rsi_1

if (rax s< 0)
    rsi_1 = *(arg1 + 0x47c)
else
    rsi_1 = sx.d(rax) s>> 5

int32_t arg_18 = rsi_1
char rax_1

if (rsi_1 s> 0)
    int16_t rdx = *(arg1 + 0x478)
    int32_t rcx_1
    
    if (rdx s< 0)
        rcx_1 = *(arg1 + 0x47c)
    else
        rcx_1 = sx.d(rdx) s>> 5
    
    if ((*(arg1 + 0x478) & 1) == 0)
        int32_t rax_3
        
        if (rdx s< 0)
            rax_3 = *(arg1 + 0x47c)
        else
            rax_3 = sx.d(rdx) s>> 5
        
        int32_t r8 = 0
        
        if (rax_3 s< 0)
            r8 = rax_3
        
        if (rcx_1 s>= 0)
            int32_t rax_4 = rax_3 - r8
            
            if (rcx_1 s> rax_4)
                rcx_1 = rax_4
        else
            rcx_1 = 0
        
        int16_t* r9_1 = arg1 + 0x47a
        
        if ((rdx.b & 2) == 0)
            r9_1 = *(arg1 + 0x488)
        
        rax_1 = sub_142a8ee00(arg2, arg3, rsi_1, r9_1, r8, rcx_1, 0)
    else
        rax_1 = not.b(*(arg2 + 8)) & 1

if (rsi_1 s<= 0 || rax_1 == 0)
    rdi = rsi_1 + arg3
    int32_t var_48_1 = &arg_18
    int32_t rax_5 = sub_142acb080(arg1, arg2, rdi, nullptr)
    int32_t rcx_4 = arg_18
    r12 = rax_5
    
    if (rcx_4 != 0)
        rdi += rcx_4
        int16_t rcx_5 = *(arg1 + 0x4b8)
        int32_t rsi_3
        
        if (rcx_5 s< 0)
            rsi_3 = *(arg1 + 0x4bc)
        else
            rsi_3 = sx.d(rcx_5) s>> 5
        
        char rax_6
        
        if (rsi_3 s> 0)
            int16_t rdx_3 = *(arg1 + 0x4b8)
            int32_t rcx_7
            
            if (rdx_3 s< 0)
                rcx_7 = *(arg1 + 0x4bc)
            else
                rcx_7 = sx.d(rdx_3) s>> 5
            
            if ((*(arg1 + 0x4b8) & 1) == 0)
                int32_t rax_8
                
                if (rdx_3 s< 0)
                    rax_8 = *(arg1 + 0x4bc)
                else
                    rax_8 = sx.d(rdx_3) s>> 5
                
                int32_t r8_3 = 0
                
                if (rax_8 s< 0)
                    r8_3 = rax_8
                
                if (rcx_7 s>= 0)
                    int32_t rax_9 = rax_8 - r8_3
                    
                    if (rcx_7 s> rax_9)
                        rcx_7 = rax_9
                else
                    rcx_7 = 0
                
                void* r9_2 = arg1 + 0x4ba
                
                if ((rdx_3.b & 2) == 0)
                    r9_2 = *(arg1 + 0x4c8)
                
                rax_6 = sub_142a8ee00(arg2, rdi, rsi_3, r9_2, r8_3, rcx_7, 0)
            else
                rax_6 = not.b(*(arg2 + 8)) & 1
        
        if (rsi_3 s<= 0 || rax_6 == 0)
            rdi += rsi_3
            r15.b = 1

int32_t rdi_1 = rdi - arg3

if (r15.b == 0)
    rdi_1 = 0

*arg4 = rdi_1
return zx.q(r12)
