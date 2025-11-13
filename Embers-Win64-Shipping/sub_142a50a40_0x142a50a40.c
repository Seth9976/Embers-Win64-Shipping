// 函数: sub_142a50a40
// 地址: 0x142a50a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_20 = 0
void* rax = sub_142a4a0b0(arg3, 0x9d)

if (rax != 0)
    int32_t rsi_1 = 0x1b
    int32_t rbp_1 = 0x1b
    
    if ((*(arg3 + 8) & 2) == 0)
        rbp_1 = *(arg3 + 0x10)
    
    char* rax_4 = *(arg2 + 0x28)
    int64_t rcx_4 = *(arg1 + 0x28)
    int32_t var_48 = 0
    int32_t r14_1 =
        sub_142a50240(rcx_4, rax_4, rax, rbp_1, sub_142a4d690, "Scripts%stand-alone", &var_48)
    int32_t rax_6 = var_48
    
    if (rax_6 != 0xffffff81)
        arg_20 = rax_6
    else
        r14_1 = sub_142a50240(rcx_4, rax_4, rax, rbp_1, sub_142a4d690, "Scripts", &arg_20)
        rax_6 = arg_20
    
    int32_t rdx_2 = 0
    
    if (rax_6 s<= 0)
        rdx_2 = r14_1
    
    sub_142a4a600(arg3, rdx_2)
    
    if (arg_20 == 0xf)
        void* rax_8 = sub_142a4a0b0(arg3, r14_1)
        
        if (rax_8 != 0)
            bool cond:3_1 = (*(arg3 + 8) & 2) != 0
            arg_20 = 0
            
            if (not(cond:3_1))
                rsi_1 = *(arg3 + 0x10)
            
            int32_t rax_10 = sub_142a51920(*(arg1 + 0x28), *(arg2 + 0x28), rax_8, rsi_1, &arg_20)
            
            if (arg_20 s<= 0)
                rdi = rax_10
            
            sub_142a4a600(arg3, rdi)
        else if ((*(arg3 + 8) & 1) == 0)
            int16_t rax_9 = *(arg3 + 8)
            int32_t rcx_10
            
            if (rax_9 s< 0)
                rcx_10 = *(arg3 + 0xc)
            else
                rcx_10 = sx.d(rax_9) s>> 5
            
            if (rcx_10 != 0)
                *(arg3 + 8) = rax_9 & 0x1f
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
