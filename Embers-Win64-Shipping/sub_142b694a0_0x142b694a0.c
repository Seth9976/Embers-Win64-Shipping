// 函数: sub_142b694a0
// 地址: 0x142b694a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = -2
int32_t* r14 = arg4

if (*arg4 s> 0)
    sub_142a4ab40(arg3)
else
    char rax_1 = (*(arg2 + 8)).b
    void* rsi_1
    
    if ((rax_1 & 0x11) == 0)
        rsi_1 = arg2 + 0xa
        
        if ((rax_1 & 2) == 0)
            rsi_1 = *(arg2 + 0x18)
    else
        rsi_1 = nullptr
    
    if (arg3 == arg2 || rsi_1 == 0)
        *arg4 = 1
        sub_142a4ab40(arg3)
    else
        if ((*(arg3 + 8) & 1) == 0)
            *(arg3 + 8) &= 0x1f
        else
            *(arg3 + 8) = 2
        
        int64_t var_48 = arg1[1]
        int64_t var_38_1 = (zx.o(0)).q
        int64_t var_28_1 = 0
        int32_t var_20_1 = 0
        char var_1c_1 = 0
        int16_t rax_3 = *(arg2 + 8)
        int32_t rdx_1
        
        if (rax_3 s< 0)
            rdx_1 = *(arg2 + 0xc)
        else
            rdx_1 = sx.d(rax_3) s>> 5
        
        if (sub_142b1e9d0(&var_48, rdx_1, r14) != 0)
            int16_t rax_5 = *(arg2 + 8)
            int32_t rax_7
            
            if (rax_5 s< 0)
                rax_7 = *(arg2 + 0xc)
            else
                rax_7 = sx.d(rax_5) s>> 5
            
            (*(*arg1 + 0x88))(arg1, rsi_1, rsi_1 + (sx.q(rax_7) << 1), &var_48, r14)
        
        if (var_38_1 != 0)
            sub_142a4a600(arg3, ((var_28_1 - var_38_1) s>> 1).d)

return arg3
