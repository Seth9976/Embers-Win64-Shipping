// 函数: sub_142a506e0
// 地址: 0x142a506e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_20 = 0
void* rax = sub_142a4a0b0(arg3, 0x9d)

if (rax != 0)
    int32_t rsi_1 = 0x1b
    int32_t r9_1 = 0x1b
    
    if ((*(arg3 + 8) & 2) == 0)
        r9_1 = *(arg3 + 0x10)
    
    int32_t rax_4 = sub_142a50240(*(arg1 + 0x28), *(arg2 + 0x28), rax, r9_1, sub_142a4d500, 
        "Languages", &arg_20)
    int32_t rdx_1 = 0
    
    if (arg_20 s<= 0)
        rdx_1 = rax_4
    
    sub_142a4a600(arg3, rdx_1)
    
    if (arg_20 == 0xf)
        void* rax_5 = sub_142a4a0b0(arg3, rax_4)
        
        if (rax_5 != 0)
            bool cond:2_1 = (*(arg3 + 8) & 2) != 0
            arg_20 = 0
            
            if (not(cond:2_1))
                rsi_1 = *(arg3 + 0x10)
            
            int32_t rax_7 = sub_142a50240(*(arg1 + 0x28), *(arg2 + 0x28), rax_5, rsi_1, 
                sub_142a4d500, "Languages", &arg_20)
            
            if (arg_20 s<= 0)
                rdi = rax_7
            
            sub_142a4a600(arg3, rdi)
        else if ((*(arg3 + 8) & 1) == 0)
            int16_t rax_6 = *(arg3 + 8)
            int32_t rcx_9
            
            if (rax_6 s< 0)
                rcx_9 = *(arg3 + 0xc)
            else
                rcx_9 = sx.d(rax_6) s>> 5
            
            if (rcx_9 != 0)
                *(arg3 + 8) = rax_6 & 0x1f
        else
            sub_142a4afe0(arg3)
else
    if ((*(arg3 + 8) & 1) != 0)
        sub_142a4afe0(arg3)
        return arg3
    
    int16_t rax_2 = *(arg3 + 8)
    int32_t rcx_3
    
    if (rax_2 s< 0)
        rcx_3 = *(arg3 + 0xc)
    else
        rcx_3 = sx.d(rax_2) s>> 5
    
    if (rcx_3 != 0)
        *(arg3 + 8) = rax_2 & 0x1f

return arg3
